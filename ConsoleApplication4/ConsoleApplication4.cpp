#include <stdio.h>
#include <iostream>

int main()
{
    int a;
    printf("What day is it today?");
    std::cin >> a;
    switch (a)
    {
        case 1:
            {
            printf("It is Monday today");
            }
            break;
        case 2:
        {
            printf("It is Tuesday today");
        }
        break;
        case 3:
        {
            printf("It is Wednesday today");
        }
        break;
        case 4:
        {
            printf("It is Thursday today");
        }
        break;
        case 5:
        {
            printf("It is Friday today");
        }
        break;
        case 6:
        {
            printf("It is Saturday today");
        }
        break;
        case 7:
        {
            printf("It is Sunday today");
        }
        break;
        default:
        {
            printf("Error");
        }
    }
}

//https://github.com/4ndrlxrd/task4