#include <stdio.h>

enum Colour { RED, GREEN, BLUE, YELLOW };

int main() {
    enum Colour c = BLUE;

    switch(c) {
        case RED:
            printf("Hex code: #FF0000\n");
            break;
        case GREEN:
            printf("Hex code: #00FF00\n");
            break;
        case BLUE:
            printf("Hex code: #0000FF\n");
            break;
        case YELLOW:
            printf("Hex code: #FFFF00\n");
            break;
    }

    return 0;
}
