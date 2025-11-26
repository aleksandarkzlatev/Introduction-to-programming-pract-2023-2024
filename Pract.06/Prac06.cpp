// Prac06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void task1() {
	const int N = 5;
	int arr[N];
	for (int i = 0; i < N; i++) {
		cout << "Enter element " << i + 1 << ": ";
		cin >> arr[i];
	}
	for (int i = 0; i < N; i++) {
		for (int j = i; j < N; j++) {
			if (arr[i] == arr[j]) cout << arr[i];
		}
	}
}

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void task2() {
	const int N = 5;
	int arr[N];
	for (int i = 0; i < N; i++) {
		cout << "Enter element " << i + 1 << ": ";
		cin >> arr[i];
	}
	for (int i = 0; i < N; i++) {
		for (int j = i; j < N; j++) {
			if(arr[i] % 2 != 0 && arr[j] % 2 == 0) {
				swap(arr[i], arr[j]);
			}
			if (arr[i] > arr[j] && arr[i] % 2 == 0 && arr[j] % 2 == 0) swap(arr[i], arr[j]);
			if (arr[j] > arr[i] && arr[i] % 2 != 0 && arr[j] % 2 != 0) swap(arr[i], arr[j]);
		}
	}
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
}

void task3(int N){
	int arr[8], count = 0;
	for (; N > 0; N /= 2, count++) {
		if (N % 2 == 0) arr[count] = 0;
		else arr[count] = 1;
	}
	for (count -= 1; count >= 0; count--) {
		cout << arr[count];
	}
}

void task4(int number) {
	const int number_length = 4;
	int arr[number_length], j = number_length - 1;
	for (int i = 0; i < number_length; i++, number /= 10) arr[i] = number % 10;
	for (int i = 0; i < j; i++, j--) {
		if (arr[i] != arr[j]) {
			cout << "Not a palindrome";
			return;
		}
	}
	cout << "Is a palindrome";
}

bool contains(int arr[], int length, int value) {
	for (int i = 0; i < length; i++) {
		if (arr[i] == value) return true;
	}
	return false;
}

void task5() {
	const int N1 = 4, N2 = 4;
	int biggerN = 0;
	int arr1[N1], arr2[N2], arr3[N1 + N2], arr3_length = 0;
	for (int i = 0; i < N1; i++) {
		cout << "Enter element " << i + 1 << " of array 1: ";
		cin >> arr1[i];
	}
	for (int i = 0; i < N2; i++) {
		cout << "Enter element " << i + 1 << " of array 2: ";
		cin >> arr2[i];
	}
	for (int i = 0; i < N1; i++) {
		for (int j = 0; j < N2; j++) {
			if(arr1[i] == arr2[j] && !contains(arr3, arr3_length, arr1[i])) {
				arr3[arr3_length] = arr1[i];
				arr3_length++;
			}
		}
	}
	for (int i = 0; i < arr3_length; i++) {
		cout << arr3[i] << " ";
	}
}

void task5_bonus() {
	const int N1 = 4, N2 = 4;
	int biggerN = 0;
	int arr1[N1], arr2[N2], arr3[N1 + N2], arr3_length = 0;
	for (int i = 0; i < N1; i++) {
		cout << "Enter element " << i + 1 << " of array 1: ";
		cin >> arr1[i];
	}
	for (int i = 0; i < N2; i++) {
		cout << "Enter element " << i + 1 << " of array 2: ";
		cin >> arr2[i];
	}
	int i = 0, j = 0;
	while (i < N1 && j < N2) {
		if (arr1[i] < arr2[j]) {
			i++;
		}
		else if (arr1[i] > arr2[j]) {
			j++;
		}
		else{
			if(!contains(arr3, arr3_length, arr1[i])) arr3[arr3_length++] = arr1[i];
			i++;
			j++;
		}
	}
	for (int i = 0; i < arr3_length; i++) {
		cout << arr3[i] << " ";
	}
}

void task6() {
	const int N = 5;
	int arr[N];
	bool is_ordered = false;
	for (int i = 0; i < N; i++) {
		cout << "Enter element " << i + 1 << ": ";
		cin >> arr[i];
	}
	for (int i = 0; i < N - 1; i++) {
		if (i % 2 == 0) {
			if (arr[i] <= arr[i + 1]) {
				swap(arr[i], arr[i + 1]);
			}
		}
		else {
			if (arr[i] >= arr[i + 1]) {
				swap(arr[i], arr[i + 1]);
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
}

void task7(){
	const int N = 3;
	int arr[N][N];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << "Enter element [" << i << "][" << j << "]: ";
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = i; j < N; j++) {
			if (i != j) swap(arr[i][j], arr[j][i]);
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void task8() {
	const int N = 2, M = 3, K = 2;
	int arr1[N][M], arr2[M][K], arr3[N][K];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << "Enter element [" << i << "][" << j << "] of matrix 1: ";
			cin >> arr1[i][j];
		}
	}
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < K; j++) {
			cout << "Enter element [" << i << "][" << j << "] of matrix 2: ";
			cin >> arr2[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			arr3[i][j] = 0;
			for (int k = 0; k < M; k++) {
				arr3[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			cout << arr3[i][j] << " ";
		}
		cout << endl;
	}
}

void task_tic_tac_toe(){
	int board[3][3] = { 0 };
	int curr_player = 1;
	for (int turn = 0; turn < 9; turn++) {
		int row = 0, col = 0;
		do{
			cout << "Player " << curr_player << ", enter your move (row and column): ";
			cin >> row >> col;
		} while ((row < 0 || row > 2 || col < 0 || col > 2) || board[row][col] != 0);
		board[row][col] = curr_player;
		if (curr_player == 1) curr_player = 2;
		else curr_player = 1;
		for(int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if(board[i][j] == 1) cout << "O ";
				else if (board[i][j] == 2) cout << "X ";
				else cout << ". ";
			}
			cout << endl;
		}
		for (int i = 0; i < 3; i++) {
			if(board[i][0] != 0 && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
				cout << "Player " << board[i][0] << " wins!" << endl;
				return;
			}
			else if (board[0][i] != 0 && board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
				cout << "Player " << board[0][i] << " wins!" << endl;
				return;
			}
		}
		if (board[0][0] != 0 && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
			cout << "Player " << board[0][0] << " wins!" << endl;
			return;
		}
		if (board[0][2] != 0 && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
			cout << "Player " << board[0][2] << " wins!" << endl;
			return;
		}
	}
	cout << "It's a draw!\n";
}

int main()
{
	task_tic_tac_toe();
	return 0;
}