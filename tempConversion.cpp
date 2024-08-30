#include <iostream>
using namespace std;
int main(){
    
    cout<<"Enter the Temperature Value to Convert: ";
    float input_temp;
    cin>>input_temp;
    char unit;
    cout<<"\nEnter Unit of temperature that You Have added(C for Celsious, K for Kelvin, & F for Farnehite: ";
    cin>>unit;
    
    if(unit == 'f' || unit == 'F'){
        float c = (input_temp - 32) * (5.0/9.0);
        cout<<"Celsius: "<<c<<endl;
        float k = c + 273.15;
        cout<<"Kelvin: "<<k<<endl;
    }
    else if(unit == 'c' || unit == 'C'){
        float f = input_temp * (9.0/5.0) + 32;
        cout<<"Farnehite: "<<f<<endl;
        float k = input_temp + 273.15;
        cout<<"Kelvin: "<<k<<endl;
    }
    else if(unit == 'k' || unit == 'k'){
        float c = input_temp - 273.15;
        float f = (input_temp - 273.15) * (9.0/5.0) + 32;
        cout<<"Farnehite: "<<f<<endl;
        cout<<"Celsius: "<<c<<endl;
    }
    else{
        cout<<"Enter a valid temperature Unit!"<<endl;
    }
    
    return 0;
}
