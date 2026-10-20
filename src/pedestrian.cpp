#include <iostream>
#include "pedestrian.h"
using namespace std;

PedestrianButton::PedestrianButton() {
    pressed = false;
    pressCount = 0;
}

// TODO Lucas: pressing it again while waiting shouldn't do anything extra
void PedestrianButton::press() {
    cout << "press not implemented yet" << endl;
}

bool PedestrianButton::isPressed() {
    return pressed;
}

int PedestrianButton::getPressCount() {
    return pressCount;
}

void PedestrianButton::clear() {
    pressed = false;
}
