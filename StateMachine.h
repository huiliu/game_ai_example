#ifndef __MINER_STATEMACHINE_H__
#define __MINER_STATEMACHINE_H__ 1
#include "iState.h"
#include <memory>

class BaseGameEntity;

template<typename T>
class StateMachine
{
public:
    StateMachine (std::shared_ptr<BaseGameEntity>&);
    ~StateMachine () {}

    StateMachine(const StateMachine&) = delete;
    StateMachine(StateMachine&&) = delete;
    StateMachine& operator=(const StateMachine&) = delete;

    void        SetGlobalState(std::shared_ptr<iState<T>>&&);
    void        SetCurrentState(std::shared_ptr<iState<T>>&&);
    void        SetPreviousState(std::shared_ptr<iState<T>>&&);

    void        Update() const;
    void        ChangeState(std::shared_ptr<iState<T>>&);
    void        RevertToPreviousState();

private:
    std::shared_ptr<BaseGameEntity>     m_spOwner;
    std::shared_ptr<iState<T>>          m_spGlobalState;
    std::shared_ptr<iState<T>>          m_spCurrentState;
    std::shared_ptr<iState<T>>          m_spPreviousState;
};
#endif /* ifndef __MINER_STATEMACHINE_H__ */
