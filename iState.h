#ifndef __MINER_ISTATE_H__
#define __MINER_ISTATE_H__ 1
//
// @file: iState.h
// @date: 2016-06-28 13:21
// @author: Liuhui <hui.liu.e@gmail.com>
// @description:
//      状态抽象基类
//
//
#include <memory>
template<typename T>
class iState
{
public:
    virtual ~iState () {}

    virtual void Execute(std::shared_ptr<T>&) = 0;
    virtual void OnEnterState(std::shared_ptr<T>&) = 0;
    virtual void OnExitState(std::shared_ptr<T>&) = 0;
    virtual void OnMessage(std::shared_ptr<T>&) = 0;
};

#endif /* ifndef __MINER_ISTATE_H__ */
