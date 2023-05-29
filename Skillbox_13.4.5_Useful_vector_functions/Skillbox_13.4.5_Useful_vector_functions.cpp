
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec;
    int number;
    int count = 0;

    std::cout << "Choose the number:\n"
        << "1 - vec.push_back(number); add element to vector\n"
        << "2 - vec.empty(); remove the last element\n"
        << "3 - vec.front(); vec.back(); show the first and last elements of the vector\n"
        << "4 - show all number elements of the vector\n"
        << "5 - show the count of elements in the vector\n"
        << "-1 - exit the program\n";

    while (true) {
        std::cout << "Choose the number:\n";
        std::cin >> number;

        if (number == -1)
            break;

        if (number == 1) {
            std::cout << "Enter the number element to vector: ";
            std::cin >> number;
            vec.push_back(number);
            count++;
        }
        else if (number == 2) {
            if (vec.empty()) {
                std::cout << "Error, vector is empty.\n";
            }
            else {
                std::cout << "Remove the last element.\n";
                vec.pop_back();
            }
        }
        else if (number == 3) {
            if (vec.empty()) {
                std::cout << "Error, vector is empty.\n";
            }
            else {
                std::cout << "Show the first and last elements of the vector " 
                        << vec.front() << " " << vec.back() << '\n';
            }
        }
        else if (number == 4) {
            if (vec.empty()) {
                std::cout << "Error, vector is empty.\n";
            }
            else {
                std::cout << "Show all number elements of the vector: ";
                for (int i = 0; i < vec.size(); i++) {
                    std::cout << vec[i];
                    if (i != vec.size() - 1)
                        std::cout << ", ";
                }
                std::cout << '\n';
            }
        }
        else if (number == 5) {
            std::cout << "Show the count of elements in the vector: " << count << '\n';
        }
        else {
            std::cout << "Invalid input.\n";
        }
    }

    return 0;
}
