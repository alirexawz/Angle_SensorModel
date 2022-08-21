#include "Model.hpp"

void Model::setPosition(double inputX, double inputY, double inputTheta) {
    x = inputX;
    y = inputY;
    theta = inputTheta;
}

void Model::setVelocity(double inputX, double inputY, double inputTheta) {
    bool inLimit = true;
    if (inputX > maxMovementSpeed || inputY > maxMovementSpeed || inputX < -maxMovementSpeed || inputY < -maxMovementSpeed || inputTheta > maxRotationSpeed || inputTheta < -maxRotationSpeed) {
        inLimit = false;
    }
    if (inLimit == true) {
        vX = inputX;
        vY = inputY;
        vTheta = inputTheta;
    }
}

void Model::update() {
    // refreshRate =  800.0 / 1000.0;
    //-- Movement Part
    double globalVX = vX * cos(theta) + vY * sin(-theta);
    double globalVY = vY * cos(-theta) + vX * sin(theta);
    x = x + globalVX * refreshRate;
    y = y + globalVY * refreshRate;
    theta = theta + vTheta  * refreshRate;
    theta = modAngle(theta) ;
}

void Model::generalAngle(double sTheta ,double mTheta ,double GainValue ) {
    //-- Calculate the final angle according to the Gain Value
    theta = (sTheta -mTheta) * GainValue + mTheta;

}

void Model::setTheta(double input) {
    theta = input; 
}

void Model::setvTheta(double input) {
    vTheta = input ; 
}

double Model::accessX() {
    return x;
}

double Model::accessY() {
    return y;
}

double Model::accessTheta() {
    return theta;
}

double Model::accessVX() {
    return vX;
}

double Model::accessVY() {
    return vY;
}

double Model::accessVTheta() {
    return vTheta;
}
