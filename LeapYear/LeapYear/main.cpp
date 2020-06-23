#include <iostream>

int main() {
    //variables
    int year = 0;

    //get input for the year
    std::cout << "What year do you want to check is a leap year? (input 4 digits)\n";
    std::cin >> year;

    //check if the year is a four-digit number
    if (year < 1000 || year > 9999) {
        std::cout << "This year is not a valid year, try again\n";
    }
    //check if the year is a leap year or not

    //can it be evenly divided by 4 & evenly divided by 100 & evenly divided by 400, if yes it is a leap year

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        std::cout << "The year " << year << " is a leap year!\n";
    }
    else {
        std::cout << "This year is not a leap year\n";
    }

    return 0;

}