#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char A[]="How are you";

    int i, vcount=0 , ccount=0;
    for(i=0 ; A[i]!='\0' ; i++)
    {
        if((A[i]=='a' || A[i]=='e') || (A[i]=='A' || A[i]=='E'))
        {
            vcount++;
        }

        else if((A[i]>=65 && A[i]<=90) || (A[i]>=97 && A[i]<=122))
        {
            ccount++;
        }
    }
    return 0;
}