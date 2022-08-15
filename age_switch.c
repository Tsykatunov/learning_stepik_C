#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    int K, x;
    scanf("%d", &K);
    x = K % 10;
    if (K < 1 || K > 99){
        printf("ERROR!");
        return 1;
    }
    else {
        switch (x){
        case 0:
            printf("Мне %d лет", K);
            break;
        case 1:
            switch (K){
            case 11:
                printf("Мне %d лет", K);
                break;
            default:
                printf("Мне %d год", K);
                break;
            }
            break;
        case 2:
            switch (K){
            case 12:
                printf("Мне %d лет", K);
                break;
            default:
                printf("Мне %d года", K);
                break;
            }
            break;
        case 3:
            switch (K){
            case 13:
                printf("Мне %d лет", K);
                break;
            default:
                printf("Мне %d года", K);
                break;
            }
            break;
        case 4:
            switch (K){
            case 14:
                printf("Мне %d лет", K);
                break;
            default:
                printf("Мне %d года", K);
                break;
            }
            break;
        case 5:
            printf("Мне %d лет", K);
            break;
        case 6:
            printf("Мне %d лет", K);
            break;
        case 7:
            printf("Мне %d лет", K);
            break;
        case 8:
            printf("Мне %d лет", K);
            break;
        case 9:
            printf("Мне %d лет", K);
            break;
        default:
            printf("ERROR!");
            break;
        }
    }
    return 0;
}