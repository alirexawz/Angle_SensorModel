#ifndef SENSORS_HPP
#define SENSORS_HPP

#include "Configs.hpp"


//-- Sensors class
class Sensors{
    private:
    double mean;
    double standarddev;
    double noise;
    
    public:
    Sensors();
    void setProtractor(double m , double s);
    double NoiseGet();
    void Protractor();

};

#endif // FIELD_HPP
