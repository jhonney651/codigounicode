#include <ncurses.h>
#include <wchar.h>

int main() {
    wchar_t caracter;
    initscr();
    printw("Mostrar Código Unicode do Caractere\n\n");
    printw("Informe um caractere: ");
    refresh();
    scanw(" %lc", &caracter);
    printw("O codigo Unicode do caractere '%lc' em decimal é: %d\n", caracter, caracter);
    printw("O codigo Unicode do caractere '%lc' em hexadecimal é: %x", caracter, caracter);
    refresh();
    getch();
    endwin();
    return 0;
}
