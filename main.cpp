#include <iostream>


constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //Name
    std::cout << "1-100 ertekek duplazasa"; //"" and ;
    for (int i = 1; i < N_ELEMENTS, i++) //for
    {
        b[i] = i * 2;
    }
    for (int i = 0; i<N_ELEMENTS; i++) //for
    {
        std::cout << "Ertek:" << b[i] <<endl;//values and ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    double atlag = 0; //double and initial value
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]; //;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "Pecneb was here!" << std::endl;
    return 0;
}
