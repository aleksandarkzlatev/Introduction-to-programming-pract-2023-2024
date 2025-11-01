// Prac04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int sum(int a, int b) 
{
    return a + b;
}

bool isEven(int number)
{
    return number % 2 == 0;
}

bool isPositive(int number)
{
    return number > 0;
}

bool isNegative(int number)
{
    return number < 0;
}

int absolute(int number)
{
    return number >= 0 ?number : -number;
}

double fabsolute(double number)
{
    return number >= 0 ? number : -number;
}

void print(char S, int N)
{
    for(int i = 0; i < N; i++){
        cout << S;
    }
}

bool checkSymbol(char S)
{
    return (S >= 'A' && S <= 'Z') || (S >= 'a' && S <= 'z');
}

bool isCapitalLetter(char S)
{
    if (checkSymbol(S)) {
        return S >= 'A' && S <= 'Z';
    }
    return false;
}

int askUset(int from, int to)
{
    int number = 0;
    do {
        cout << "Please enter a number between " << from << " and " << to << ": ";
        cin >> number;
    } while (number < from || number > to);
    return number;
}

bool numberIsInInterval(int number, int from, int to)
{
    return number >= from && number <= to;
}

int power(int num, unsigned int N)
{
    int result = 1;
    for (int i = 0; i < N; i++) {
        result *= num;
    }
    return result;
}

int calculate(int a, int b, char action)
{
    switch (action) {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    case '%':
        return a % b;
    default:
        return a + b;
    }
}

int reverseDigits(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

void toBinary(int number)
{
    int binary = 0, zerosToPrint = 0;
    while (number > 0)
    {
        if (number % 2 == 0 && binary == 0) zerosToPrint++;
        binary = binary * 10 + (number % 2);
        number /= 2;
    }

    cout << reverseDigits(binary);
    for (int i = 0; i < zerosToPrint; i++) cout << 0;
}

void biggestDivider()
{
    int a = 0, b = 0, c = 0, d = 0;
    cout << "Enter a, b, c, d: ";
    cin >> a >> b >> c >> d;
    for (int i = max(a, b); i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            cout << i << endl;
            break;
        }
    }
    for (int i = max(c, d); i > 0; i--) {
        if (c % i == 0 && d % i == 0) {
            cout << i << endl;
            break;
        }
    }
    for (int i = max(max(a, b), max(c, d)); i > 0; i--){
        if (a % i == 0 && b % i == 0 && c % i == 0 && d % i == 0) {
            cout << i << endl;
            break;
        }
    }
}

int checkInput(int number)
{
    while(number < 100 || number > 100000){
        cout << "Invalid input. Please enter a number between 100 and 100000: ";
		cin >> number;
    }
    return number;
}

void ClosestToPowOfTwo(int number)
{
	number = checkInput(number);
    for(int i = 0; i < 20; i++){
        if(pow(2, i) >= number){
            if(abs(pow(2, i) - number) < abs(pow(2, i - 1) - number)){
                cout << "Closest power of two is: " << pow(2, i) << endl;
            } else {
                cout << "Closest power of two is: " << pow(2, i - 1) << endl;
            }
            break;
		}
    }
}

bool isPrime(int number)
{
    int cnt = 0;
    if (number <= 1) return false;
    for (int i = 1; i <= number; i++) {
    if (number % i == 0)
          cnt++;
    }
    if (cnt > 2) return false;
    return true;
}

void primeNumbersUntillN(int number)
{
    for(int i = 2; i < number; i++){
        if (isPrime(i)) cout << i << " ";
    }
    cout << endl;
}

void IsSumOfPrimeNumbers(int number)
{
    for(int i = 2; i <= number / 2; i++){
        if(isPrime(i) && isPrime(number - i)){
            cout << number << " = " << i << " + " << number - i << endl;
            return;
		}
    }
}

int digitSum(long long int number){
    if (number < 10) return number;
    int sum = 0;
    while(number > 0){
        sum += number % 10;
		number /= 10;
    }
	if (sum > 10) return digitSum(sum);
	return sum;
}

void printFactors(int number){
    for (int i = 2; number > 1; i++) {
        while(number % i == 0) {
            cout << i;
            number /= i;
            if (number > 1) cout << ".";
        }
    }
}

int main()
{
    printFactors(31668);
	return 0;
}
