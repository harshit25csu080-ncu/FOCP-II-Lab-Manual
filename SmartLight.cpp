#include <iostream>
using namespace std;
class SHLS{
string brand ; int brightness ; bool isON ;
public:
void turnOn();
void turnOff();
void increaseBrightness();
void decreaseBrightness();
void displayStatus();
SHLS();
SHLS(string ,int, bool);`aqw3
~SHLS(){cout<<"\nObject Destroyed"}
};
void SHLS::turnOn()
{ isON = true;}
void SHLS::turnOff()
{ isON = false;}
void SHLS::increaseBrightness()
{  if(brightness+10>100)
    brightness = 100 ;
    else 
    brightness += 10 ;}
void SHLS::decreaseBrightness()
{ if(brightness-10<1)
    brightness = 0 ;
    else 
    brightness -= 10 ;}
void SHLS::displayStatus()
{    cout<<"\n Brand : "<<brand;
    cout<<"\n Brightness : "<<brightness;
    if(isON == true ){
        cout<<"\nThe light is ON";}
    else if(isON == false){
        cout<<"\nThe light is OFF";}}
SHLS::SHLS()//default
{    brand ="Orient";brightness = 50 ; isON = false; }
SHLS::SHLS(string cl,int pt,bool status)//parametarized constructor
{    brand=cl; brightness=pt;isON = status ; }
int main() {
    SHLS s1;//object or instance of the class candy
    s1.displayStatus();
    s1.turnOn();
    s1.displayStatus();
    s1.increaseBrightness();
    s1.displayStatus();
    return 0;
}
