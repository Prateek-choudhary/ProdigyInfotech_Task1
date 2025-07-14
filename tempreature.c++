#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void convertfromcelsius(double temp){
    double fahrenheit = (temp * 9/5)+32;
    double kelvin = temp + 273.15;

    cout << fixed << setprecision(2);
    cout << "\nConverted Tempratures:\n";
    cout << "Fahrenheit: " << fahrenheit <<"°F\n";
    cout << "Kelvin: " << kelvin <<"K\n";
}
void convertfromfahrenheit(double temp){
    double celsius =  (temp-32)*5/9;
    double kelvin = celsius+273.15;

    cout << fixed << setprecision(2);
    cout << "\nConverted Tempratures:\n";
    cout << "Celsisus: " << celsius <<"°C\n";
    cout << "Kelvin: " << kelvin <<"K\n";
}

void convertfromkelvin(double temp){
    if(temp < 0){
        cout<< "Error : Tempreature is kelvin cannot be negative";
        return;
    }
    double celsius = temp - 273.15;
    double fahrenheit = (celsius*9/5)+32;

    cout << fixed << setprecision(2);
    cout << "\nConverted Tempratures:\n";
    cout << "\nCelsius: " << celsius <<" °C\n";
    cout << "\nFahrenheit: " << fahrenheit <<"°F\n";
}

int main() {
    double temprature;
    string unit;

    cout << "\n=======Tempreature Convertor=======\n";

    cout <<"Enter the temprature Value:";
    cin >> temprature;

    cout << "Enter the unit (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> unit;

    for(auto &c:unit)c = toupper(c);
    if(unit=="C"){
        convertfromcelsius(temprature);
    }
    else if(unit=="F"){
        convertfromfahrenheit(temprature);
    }
    else if(unit=="K"){
        convertfromkelvin(temprature);
    }
    else{
         cout << "Invalid unit. Please enter C, F, or K\n";
    }

    cout << "\nThankyou for using the tempreature convertor\n";
    return 0;
}