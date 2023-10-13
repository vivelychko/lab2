#include <iostream>
using namespace std;

class LongDigits {
private:
    int choice = 0;

public:

    void showMenu() {
        do {
            cout << "[0] Quit" << endl;
            cout << "[1] Karatsubi's method" << endl;
            cout << "[2] Tooma-Kook's method" << endl;
            cout << "[3] Schoenhage's method" << endl;
            cout << "[4] Strassen's method" << endl;
            cout << "[5] Calculation of the inverse value with high accuracy" << endl;
            cout << "[6] Division of integers by Cook's algorithm" << endl;
            cout << "[7] Checking the prime number by Lemer's method" << endl;
            cout << "[8] Checking the prime number using the Rabin-Miller method" << endl;
            cout << "[9] Checking the prime number using the Solovey-Strauss method" << endl;
            cout << "[10] Checking the prime number using the Agrawal method" << endl;
            cout << "Enter choice (0-10): ";
            cin >> choice;
            cout << endl;

            switch (choice) {
                case 0: return;

                case 1:

                    break;

                case 2:

                    break;

                case 3:

                    break;

                case 4:

                    break;

                case 5:

                    break;

                case 6:

                    break;

                case 7:

                    break;

                case 8:

                    break;

                default:
                    cout << "Invalid choice. Select from 0 to 10!" << endl;
                    break;
            }

            cout << endl;
        } while (true);
    }
};

int main() {
    LongDigits longDigits;
    longDigits.showMenu();
}