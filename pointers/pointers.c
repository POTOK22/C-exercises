#include <stdio.h>

int main ()
{
    int liczba = 80;
    printf("Wartosc zmiennej liczba: %d\n", liczba);
    printf("Adres zmiennej liczba: %p\n", &liczba);

    //deklaracje wskaznikow na obiekty roznego typu
    int *pointer1;  // zmienna wskaznikowa na obiekt typu int (liczba calkowita) 
    char *pointer2; // zmienna wskaznikowa na obiekt typu char (znak) 
    float *pointer3;// zmienna wskaznikowa na obiekt typu float (liczba zmiennoprzecinkowa)

    //* ale nie przy deklaracji zmiennej wskaznikowej a jako operator (tak samo jak &)
    int *pointer = &liczba;
    
    printf("Adres przechowywany we wskazniku: %p\n", pointer);
    printf("Wartosc przechowywana we wskazniku: %d\n", *pointer);

    *pointer = 42; //zmiana wartosci zmiennej pod tym wskaznikiem

    printf("Wartosc zmiennej liczba: %d\n", liczba);
    printf("Wartosc przechowywana we wskazniku: %d\n", *pointer);
    

    return 0;
}