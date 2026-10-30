#include <iostream>

// Homework 9 - Your Name
// CIS 5 Week 09 - Menu on the lab

// --- Function Declarations (Prototypes) ---
double average(const int a[], int n);
void printSummary(double avg);
void printMenu();
int high(const int a[], int n);

int main() {
    const int N = 4;
    int scores[N] = {80, 90, 70, 100};
    int choice = 0;

    do {
        printMenu();
        std::cin >> choice;
        
        if (choice == 1) {
            double avg = average(scores, N);
            printSummary(avg);
        } else if (choice == 2) {
            int top = high(scores, N);
            std::cout << "High: " << top << "\n";
        }
    } while (choice != 3);

    return 0;
}

// --- Function Definitions ---

double average(const int a[], int n) {
    if (n == 0) {
        return 0.0;
    }
    
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum / n;
}

void printSummary(double avg) {
    std::cout << "Average: " << avg << "\n";
}

void printMenu() {
    std::cout << "1) Average 2) High 3) Quit\n";
}

int high(const int a[], int n) {
    if (n <= 0) {
        return 0;
    }
    
    int maxVal = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > maxVal) {
            maxVal = a[i];
        }
    }
    return maxVal;
}
