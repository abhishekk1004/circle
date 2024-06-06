#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee
{
    int emp.id;
    char n[15];
    float emp.sal;
}emp;
void main()
{
    FILE*pt;
    pt=fopen("data.txt","W");
    printf("enter employee Id");
    scanf("%d",&emp.id)
    printf("enter the Name");
    scanf("%s",&emp.Name);
    printf("enter salary");
    scanf("%f",&emp.sal);
    fwrite(&emp,size of(emp),1,pt);
    fclose(pt);
    pt=fopen("data.txt","R");
    printf("\n Output Record \n ");
    fread(&emp,size of(emp),1,pt);
    printf("\n%d\t%s\t%f",emp.id,emp.Name,emp.sal);
    fclose(pt);
    getch()
}