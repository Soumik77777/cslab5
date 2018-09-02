//load the lib
#include<iostream>
using namespace std;
//main fn
int main(){
           //initialise eu and bill
           int eu;
           float bill;
           cout <<"Type the no of electricity units consumed: ";
           cin >>eu;
           //if the units are more than 250, 220/- is billed for first 250 units and the rest is billed at 1.5/- per unit.
           if (eu>250){eu-=250;
                       bill=((1.5*eu)+220)+(((1.5*eu)+220)*.2);
                       cout <<"Your bill is: "<<bill<<endl;
                       }
           //if the units are between 250 and 150, 100/- is billed for first 150 units and the rest is billed at 1.2/- per unit.
           else if (eu<=250 && eu>150){eu-=150;
                                       bill=((1.2*eu)+100)+(((1.2*eu)+100)*.2);
                                       cout <<"Your bill is: "<<bill<<endl;
                                       }
           //if the units are between 50 and 100, 25/- is billed for first 50 units and the rest is billed at .75/- per unit.
           else if (eu<=150 && eu>50){eu -=50;
                                      bill=((.75*eu)+25)+(((.75*eu)+25)*.2);
                                      cout <<"Your bill is: "<<bill<<endl;
                                      }
           //otherwise units sre just billed at .5/- per unit.
           else {bill=(eu*.5)+((eu*.5)*.2);
                 cout <<"Your bill is: "<<bill<<endl;
                 }
           //terminate
           return 777;
}
