#include "Acceleration.h"
#include "Force.h"
#include "Time.h"
#include "Speed.h"

inline Speed Acceleration::operator *(const Time& time)
{
    return Speed(value * time.value);
}

inline Force Acceleration::operator *(const Mass& mass)
{
    return Force(value * mass.value/1000);
}