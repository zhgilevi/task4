#include <stdio.h>
#include <stdlib.h>


void task1(){
printf("vvedite razmer ramki\n");
int n,i,j;
scanf("%d",&n);
for (i=0;i<n;i++){
    if (i==0 || i==n-1){
        for (j=0;j<n;j++){
            printf("*");
        }
    }
    else{
    printf("*");
    for (j=1;j<n-1;j++){
        printf(" ");
    }
    printf("*");
    }
    printf("\n");
}
printf("\n");
}


void task2(){
printf("vvedite visotu shirinu i tolshinu\n");
int h,w,d,i,j,k;
scanf("%d%d%d",&h,&w,&d);
for(i=0;i<h;i++){
    if(i==0 || i==h-1){
        for(j=0;j<d;j++){
            for(k=0;k<w+2*d-2;k++){
                printf("*");
            }
            printf("\n");
        }
    }
    else{
        for(j=0;j<w;j++){
            if(j==0 || j==w-1){
                for(k=0;k<d;k++){
                    printf("*");
                }
            }else{
            printf(" ");
            }
        }
        printf("\n");
    }
}

printf("\n");
}
void task4(){
printf("vvedite zeloe chislo\n");
int n;
scanf("%d",&n);
n=abs(n);
int digit=0+(n==0);;
while(n>0){
    n/=10;
    digit++;
}

printf("%d razryadov",digit);
printf("\n");
}


int main()
{int request;

    while(1){
    printf("vvedite nomer zadachi(1,2,4) dlya zaversheniya 0\n");
    scanf("%d",&request);
    if (request==1)
        task1();
    else if (request==2)
        task2();
    else if (request==4)
        task4();
    else if (request==0)
        return 0;
    else
    printf("oshibka vvoda\n");

    }
    return 0;
}
