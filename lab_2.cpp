#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

    int a, b, c;

    std::cout << "Enter three numbers to calculate the maximum of: ";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if (a > b) {

        if (a > c)
            std::cout << a;

        else
            std::cout << c;

    }

    else if (b > c)
        std::cout << b;

    else
        std::cout << c;

    int mark;

    std::cout << "\nEnter your mark: ";
    std::cin >> mark;

    if (mark > 95)
        std::cout << "A";

    else if (mark >= 90 && mark <= 94)
        std::cout << "A-";

    else if (mark >= 85 && mark <= 89)
        std::cout << "B+";

    else if (mark >= 80 && mark <= 84)
        std::cout << "B";

    else if (mark >= 75 && mark <= 79)
        std::cout << "B-";

    else if (mark >= 70 && mark <= 74)
        std::cout << "C+";

    else if (mark >= 65 && mark <= 69)
        std::cout << "C";

    else if (mark >= 60 && mark <= 64)
        std::cout << "C-";

    else if (mark >= 55 && mark <= 59)
        std::cout << "D+";

    else if (mark >= 50 && mark <= 54)
        std::cout << "D";

    else if (mark >= 25 && mark <= 49)
        std::cout << "FX";

    else
        std::cout << "F";

    return 0;
}