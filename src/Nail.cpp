#include <iostream>
#include <ctime>
#include "Obstacle.h"
#include "Nail.h"

using namespace std;

Nail::Nail(Obstacle *left, Obstacle *right) {
    _left = left;
    _right = right;
    if(left->get_orphan()){
        _leftIsMyChild = true;
        left->set_orphan(false);
    }
    if(right->get_orphan()){
        _rightIsMyChild = true;
        right->set_orphan(false);
    }
}


void Nail::receive_puck() {
        _hasPalet = true;
        if(rand()%2 == 0) {
            _left->receive_puck();
        }
        else {
            _right->receive_puck();
        }
        _hasPalet = false;
}

Nail::~Nail(){
    if(_leftIsMyChild){
        delete _left;
    }
    if(_rightIsMyChild){
        delete _right;
    }
}
