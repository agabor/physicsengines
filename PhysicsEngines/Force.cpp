#include "Force.h"
#include "Metric.h"
#include "Acceleration.h"
#include "Mass.h"

inline Acceleration Force::operator/(const Mass &mass)
{
    return Acceleration(value / (mass.value * 1000));
}

inline Mass Force::operator/(const Acceleration &acc)
{
    return Mass(value / acc.value) * 1000;
}