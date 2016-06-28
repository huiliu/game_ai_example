#ifndef __MINER_ENTITYMANAGER_H__
#define __MINER_ENTITYMANAGER_H__ 1
#include "Telegram.h"

class EntityManager
{
public:
    ~EntityManager();

    EntityManager() = delete;
    EntityManager(const EntityManager&) = delete;
    EntityManager(EntityManager&&) = delete;
    EntityManager& operator=(const EntityManager&) = delete;

    static std::shared_ptr<EntityManager> GetInstance();

    void HandleMessage(Telegram_sptr spMsg);

private:
    static std::shared_ptr<EntityManager>  m_spEntityMgr;
};
#endif /* ifndef __MINER_ENTITYMANAGER_H__ */
