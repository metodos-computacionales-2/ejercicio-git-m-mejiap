#include <iostream>
#include <cmath>
using namespace std;

double perimetro(double r);
double diametro(double r);
double area(double r);
double r0;

int main(){
    cout<<"Inserte radio del circulo: ";
    cin>>r0;
    
    cout<<"El perimetro es: "<<perimetro(r0)<<endl;
    cout<<"El area es: "<<area(r0)<<endl;
    cout<<"El diametro es: "<<diametro(r0)<<endl;
    return 0;
}

double perimetro(double r){
    double p;
    p = 2 * 3.1416 * r;
    return p;
}


double diametro(double r){
    double d;
    d = 2 * r;
    return d;
}

double area(double r){
    double a;
    a = 3.1416 * pow(r,2);
    return a;
}

