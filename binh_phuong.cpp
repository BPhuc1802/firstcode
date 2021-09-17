// CT tính bình phương số n và 2 mũ n
#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

double bp(int n )
{
    //phép nhân nên gán 1. nếu gán 0 kq sẽ trả về 0
    int result = 1; 
    while(n--)  // n là số lần lặp lại 
    result = result*2; 
    return result; 
}

int main()
{   
    int n,z;
    printf("Nhap so n: ");
    scanf("%d",&n);
    printf("%d mu 2 la: %d \n",n,n*n);

    z= bp(n);
    printf("2 mu %d la: %d",n,z);
    return 0;
}