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
//    cout<<"El area es:"<<area(r0)<<endl;
//    cout<<"El diametro es:"<<diametro(r0)<<endl;
    return 0;
}

double perimetro(double r){
    double p;
    p = 2 * 3.1416 * r;
    return p;
}
