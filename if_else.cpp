#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

//câu lệnh if else cơ bản (toán tử điều kiện)
int main  ()
{
    int time ;
    cin >> time;
    if (time <18)
        {
            cout << "good day" <<endl;
        }
    else 
        {
            cout << "good evening" << endl;
        }
    return 0;
}

//toán tử bậc 3 
int main()
{
    int time=20;
    cout << ((time < 18) ? "good day" : "good evening" ) ;

}