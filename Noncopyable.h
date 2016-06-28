#ifndef __MINER_NOCOPYABLE_H__
#define __MINER_NOCOPYABLE_H__ 1

class noncopyable
{
public:
    noncopyable() = delete;
    noncopyable(const noncopyable&) = delete;
    noncopyable(noncopyable&&) = delete;
    noncopyable& operator=(const noncopyable&) = delete;

    virtual ~noncopyable () {}
};
#endif /* ifndef __MINER_NOCOPYABLE_H__ */
