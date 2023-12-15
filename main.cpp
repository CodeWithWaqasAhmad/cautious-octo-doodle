#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    float temp,velocity,Wind_chill_factor;
    cout<<"Enter the values of temp and velocity "<<endl;
    cin>>temp>>velocity;

    Wind_chill_factor = 35.74 + 0.6215*temp + (0.4275*temp - 35.75) * pow(velocity,0.16);
    cout<<"the wind chill factor is = "<<Wind_chill_factor;
    return 0;
}
