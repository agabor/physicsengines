/* 
 * File:   Metric.h
 * Author: Gabor_2
 *
 * Created on 2013. június 16., 12:22
 */

#ifndef METRIC_H
#define	METRIC_H

template<char c>
class Metric
{
public:
    double value;
    Metric(double ammount)
    {
        this->value = ammount;
    }
    Metric(const Metric<c> &other)
    {
        this->value = other.value;
    }
    Metric<c> operator*(double mul) const
    {
        return Metric<c>(value * mul);
    }
    Metric<c> operator+(const Metric<c> &other)  const
    {
        return Metric<c>(value + other.value);
    }
    void operator+=(const Metric<c> &other)  const
    {
        value += other.value;
    }
    void operator*=(double mul)  const
    {
        value *= mul;
    }
};

#endif	/* METRIC_H */

