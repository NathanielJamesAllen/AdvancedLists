// Source2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void print_list(int[], int);

void reverse_print_list(int[], int);

void clear_list(int[], int);

int main()
{
    int list[5];
    int i, num;
    
    
    for (i = 0; i < 5; i++) {
        cout << "Enter a number: ";
        cin >> num;

        list[i] = num;
    }

    print_list(list, 5);

    reverse_print_list(list, 5);

    clear_list(list, 5);

    
   

    return 0;


}
void print_list(int a[], int n) {
    int i;

    cout << "\n\n";
    for (i = 0; i <= n; i++) {
        cout << "Entry " << i << " is the number: " << a[i] << endl;


    }
}
void reverse_print_list(int a[], int n){
    int i;

    cout << "\n\n";
    for (i = n; i >= 0; i--) {
        cout << "Entry" << i << "is the number" << a[i] << endl;
    }
}
void clear_list(int a[], int n) {
    int i;

    for (i = 0; i <n; i++) {
        a[i] = 0;
    }
}


