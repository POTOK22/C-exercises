/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(NULL));

    FILE *fptr = fopen("rand.dat", "w");
    
    // Checking if a file is opened correctly  
    if (fptr == NULL) {
        perror("Error opening file.");
        return 1;
    }

    fprintf(fptr, "50\n");

    for (int i = 0; i<50; i++) {
        float num = ((float)rand() / RAND_MAX) - 0.5;
        fprintf(fptr, "%.6f\n", num);
    }

    fclose(fptr);

    return 0;
}