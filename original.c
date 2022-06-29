#include <stdio.h>

int main() {
     int getch();
    int c;
    printf("Welcome to version settings fixer by Itzankan");
    printf("\n\nEnter yourtype \"1\" for default minecraft launchers and \"0\" for Salwyrr launcher :  \n");
    scanf("%d", &c);
    if (c == 1) {
        system("cd / && cd %appdata%/.minecraft && del options.txt && del optionsof.txt && copy setFix\\options.dat options.txt && copy setFix\\optionsof.dat optionsof.txt");
    }
    if (c == 0) {
        system("cd / && cd %appdata%/.Salwyrr && del options.txt && del optionsof.txt && copy setFix\\options.dat options.txt && copy setFix\\optionsof.dat optionsof.txt");
    }
    printf("\n\nPress any key to close this window...........");
    getch();
    return 0;
}