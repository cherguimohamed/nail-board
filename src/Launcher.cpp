#include <iostream>
#include "Obstacle.h"
#include "Launcher.h"
using namespace std;

Launcher::Launcher(Obstacle *obs) {
    _obs  = obs;
}

void Launcher::launcher() {
    _obs->receive_puck();
}

Obstacle * Launcher::get_obs() {
    return _obs;
}

Launcher::~Launcher(){
    delete _obs;
}
