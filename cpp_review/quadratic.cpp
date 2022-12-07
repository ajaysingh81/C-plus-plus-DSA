// the quadratic equestion formula 

#include<iostream>

using namespace std;
#include<cmath> 

int main(){
    // quadratic formula implementation
    double a, b, c;
    cout<< "\n Enter the coefficient of a quadratic equetion : ";
    cout<< "\n a = "; cin>> a;
    cout<< "\n b = "; cin>> b;
    cout<< "\n c = "; cin>> c;

    cout<< "the quadratic equetion is - " << a << " *x*x + " << b << " *x + "<< c << " = 0 \n";
    
    double d = b*b - 4 *a*c;
    
    double sqrtd = sqrt(d);

    double x1 = (-b + sqrtd) / (2*a);

    double x2 = (-b - sqrtd) / (2*a);

    cout<< " \n X1 = " << x1 << endl;
    cout<<" \n X2 = "<< x2 << endl;
}
