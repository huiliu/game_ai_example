#ifndef __MINER_THIRST_STATE_H__
#define __MINER_THIRST_STATE_H__ 1
#include "iState.h"
#include "Noncopyable.h"

class Miner;

class QuenchThirst : public iState<Miner>, public noncopyable
{
public:
    ~QuenchThirst () {}

    static std::shared_ptr<QuenchThirst> GetInstance();

    virtual void Execute(std::shared_ptr<Miner>& spMiner);
    virtual void OnEnterState(std::shared_ptr<Miner>& spMiner);
    virtual void OnExitState(std::shared_ptr<Miner>& spMiner);
    virtual void OnMessage(std::shared_ptr<Miner>& spMiner);
private:
    static std::shared_ptr<QuenchThirst> m_spInstance;
};
#endif /* ifndef __MINER_THIRST_STATE_H__ */
