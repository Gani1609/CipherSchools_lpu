#include<iostream>
using namespace std;

void printstuff() // Function to print a message
{
    cout << "Writing my first function" << endl;
}

int sum(int a, int b) // Function to calculate the sum of two numbers
{
    int c = a + b;
    return c;
}

int main()
{
    int a = 3;
    int b = 5;
    int add_sum = sum(a, b);

    cout << "The sum is: " << add_sum << endl;

    printstuff(); // Calling the printstuff() function

    return 0;
}


