#include <iostream>
#include "trafficlight.h"
using namespace std;

TrafficLight::TrafficLight() {
    state = RED;
}

// TODO Rohan: red -> green -> yellow -> red
void TrafficLight::nextState() {
    cout << "nextState not implemented yet" << endl;
}

LightState TrafficLight::getState() {
    return state;
}

// TODO Rohan
string TrafficLight::stateName() {
    return "RED";
}

// TODO Rohan: return the right time for the current light
int TrafficLight::currentDuration(Timer& timer) {
    return timer.getRed();
}

void TrafficLight::reset() {
    state = RED;
}
