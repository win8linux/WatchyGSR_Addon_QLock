#ifndef QLOCK_H
#define QLOCK_H
#include <math.h>
#include <Adafruit_GFX.h>
#include "bitmaps.h"
#include <bitset>
#include "GxEPD2.h"
#include "Watchy_GSR.h"

class QLock {
    public:
        void drawWatchFace();
        void reset();
        void setHours();
        void setMinutes();
        void draw();
};

#endif
