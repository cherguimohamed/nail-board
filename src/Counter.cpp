#include <iostream>
#include "Obstacle.h"
#include "Counter.h"

using namespace std;

Counter::Counter(Obstacle *next) {
    _next = next;
}

void Counter::receive_puck() {
        _hasPalet = true;
        if(_next != nullptr) {
            _counter++;
            _hasPalet = false;
            _next->receive_puck();
        }
        else {
            _counter++;
            _hasPalet = false;
        }
}

int Counter::get_counter() {
    return _counter;
}

Counter::~Counter(){
}