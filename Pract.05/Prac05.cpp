// Prac05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int task0(int x, int y) {
    if(x > 0 && y > 0) {
        return 1;
    } else if(x < 0 && y > 0) {
        return 2;
    } else if(x < 0 && y < 0) {
        return 3;
    } else if(x > 0 && y < 0) {
        return 4;
    } else {
        return -1;
	}
}

void task1(int& a, int& b) {
    int result = a;
    for (int i = 0; i < b; i++) result *= a;
    a = result;
}

void task2(int& a, int& b, int& c) {
    a *= 2;
    b -= a/2;
    c += 10;
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void task3(int& a) {
    for(int i = a; ;i++)
    {
        if(is_prime(i)){
            a = i;
            break;
        }
    }
}
void task4(int& a, int& b, int& c) {
    int temp = 0;
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
	}
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
	}
}

void task5(char& a, char& b) {
    if(a > b) {
        char temp = a;
        a = b;
        b = temp;
	}
    else {
        cout << "ASCII of a: " << int(a);
		cout << ", ASCII of b: " << int(b) << endl;
    }
}

void task6(int& number) {
    int temp = 0;
    for (; number > 0; number /= 10) {
		temp = temp * 10 + number % 10;
    }
	number = temp;
}

void task7(int& number1, int& number2) {
	int result = 0, new_num = 0;
    for (int temp = number1; temp > 0; temp /= 10) {
		new_num = temp % 10 + number2;
		result = result * 10 + new_num % 10;
    }
    task6(result); // reverse number
	number1 = result;
}

void task8(int& number) {
    if (number >= 0) return;
	number = -number;
}

int main()
{
    int x = -4, y = 5, a = 3, b = 3, c = 7;   
    std::cout << "Result task 0: " << task0(x, y) << std::endl;
    task1(a, b);
	std::cout << "Result task 1: " << a << std::endl;
	task2(a, b, c);
    std::cout << "Result task 2: " << a << ", " << b << ", " << c << std::endl;
	task3(a);
	std::cout << "Result task 3: " << a << std::endl;
	task4(a, b, c);
	std::cout << "Result task 4: " << a << ", " << b << ", " << c << std::endl;
	char ch1 = 'z', ch2 = 'a';
	task5(ch1, ch2);
	cout << "Result task 5: " << ch1 << ", " << ch2 << std::endl;
	int number = 12345, number2 = 4;
	task6(number);
	std::cout << "Result task 6: " << number << std::endl;
	number = 12975;
    task7(number, number2);
	cout << "Result task 7: " << number << std::endl;
    return 0;
}
