#include <sstream>
#include <iostream>
#include <fstream>


int main()
{
    std::ofstream data("report.txt", std::ios::app);
    std::string in;
    std::string arr[4];

    if (data.is_open()) {

        for (int i = 0; i < 4; i++) {

            std::cout << "Please enter the data separated by a space : First name, Last name, date of issue, amount of money:" << std::endl;

            getline(std::cin, in);
            std::stringstream input(in);

            if (input >> arr[0] >> arr[1] >> arr[2] >> arr[3]) { 
            
                if (std::stoi(arr[2].substr(3, 2)) <= 12 && std::stoi(arr[2].substr(3, 2)) >= 1) {

                    for (int k = 0; k < 4; k++) {

                        data << arr[k] << ' ';

                    }

                    data << std::endl;

                }
                else {

                    std::cout << "Incorrect data is specified" << std::endl;

                }

            }
            else {

                std::cout << "Incorrect data is specified" << std::endl;

            }

        }

        data.close();

    }

}

