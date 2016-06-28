#ifndef __MINER_ELSA_H__
#define __MINER_ELSA_H__ 1
#include "BaseGameEntity.h"
#include <memory>

class Elsa : public BaseGameEntity, public std::enable_shared_from_this<Elsa>
{
public:
    Elsa();
    ~Elsa ();

private:
};
#endif /* ifndef __MINER_ELSA_H__ */
