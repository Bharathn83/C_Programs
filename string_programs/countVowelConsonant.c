/**************
6. Write a C program to count total number of vowels 
and consonants in a string.
***************/

#include<stdio.h>

int main()
{
	char str[]= "He1llo, 4World!!!";
    int i=0, vowels=0, consonants=0;
    for(i = 0; str[i] != '\0'; i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i] =='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' )
                vowels++;
            else
                consonants++;
        }
    }
	printf("Number of Vowels = %d\n",vowels);
	printf("Number of Consonants = %d\n",consonants);   
    return 0;
}