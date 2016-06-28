#ifndef __MINER_BASEGAMEENTITY_H__
#define __MINER_BASEGAMEENTITY_H__ 1
#include <cstdint>

typedef     uint32_t    GAME_ENTITY_ID;

class BaseGameEntity
{
public:
    BaseGameEntity();
    virtual ~BaseGameEntity () {}

    void        SetId(GAME_ENTITY_ID id);
    int         GetId() const;

    virtual void Update() = 0;
};
#endif /* ifndef __MINER_BASEGAMEENTITY_H__ */
