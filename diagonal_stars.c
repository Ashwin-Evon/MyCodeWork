#include <stdio.h>

int main() {
    int rows = 10; // Number of stars to print diagonally
    
    for (int i = 0; i < rows; i++) {
        // Print spaces for indentation
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        // Print the star
        printf("*\n");
    }
    
    return 0;
}

