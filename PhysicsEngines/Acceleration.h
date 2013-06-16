/* 
 * File:   Accelerartion.h
 * Author: Gabor_2
 *
 * Created on 2013. június 16., 19:52
 */

#ifndef ACCELERARTION_H
#define	ACCELERARTION_H

#include "Metric.h"
#include "Time.h"
#include "Speed.h"


class Force;
class Mass;

class Acceleration : public Metric<'a'>
{
public:
    inline Speed operator*(const Time &time);
    inline Force operator*(const Mass &mass);
};

const Acceleration meter_per_sec2(meter_per_sec/sec);

#endif	/* ACCELERARTION_H */

