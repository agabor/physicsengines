/* 
 * File:   BaseTypes.h
 * Author: Gabor_2
 *
 * Created on 2013. június 14., 20:15
 */

#ifndef BASETYPES_H
#define	BASETYPES_H

class Coordinate3D
{
private:
    Coordinate3D(){}
public:
    double x, y, z;
    
    Coordinate3D(double x, double y, double z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    
    Coordinate3D(const Coordinate3D &other)
    {
        this->x = other.x;
        this->y = other.y;
        this->z = other.z;
    }
    
    void operator+=(const Coordinate3D &other)
    {
        x += other.x;
        y += other.y;
        z += other.y;
    }
    
    Coordinate3D operator*(double t)
    {
        Coordinate3D result;
        result.x = x * t;
        result.y = y * t;
        result.z = z * t;
        return result;
    }
    
    Coordinate3D operator-(const Coordinate3D &other)
    {
        Coordinate3D result;
        result.x = x - other.x;
        result.y = y - other.y;
        result.z = z - other.z;
        return result;
    }};

class Coordinate2D
{
private:
    Coordinate2D(){}
public:
    double x, y;
    
        
    Coordinate2D(double x, double y)
    {
        this->x = x;
        this->y = y;
    }
    
    Coordinate2D(const Coordinate2D &other)
    {
        this->x = other.x;
        this->y = other.y;
    }
    
    void operator+=(const Coordinate2D &other)
    {
        x += other.x;
        y += other.y;
    }
    
    Coordinate2D operator*(double t) const
    {
        Coordinate2D result;
        result.x = x * t;
        result.y = y * t;
        return result;
    }
    
    Coordinate2D operator-(const Coordinate2D &other)
    {
        Coordinate2D result;
        result.x = x - other.x;
        result.y = y - other.y;
        return result;
    }
};

template<class Coordinate>
class Velocity
{
public:
    Velocity(Coordinate c, double delta_time) :
    c(c), delta_time(delta_time)
    {
    }
    
    Coordinate c;
    double delta_time;
    Velocity<Coordinate> operator-(const Velocity<Coordinate> &other)
    {
        Velocity<Coordinate> result(c, delta_time);
        
        Coordinate other_c = other.c * (delta_time / other.delta_time);
        
        result.c = c - other_c;
        
        return result;
    }
};


#endif	/* BASETYPES_H */

