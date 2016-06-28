#ifndef __MINER_MESSAGEDISPATCHER_H__
#define __MINER_MESSAGEDISPATCHER_H__ 1
#include "Telegram.h"

class MessageDispatcher
{
public:
    ~MessageDispatcher();

    MessageDispatcher() = delete;
    MessageDispatcher(const MessageDispatcher&) = delete;
    MessageDispatcher(MessageDispatcher&&) = delete;
    MessageDispatcher& operator=(const MessageDispatcher&) = delete;

    void DispatchMessage(Telegram_sptr spMsg);

private:
};
#endif /* ifndef __MINER_MESSAGEDISPATCHER_H__ */
