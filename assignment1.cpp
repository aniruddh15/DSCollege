//Precondition: x>0 & x<7
//Postcondition: Provide area of different geometric figures
//Author: Aniruddh Kathiriya

#include<iostream>
#include<math.h>
#include<assert.h>
using namespace std;
double equilateral(int a)
{
assert(a>0 && a<7);
double s=(sqrt(3)/4)*a*a;
return s;
};
double square(int a)
{
assert(a>0 && a<7);
double s=a*a;
return s;
};
double regPent(int a)
{
assert(a>0 && a<7);
double s=(1.0/4)*(sqrt(5*(5+(2*sqrt(5)))))*(a*a);
return s;
};
double regHexa(int a){
assert(a>0 && a<7);
double s=((3*sqrt(3))/2)*(a*a);
return s;
};
double regOcta(int a){
assert(a>0 && a<7);
double s=2*(1+sqrt(2))*(a*a);
return s;
};
double regHept(int a){
assert(a>0 && a<7);
double s=(7.0/4)*(a*a)*((cos(M_PI/7))/(sin(M_PI/7)));
return s;
}
int main()
{
for(int i=1;i<=6;i++){
cout<<"\nLength of Sides: "<<i<<endl;
cout<<"Area of Equilateral: "<<equilateral(i)<<endl;
cout<<"Area of Square: "<<square(i)<<endl;
cout<<"Area of Regular Pentagon: "<<regPent(i)<<endl;
cout<<"Area of Regular Hexagon: "<<regHexa(i)<<endl;
cout<<"Area of Regular Heptagon: "<<regHept(i)<<endl;
cout<<"Area of Regular Octagon: "<<regOcta(i)<<endl;
cout<<"---------------------------------------------------------------------"<<endl;
}
return 0;
};
