#ifndef _NAIL_
#define _NAIL_
#include "Obstacle.h"

class Nail : public Obstacle {
    Obstacle * _left;
    Obstacle * _right;
    bool _leftIsMyChild = false;
    bool _rightIsMyChild = false;

public:
    Nail(Obstacle *left, Obstacle *right);
    void receive_puck();
    ~Nail();
};
#endif