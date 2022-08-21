#ifndef SENSORS_HPP
#define SENSORS_HPP

#include "Configs.hpp"


//-- Sensors class
class Sensors{

    private:
    double mean;
    double standarddev;
    double noise;
    double theta;

    public:
    Sensors();
    void setProtractor(double m , double s);
    double NoiseGet();
    void Protractor(double sysTheta);
    double updateSensor();
    void setTheta(double t);
    void setvTheta(double v);
    double getTheta();

};

#endif // FIELD_HPP
