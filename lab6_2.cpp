#include <iostream>
#include<cmath>
using namespace std;


double deg2rad(double a1){
    return a1*(M_PI/180);
}
double rad2deg(double a1){
    return a1*(180/M_PI);
}
double findXComponent(double length1, double length2, double deg1, double deg2){
    return (length1*cos(deg1))+(length2*cos(deg2));
}
double findYComponent(double length1, double lenght2, double deg1, double deg2){
    return (length1*sin(deg1))+(lenght2*sin(deg2));
}
double  pythagoras(double a, double b){
    return sqrt(pow(a,2)+pow(b,2));
}

void showResult(double result_vec_length,double result_vec_direction){
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout<<"Length of the resultant vector = "<< result_vec_length <<"\n";
    cout<<"Direction of the resultant vector (deg) = "<< result_vec_direction <<"\n";
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
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
