 #include <stdio.h>
 void Fibonacci(int n)
 { 
  int temp, first = 0, second = 1, i;
  printf("%d %d ", first, second);
  for(i = 3; i <= n; i++)
  {
    temp = first + second;
    printf("%d ", temp);
    first = second;
    second = temp;
  }
}

int main()
{
    int n;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
    Fibonacci(n);
    printf("\n-Tamanna k.c-");
    printf("\n-Roll no 34--");
    return 0;
}


