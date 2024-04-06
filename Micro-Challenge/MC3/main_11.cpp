#include <iostream>

int main() {
    // first, need n days input
    int n;
    std::cin >> n;
    
    // initialization for the minimum criteria & our day for launch to be determined
    if (n < 1 || n > 100000) {
        return 1;
    }

    int minJunk = 100000; 
    int minDay = 0;

    // reading junk values for each day
    for (int i = 0; i < n; ++i) {
      
        int junk;
        std::cin >> junk;

        if (junk < 0 || junk > 109) {
            return 1;
        }

        // min junk goes hand in hand woth launch date
        if (junk < minJunk) {
            minJunk = junk;
            minDay = i + 1; // Adding 1 to match the day count
        }
    }
    
    std::cout << minDay << std::endl;

    return 0;
}
