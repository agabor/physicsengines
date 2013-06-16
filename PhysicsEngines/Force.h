/* 
 * File:   Force.h
 * Author: Gabor_2
 *
 * Created on 2013. június 16., 11:38
 */

#ifndef FORCE_H
#define	FORCE_H
#include "Metric.h"
#include "Acceleration.h"
#include "Mass.h"

class Force : Metric<'f'>
{
    inline Acceleration operator/(const Mass &mass);
    inline Mass operator/(const Acceleration &acc);
};

const Force Newton(1.0);

#endif	/* FORCE_H */

