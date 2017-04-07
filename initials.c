#include <stdio.h>
#include <cs50.h>
#include <string.h>  //enables the function strlen, and get_string.
#include <ctype.h> //enables the function toupper

int main(void)
{
    // 1.prompt user's name via get_string()
    string name="";

    name = get_string();
    
    
    // 2. Print name



    
    if (name != NULL)
    {
        int i =0; // i is the character position counter
        while (name[i]!='\0')
        {
            
            while(name[i]!='\0' && name[i]==' ') //add 1 to i aslong as the ith char is ' '.
            {
            i++;
            }
            if(name[i]!='\0' && name[i]!=' ')
                printf("%c", toupper(name[i])); //print ith character.
            
            while(name[i]!='\0' && name[i]!=' ') //add 1 to i aslong as the ith char is NOT ' '.
            {
            i++;
            } //print nothing.
        }
        
        printf("\n");
    }
    
    return 0;
}