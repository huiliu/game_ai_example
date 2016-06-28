#include "StateMachine.h"
#include "iState.h"
#include <cassert>

template<typename T>
StateMachine<T>::StateMachine(std::shared_ptr<BaseGameEntity>& spGameEntity)
    : m_spOwner(spGameEntity)
    , m_spGlobalState(nullptr)
    , m_spCurrentState(nullptr)
    , m_spPreviousState(nullptr)
{
}

template <typename T>
void
StateMachine<T>::SetGlobalState(std::shared_ptr<iState<T>>&& spState)
{
    m_spGlobalState = std::move(spState);
}

template <typename T>
void
StateMachine<T>::SetCurrentState(std::shared_ptr<iState<T>>&& spState)
{
    m_spCurrentState = std::move(spState);
}

template <typename T>
void
StateMachine<T>::SetPreviousState(std::shared_ptr<iState<T>>&& spState)
{
    m_spPreviousState = std::move(spState);
}

template <typename T>
void
StateMachine<T>::Update() const
{
    if (m_spGlobalState) {
        m_spGlobalState->Execute(m_spOwner);
    }

    if (m_spCurrentState) {
        m_spCurrentState->Execute(m_spOwner);
    }
}

template <typename T>
void
StateMachine<T>::ChangeState(std::shared_ptr<iState<T>>& spNewState)
{
    assert(spNewState);
    if (!spNewState) {
        return;
    }
    else
    {
        m_spPreviousState = m_spCurrentState;
        m_spCurrentState->OnExitState(m_spOwner);
        m_spCurrentState = spNewState;
        m_spCurrentState->OnEnterState(m_spOwner);
    }
}

template <typename T>
void
StateMachine<T>::RevertToPreviousState()
{
    ChangeState(m_spPreviousState);
}
