#include "QuenchThirst.h"


std::shared_ptr<QuenchThirst> QuenchThirst::m_spInstance = nullptr;

std::shared_ptr<QuenchThirst>
QuenchThirst::GetInstance()
{
    if (m_spInstance) {
        m_spInstance = std::make_shared<QuenchThirst>();
    }

    return m_spInstance;
}

void
QuenchThirst::Execute(std::shared_ptr<Miner>& spMiner)
{
}

void
QuenchThirst::OnEnterState(std::shared_ptr<Miner>& spMiner)
{

}

void
QuenchThirst::OnExitState(std::shared_ptr<Miner>& spMiner)
{
}

void
QuenchThirst::OnMessage(std::shared_ptr<Miner>& spMiner)
{
}

