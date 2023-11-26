#include <stdio.h>
#include <locale.h>

void func(int, int);

int main(void)
{
int A, B;
    printf("Enter integers:");
    scanf("%d %d", &A, &B);
    func(A, B);

    return 0;
}
void func(int a, int b)
{
    if(a>b)
    {
        printf("%d ", a--);
        func(a, b);
        return;
    }
     else if (a<b)
    {
      printf("%d ", a++);
      func(a, b);
      return;
    }
    else
        printf("%d", a);
}
