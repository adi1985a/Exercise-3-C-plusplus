#include <iostream>                     // Includes the iostream library for input/output operations.
#include <string>                       // Includes the string library for string manipulation.
#include <locale>                       // Includes the locale library.

using namespace std;                    // Uses the standard namespace.

class Rectangle                         // Defines the Rectangle class.
{
private:
    int sideA;                          // Length of side A.
    int sideB;                          // Length of side B.
    string color;                       // Color of the rectangle.
    float area;                         // Area of the rectangle.

public:
    Rectangle()                         // Default constructor.
    {
        sideA = 0;                      // Sets sideA to 0.
        sideB = 0;                      // Sets sideB to 0.
        color = "black";               // Sets the color to "black".
        area = 0.0f;                    // Sets area to 0.0.
    }

    Rectangle(int a, int b, string c)   // Overloaded constructor.
    {
        sideA = a;                      // Assigns a to sideA.
        sideB = b;                      // Assigns b to sideB.
        color = c;                      // Assigns c to color.
        area = calculateArea();         // Calculates area using calculateArea() method.
    }

    Rectangle(int a, int b)             // Overloaded constructor initializing a rectangle with given sides.
    {
        sideA = a;                      // Assigns a to sideA.
        sideB = b;                      // Assigns b to sideB.
        color = "yellow";              // Sets the color to "yellow".
        area = calculateArea();         // Calculates area using calculateArea() method.
    }

    void show()                         // show method - displays rectangle information.
    {
        cout << "Side lengths: " << sideA << ", " << sideB << endl; // Displays side lengths.
        cout << "Color: " << color << endl;                          // Displays color.
        cout << "Area: " << area << endl;                            // Displays area.
    }

private:                                            	// Private section - contains private members of the Rectangle class.
    float calculateArea()                           	// calculateArea method - calculates the area of the rectangle.
    {
        return static_cast<float>(sideA * sideB);   	// Returns the result of multiplying sides, cast to float.
    }
};

int main()
{
    setlocale(LC_ALL, "");              			// Sets the locale to the system's default.

    Rectangle rectangles[4];            			// Array of rectangles.

    rectangles[0] = Rectangle();                      // Initializes the first rectangle with the default constructor.
    rectangles[1] = Rectangle(5, 7, "blue");           // Initializes the second rectangle with overloaded constructor.
    rectangles[2] = Rectangle(3, 10, "green");         // Initializes the third rectangle with overloaded constructor.
    rectangles[3] = Rectangle(8, 8);                   // Initializes the fourth rectangle with overloaded constructor.

    for (int i = 0; i < 4; i++)         // Starts a for loop.
    {
        rectangles[i].show();           // Calls show() method for each rectangle.
        cout << endl;
    }

    return 0;                           // Returns 0 - indicates successful program termination.
}
