
#include "Speed.h"
#include "Time.h"
#include "Acceleration.h"
#include "Distance.h"

inline Acceleration Speed::operator /(const Time &time) const
{
    return Acceleration(value / time.value);
}

inline Distance Speed::operator *(const Time& time) const
{
    return Distance(value * time.value);
}