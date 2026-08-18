#include<stdio.h>
#include<string.h>

typedef struct cricketer{
    char name[30];
    int jersey;
    float avarage;
}cricketer;

int main (){
    cricketer arr[3];
    for (int i=0 ; i<3 ; i++){
        printf("Enter name : ");
        scanf("%[^\n]s",arr[i].name);
        printf("Enter jersey no. : ");
        scanf("%d",&arr[i].jersey);
        printf("Enter avarage : ");
        scanf("%f",&arr[i].avarage);
        getchar();

    }

    for (int i=0 ; i<3 ; i++){
        printf("\n\n\nName : %s\n",arr[i].name);
        printf("Jersey : %d\n",arr[i].jersey);
        printf("Avarage : %f\n\n",arr[i].avarage);

    }

}