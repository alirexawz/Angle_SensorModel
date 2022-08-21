#ifndef WORLD_HPP
#define WORLD_HPP

//-- Includes Needed Files
#include "HelpWindow.hpp"
#include "Field.hpp"
#include "Robot.hpp"
#include "Planner.hpp"
#include "Sensors.hpp"
#include "Model.hpp"

class World {
private:
    Field field;
    Robot robot;
    Model  model;
    Sensors sensor;
    HelpWindow status;
    Planner planner;
    Mat realWorld;
    Mat modelField;
    bool plannerMode;
    double diffTheta;
    double gain_value ;
    int gain_flag ;
    int ThetaFlag ;
    double s[2];
public:
    World();
    int updateWindow();
    void create();
    void createModel();
    static void mouseAttacher(int ,int ,int ,int ,void *);
    void Mouse(int ,int ,int ,int);
    cv::Point2d pixel2Meter(cv::Point pixel);
    cv::Point meter2Pixel(cv::Point2d meter);
};

#endif // WORLD_HPP
