#include "GoHomeAndSleepTilRested.h"

std::shared_ptr<GoHomeAndSleepTilRested> GoHomeAndSleepTilRested::m_spInstance = nullptr;

std::shared_ptr<GoHomeAndSleepTilRested>
GoHomeAndSleepTilRested::GetInstance()
{
    if (m_spInstance) {
        m_spInstance = std::make_shared<GoHomeAndSleepTilRested>();
    }

    return m_spInstance;
}

void
GoHomeAndSleepTilRested::Execute(std::shared_ptr<Miner>& spMiner)
{
}

void
GoHomeAndSleepTilRested::OnEnterState(std::shared_ptr<Miner>& spMiner)
{

}

void
GoHomeAndSleepTilRested::OnExitState(std::shared_ptr<Miner>& spMiner)
{
}

void
GoHomeAndSleepTilRested::OnMessage(std::shared_ptr<Miner>& spMiner)
{
}
