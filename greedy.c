#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
 ////1. prompt for input:
    float change;
    do ///prompt the user for input until a proper positive number has been inputed
    {
        printf("plase input change amount in dollors: ");
        change = get_float(); ////get input of change amount in float, assume input is in dollars and only have 2 decimal place
    } while (change<0);

   

////2. convert dolloer amount to cents.
    int cents = roundf(change*100); //float is coverted to int here to use % later on. since we assume the user will input a number no more than 2 decimal places, there will not be roundoff error.
    
    
    
////3. calculate the least amount of coins needed
    
    
    int num_of_quarters = cents/25; // the int of number of cents/ 25cents give the number of quarters needed.
    int remainQ = cents%25; //remainder amount
   
        
    int num_of_nickels = remainQ/10;
    int remainN = remainQ%10;
    
           
    int num_of_dimes = remainN/5;
    int remainD = remainQ%5;
   
    
    int num_of_penny = remainD/1;
    
    
    int total_coins = num_of_quarters + num_of_nickels + num_of_dimes + num_of_penny; // total amount of coins
    printf("%i\n", total_coins);

}