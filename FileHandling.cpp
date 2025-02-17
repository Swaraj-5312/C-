#include <iostream>
#include <fstream>

int main() {
    // Open a file for writing
    std::ofstream myfile("example.txt");  // Create or open the file
    if (!myfile) {  // Check if file failed to open
        std::cout << "Unable to open file for writing" << std::endl;
    } else {
        myfile << "This is Chetan\n";
        myfile << "This student is Yash";
        myfile.close();
    }

    // Open the file for reading
    std::ifstream infile("example.txt");  // Open file for reading
    if (!infile) {  // Check if file failed to open
        std::cout << "Unable to open file for reading" << std::endl;
    } else {
        std::string line;
        while (std::getline(infile, line)) {  // Read line-by-line
            std::cout << line << std::endl;
        }
        infile.close();
    }

    return 0;
}
