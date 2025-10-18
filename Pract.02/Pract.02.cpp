// Pract.02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void task1() {
    int year = 0;
    cout << "Enter an year: ";
    cin >> year;
    if(year % 4 == 0)
    {
		cout << year << " is a leap year." << endl;
    }
}

void task2() {
    char letter = ' ';
    cout << "Enter a letter: ";
    cin >> letter;
    // Non tryhard solution : if(isalpha(letter));
    if ((letter >= 'a' && letter <= 'z') || (letter >= 'A') && (letter <= 'Z')) 
    {
        cout << "Input is a letter: ";
    }
    else
    {
        cout << "Input is not a letter: ";
    }
}

void task3() {
    double number1 = 0, number2 = 0;
    cout << "Enter number one: ";
    cin >> number1;
    cout << "Enter number one: ";
    cin >> number2;
    cout << "The bigger number is: " << ((number1 > number2) ? number1 : number2) << endl;
}

void task4() {
    int number = 0;
    cout << "Enter result: ";
    cin >> number;
    if (number >= 90) cout << "6+";
    else if (number >= 80) cout << "6";
    else if (number >= 70) cout << "5";
    else if(number >= 60) cout << "4";
    else if(number >= 40) cout << "3";
    else cout << "Grade: " << "2";
}

void task5() 
{
	double side1 = 0, side2 = 0, side3 = 0;
    cout << "Enter triangle sides: ";
	cin >> side1 >> side2 >> side3;
    if(side1 < side2 + side3 && side2 < side1 + side3 && side3 < side1 + side2)
    {
        cout << "Triangle exists." << endl;
    }
    else
    {
        cout << "Triangle can not exist." << endl;
	}
}

void task6() 
{
    double a = 0, b = 0, c = 0, D = 0;
	cout << "Enter equation coefficients (a b c): ";
	cin >> a >> b >> c;
    D = b * b - 4 * a * c;
    if (D < 0) 
    {
        cout << "No real roots" << endl;
    }
    else if(D == 0) 
    {
        cout << "One real root: " << -b / (2 * a) << endl;
    }
    else 
    {
        cout << "Two real roots are: " << (-b + sqrt(D)) / (2 * a) << " and " << (-b - sqrt(D)) / (2 * a) << endl;
	}
}

void task7() {
    char symbol = ' ';
	cout << "Enter a symbol: ";
    cin >> symbol;
    if(symbol >= 65 && symbol <= 90)
    {
        symbol += 32;
    }
    else if(symbol >= 97 && symbol <= 122)
    {
        symbol -= 32;
	}
    else
    {
        cout << "Invalid character" << endl;
        return;
    }
	cout << "Converted symbol: " << symbol << endl;
}

void task8()
{
    int arabic_number = 0;
	cout << "Enter an arabic number (1-10): ";
    cin >> arabic_number;
    if(arabic_number == 1) cout << "Roman numeral: I" << endl;
    else if(arabic_number == 2) cout << "Roman numeral: II" << endl;
    else if(arabic_number == 3) cout << "Roman numeral: III" << endl;
    else if(arabic_number == 4) cout << "Roman numeral: IV" << endl;
    else if(arabic_number == 5) cout << "Roman numeral: V" << endl;
    else if(arabic_number == 6) cout << "Roman numeral: VI" << endl;
    else if(arabic_number == 7) cout << "Roman numeral: VII" << endl;
    else if(arabic_number == 8) cout << "Roman numeral: VIII" << endl;
    else if(arabic_number == 9) cout << "Roman numeral: IX" << endl;
    else if(arabic_number == 10) cout << "Roman numeral: X" << endl;
	else cout << "Invalid number" << endl;
}

void task9()
{
	int number1 = 0, number2 = 0, number3 = 0, temp = 0;
    cout << "Enter three numbers: ";
	cin >> number1 >> number2 >> number3;
    for (int i = 0; i < 2; i++) 
    {
        if (number1 > number2) 
        {
            temp = number1;
            number1 = number2;
			number2 = temp;
        }
        if (number2 > number3)
        {
            temp = number2;
            number2 = number3;
            number3 = temp;
        }
    }
	cout << "Sorted numbers: " << number1 << " " << number2 << " " << number3 << endl;
}

void task10() 
{
    double number1 = 0, number2 = 0;
	char operation = ' ';
	cout << "Enter two numbers: ";
    cin >> number1 >> number2;
	cout << "Enter an operation (+, -, *, /): ";
	cin >> operation;
    if(operation == '+') 
    {
        cout << "number1 + number2 = " << number1 + number2 << endl;
    } 
    else if (operation == '-') 
    {
        cout << "number1 - number2 = " << number1 - number2 << endl;    
    } 
    else if (operation == '*') 
    {
        cout << "number1 * number2 = " << number1 * number2 << endl;
    } 
    else if (operation == '/') 
    {
        if (number2 != 0) 
        {
            cout << "number1 / number2 = " << number1 / number2 << endl;
        } 
        else 
        {
            cout << "Division by zero is not allowed." << endl;
        }
    } 
    else 
    {
        cout << "Invalid operation." << endl;
    }
}

void task11() 
{
    int number1 = 0, number2 = 0, number3 = 0, temp = 0;
    cout << "Enter three numbers: ";
    cin >> number1 >> number2 >> number3;
    for (int i = 0; i < 2; i++)
    {
        if (number1 > number2)
        {
            temp = number1;
            number1 = number2;
            number2 = temp;
        }
        if (number2 > number3)
        {
            temp = number2;
            number2 = number3;
            number3 = temp;
        }
    }
	cout << "Biggest possible number: " << number3 << number2 << number1 << endl;
}

void task12() 
{
    int day = 0, month = 0;
	cout << "Enter day and month: ";
	cin >> day >> month;
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        if (day + 1 > 31)
        {
            day = 1;
            if (month != 12) month += 1;
            else month = 1;
        }
        else day += 1;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day + 1 > 30)
        {
            day = 1;
            month = 1;
        }
        else day += 1;
    }
    else if(month == 2){
        if (day + 1 > 28)
        {
            day = 1;
            month = 3;
        }
        else day += 1;
	}
	cout << "Next date is: " << day << "." << month << endl;
}

void task13()
{
    int number_original = 0, number1 = 0, number2 = 0, digit1 = 0, digit2 = 0, digit3 = 0, digit4 = 0;
    while (number_original < 1000 || number_original > 9999)
    {
        cout << "Enter a four-digit number: ";
		cin >> number_original;
    }
	digit4 = number_original % 10;
	number_original /= 10;
	digit3 = number_original % 10;
	number_original /= 10;
	digit2 = number_original % 10;
	number_original /= 10;
	digit1 = number_original % 10;
    number1 = digit1 * 10 + digit4;
	number2 = digit2 * 10 + digit3;
    if (number1 < number2) cout << "less";
    else if (number1 > number2) cout << "greater";
    else cout << "equal";
}

void task_laptop() 
{
    int price = 0, USBports = 0, RAM_size = 0, hasSSD = 0;
	cout << "Enter price, number of USB ports, RAM size (in GB), and 1 if it has SSD or 0 if not: ";
	cin >> price >> USBports >> RAM_size >> hasSSD;
    if(((price >= 1000 && price <= 1500) && USBports >= 3 && RAM_size >= 8 && hasSSD) ||
        price <= 800 && (RAM_size < 8 || !hasSSD)) cout << "Buy it!" << endl;
	else cout << "Don't buy it!" << endl;
}

void task_groceries() 
{
    int tomatoes = 0, peppers = 0, carrots = 0, olives = 0, potatoes = 0, spices = 0, friend_help = 0;
	cout << "Enter the quantities of tomatoes, peppers, carrots, olives, potatoes, spices and friend help(0 or 1): ";
    cin >> tomatoes >> peppers >> carrots >> olives >> potatoes >> spices >> friend_help;
    if (tomatoes >= 1 && peppers >= 2 && carrots >= 4 && olives >= 3 && potatoes >= 3 && spices >= 150)
    {
        cout << "He can make salad." << endl;
    }
	else cout << "He can't make salad." << endl;
    if (tomatoes >= 2 && peppers >= 3 && carrots >= 5 && olives >= 6 && potatoes >= 10 && spices >= 200 && friend_help)
    {
		cout << "He can make soup." << endl;
    }
	else cout << "He can't make soup." << endl;
    if (tomatoes >= 5 && peppers >= 6 && carrots >= 12 && olives >= 7 && potatoes >= 12 && spices >= 300 && friend_help)
    {
        cout << "He can make casserole." << endl;
    }
    else cout << "He can't make casserole." << endl;
}

void task_14() 
{
    int drink_type = 0;
    double money = 0;
	cout << "Enter drink type (1-3) and money inserted: ";
    cin >> drink_type >> money;
    switch (drink_type) {
    case 1:
        if (money >= 2) cout << "Take your drink!" << endl;
		else cout << "Not enough money!" << endl;
        break;
    case 2:
        if (money >= 1.5) cout << "Take your drink!" << endl;
        else cout << "Not enough money!" << endl;
        break;
    case 3:
        if (money >= 2.5) cout << "Take your drink!" << endl;
        else cout << "Not enough money!" << endl;
        break;
    default:
		cout << "Invalid option!" << endl;
        break;
    }
}

int main()
{
	task1();
	task2();
	task3();
	task4();
	task5();
	task6();
	task7();
	task8();
	task9();
	task10();
	task11();
	task12();
    task13();
    task_laptop();
    task_groceries();
	task_14();
	return 0;
}



