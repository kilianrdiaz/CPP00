#include <iostream>
#include <string>
#include "../inc/PhoneBook.hpp"

int main(void)
{
    PhoneBook phonebook;
    std::string command;

    std::cout << std::endl << ">> Welcome to your PhoneBook! <<" << std::endl << std::endl;

    while (true)
    {
        if (std::cin.eof() == true)
		{
			std::cout << std::endl << "You Pressed ^D. Exiting phonebook now." << std::endl;
			exit(0);
		}
        std::cout << "> Enter command (ADD, SEARCH, EXIT): ";
        getline(std::cin, command);
        if (command == "ADD" || command == "add")
        {
            std::cout << std::endl << "~ Adding a contact..." << std::endl;
            phonebook.setInfo();
        }
        else if (command == "SEARCH" || command == "search")
        {
            std::cout << std::endl << "~ Searching for a contact..." << std::endl;
            phonebook.showContacts();
        }
        else if (command == "EXIT" || command == "exit")
        {
            std::cout << std::endl << "~ Exiting the phonebook." << std::endl;
            break;
        }
        else if (command == "\0")
            continue;
        else
        {
            std::cout << "- Invalid command. Please try again." << std::endl;
            continue;
        }
        std::cout << std::flush;
    }
    return 0;
}