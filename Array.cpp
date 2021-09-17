#include<iostream>
#include<stdio.h>
 
using namespace std;
/*
//in ra giá trị phần tử thứ 2 trong 'mảng'
int main()
{
    string cars[4] = {"Porches","BMW","Ford","Tesla"};
    cout << cars[1] << endl;
}
*/

/*
//Thay đổi giá trị phần tử thứ 1 trong mảng 
int main ()
{
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars[0]= "Opel";
    cout << cars[2];
}
*/


// In ra tất cả các phần tử trong mảng (Array and Loop)
int main ()
{
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    for (int i=0; i <4; i++ )
    cout << cars[i] << endl;
}