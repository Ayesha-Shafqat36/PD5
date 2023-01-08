#include <iostream>
using namespace std;
int pyramid(string unit,int length,int width,int height,int volume);
main()
{
    int length;
    int width;
    int height;
    string unit;
    int volume;
    cout << "Enter length=";
    cin >> length;
    cout << "Enter width=";
    cin >> width;
    cout << "Enter height=";
    cin >> height;
    cout << "Enter unit=";
    cin >> unit;
    volume=pyramid(unit,length,width,height,volume);
    cout << "Volume of Pyramid=" << volume;

}
int pyramid(string unit,int length,int width,int height,int volume)
{
    volume=(length*height*width)/3;
    if (unit == "centimeter")
    {
        volume=volume*1000000;
    }
     if (unit == "kilometer")
     {
        volume=volume/1000000000;
     }
     if (unit == "milimeter")
     {
        volume=volume*1000000000;
     }
     return volume;
}