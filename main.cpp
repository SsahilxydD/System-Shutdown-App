#include <cstdlib> // For system()

int main() {
    // Execute the shutdown command
    system("shutdown /s /t 0");

    return 0;
}