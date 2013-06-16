/* 
 * File:   Time.h
 * Author: Gabor_2
 *
 * Created on 2013. június 16., 12:07
 */

#ifndef TIME_H
#define	TIME_H

#include "Metric.h"

typedef Metric<'t'> Time;

const Time sec(1);

const Time minute(60);

const Time hour(minute * 60);

const Time day(hour * 24);

const Time week(day * 7);

const Time year(day * 365.25);

#endif	/* TIME_H */

