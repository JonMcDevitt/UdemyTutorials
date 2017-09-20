#include <iostream>
#include <fstream>

using namespace std;

/** Structs are padded for efficiency of transfer to and from memory. To write to and from a file, we need to remove
 *  that padding. To do so, we use the pragma pack() function.
 *  */

#pragma pack(push, 1)    /** Align with single-byte boundaries. */
struct Person {
    char name[50];
    int age;
    double height;
};
#pragma pack(pop)  /** Allow the rest to be padded where necessary.    */

int main() {
    /** Writing Files   */
    ofstream outFile;
//    fstream outFile;

    string outputFileName = "../TextFiles/text.txt";
    outFile.open(outputFileName);
//    outFile.open(outputFileName, ios::out);

    if (outFile.is_open()) {
        for (int i = 1; i <= 10; i++) {
            outFile << i << ". This is a";
            if (i != 1) {
                outFile << "nother";
            }
            outFile << " line." << endl;
        }

        outFile.close();
    } else {
        cout << "Could not create file: " << outputFileName << endl;
    }

    /** Reading Files   */
    ifstream inFile;

    string inFileName = "../TextFiles/test.txt";
    inFile.open(inFileName);

    if (inFile.is_open()) {
        string line;

        while (!inFile.eof()) {
            getline(inFile, line);
            cout << line << endl;
        }

        inFile.close();
    } else {
        cout << "Cannot open file " << inFileName << endl;
    }

    /** Parsing */
    ifstream statsFile;

    string statsFileName = "../TextFiles/stats.txt";
    statsFile.open(statsFileName);

    if (!statsFile.is_open()) {
        return EXIT_FAILURE;
    }

    while (!statsFile.eof()) {
        string line;
        getline(statsFile, line, ':');

        int population;
        statsFile >> population;
        statsFile.get();

        cout << line << " -- " << population << endl;
    }

    statsFile.close();

    /** Structs and Padding
     *      See struct at top of screen */

    /** Reading and Writing binary files    */

    Person person = {"Frodo", 220, 0.8};

    string fileName = "../TextFiles/test.bin";
    ofstream binFile;

    /** If we use fstream rather than ofstream, then do the following:
     *
     *  binFile.open(filename, ios::binary|ios::out);
     *  */
    binFile.open(fileName, ios::binary);

    if (binFile.is_open()) {
        /** ofstream.write(data, memory_to_allocate)
         *
         *  DO NOT USE reinterpret_cast<new_type*>. This is an insecure method of casting.
         *  */
        binFile.write((char*)&person, sizeof(Person));

        binFile.close();
    } else {
        cout << "Error: Cannot open binary file " << fileName << " for writing." << endl;
    }

    ifstream binToRead;
    binToRead.open(fileName);

    Person person2 = {};

    if(binToRead.is_open()) {
        binToRead.read((char*)&person2, sizeof(Person));

        binToRead.close();
    } else {
        cout << "Error: Cannot read file " << fileName << endl;
    }

    cout << person2.name << "\n" << person2.age << "\n" << person2.height << endl;

    return EXIT_SUCCESS;
}