#ifndef PEDESTRIAN_H
#define PEDESTRIAN_H

class PedestrianButton {
private:
    bool pressed;
    int pressCount;

public:
    PedestrianButton();

    void press();
    bool isPressed();
    int getPressCount();
    void clear();
};

#endif
