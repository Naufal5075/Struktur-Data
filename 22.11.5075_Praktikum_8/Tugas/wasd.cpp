#include <iostream>
#include <conio.h>

void clearScreen()
{
    // Menghapus isi layar
    std::cout << "\033[2J\033[1;1H";
}

int main()
{
    int x = 0; // Koordinat X karakter
    int y = 0; // Koordinat Y karakter

    char input; // Tombol yang ditekan

    while (true)
    {
        clearScreen(); // Membersihkan layar

        // Menggambar karakter pada koordinat yang sesuai
        for (int i = 0; i < y; ++i)
            std::cout << std::endl;
        for (int j = 0; j < x; ++j)
            std::cout << " ";
        std::cout << "O" << std::endl;

        // Menerima input dari pengguna
        input = _getch();

        // Menggerakkan karakter berdasarkan tombol yang ditekan
        if (input == 'w')
        {
            y--;
            std::cout << "Karakter bergerak ke atas" << std::endl;
        }
        else if (input == 's')
        {
            y++;
            std::cout << "Karakter bergerak ke bawah" << std::endl;
        }
        else if (input == 'a')
        {
            x--;
            std::cout << "Karakter bergerak ke kiri" << std::endl;
        }
        else if (input == 'd')
        {
            x++;
            std::cout << "Karakter bergerak ke kanan" << std::endl;
        }
        else if (input == 'q')
            break; // Keluar dari perulangan jika 'q' ditekan
    }

    return 0;
}
