#include <iostream>
#include <cmath>


float CompoundInterest (int p, float r, int t)
 {

  float A;
  float euler = 2.71828182845904523536;
  return A = (p) * (pow(euler, ((r/100)*t)));
 }



int main() 
{

int originalAmount, years;
float e, interestRate;

printf("\n\t\t\tAnnual Compound Interest Calculator\n\n");

printf("\nEnter original amount deposited: \n");
scanf("%d",&originalAmount);

printf("\nEnter amount of years: \n");
scanf("%d",&years);

printf("\nEnter interest rate percentage: \n");
scanf("%f",&interestRate);

float res = CompoundInterest(originalAmount, interestRate, years);

printf("\n\n\nFinal value of account: %f",res);

/*
int change1

for(int i=0; i<10; i++)
{
  printf("Changes done");
}
*/


} 