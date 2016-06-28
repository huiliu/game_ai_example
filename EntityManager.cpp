#include "EntityManager.h"

std::shared_ptr<EntityManager>
EntityManager::m_spEntityMgr = nullptr;

EntityManager::~EntityManager()
{
}

std::shared_ptr<EntityManager>
EntityManager::GetInstance()
{
    if (nullptr == m_spEntityMgr) {
       m_spEntityMgr = std::make_shared<EntityManager>(); 
    }

    return m_spEntityMgr;
}


void
EntityManager::HandleMessage(Telegram_sptr spMsg)
{
}
