// a more robust implemention of the quadratic eqestion formula

#include<iostream>
using namespace std;
#include<cmath>

int main(){

    double a, b, c ;

    cout<< "\n Enter coefficient of the quadratic equestoin = " << endl;

    cout<< " A = " ;  cin>> a ;
    cout<< " B = " ; cin>> b ;
    cout<< " C = " ; cin >> c ;

    cout<< "\n Quadratic equestion = " << a << " * x * x +" << b << " * x + " << c << " = 0 "<<endl; 
    
    double d = b * b - 4 * a * c;
    
    if(d < 0 ){
        cout << "The discriminant, d = " << d << "< 0 , so there are no real solution .";
        return 0 ;
    }
    else{
        double sqrtd = sqrt(d);
        
        double X1 = ( -b + sqrtd)/ (2*a);
        double X2 = ( -b - sqrtd)/ (2*a);

        cout<<" X1 = "<< X1 << endl;
        cout<<" X2 = "<< X2 << endl;  
    }

}