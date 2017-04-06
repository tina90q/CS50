#include <cs50.h>
#include <stdio.h>

void print(char letter , int currentHeight);
void printHashTag(int currentHeight);
void printSpace(int numSpace);

int main(void)
{
    ///prompt for user input of pyrimid height:
    printf ("please enter the height of the pyrimid: ");
    int height;
    
    ///re-prompt input if the height is negative or bigger than 23.
    do
    {
        
        height = get_int();
        printf("your pyramid height cannot be negative or exceed 23.\n");
    } while (height<0 && height>23); ///conditions at when the loop is repeated.
  
    
    
    ///main pyrimid printing part: 1. print the space in the front as a fuction of 
    for (int currentHeight = 1; currentHeight <= height; currentHeight++) //writing loop for counting the current height
        {
            int numSpace = height-currentHeight; //define the number of space(numSpace) at current height.
            printSpace(numSpace); 
            printHashTag(currentHeight);
            printf("  ");
            printHashTag(currentHeight);
            printf("\n");
        }
    
    
}




///////start defining functions here:

void print(char letter , int currentHeight) //print fuc. that prints a character as a function of currentHeight.
{
    for (int i = 1; i <= currentHeight; i++)
    {
        printf("%c", letter);
    }
}



void printSpace(int numSpace) // prints " " using the fuction print().
{
    print(' ', numSpace);
}



void printHashTag(int currentHeight)//// prints "#" using the fuction print().
{
    print('#', currentHeight);
}
