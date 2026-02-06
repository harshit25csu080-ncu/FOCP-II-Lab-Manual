/*Q11. A wholesale supplier applies 10% discount if the order > 1000 items. Implement a solution to compute total
expenses and apply a discount accordingly
*/ 
#include<iostream>
using namespace std;

int main(){
    float total , number ;
    cout<<"Enter the total number of items - ";
    cin>>number; 
    cout<<"Enter the total expense - ";
    cin>>total; 
    if(number>1000){
        total = total - total*0.1 ;
        cout<<"The discounted price is - "<<total;
    }
    else{
        cout<<"No discount possible the total is - "<<total;
    }
    return 0;
}
