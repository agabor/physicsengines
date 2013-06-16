#include "Time.h"
#include "Distance.h"
#include "Speed.h"

inline Distance Time::operator *(const Speed& speed)  const
{
    return Distance(value * speed.value);
}

inline Time Time::operator*(double mul) const
{
    return Time(value * mul);
}

inline Time Time::operator+(const Time &other) const
{
    return Time(value + other.value);        
}