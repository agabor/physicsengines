#include "Mass.h"
#include "Time.h"
#include "Force.h"

inline Force Mass::operator *(const Acceleration& acc)
{
    return Force((value / 1000) * Acceleration.value);
}