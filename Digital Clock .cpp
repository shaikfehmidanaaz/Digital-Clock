#include <iostream>
#include <iomanip>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

int main() {

    cout << "=====================================\n";
    cout << "          DIGITAL CLOCK\n";
    cout << "=====================================\n";

    while (true) {

        // Get current system time
        time_t currentTime = time(nullptr);
        tm* localTime = localtime(&currentTime);

        // Clear screen
        cout << "\033[2J\033[H";

        cout << "=====================================\n";
        cout << "          DIGITAL CLOCK\n";
        cout << "=====================================\n\n";

        // Display HH:MM:SS
        cout << "              "
             << setfill('0')
             << setw(2) << localTime->tm_hour << ":"
             << setw(2) << localTime->tm_min << ":"
             << setw(2) << localTime->tm_sec
             << "\n\n";

        cout << "=====================================\n";
        cout << "Press Ctrl+C to stop the clock.\n";

        // Wait for one second
        this_thread::sleep_for(chrono::seconds(1));
    }

    return 0;
}
