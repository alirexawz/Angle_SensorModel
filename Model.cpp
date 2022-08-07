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
    //-- Movement Part
    double globalVX = vX * cos(theta) + vY * sin(-theta);
    double globalVY = vY * cos(-theta) + vX * sin(theta);
    x = x + globalVX * refreshRate;
    y = y + globalVY * refreshRate;
    theta += vTheta * refreshRate;
    theta = modAngle(theta) ;
}

void Model::updateSensor(double noise) {
    double globalVX = vX * cos(theta ) + vY * sin(-theta );
    double globalVY = vY * cos(-theta ) + vX * sin(theta );
    x = x + globalVX * refreshRate;
    y = y + globalVY * refreshRate;
    theta += vTheta  * refreshRate + noise;
    theta = modAngle(theta) ;
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
