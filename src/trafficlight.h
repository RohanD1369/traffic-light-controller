#ifndef TRAFFICLIGHT_H
#define TRAFFICLIGHT_H

#include <string>
#include "timer.h"
using namespace std;

enum LightState { RED, GREEN, YELLOW };

class TrafficLight {
private:
    LightState state;

public:
    TrafficLight();

    void nextState();
    LightState getState();
    string stateName();
    int currentDuration(Timer& timer);
    void reset();
};

#endif
