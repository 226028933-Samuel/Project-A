#include <stdio.h> 

int main(){

    char Municip_name[60];
    char Mayor[60];
    int Population;

    printf("Welcome\n");
    printf(" To\n");
    printf("Municipal Financial Managemet Systems\n\n");

    printf("Enter Municipality name: \n");
    scanf("%59s", Municip_name);

    printf("Enter Mayor name: \n");
    scanf("%59s", Mayor);

    printf("Enter population number: \n");
    scanf("%d", &Population);

    printf("\n---------------------\n");
    printf("Municipality:%s\n",Municip_name);
    printf("Mayor:%s\n",Mayor);
    printf("Population:%d\n",Population);

     return 0;
    
    }
