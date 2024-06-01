#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Error: invalid number of arguments." << std::endl;
        return (1);
    } else {
        try {
            BitcoinExchange btc;
            btc.readInput(argv[1]);
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
            return (1);
        }        
    }
    return (0);
}
