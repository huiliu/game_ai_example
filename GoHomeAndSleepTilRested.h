#ifndef __MINER_MINERGOHOME_STATE_H__
#define __MINER_MINERGOHOME_STATE_H__ 1
#include "iState.h"
#include "Noncopyable.h"
#include <memory>

class Miner;

class GoHomeAndSleepTilRested : public iState<Miner>, public noncopyable
{
public:
    ~GoHomeAndSleepTilRested () {}

    static std::shared_ptr<GoHomeAndSleepTilRested> GetInstance();

    virtual void Execute(std::shared_ptr<Miner>& spMiner);
    virtual void OnEnterState(std::shared_ptr<Miner>& spMiner);
    virtual void OnExitState(std::shared_ptr<Miner>& spMiner);
    virtual void OnMessage(std::shared_ptr<Miner>& spMiner);

private:
    static std::shared_ptr<GoHomeAndSleepTilRested>     m_spInstance;
};

#endif /* ifndef __MINER_MINERGOHOME_STATE_H__ */
