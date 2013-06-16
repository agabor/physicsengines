/* 
 * File:   Mass.h
 * Author: Gabor_2
 *
 * Created on 2013. június 16., 12:15
 */

#ifndef MASS_H
#define	MASS_H

#include "Metric.h"
class Acceleration;
class Force;

class Mass : public Metric<'m'>
{
    public:
        Mass(double value) : Metric<'m'>(value){}
        Mass(const Mass &other) : Metric<'m'>(other){}
        inline Force operator*(const Acceleration &acc) const;
        inline Mass operator*(double mul) const;
};

const Mass gramm(1.0);
const Mass kilo_gramm(1000.0);
const Mass tonne(kilo_gramm * 1000.0);

#endif	/* MASS_H */

