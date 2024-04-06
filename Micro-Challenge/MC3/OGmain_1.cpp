#include <iostream>

int findLaunchDay(int n, int spaceJunk[]) {
    int minJunk = 1000000; 
    int launchDay = 0;
    
    for (int i = 0; i < n; ++i) {
        if (spaceJunk[i] < minJunk) {
            minJunk = spaceJunk[i];
            launchDay = i;
        }
    }
    
    return launchDay;
}

int main() {
    int n;
    std::cin >> n;
    
    int spaceJunk[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> spaceJunk[i];
    }
    
    int launchDay = findLaunchDay(n, spaceJunk);
    std::cout << launchDay << std::endl;
    
    return 0;
}
