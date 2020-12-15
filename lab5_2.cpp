#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>


using namespace std;
    double deg2rad(double x){
    double a1;
    a1=x*M_PI/180;
    return a1;
    }
    
    double rad2deg(double y){
    double a2;
    a2=y*180/M_PI;
    return a2;
    }
    double findXComponent(double m,double n,double o,double p){
    double xcomp;
    xcomp = (m*cos(o))+ (n*cos(p));
    return xcomp;
    }
    double findYComponent(double m1,double n1,double o1,double p1){
    double ycomp;
    ycomp = (m1*sin(o1))+ (n1*sin(p1));
    return ycomp;
    }
    double pythagoras(double X,double Y){
    double result_vec_length;
    result_vec_length = sqrt(pow(X,2)+pow(Y,2));
    return result_vec_length;
    }
    
    void showResult(double a,double b){
    cout<< "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout<< "Length of the resultant vector = "<<a<<"\n";
    cout<< "Direction of the resultant vector (deg) = "<< b<<"\n";
    cout<< "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
    }
    
    


int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}