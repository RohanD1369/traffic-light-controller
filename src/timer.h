#ifndef TIMER_H
#define TIMER_H

// how long each light stays on (in seconds)
class Timer {
private:
    int greenTime;
    int yellowTime;
    int redTime;
    int walkTime;

public:
    Timer();

    // these return false if the time isn't allowed
    bool setGreen(int seconds);
    bool setYellow(int seconds);
    bool setRed(int seconds);
    bool setWalk(int seconds);

    int getGreen();
    int getYellow();
    int getRed();
    int getWalk();

    void resetDefaults();
    void print();
};

#endif
