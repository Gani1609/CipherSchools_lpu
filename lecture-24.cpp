#include <iostream>
using namespace std;

int fib(int input)
{
    if (input == 0 || input == 1)
    {
        return input;
    }
    
    int Final_answer = fib(input - 1) + fib(input - 2);
    return Final_answer;
}

int main()
{
    int input;
    cout << "Enter the number you want to find the Fibonacci series term for: " << endl;
    cin >> input;

    cout << "Fibonacci term at position " << input << ": " << fib(input) << endl;

    return 0;
}
