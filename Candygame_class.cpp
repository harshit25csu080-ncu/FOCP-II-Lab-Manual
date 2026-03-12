#include <iostream>
using namespace std;
class Candy{
string color; int points;
public:
void setCandy(string c,int p);
void displayCandy();
Candy();
Candy(string cl,int pt);
};
void Candy::setCandy(string c,int p)
{    color=c; points=p;}
void Candy::displayCandy()
{    cout<<"\n Color : "<<color;
    cout<<"\n Points : "<<points;}
Candy::Candy()//default
{    color="Black";points=0;}
Candy::Candy(string cl,int pt)//parametarized constructor
{    color=cl;points=pt;}
int main() {
    Candy c1("green",23),c2("Red",35),c3;//object or instance of the class candy
    c1.displayCandy();
    c2.displayCandy();
    return 0;
}
