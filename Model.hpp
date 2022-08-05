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
        double sensorTheta;
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
        void  gain_angle(double gain);
        double accessX();
        double accessY();
        double accessTheta();
        double accessVX();
        double accessVY();
        
};

#endif // MODEL_HPP