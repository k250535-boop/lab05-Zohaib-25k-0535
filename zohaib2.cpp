#include <stdio.h>

int main() {
    char starting, ending;

    printf("Enter the starting letter of the country: ");
    scanf(" %c", &starting);

    switch(starting) {
        case 'A':
        case 'a':
            printf("Enter the ending character of the country: ");
            scanf(" %c", &ending);

            switch(ending) {
                case 'A':
                case 'a':
                    printf("Albania\nAntarctica\n");
                    break;
                default:
                    printf("No such country exists\n");
            }
            break;

        case 'B':
        case 'b':
            printf("Enter the ending character of the country: ");
            scanf(" %c", &ending);

            switch(ending) {
                case 'A':
                case 'a':
                    printf("Botswana\n");
                    break;
                default:
                    printf("No such country exists\n");
            }
            break;

        default:
            printf("No such country exists\n");
    }

    return 0;
}
