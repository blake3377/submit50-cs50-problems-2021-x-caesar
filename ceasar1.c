#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[]){
    
    //getting key again for argv !=2
    if (argc<2 || argc>2){
        
      printf("%s key\n", argv[0]);
    }
    
    int length = strlen(argv [1]);
    
    //getting key again for negatives
      for(int i=0; i<length; i++){
        
        if(argv[1][i] <'0'){
        printf("%s key\n", argv[0]);
        return 1;
        }
      }
   
    //getting key again if it is not a number
    
    for(int i=0; i<length; i++){
        
        if(argv[1][i]>='a' && argv[1][i]<='z'){
        printf("%s key\n", argv[0]);
        return 1;
        }
       else if(argv[1][i]>='A' && argv[1][i]<='Z'){
        printf("%s key\n", argv[0]); 
        return 1;
        }
    }
      
    //getting plaintext from user
    
      string plaintext =get_string("Plaintext:");
      
      printf("Ciphertext:");
      
      int len = strlen (plaintext);
      
      string ciphertext = NULL;
      
      int k = atoi (argv[1]);
      int cypher;
      
   
   //cyphertext
   
      for(int i=0; i<len; i++){
        
        if(plaintext[i]>='a' && plaintext[i]<='z'){
        cypher = ((int)plaintext[i] - 97 + k) % 26 + 97;
        printf("%c", cypher);
        }
       else if(plaintext[i]>='A' && plaintext[i]<='Z'){
       cypher = (plaintext[i] - 65 + k) % 26+ 65;
        printf("%c", cypher);
        }
        else
        {
            printf("%c",plaintext[i]);
        }
        
    }
       printf("\n");
   
    }
    
