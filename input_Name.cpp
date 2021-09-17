#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;
// sử dụng hàm gets
/*int gets ()
{
    char name[50];
    cout << "Nhap Ho va Ten cua ban: " << endl;
    gets(name);
    cout << "Ten cua ban la: " << name << endl;
}
*/
//sử dụng hàm getline 
int main() 
{
    string fullname ;
    cout << "Nhap Ho va Ten cua ban: " << endl;
    getline (cin, fullname);
    cout << "Ten cua ban la: " << fullname << endl;
    return 0;
}