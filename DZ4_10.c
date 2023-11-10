#include <stdio.h>
#include <locale.h>

int main(void)
{
int a;
//    setlocale(LC_ALL,"Rus");
    printf("Enter an integer from 1 to 12:");
    scanf("%d", &a);

    switch(a)
    {
        case 1:
        case 2:
        case 12: printf("\nwinter");
                break;
        case 3:
        case 4:
        case 5: printf("\nspring");
                break;
        case 6:
        case 7:
        case 8: printf("\nsummer");
                break;
        case 9:
        case 10:
        case 11: printf("\nautumn");
                 break;

        default : printf("\nНеверный ввод");
    }

    return 0;
}
