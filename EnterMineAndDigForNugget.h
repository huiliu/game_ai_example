#ifndef __MINER_EnterMineAndDigForNugget_H__
#define __MINER_EnterMineAndDigForNugget_H__ 1
#include "iState.h"
#include "Noncopyable.h"
#include <memory>
class Miner;

class EnterMineAndDigForNugget : public iState<Miner>, public noncopyable
{
public:
    ~EnterMineAndDigForNugget () {}

    static std::shared_ptr<EnterMineAndDigForNugget> GetInstance();

    virtual void Execute(std::shared_ptr<Miner>& spMiner);
    virtual void OnEnterState(std::shared_ptr<Miner>& spMiner);
    virtual void OnExitState(std::shared_ptr<Miner>& spMiner);
    virtual void OnMessage(std::shared_ptr<Miner>& spMiner);

private:
    static std::shared_ptr<EnterMineAndDigForNugget> m_spInstance;
};
#endif /* ifndef __MINER_EnterMineAndDigForNugget_H__ */
