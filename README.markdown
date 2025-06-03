# 📏🇵🇱 Prostokąt (Rectangle) Class Demo: C++ OOP in Polish 🎨
_A C++ console program demonstrating a `Prostokat` (Rectangle) class with multiple constructors, property management, and Polish language output, utilizing `setlocale` for character support._

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C++](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://isocpp.org/)
[![Platform: Cross-platform](https://img.shields.io/badge/Platform-Cross--platform-lightgrey.svg)]()

## 📋 Table of Contents
1.  [Overview](#-overview)
2.  [Key Features of the `Prostokat` Class](#-key-features-of-the-prostokat-class)
3.  [Screenshots (Conceptual Output)](#-screenshots-conceptual-output)
4.  [System Requirements](#-system-requirements)
5.  [Installation and Setup](#️-installation-and-setup)
6.  [Usage Guide](#️-usage-guide)
7.  [File Structure](#-file-structure)
8.  [Technical Notes](#-technical-notes)
9.  [Contributing](#-contributing)
10. [License](#-license)
11. [Contact](#-contact)

## 📄 Overview

The **Prostokąt (Rectangle) Class Demo**, developed by Adrian Lesniak, is a C++ console application designed to illustrate fundamental object-oriented programming (OOP) concepts through the implementation of a `Prostokat` (Rectangle) class. This class manages properties of a rectangle, including its side lengths (`bokA`, `bokB`), its `kolor` (color as a string), and its calculated `pole` (area). The program showcases the use of default and overloaded constructors for flexible object initialization and a `pokaz()` (show) method to display the rectangle's details. A key aspect is its use of **Polish variable names and output text** (e.g., "Długości boków", "Kolor", "żółty"), with `setlocale(LC_ALL, "")` employed to ensure proper display of Polish characters on compatible systems. The `main` function demonstrates creating an array of `Prostokat` objects and displaying their properties.

## ✨ Key Features of the `Prostokat` Class

*   📦 **Attributes (Private)**:
    *   `bokA`, `bokB`: Integer values representing the lengths of the rectangle's sides (Polish: "bok" means side).
    *   `kolor`: A `std::string` storing the color of the rectangle (e.g., "czarny", "niebieski", "żółty").
    *   `pole`: A `float` storing the calculated surface area of the rectangle (Polish: "pole" means area).
*   🛠️ **Constructors**:
    *   **Default Constructor**: Initializes a rectangle with default values (e.g., sides 0, color "czarny" (black), area 0).
    *   **Overloaded Constructor (Sides and Color)**: Initializes a rectangle with specified side lengths and color. Calculates area internally.
    *   **Overloaded Constructor (Sides Only)**: Initializes a rectangle with specified side lengths and a default color (e.g., "żółty" (yellow)). Calculates area internally.
*   📊 **Methods**:
    *   `pokaz()` (Show): A public method that prints the rectangle's side lengths, color, and calculated area to the console in a formatted way, using Polish text.
    *   `obliczPole()` (Calculate Area): A private helper method that computes the area (`bokA * bokB`, cast to `float`) and stores it in the `pole` attribute. This is typically called by the constructors.
*   👨‍💻 **Demonstration in `main()`**:
    *   Creates a fixed-size array (e.g., of four `Prostokat` objects).
    *   Initializes these objects using the various constructors.
    *   Iterates through the array, calling the `pokaz()` method for each `Prostokat` object to display its properties in Polish.
*   🇵🇱 **Polish Localization**:
    *   Uses `setlocale(LC_ALL, "");` at the beginning of `main` to configure the C++ runtime library to use the system's native locale, which is crucial for correct input/output of Polish characters (like 'ł', 'ó', 'ż') on systems where the default "C" locale might not support them.

## 🖼️ Screenshots (Conceptual Output)

The program produces direct console output based on the `pokaz()` method.

**Example Console Output (assuming Polish locale is active and terminal supports it):**
```text
--- Prostokąt #1 ---
Długości boków: 0 x 0
Kolor: czarny
Pole powierzchni: 0.00

--- Prostokąt #2 ---
Długości boków: 5 x 7
Kolor: niebieski
Pole powierzchni: 35.00

--- Prostokąt #3 ---
Długości boków: 3 x 10
Kolor: zielony
Pole powierzchni: 30.00

--- Prostokąt #4 ---
Długości boków: 8 x 8
Kolor: żółty
Pole powierzchni: 64.00
```


## ⚙️ System Requirements

*   **Operating System**: Any OS supporting a standard C++ compiler. For correct display of Polish characters, the system's default locale (or one set by the program) must support UTF-8 or a compatible Polish encoding, and the terminal/console application used must also be configured to render these characters correctly.
*   **C++ Compiler**: A C++ compiler (e.g., g++, clang++, MSVC). C++11 or later is good practice.
*   **Standard C++ Libraries**: `<iostream>` (for console I/O), `<string>` (for color attribute), `<locale>` (for `setlocale`).

## 🛠️ Installation and Setup

1.  **Clone the Repository (if applicable)**:
    ```bash
    git clone <repository-url>
    cd <repository-directory>
    ```
    *(Replace `<repository-url>` and `<repository-directory>` if this code is part of a larger repository).*

2.  **Save Main Code**:
    Ensure your C++ source code (containing the `Prostokat` class definition and implementation, and the `main` function) is saved as `rectangle.cpp` (or your chosen file name, e.g., `prostokat.cpp`) in your project directory.

3.  **Compile the Program**:
    Open a terminal (Command Prompt, PowerShell, Bash, etc.) in the project directory.
    **Example using g++:**
    ```bash
    g++ rectangle.cpp -o rectangle -std=c++11
    ```
    *(Add `-static-libgcc -static-libstdc++` on Windows with MinGW if desired for standalone executables. Ensure your compiler/linker settings handle locales correctly if issues arise).*

4.  **Run the Program**:
    *   On Windows: `.\rectangle.exe` or `rectangle.exe`
    *   On Linux/macOS: `./rectangle` (ensure execute permissions: `chmod +x rectangle`)
    *   *Ensure your terminal is configured to display UTF-8 or the appropriate Polish encoding for correct character rendering.*

## 💡 Usage Guide

1.  Compile `rectangle.cpp` as detailed in the "Installation and Setup" section.
2.  Run the compiled executable (`rectangle` or `rectangle.exe`).
3.  **Output**:
    *   The program will directly print the details for each of the four `Prostokat` objects created and initialized in the `main` function. This includes their side lengths ("Długości boków"), color ("Kolor"), and calculated area ("Pole powierzchni"), all in Polish.
4.  **Actions**:
    *   Observe the console output to verify the properties of each rectangle and the correct display of Polish characters.
    *   The program runs a fixed sequence and then terminates. There are no interactive prompts.
    *   To experiment, modify the parameters used when initializing the `Prostokat` objects in the `main` function's array and recompile.

## 🗂️ File Structure

*   `rectangle.cpp` (or `prostokat.cpp`): The main (and likely only) C++ source file containing the `Prostokat` class definition and implementation, and the `main()` demonstration function.
*   `README.md`: This documentation file.

*(No external data files, log files, or user-provided header files beyond standard libraries are indicated for this specific program as described.)*

## 📝 Technical Notes

*   **Polish Language Implementation**: A key characteristic is the use of Polish for variable names within the class (e.g., `bokA`, `kolor`, `pole`) and for the text output in the `pokaz()` method.
*   **`setlocale(LC_ALL, "")`**: This function call is crucial. It attempts to set the C++ locale to the user's default system locale. If the system locale is configured for Polish (e.g., with UTF-8 encoding), and the console/terminal supports it, Polish characters like 'ł', 'ó', 'ż', 'ć', 'ś', 'ń', 'ę', 'ą' should display correctly. If not, they might appear as incorrect symbols or question marks.
*   **Encapsulation**: The `Prostokat` class demonstrates encapsulation effectively.
*   **Constructors**: Multiple constructors provide flexibility in object creation.
*   **Area Calculation**: The area (`pole`) is calculated as `bokA * bokB` and cast to `float`.
*   **Fixed Demonstration**: The `main` function runs a predefined demonstration without user interaction.

## 🤝 Contributing

Contributions to this **Prostokąt (Rectangle) Class Demo** are welcome, especially if they aim to:

*   Add more methods to the `Prostokat` class (e.g., `obliczObwod()` for perimeter).
*   Implement user input for creating rectangles dynamically.
*   Provide examples for other locales or improve cross-platform locale handling.
*   Enhance the ASCII art or add more complex shape interactions.

1.  Fork the repository.
2.  Create a new branch for your feature (`git checkout -b feature/RectangleEnhancementsPL`).
3.  Make your changes and commit them (`git commit -m 'Feature: Add obwod calculation'`).
4.  Push to the branch (`git push origin feature/RectangleEnhancementsPL`).
5.  Open a Pull Request.

Please ensure your code is well-commented and adheres to good C++ OOP practices.

## 📃 License

This project is licensed under the **MIT License**.
(If you have a `LICENSE` file in your repository, refer to it: `See the LICENSE file for details.`)

## 📧 Contact

Created by **Adrian Lesniak**.
For questions, feedback, or issues related to this OOP and localization demonstration, please open an issue on the GitHub repository or contact the repository owner.

---
🖼️ _Ilustracja projektowania klas C++ i tworzenia obiektów za pomocą prostych prostokątów, z polską lokalizacją!_
_(Illustrating C++ class design and object creation with simple rectangles, with Polish localization!)_
