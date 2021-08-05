#ifndef BIQUAD_BLOCKT_H
#define BIQUAD_BLOCKT_H
#include "block.h"

class BlockT : public block {


public:
    virtual bool drop();
    virtual bool rotateClockwise();
    virtual bool rotateCounter();
    virtual bool moveRight();
    virtual bool moveLeft();
    virtual bool moveDown();
    virtual void reset();
};

#endif //BIQUAD_BLOCKT_H
