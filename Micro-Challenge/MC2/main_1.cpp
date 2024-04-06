
// helping Birk determine what day has least space junk so he can 
// launch his rocket to avoid crashing
// first line is n. n criteria is 1<= n <= 100000
// second line is junk in days. criteria is integers between 0-109
#include <iostream>

int main() {
    // first, need n days input
    int n;
    std::cin >> n;
    
    // initialization for the minimum criteria & our day for launch to be determined
    if (n < 1 || n > 100000) {
        return 1;
    }

    int minJunk = 1000000000; 
    int minDay = -1;

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
            minDay = i;
        }
    }
    
    std::cout << minDay << std::endl;

    return 0;
}
