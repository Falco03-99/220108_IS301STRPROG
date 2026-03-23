#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    int num;
    int a; 
    int i;
    srand(time(0));  
    num = rand() % (20) + 1;
     printf ("I am thinking of a number between 1 and 20.\nCan you guess what it is?\n");
    for (i=1; i<=5; i++){
         printf ("Attempt %d:",i);
    scanf ("%d", &a);
    if (a == num){
        printf ("Congratulations, you did it!\n");
        break;
    }  
    else if (a > num){
        printf ("Your guess is too high.\nPlease try again.\n");
    }
    else if (a < num){
        printf ("Your guess is too low.\nPlease try again.\n");
    }
    
}
    return 0;
}
