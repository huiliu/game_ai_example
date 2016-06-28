#ifndef __MINER_MINERDATA_H__
#define __MINER_MINERDATA_H__ 1
#include <cstdint>

enum LOCATION_TYPE
{
    LC_HOME,
    LC_BANK,
    LC_MINE,
    LC_BAR,
};

struct MinerBasicData_t {
    uint32_t    uId;
    uint32_t    uGoldCarried;
    uint32_t    uMoneyInBank;
    int32_t     iThirst;
    int32_t     iFatigue;
    LOCATION_TYPE   Location;

    MinerBasicData_t()
        : uId(0)
        , uGoldCarried(0)
        , uMoneyInBank(0)
        , iThirst(0)
        , iFatigue(0)
    {
    }
    explicit MinerBasicData_t(uint32_t id)
        : uId(id)
        , uGoldCarried(0)
        , uMoneyInBank(0)
        , iThirst(0)
        , iFatigue(0)
    {
    }
};


#endif /* ifndef __MINER_MINERDATA_H__ */
