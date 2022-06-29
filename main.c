#include <stdio.h>

int main() {
    int getch();
    int c;
    printf("Welcome to version settings fixer installer by Itzankan");
    printf("\n\nEnter your install type \"1\" for default minecraft launchers and \"0\" for Salwyrr launcher :  \n");
    scanf("%d", &c);
    
    if (c == 1) {
        system("cd / && cd %appdata%/.minecraft && mkdir setFix && copy options.txt setFix\\options.dat && copy optionsof.txt setFix\\optionsof.dat");
    }
    else if (c == 0) {
        system("cd / && cd %appdata%/.Salwyrr && mkdir setFix && copy options.txt setFix\\options.dat && copy optionsof.txt setFix\\optionsof.dat");
    }
    else {
        printf("FATAL ERROR : Enter either 0 or 1");
    }
    printf("\n\nPress any key to close this window...........");
    getch();
    return 0;
}