#include <stdio.h>
#include <cs50.h>// enables get_string
#include <string.h>//enables the function strlen.
#include <ctype.h>//enables the function toupper, isalpha, islower, isupper...
#include <stdlib.h>// converts string to int <<<int atoi(const char * nptr);>>>


int main( int argc, string argv[]) //argc is an int that counts the # of arguments, argv[] is an array os strings
{
    //1. accepted input: argc of 2 (the name of the program and the non negative-key, assumed to be an int).
    if (argc == 2)
    {
        int k = atoi(argv[1]);
        //3. Prompt user for the input of the text they want to cipher (text)
        printf("plaintext:");
        string text = get_string();
        
        if (text !=NULL);
        {
            //4. ciphertext:
            printf("ciphertext:");
            // repeat for the length of the plaintext, 
            for (int i=0, n=strlen(text); i<n;i++)
            {
                
                char c = text[i];
                
                if (isalpha(c)) // check if the ith char is an alphbetical letter using the fuction isalpha():
                {
                    //store the equlventlent ASCII number to the variable A.
                    int A = c;
                       
                        // convert to alphabetical index (pi) so Caesar's algorithm correctly wraps around the alphabets. preserving the case!
                        int pi;
                        int ci;
                        if(isupper(c))//if isupper is true, pi=A-65
                        {
                            pi = A-65;
                            ci =(pi+k)%26;//using Caesar's algorithm ci=(pi+k)%26
                            printf("%c",ci+65);//find and print the enciphered character
                        }
                        //if islower is true, pi=A-97
                        else
                        {
                            pi = A-97;
                            ci =(pi+k)%26;
                            printf("%c",ci+97);
                        }
                        
                }
            
                
                else //else: print the char as is.
                {
                    printf("%c",c);
                }
            
        }
        printf("\n");
        return 0;  
        }
    }
    
    else //2. return a error message if otherwise:
    {
        printf("SELF DESTRUCTION BEGINS 3...2...1...\n");
        return 1;
    }  

    
    
}
