#ifndef __MINER_MINER_H__
#define __MINER_MINER_H__ 1
// 
// file:
// date: 2016-06-28 14:17
// author:
// description:
//
#include "BaseGameEntity.h"
#include "MinerData.h"
#include "StateMachine.h"
#include "Telegram.h"

class Miner : public BaseGameEntity, public std::enable_shared_from_this<Miner>
{
public:
    explicit Miner(GAME_ENTITY_ID id);
    ~Miner();

    Miner(const Miner&) = delete;
    Miner(Miner&&) = delete;
    Miner& operator=(const Miner&) = delete;

    int Init();
    int Fini();

    virtual void SetId(GAME_ENTITY_ID id);
    virtual GAME_ENTITY_ID GetId() const;

    void    Update();
    void    HandleMessage(std::shared_ptr<Telegram_t>);

    void    ChangeState(std::shared_ptr<iState<Miner>> spNewState);

private:
    MinerBasicData_t                        m_Data;
    std::shared_ptr<StateMachine<Miner>>    m_spStateMachine;
};
#endif /* ifndef __MINER_MINER_H__ */


