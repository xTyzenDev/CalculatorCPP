#include <iostream>

double a;
double b;

double addition(double a, double b)
{
    return a + b;
}

double soustraction(double a, double b)
{
    return a - b;
}

double multiplication(double a, double b)
{
    return a * b;
}

double division(double a, double b)
{
    return a / b;
}

int add()
{
    std::cout << "\nFirst number : ";
    std::cin >> a;
    std::cout << "\nSecond number : ";
    std::cin >> b;
    std::cout << "\n";
    std::cout << addition(a, b);

    return add();
}

int sous()
{
    std::cout << "\nFirst number : ";
    std::cin >> a;
    std::cout << "\nSecond number : ";
    std::cin >> b;
    std::cout << "\n";
    std::cout << soustraction(a, b);

    return sous();
}

int mul()
{
    std::cout << "\nFirst number : ";
    std::cin >> a;
    std::cout << "\nSecond number : ";
    std::cin >> b;
    std::cout << "\n";
    std::cout << multiplication(a, b);

    return mul();
}

int div()
{
    std::cout << "\nFirst number: ";
    std::cin >> a;
    std::cout << "\nSecond number: ";
    std::cin >> b;
    std::cout << "\n";
    std::cout << division(a, b);

    return div();
}



int main()
{
    int choose = 0;

    std::cout << "Please choose a option";
    std::cout << "\n1.Addition";
    std::cout << "\n2.Substraction";
    std::cout << "\n3.Multiplication";
    std::cout << "\n4.Division";
    std::cout << "\n==> ";
    std::cin >> choose;

    if (choose == 1)
    {
        add();
    }
    else if (choose == 2)
    {
        sous();
    }
    else if (choose == 3)
    {
        mul();
    }
    else if (choose == 4)
    {
        div();
    }

    std::cin.ignore();
    return 0;
}