#include "VisitBankAndDepositGold.h"


std::shared_ptr<VisitBankAndDepositGold> VisitBankAndDepositGold::m_spInstance = nullptr;

std::shared_ptr<VisitBankAndDepositGold>
VisitBankAndDepositGold::GetInstance()
{
    if (m_spInstance) {
        m_spInstance = std::make_shared<VisitBankAndDepositGold>();
    }

    return m_spInstance;
}

void
VisitBankAndDepositGold::Execute(std::shared_ptr<Miner>& spMiner)
{
}

void
VisitBankAndDepositGold::OnEnterState(std::shared_ptr<Miner>& spMiner)
{

}

void
VisitBankAndDepositGold::OnExitState(std::shared_ptr<Miner>& spMiner)
{
}

void
VisitBankAndDepositGold::OnMessage(std::shared_ptr<Miner>& spMiner)
{
}
