#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[])
{
    std::ifstream inputFile;
    std::ofstream outputFile;
    std::string outFileName;
    std::string lineRead;

    if (argc != 4)
    {
        std::cerr << "Program needs 3 arguments: " << std::endl;
        std::cerr << "- A text file as the first argument." << std::endl;
        std::cerr << "- A string present in the file to be replaced." << std::endl;
        std::cerr << "- A string to replace the original one." << std::endl;
        return 1;
    }

    inputFile.open(argv[1], std::ios::in);
    if (!inputFile)
    {
        std::cerr << "Error when opening file " << argv[1] << "." << std::endl;
        return 1;
    }

    outFileName = argv[1];
    outFileName.append(".replace");
    outputFile.open(outFileName.c_str(), std::ios::out);
    if (!outputFile)
    {
        std::cerr << "Error when creating file " << outFileName << "." << std::endl;
        inputFile.close();
        return 1;
    }

    std::string s1 = argv[2];
    std::string s2 = argv[3];
    size_t s1_len = s1.length();

    while (getline(inputFile, lineRead))
    {
        size_t pos = 0;
        size_t found = lineRead.find(s1);
        while (found != std::string::npos)
        {
            outputFile << lineRead.substr(pos, found - pos) << s2;
            pos = found + s1_len;
            found = lineRead.find(s1, pos);
        }
        outputFile << lineRead.substr(pos);
        if (!inputFile.eof())
            outputFile << "\n";
    }

    inputFile.close();
    outputFile.close();
    return 0;
}
