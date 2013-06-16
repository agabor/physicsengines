#include "Distance.h"
#include "Time.h"
#include "Speed.h"

inline Speed Distance::operator /(const Time &time)
{
    return Speed(value / time.value);
}