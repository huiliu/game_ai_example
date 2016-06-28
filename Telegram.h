#ifndef __MINER_TELEGRAM_H__
#define __MINER_TELEGRAM_H__ 1
#include <cstdint>
#include <memory>

enum MESSAGE_TYPE
{
    MT_HI_HONEY_IM_HOME,
    MT_STEW_READY,
};

struct Telegram_t {
    MESSAGE_TYPE    m_MessageType;
    uint32_t        m_Sender;
    uint32_t        m_Receiver;
    uint32_t        m_Timestamp;
    void*           m_Data;
};

typedef std::shared_ptr<Telegram_t>     Telegram_sptr;
#endif /* ifndef __MINER_TELEGRAM_H__ */
