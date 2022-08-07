#ifndef MODEL_HPP
#define MODEL_HPP

#include "Configs.hpp"
#include "Util.hpp"


class Model { 
    private:
        Mat Model;
        double x;
        double y;

        double theta;
        double vX;
        double vY;
        double vTheta;
        double gain_value;
        double noise;
    public:
        void setPosition(double, double, double);
        void setVelocity(double, double, double);
        void update();
        void updateSensor(double noise);
        void setTheta(double input);
        void setvTheta(double input);
        double accessVTheta();
        double accessX();
        double accessY();
        double accessTheta();
        double accessSensorTheta();
        double accessVX();
        double accessVY();
        
};

#endif // MODEL_HPP