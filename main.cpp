#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // int *b = new int[NELEMENTS]; // Hiba: NELEMENTS helyett N_ELEMENTS
    int *b = new int[N_ELEMENTS];
    // std::cout << '1-100 ertekek duplazasa' // Hiba: hiányzik << std::endl; és idézőjel helyett aposztróf
    std::cout << "1-100 ertekek duplazasa" << std::endl;
    // for (int i = 0;) // Hiba: hiányzik a feltétel és az inkrementálás
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = i * 2;
    }
    // for (int i = 0; i; i++) // Hiba: feltétel helyesen i < N_ELEMENTS kell
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        // std::cout << "Ertek:" // Hiba: hiányzik << b[i] és a pontosvessző
        std::cout << "Ertek: " << b[i] << std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    // int atlag; // Hiba: nincs inicializálva
    int atlag = 0;
    // for (int i = 0; i < N_ELEMENTS, i++) // Hiba: vessző helyett pontosvessző kell
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        // atlag += b[i] // Hiba: hiányzik a pontosvessző
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}