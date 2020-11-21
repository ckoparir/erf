/** \file
 * gcc erf.c -o erf -lm -g -Wall -O3 -std=gnu11
 */
/** \page onewordtag 21th Century C */

#include<math.h>
#include<stdio.h>
#include <stdlib.h>

#define COUNT 1000
static int iValue = 10;
void stress();

int main(){
    printf("\nThe integral of a Normal(0, 1) distribution: "
            "between -1.90 and 1.90 is: %g\n", erf(1.90*sqrt(1/2.)));
    iValue += 3;
    printf("Value: %d\n", iValue);
    for(int i=0;i<0xffffee;i++);
    stress();
}

/**
 * stress() function
 * \param void
 * \return void
 */
void stress(){
    char* ch = (char*) malloc(100 * sizeof(char));
    char* pch = ch;

    for (int i = 0; i < COUNT; ++i) {
        for (int j = 0; j < (int)COUNT/2; ++j ) {
            /* int k = 0; */
            if(((j-i)*2)%103){
                /* printf("%d ", i); */
                i++;
                sprintf(pch,"ch value: %d", i);
                /* for (; k<0xffffee; k++); */
                break;
            }
        }
    }
    printf("%s\n", pch);
    free(ch);
}
