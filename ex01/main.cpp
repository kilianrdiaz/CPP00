#include <iostream>
#include <string>
#include "Phonebook.hpp"

int main(void)
{
    PhoneBook phonebook;
    std::string command;

    while (true)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::cin >> command;
        if (command == "ADD")
        {
            // Code to add a contact
            std::cout << "Adding a contact..." << std::endl;
        }
        else if (command == "SEARCH")
        {
            // Code to search for a contact
            std::cout << "Searching for a contact..." << std::endl;
        }
        else if (command == "EXIT")
        {
            std::cout << "Exiting the phonebook." << std::endl;
            break;
        }
        else
        {
            std::cout << "Invalid command. Please try again." << std::endl;
        }
    }

    return 0;
}