#ifndef _PLANK_
#define _PLANK_
#include "Counter.h"
#include "Launcher.h"

class Plank {
    Obstacle** _row_n_1;
    Obstacle** _row_n;
    Counter **_counters;
    Counter *_last;
    Launcher *_launcher;
    int _size;
    
public:
    Plank(int size);
    void create_plank();
    void simulate(int nb);
    ~Plank();
};

#endif