// UNFORTUNATELY I HAVENT INVOKED TESTS YET ,WILL DO SOON!!
/**
 * @file
 * @brief [ROT13](https://en.wikipedia.org/wiki/ROT13)
 * It is a very simple and easy to make ciphering algorithm which changes every 
 * latter to its 13th successor
 * @author [ASHISH KUMAR](https://github.com/Ashish15678) 
 */


///////////////////////////////////////////////////////////////////////
//INCLUDES
#include<assert.h>      //FOR ASSSERTION FUNCTIONS AND TESTS
#include<stdio.h>       //FOR I/O FUNCTIONS      



/////////////////////////////////////////////////////////////////
//FUNCTIONS
void cipher(char a[95]){
    int i;
    for ( i = 0;  a[i]; i++) 
    {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            a[i] = 'A' + ((a[i] - 'A' + 13) % 26);
        }
        else if (a[i] >= 'a' && a[i] <= 'z') {
            a[i] = 'a' + ((a[i] - 'a' + 13) % 26);
        }
    }
    printf("The ciphered text is: %s" , a); //RETURNS THE CIPHERED TEXT BACK TO USER
}



///////////////////////////////////////////////////////////////////////
//MAIN ENTRY POINT
int main(int argc, char const *argv[])
{
    char input[95];                                 //CREATES A STRING OF 95 CHARACTERS
    printf("What has to be ciphered: ");              //PRINTS IT ON OUTPUT SCREEEN
    gets(input);                                    //TAKES INPUT FROM USER AND SAVES IT IN STRING 
                                                    //NAMED INPUT
    cipher(input);
}
