#include "Time.h"
#include "Distance.h"
#include "Speed.h"

inline Distance Time::operator *(const Speed& speed)
{
    return Speed(value * speed.value);
}
