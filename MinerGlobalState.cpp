#include "MinerGlobalState.h"

std::shared_ptr<MinerGlobalState> MinerGlobalState::m_spInstance = nullptr;

std::shared_ptr<MinerGlobalState>
MinerGlobalState::GetInstance()
{
    if (m_spInstance) {
        m_spInstance = std::make_shared<MinerGlobalState>();
    }

    return m_spInstance;
}

void
MinerGlobalState::Execute(std::shared_ptr<Miner>& spMiner)
{
}

void
MinerGlobalState::OnEnterState(std::shared_ptr<Miner>& spMiner)
{

}

void
MinerGlobalState::OnExitState(std::shared_ptr<Miner>& spMiner)
{
}

void
MinerGlobalState::OnMessage(std::shared_ptr<Miner>& spMiner)
{
}
