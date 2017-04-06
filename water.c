#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("how long is your typical shower in minutes?");
    int showerTime = get_int(); 
    
    if (showerTime>0)
    {
        printf("your shower duration %i.\n", showerTime);
        
        int volPerMin = 192;//oz of water per minute shower
        int volPerBottle= 16;//oz of water per bottle
         
         printf("a %i minute shower is equvlent to %i bottles of water! \n", showerTime, showerTime*volPerMin/volPerBottle);
    }
    
    else
    { 
        printf("please input a number bigger than zero\n");
    }
    
    
    
}