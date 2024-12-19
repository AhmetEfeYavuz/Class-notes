#include <stdio.h>
int main(){
    
    int i = 0;

    while(i < 5){
        printf("%d\n", i);
        i++;
    }

    do{ 
        printf("%d\n", i);
        i++;

    }while(i < 5);

    //switch case de çok kullanılmaz 
    //switch casedeki breakin kaldırılması

    int numbers[5] = {1,2,3,4,5,6};

  int day = 1;

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Invalid day\n");
    }


    
    return 0;
}