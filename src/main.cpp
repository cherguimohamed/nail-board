#include <iostream>
#include "Plank.h"
using namespace std;

int main(void) {
    srand(time(nullptr));
    Plank plank(10);
    plank.create_plank(); 
    plank.simulate(800);
    return 0;
}