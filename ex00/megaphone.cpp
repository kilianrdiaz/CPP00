#include <iostream>
#include <cctype>

int is_lowercase(char c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    return (0);
}

int main(int argc, char **argv)
{
    int     i;
    int     j;

    i = 1;
    if (argc < 1)
        return 0;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (i < argc)
        {
            j = 0;
            while (argv[i][j])
            {
                if (is_lowercase(argv[i][j]))
                    argv[i][j] -= 32;
                std::cout << argv[i][j];
                j++;
            }
            if (i < argc - 1)
                std::cout << " ";
            i++;
        }
        std::cout << std::endl;
    }
    return 0;
}