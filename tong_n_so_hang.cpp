#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main() 
{
  int n,i;
  int S;
    S=0;
    i=1;
    
  printf("Nhap so hang n:");
  scanf("%d",&n);

  while(i<=n)
    {
      S=S+i;
      i++;
    }
  printf("tong tu 1 den %d la : %d",n,S);
  getch();
  return 0;
}
