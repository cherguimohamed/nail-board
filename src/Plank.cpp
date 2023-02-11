#include <iostream>
#include "Nail.h"
#include "Counter.h"
#include "Launcher.h"
#include "Obstacle.h"
#include "Plank.h"
#include <memory.h>
using namespace std;

Plank::Plank(int size) {
    _size = size;
}

void Plank::create_plank() {
    if(_size <= 0) {
        printf("There is no obstacles !!\n"); 
        exit(-1);
    }
    else if(_size == 1) {
        _last = new Counter(nullptr);
        _launcher = new Launcher(_last);

    } 
    else {
        _row_n = new Obstacle *[_size];
        _last = new Counter(nullptr);
        _counters = new Counter *[_size];

        for(int i = 0 ; i < _size; i++) {
            _counters[i] = new Counter(_last);
            _row_n[i] = _counters[i];
        }
        Obstacle** stored;
        _row_n_1 = new Obstacle *[_size-1];
        stored = _row_n;
        for(int i = _size - 1 ; i > 0; i--) {
            for(int j = 0; j < i; j++) {
                _row_n_1[j] = new Nail(_row_n[j], _row_n[j+1]);
            }
            if(i!=1) _row_n = _row_n_1;
            else _row_n = stored; 
        }   
        _launcher = new Launcher(_row_n_1[0]);
        
    }

}

Plank::~Plank() {
  delete _launcher; 
  delete [] _counters;
  delete [] _row_n_1;
  delete [] _row_n;
  delete _last;
}

void Plank::simulate(int nbPalets) {

    for(int palet = 0; palet < nbPalets; palet++) {
        _launcher->launcher();
    }
    if(_size != 1) {
        for(int i = 0; i < _size; i++) {
            printf("round(%d/%d)\n",_counters[i]->get_counter(),_counters[0]->get_counter());
        }
    }
    printf("le nbre totale de palet recu: %d\n",_last->get_counter());
}
