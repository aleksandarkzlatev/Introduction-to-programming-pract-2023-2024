// Pract03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void task1() 
{
    int n = 0;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
}

void task2() {
    int n = 0, x = 0, y = 0;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i < n; i++) {
        cout << "x = " << i << ", y = " << n - i << endl;
    }
}
void task3() {
    int n = 0, reversed = 0;
    cout << "Enter n: ";
    cin >> n;
    n *= n;
    for (; n > 0; n /= 10) {
        if (n % 10 != 0) {
            reversed = reversed * 10 + n % 10;
        }
    }
    cout << "Reversed n: " << reversed << endl;
}

void task4() {
    int n = 0, m = 0, number = 1;
    cout << "Enter n and m: ";
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }
}

void task5()
{
    int n = 0, guess = 0, guesses_made = 0;
    do {
        cout << "Enter n: ";
        cin >> n;
    } while (n < 0 || n > 100);
    for (; guess != n; guesses_made++) {
        cout << "Make a guess: ";
		cin >> guess;
        if(guess < n) cout << "Too low!" << endl;
		else if (guess > n) cout << "Too high!" << endl;
    }
	cout << "You guessed it in " << guesses_made << " tries!" << endl;
}

void task6() 
{
    int n = 0, number = 0, answer = 0, i = 0, expected_sum = 0, actual_sum = 0;
    cout << "Enter n: ";
    cin >> n;
    for (; i < n - 1; i++, expected_sum += i) {
         cout << "Enter number: ";
         cin >> number;
         actual_sum += number;
    }
    expected_sum += n;
	cout << "Missing number is: " << expected_sum - actual_sum << endl;
}

void task7() {
    int n = 0;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = j; k < n; k++) {
				if (i * i + j * j == k * k) cout << i << " " << j << " " << k << endl;
            }
        }
    }
}

void task8()
{
    int n = 0;
    char S = ' ';
    cout << "Enter n and S: ";
    cin >> n >> S;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++) cout << S;
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++) cout << S;
        cout << endl;
    }
}

void task9() 
{
    int n = 0, prev_number = 1, next_number = 0;
    do {
        cout << "Enter n: ";
        cin >> n;
    } while (n < 3);
    cout << "1 ";
    for (int i = 1; i < n; i = next_number) {
		cout << i << " ";
        next_number = i + prev_number;
        prev_number = i;
    }
}

void task10() 
{
    int number = 0, temp = 0, length = 0, new_number_reverse = 0, new_number = 0;
    cout << "Enter n: ";
    cin >> number;
    temp = number;
    for (; temp > 0; length++) {
		temp /= 10;
    }

    if (length == 1) {
        cout << "0, 1" << endl;
        return;
    }

    for (int i = 0; i < length; i++, number /= 10) {
        if (length % 2 == 0) {
            if (i != length / 2 && i != length / 2 - 1) {
                new_number_reverse = new_number_reverse * 10 + number % 10;
            }
        }
        else {
            if (i != length / 2) {
                new_number_reverse = new_number_reverse * 10 + number % 10;
            }
        }
    }

    for (int i = 0; new_number_reverse > 0; new_number_reverse /= 10) {
		new_number = new_number * 10 + new_number_reverse % 10;
    }
        cout << "Reversed: " << new_number << ", " << new_number + 1 << endl;
}

void task11() {
    int a = 0, b = 0;
	cout << "Enter a and b: ";
    cin >> a >> b;
    if (a > b) {
		int temp = a;
        a = b;
		b = temp;
    }

    if (a <= 1) a = 2;
    for (int i = a; i <= b; i++) {
		bool is_prime = true;
        for (int j = 2; j < i / 2 + 1; j++) {
			if (i % j == 0) is_prime = false;
        }
		if (is_prime) cout << i << " ";
    }
    cout << endl;
}

void task12() {
    int number = 0;
	cout << "Enter number: ";
    cin >> number;
    if (number == 1) {
        cout << "true";
        return;
    } 
    while (number > 1) {
        if(number % 2 != 0){
            cout << "false";
            return;
		}
		number /= 2;
    }
	cout << "true";
}

void task13() {
    int number = 0;
    cout << "Enter number: ";
    cin >> number;
    while(number > 0) {
        for (int j = 0;; j++) {
            if (pow(2, j + 1) > number) {
				cout << "2^" << j;
                number -= pow(2, j);
				break;
            }
        }
		if (number > 0) cout << " + ";
	}
}

void task14() {
	int a = 0, b = 0, c = 0, d = 0, e = 0, fx = 0;
    cout << "Enter five numbers: ";
    cin >> a >> b >> c >> d >> e;
    for (int x = -100; x < 100; x++) {
		fx = a * pow(x, 4) + b * pow(x, 3) + c * pow(x, 2) + d * x + e;
		if (fx >= 0) cout << x << " ";
    }

}

int main()
{
    task14();
	return 0;
}

