#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

std::string subDomain(const std::string& url) {
    size_t begin = url.find("//");
    if (begin == std::string::npos) {
        std::cerr << "Invalid URL format" << std::endl;
        return "";
    }

    size_t starting_domain = begin + 2;
    size_t findSlash = url.find('/', starting_domain);

    size_t portPosition = url.find(':', starting_domain);
    if (portPosition != std::string::npos && (findSlash == std::string::npos || portPosition < findSlash)) {
        findSlash = portPosition;
    }

    std::string hostname = url.substr(starting_domain, findSlash - starting_domain);
    
    std::transform(hostname.begin(), hostname.end(), hostname.begin(), [](unsigned char c) { return std::tolower(c); });

    return hostname;
}

int main() {
    std::string inputUrl;
    std::getline(std::cin, inputUrl);

    std::string lowerCaseHostname = subDomain(inputUrl);
    if (!lowerCaseHostname.empty()) {
        std::cout << lowerCaseHostname << std::endl;
    }

    return 0;
}
