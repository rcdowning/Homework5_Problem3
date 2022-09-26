#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() 
{

  // variables
  int Ta; // meaured temp in celcius 
  int Ws; // wind speed in km/hr
  double I; // wind speed index

  // Out loop to run first WCI formula, will convert to degrees F and mi/hr
    cout << "Wind Chill Index" << endl;
    
    for (int Ta = 2; Ta <= 10; Ta = Ta+4)
      {
        // calculation for index, converting to F and mi/hr
          I = 35.74+0.6125*Ta-35.75*pow(Ws, 0.16)+0.4275*Ta*pow(Ws, 0.16);
          cout << I << endl;

        for (Ws=5; Ws <= 11; Ws = Ws+2)
          {

            
          }

        // After every calc, output I, Ta, Ws

      }
      


      
}