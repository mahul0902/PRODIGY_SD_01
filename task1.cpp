#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"------------- TEMPERATURE CONVERTOR ---------------\n";
    cout<<"You have to enter the value of temperature and its unit.\n";
    cout<<"This converter converts the temperature in other two units.\n";
    cout<<"For units, follow the instructions given below\n";
    cout<<"Enter 'C' for Celsius.\nEnter 'F' for Fahrenheit.\nEnter 'K' for Kelvin\n";
    int temp;
    char unit;
    cout<<"Enter the value of temp"<<endl;
    cin>>temp;
    cout<<"Enter the unit"<<endl;
    cin>>unit;
    float celsius,fahrenheit,kelvin;
    if(unit == 'C'){
        fahrenheit = ((1.8)*temp) + 32;
        kelvin = temp + 273.15;
        cout<<temp<<"C"<<" = "<<fahrenheit<<"F"<<" and "<<kelvin<<"K\n";
    }
    else if(unit == 'F'){
        celsius = (temp - 32)*5/9;
        kelvin = celsius + 273.15;
        cout<<temp<<"F"<<" = "<<celsius<<"C"<<" and "<<kelvin<<"K\n";
    }
    else if(unit == 'K'){
        celsius = temp - 273.15;
        fahrenheit = (celsius*(1.8)) + 32;
        cout<<temp<<"K"<<" = "<<celsius<<"C"<<" and "<<fahrenheit<<"F\n";
    }
    return 0;
}