#include "Distance.h"
#include "Time.h"
#include "Speed.h"

inline Speed Distance::operator /(const Time &time) const
{
    return Speed(value / time.value);
}


inline Distance Distance::operator*(double mul) const
{
    return Distance(value * mul);
}

inline Distance Distance::operator+(const Distance &other) const
{
    return Distance(value + other.value);        
}