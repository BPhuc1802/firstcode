#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<cmath>
using namespace std;

void PTB2(float a, float b, float c)
{
    if (a==0)
    {
       if(b==0)
       {
           printf("vo nghiem");
       }
       else  
       {
           printf ("co 1 nghiem: x=%f", (-c/b));
       }
       return;
    }
float delta = b*b - 4*a*c; float x1; float x2;
if (delta > 0)
{
    x1= (float) ((-b+sqrt(delta))/2*a);
    x2= (float) ((-b-sqrt(delta))/2*a);
    printf("phuong tring co 2 nghiem la: x1=%f",x1, "va" "x2=%f",x2);
    }
    else if (delta == 0)
    {
        x1= (-b/(2*a));
        printf("nghiem kep: x1=x2=%f",x1);
    }
    else 
    printf("vo nghiem");
    return;
}
int main ()
{
    float a,b,c;
    cout << "nhap gia tri a";
    cin >> a;
    cout << "nhap gia tri b";
    cin >> b;
    cout << "nhap gia tri c";
    cin >> c;
    PTB2(a,b,c);
    return 1;
}