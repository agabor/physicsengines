/* 
 * File:   Mass.h
 * Author: Gabor_2
 *
 * Created on 2013. június 16., 12:15
 */

#ifndef MASS_H
#define	MASS_H

class Acceleration;
class Force;

class Mass : public Metric<'m'>
{
public:
    inline Force operator*(const Acceleration &acc);
};

const Mass gramm(1);
const Mass kilo_gramm(1000);
const Mass tonne(kilo_gramm * 1000);

#endif	/* MASS_H */

