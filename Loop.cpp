#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;
/*
//sử dụng vòng lặp For
int main()
{   
    for(int i=0 ; i <= 10; i++)
    cout << "gia tri: "<< i << endl;
    return 0;
}
*/

/*
//sử dụng vòng lặp while
int main ()
{
    int i=0;
    while (i<10)
        {
            cout << i << endl;
            i++;
        }
}
*/

/*
//sử dụng Do...While
int main()
{

    int i=0;
    do 
    {
        cout << i << endl;
        i++;
    }
    while (i<10);
}
*/

// sử dụng continue 
int main ()
{
    for (int i = 0; i < 10; i++) 
    {
        if (i == 4) 
        {
        continue;
        }
  cout << i << "\n";
    }
}