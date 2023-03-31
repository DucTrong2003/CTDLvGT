#include<stdio.h>
#include<conio.h>

long  tinhXn(int);
long  tinhYn(int);

long  tinhXn(int n)
{
    if(n == 0)
        return 1;
    return tinhXn(n - 1) + tinhYn(n - 1);
}

long  tinhYn(int n)
{
    if(n == 0)
        return 0;
    return 3*tinhXn(n - 1) + 2*tinhYn(n - 1);
}
int main()
{
    int n;
    printf("\nNhap vao  n ");
	 scanf("%d", &n);

    long  kqX = tinhXn(n);
    long  kqY = tinhYn(n);

   printf(" \nso hang cua X la : %d ",kqX) ;
   printf(" \nso hang cua Y la : %d ",kqY) ;
    return 0;
}
