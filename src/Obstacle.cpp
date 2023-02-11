#include <iostream>
#include "Obstacle.h"
using namespace std;

void Obstacle::set_orphan(bool orphan) {
    _orphan = orphan;
}

bool Obstacle::get_orphan() {
    return _orphan;
}
Obstacle::~Obstacle() {
    
}