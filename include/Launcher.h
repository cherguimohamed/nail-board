#ifndef _LAUCHER_
#define _LAUCHER_
#include "Obstacle.h"


class Launcher {
Obstacle *_obs;
public:
    Launcher(Obstacle *obs);
    void launcher();
    Obstacle *get_obs();
    ~Launcher();
};
#endif