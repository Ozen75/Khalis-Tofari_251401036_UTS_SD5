#include <iostream>
#include <string>
#define MAX 10

char stack[MAX];
int top = -1;

void push(char n){
    if (top == MAX - 1) {
        std::cout << "penuh!\n";
    } else {
        top++;
        stack[top] = n;
    }
}

int main() {
    int kata;
    std::cout << "input : ";
    std::cin >> kata;
    
    push(kata);

}