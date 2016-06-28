#ifndef __MINER_GLOBALSTATE_H__
#define __MINER_GLOBALSTATE_H__ 1
#include "iState.h"
#include "Noncopyable.h"
#include <memory>

class Miner;

class MinerGlobalState : public iState<Miner>, public noncopyable
{
public:
    ~MinerGlobalState () {}

    static std::shared_ptr<MinerGlobalState> GetInstance();

    virtual void Execute(std::shared_ptr<Miner>& spMiner);
    virtual void OnEnterState(std::shared_ptr<Miner>& spMiner);
    virtual void OnExitState(std::shared_ptr<Miner>& spMiner);
    virtual void OnMessage(std::shared_ptr<Miner>& spMiner);
private:
    static std::shared_ptr<MinerGlobalState> m_spInstance;
};
#endif /* ifndef __MINER_GLOBALSTATE_H__ */
