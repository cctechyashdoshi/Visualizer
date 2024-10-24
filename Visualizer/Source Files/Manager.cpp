#include "../Header Files/Manager.h"
#include "../Header Files/FileRead.h"
#include "../Header Files/FileWrite.h"
#include "../Header Files/Triangulation.h"

void Manager::managerMain(std::string inputFile)
{
    STLReader reader;
    FileWrite writer;
    Triangulation triangulation;
    reader.read(inputFile, triangulation);
    writer.writeToFile("output.dat", triangulation);
    std::exit(0);
}
