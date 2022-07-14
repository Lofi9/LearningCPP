#include<iostream>

bool primeCheck(int input)
{
    bool prime = true;
    for (int i = 2; i == input; i++)
    {
        if(input % i == 0)
        {
            prime = false;
            break;
        }
    }
    return prime;
}

int main()
{
    int input;

    std::cout << "Please input your number: ";
    std::cin >> input; 

    if(primeCheck(input) == true)
    {
        std::cout << "Number is prime";
    }
    else
    {
        std::cout << "Number is not prime";
    }
    return 1;
}