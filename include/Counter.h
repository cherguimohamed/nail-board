#ifndef _COUNTER_
#define _COUNTER_
#include "Obstacle.h"

class Counter : public Obstacle {
    Obstacle * _next;
    int _counter = 0;
public:    
    Counter(Obstacle *next);
    void receive_puck();
    int get_counter();
    ~Counter();

};
#endif