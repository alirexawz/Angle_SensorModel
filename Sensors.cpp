#include "Sensors.hpp"

Sensors::Sensors()
{
}
void Sensors::setProtractor(double m ,double s)
{
    mean = m;
    standarddev=s;
}
// --  Make Noise in fieldWorld
void Sensors::Protractor()
{
    unsigned seed = chrono::steady_clock::now().time_since_epoch().count();
    default_random_engine e(seed); 
    normal_distribution<double> distN(mean,standarddev); 
    noise = distN(e);


}

double Sensors::NoiseGet()
{
    return noise;

}
