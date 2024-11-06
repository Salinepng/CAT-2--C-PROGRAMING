#include<stdio.h>

int main (){

int regular_hours;
int overtime_hours;
int wage;
int overtime;
int gross_pay;

if(regular_hours>40){

overtime_hours = hours -40;

}

overtime = overtime_hours * 1/2;

gross_pay = (regular_hours * wage) + (overtime_hours * wage * 1.5);



return 0;

}