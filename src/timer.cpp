#include <iostream>
#include "timer.h"
using namespace std;

const int MIN_TIME = 1;
const int MAX_TIME = 60;

Timer::Timer() {
    resetDefaults();
}

void Timer::resetDefaults() {
    greenTime = 5;
    yellowTime = 2;
    redTime = 5;
    walkTime = 4;
}

bool Timer::setGreen(int seconds) {
    if (seconds < MIN_TIME || seconds > MAX_TIME) {
        return false;
    }
    greenTime = seconds;
    return true;
}

bool Timer::setYellow(int seconds) {
    if (seconds < MIN_TIME || seconds > MAX_TIME) {
        return false;
    }
    yellowTime = seconds;
    return true;
}

bool Timer::setRed(int seconds) {
    if (seconds < MIN_TIME || seconds > MAX_TIME) {
        return false;
    }
    redTime = seconds;
    return true;
}

bool Timer::setWalk(int seconds) {
    // walk happens while the light is red so it can't be longer than red
    if (seconds < MIN_TIME || seconds > redTime) {
        return false;
    }
    walkTime = seconds;
    return true;
}

int Timer::getGreen() {
    return greenTime;
}

int Timer::getYellow() {
    return yellowTime;
}

int Timer::getRed() {
    return redTime;
}

int Timer::getWalk() {
    return walkTime;
}

void Timer::print() {
    cout << "Green: " << greenTime << " sec" << endl;
    cout << "Yellow: " << yellowTime << " sec" << endl;
    cout << "Red: " << redTime << " sec" << endl;
    cout << "Walk: " << walkTime << " sec" << endl;
}
