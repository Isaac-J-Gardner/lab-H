#include <stdlib.h>
#include <stdio.h>
int main(void) {

    // Get user input
    #define N 256
    char buffer[N+1], *filename = buffer;
    char ch;
    int i = 0; // counter for how many characters read
    printf("Enter a file name: ");
    while ((ch = getchar()) != '\n') { // get one character at a time
        filename[i++] = ch;
        // Enter your code under here

        if(ch == EOF){
            if(i == 0){
                printf("Error!");
                return 1;
            }
            break;
        }

        if(i == 256){
            printf("Error!");
            return 1;
        }
    }
    for (; i < N+1; i++) { // fill the rest of the array with null characters
        filename[i] = '\0';
    }
    

    // Enter your code under here
    for(int j = 0; j < 256; j++){
        if(filename[j] == '.'){
            while(filename[j] != '\0'){
                printf("%c", filename[j++]);
            }
            break;
        }
    }
    



    return EXIT_SUCCESS;
}