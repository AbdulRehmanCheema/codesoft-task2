#include <iostream>
using namespace std;

int main() {
	
    float num1, num2, result;
    char operation;

    
    cout << "Enter first number: \n"; // This displays a message to ask user for inputs
    cin >> num1;

    cout << "Enter second number: \n";
    cin >> num2;

    cout << "Choose an operation (+, -, *, /): \n ";
    cin >> operation;
    switch (operation) // using switch cases to perform the calculation 
	{
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
			break;
        case '/':
            if (num2 != 0) 
			{
                result = num1 / num2;
            } else 
			{
                cout << "Division by zero is undefined." << endl;
                return 1;  // Exit with an error code
            }
            break;
        default:
            cout << "Invalid operation." << endl;
            return 1;  
    }

    cout << "Result is : " << result << endl;
    system("pause");
    return 0;  
}
