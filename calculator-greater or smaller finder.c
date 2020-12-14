#include <stdio.h>
#include <stdlib.h>


int main() {
    int numF;
    int numL;

    printf ("Enter Number: ");
    scanf ("%d", &numF);
    printf ("Enter Second Number: ");
    scanf ("%d", &numL);

    if(numF > numL){
        printf ("The greatest number is %d", numF);
    }else if (numL > numF){
        printf ("The greatest number is %d", numL);
    }else if (numF = numL){
        printf ("The given both numbers are equal");
    }else {
        printf ("Invaild");
    }
}

