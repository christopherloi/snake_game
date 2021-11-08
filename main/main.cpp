#include <windows.h>  // to overwrite cursor pos from end to beginning

#include <cstdlib>  // system clear
#include <iostream>

#define WIDTH 50
#define HEIGHT 25

int x = 10, y = 10;

void board() {
    for (int i = 0; i < HEIGHT; i++) {
        std::cout << "\t\t#";
        for (int j = 0; j < WIDTH - 2; j++) {
            if (i == 0 || i == HEIGHT - 1)
                std::cout << "#";
            else if (i == y && j == x)
                std::cout << '0';
            else
                std::cout << ' ';
        }
        std::cout << "#\n";
    }
}

int main() {
    while (true) {
        board();
        x++;

        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (0, 0));
    }
}