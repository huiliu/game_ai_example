#ifndef __MINER_BANK_STATE_H__
#define __MINER_BANK_STATE_H__ 1
#include "iState.h"
#include "Noncopyable.h"

class Miner;

class VisitBankAndDepositGold : public iState<Miner>, public noncopyable
{
public:
    ~VisitBankAndDepositGold () {}

    static std::shared_ptr<VisitBankAndDepositGold> GetInstance();

    virtual void Execute(std::shared_ptr<Miner>& spMiner);
    virtual void OnEnterState(std::shared_ptr<Miner>& spMiner);
    virtual void OnExitState(std::shared_ptr<Miner>& spMiner);
    virtual void OnMessage(std::shared_ptr<Miner>& spMiner);
private:
    static std::shared_ptr<VisitBankAndDepositGold> m_spInstance;
};
#endif /* ifndef __MINER_BANK_STATE_H__ */
