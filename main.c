#include <stdio.h>

int main(){
    int code_card = 9764;
    int  pin_card;
    int i=0;

    
    
    for (i = 0; i < 3; i++)
    {
        printf("Veuillez entre votre code secret: ");   
        scanf("%i", &pin_card);
        if (pin_card != code_card )
        {
            printf("code incorrect: reste essai \n");
        }
        else
        {
            printf("Code correct");
        }
    }
    return 0;
}
