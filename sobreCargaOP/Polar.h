#ifndef POLAR_H_INCLUDED
#define POLAR_H_INCLUDED


class Polar{

private:
    double r;
    int theta;


public:
    Polar();
    Polar(double, double);

    Polar operator*(const Polar& val){

    Polar temp;
    temp.r=this->r*val.r;
    temp.theta=this->theta+val.theta;
    return temp;
    }

    Polar operator/(const Polar& val){

    Polar temp;
    temp.r=this->r/val.r;
    temp.theta=this->theta-val.theta;
    return temp;
    }


    double getR();
    double getTheta();

};


#endif // POLAR_H_INCLUDED
