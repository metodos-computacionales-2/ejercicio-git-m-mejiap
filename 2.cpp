#include <iostream>
#include <cmath>
using namespace std;

bool prueba(int a, int b, int c);
int a0;
int b0;
int c0;

int main(){
    cout<<"Inserte lado a: ";
    cin>>a0;
    cout<<"Inserte lado b: ";
    cin>>b0;
    cout<<"Inserte lado c: ";
    cin>>c0;
    
    if(prueba(a0,b0,c0)==1){
        cout<<"Si."<<endl;
    }
    
    if(prueba(a0,b0,c0)==0){
        cout<<"No."<<endl;
    }
    
    return 0;
}

bool prueba(int a, int b, int c){
    if((pow(a,2)+pow(b,2))==pow(c,2)){
        return true;
    }
    else{
        return false;
    }
}