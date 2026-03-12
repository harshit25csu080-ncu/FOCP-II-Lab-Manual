#include <iostream>
using namespace std;
int factorial(int x){
    if(x==1)
    return 1;
    else
    return x*factorial(x-1);
}
int sum(int y){
    if(y==1)
    return 1;
    else
    return y+sum(y-1);
}
int main(){
cout<<"The factorial of 12 is : "<<factorial(12);
cout<<"\nThe sum of all numbers from 1 to 5 is : "<<sum(99);
return 0;
}
