#include <iostream>
#include <ncurses.h>
#include <unistd.h>

using namespace std;

int main()
{
    initscr();

    cbreak();
    noecho();
    nodelay(stdscr, TRUE);

    scrollok(stdscr, TRUE);
    while (1) {
        if (getch()) {
            printw("Key pressed! It was: %d\n", getch());
            refresh();
        } else {
            printw("No key pressed yet...\n");
            refresh();
            sleep(1);
        }
    }
}