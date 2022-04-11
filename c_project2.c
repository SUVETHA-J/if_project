#include<stdio.h>
int main()
{
    int oth,eng,math,sci,soc,tot;
    float avg;
    printf("enter maths mark");
    scanf("%d",&math);
    printf("enter science mark");
    scanf("%d",&sci);
    printf("enter social mark");
    scanf("%d",&soc);
    printf("enter english mark");
    scanf("%d",&eng);
    printf("enter optional language mark");
    scanf("%d",&oth);
    tot=math+sci+soc+eng+oth;
    avg=tot/5;
    if(avg>=85)
    {
        printf("GRADE A");

    }
    else if(avg>=70&&avg<=84)
    {
        printf("GRADE B");
    }
    else if(avg>=55&&avg<=69)
    {
        printf("GRADE C");

    }
    else if(avg>=40&&avg<=54)
    {
        printf("GRADE D");
    }
    else
    {
        printf("GRADE F");

    }
}
