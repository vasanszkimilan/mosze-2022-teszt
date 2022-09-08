#include <iostream>


constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //Name
    std::cout << '1-100 ertekek duplazasa' //"" and ;
    for (int i = 0;) //for
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //for
    {
        std::cout << "Ertek:" //values and ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //double and initial value
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i] //;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
