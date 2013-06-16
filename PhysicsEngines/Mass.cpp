#include "Mass.h"
#include "Time.h"
#include "Force.h"

inline Force Mass::operator *(const Acceleration& acc) const
{
    return Force((value / 1000) * acc.value);
}

inline Mass Mass::operator*(double mul) const
{
    return Mass(value * mul);
}
