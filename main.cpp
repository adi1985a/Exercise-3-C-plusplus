#include <iostream>                     // Dołączenie biblioteki iostream, która umożliwia operacje wejścia/wyjścia.
#include <string>                       // Dołączenie biblioteki string, która umożliwia manipulację łańcuchami znaków.
#include <locale>                       // Dołączenie biblioteki locale


using namespace std;                    // Użycie przestrzeni nazw std.

class Rectangle                         // Zdefiniowanie klasy Rectangle.( kwadrat )
{
private:
    int sideA;                          // Długość boku A
    int sideB;                          // Długość boku B
    string color;                       // Kolor prostokąta
    float area;                         // Pole powierzchni prostokąta

public:
    Rectangle()                         // Konstruktor domyślny
    {
        sideA = 0;                      // Ustawienie wartości 0 dla pola sideA
        sideB = 0;                      // Ustawienie wartości 0 dla pola sideB
        color = "czarny";               // Ustawienie koloru "black" dla pola color
        area = 0.0f;                    // Ustawienie wartości 0.0 dla pola area
    }

    Rectangle(int a, int b, string c)   // Przeciążony konstruktor
    {
        sideA = a;                      // Przypisanie wartości podanej jako a do pola sideA
        sideB = b;                      // Przypisanie wartości podanej jako b do pola sideB
        color = c;                      // Przypisanie wartości podanej jako c do pola color
        area = calculateArea();         // Obliczenie pola powierzchni przy użyciu metody calculateArea()
    }

    Rectangle(int a, int b)             // Przeciążony konstruktor inicjalizujący prostokąt o podanych długościach boków
    {
        sideA = a;                      // Przypisanie wartości podanej jako a do pola sideA
        sideB = b;                      // Przypisanie wartości podanej jako b do pola sideB
        color = "żółty";                // Przypisanie koloru "yellow" do pola color
        area = calculateArea();         // Obliczenie pola powierzchni przy użyciu metody calculateArea()
    }

    void show()                         // Metoda show - wyświetla informacje o prostokącie.
    {
        cout << "Długości boków: " << sideA << ", " << sideB << endl; // Wyświetla długości boków prostokąta.
        cout << "Kolor: " << color << endl;                           // Wyświetla kolor prostokąta.
        cout << "Pole powierzchni: " << area << endl;                 // Wyświetla pole powierzchni prostokąta.
    }

private:                                            	// Sekcja prywatna - zawiera prywatne składowe klasy Rectangle.
    float calculateArea()                           	// Metoda calculateArea - oblicza pole powierzchni prostokąta.
    {
        return static_cast<float>(sideA * sideB);   	// Zwraca wynik mnożenia długości boków prostokąta, rzutowany na typ float.
    }
};

int main()
{
    setlocale(LC_ALL, "");              			// Ustawienie lokalizacji na bieżącą lokalizację systemową

    Rectangle rectangles[4];            			// Tablica prostokątów

    rectangles[0] = Rectangle();                      // Inicjalizacja pierwszego prostokąta konstruktorem domyślnym
    rectangles[1] = Rectangle(5, 7, "niebieski");     // Inicjalizacja drugiego prostokąta przeciążonym konstruktorem
    rectangles[2] = Rectangle(3, 10, "zielony");      // Inicjalizacja trzeciego prostokąta przeciążonym konstruktorem
    rectangles[3] = Rectangle(8, 8);                  // Inicjalizacja czwartego prostokąta przeciążonym konstruktorem

    for (int i = 0; i < 4; i++)         // Uruchomienie pętli for
    {
        rectangles[i].show();           // Wywołanie metody show() dla każdego prostokąta
        cout << endl;
    }

    return 0;                           // Zwrócenie wartości 0 - oznacza sukcesowe zakończenie programu.
}
