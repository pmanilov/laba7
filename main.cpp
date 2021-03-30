#include <stdio.h>   
#include <stdlib.h>
#include "laba7.h"
#include <time.h>

#define COUNT 500000
#define START 0
#define END 0.5
#define STEP 0.1
#define SIZE (int) ((END - START) / STEP)

int main() {
    float m, f;
    int freq[SIZE] = {0};
    printf("Enter m:");
    if (scanf("%f", &m)!=1)
        return 1;
    printf("Enter s:");
    if (scanf("%f", &f) != 1)
        return 1;
    srand(time(NULL));
    for (int i = 0; i < COUNT; i++){
        //float s = My_Rand();
        float s = Logic(My_Rand(), m, f);
        for(int j = 0; START + j * STEP < END; j++ )
            if (s > START + j * STEP  && s < START + (j + 1) * STEP )
                freq[j] += 1;
    }
    for (int i = 0; i < SIZE; i++)
        printf("(0.%d-0.%d) %d\n", i, i + 1,freq[i]);
    return 0;
}