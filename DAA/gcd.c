
#include <stdio.h>
int gcd(int a, int b)
{    int r;
	 if(a==0)
	 printf("%d is GCD",b);
	 else if(b==0)
	 printf("%d is GCD",a);
	 else{
	 	while(b!=0)
	 	{
	 		r=a%b;
	 		a=b;
	 		b=r;
		 }
		 printf("%d is GCD",a);
	 }
}
int main()
{
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    gcd(n1, n2);
    printf("\nTamanna k.c");
    printf("\nRoll no-34");
    return 0;
}


