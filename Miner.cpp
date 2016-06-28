#include "Miner.h"

Miner::Miner(GAME_ENTITY_ID id)
    : m_Data(id)
    , m_spStateMachine(nullptr)
{
}

Miner::~Miner()
{
}

int
Miner::Init()
{
    m_spStateMachine = std::make_shared<StateMachine<Miner>>(shared_from_this());
    // TODO:
    return 0;
}

void
Miner::SetId(GAME_ENTITY_ID id)
{
    m_Data.uId = id;
}

GAME_ENTITY_ID
Miner::GetId() const
{
    return m_Data.uId;
}


void
Miner::Update()
{
}


void
Miner::HandleMessage(std::shared_ptr<Telegram_t> spMsg)
{

}


void
Miner::ChangeState(std::shared_ptr<iState<Miner>> spNewState)
{
    m_spStateMachine->ChangeState(spNewState);
}
