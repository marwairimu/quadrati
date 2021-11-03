/*
    project payslip program
    Author:Mary Wairimu
    Date:Oct,2021
    compiler:GCC
    language:C99
    License:MIT

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    char name[100];
    int emp_no,hours;
    int normal_pay,overtime_pay,gross;
    float tax,net;
    const int rate=1000;
    //Capture input
    printf("Gitonga's Factory payslip system!\n");
    printf("Employee Name:");
    gets(name);
    printf("Employee number:");
    scanf("%d",&emp_no);
    printf("Hours worked:");
    scanf("%d",&hours);


//computation
if(hours>40){
        normal_pay=40*rate;
        overtime_pay=(hours-40)*1.5*rate;
}
else{
        normal_pay=hours*rate;
        overtime_pay=0;
}
    gross = normal_pay + overtime_pay;
    tax = 0.16 * gross;
    net = gross - tax;
    //print payslip
    printf("Emp;No:\t%d\n",emp_no);
    printf("Employee Name:\t%s\n",name);
    printf("Normal Pay:\t%d\n",gross);
    printf("Gross pay:\t%d\n",gross);
    printf("Tax:\t%f\n",tax);
    printf("Net pay: \t%f\n");





return 0;
}
