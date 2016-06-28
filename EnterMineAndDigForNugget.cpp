#include "EnterMineAndDigForNugget.h"

std::shared_ptr<EnterMineAndDigForNugget> EnterMineAndDigForNugget::m_spInstance = nullptr;

std::shared_ptr<EnterMineAndDigForNugget>
EnterMineAndDigForNugget::GetInstance()
{
    if (m_spInstance) {
        m_spInstance = std::make_shared<EnterMineAndDigForNugget>();
    }

    return m_spInstance;
}

void
EnterMineAndDigForNugget::Execute(std::shared_ptr<Miner>& spMiner)
{
}

void
EnterMineAndDigForNugget::OnEnterState(std::shared_ptr<Miner>& spMiner)
{

}

void
EnterMineAndDigForNugget::OnExitState(std::shared_ptr<Miner>& spMiner)
{
}

void
EnterMineAndDigForNugget::OnMessage(std::shared_ptr<Miner>& spMiner)
{
}
