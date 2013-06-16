/* 
 * File:   Time.h
 * Author: Gabor_2
 *
 * Created on 2013. június 16., 12:07
 */

#ifndef TIME_H
#define	TIME_H

#include "Metric.h"

class Distance;
class Speed;


class Time : public Metric<'t'>
{
    public:
        Time(double value) : Metric<'t'>(value){}
        Time(const Time &other) : Metric<'t'>(other){}
        inline Distance operator*(const Speed &speed)  const;
        inline Time operator*(double mul) const;
        inline Time operator+(const Time &other) const;
};

const Time sec(1.0);

const Time minute(60.0);

const Time hour(minute * 60.0);

const Time day(hour * 24.0);

const Time week(day * 7.0);

const Time year(day * 365.25);

#endif	/* TIME_H */

