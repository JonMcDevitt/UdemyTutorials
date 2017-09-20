#include <iostream>
#include <sstream>
#include <fstream>

#include "Exercises.h"
#include "Exceptions/InputException.h"

#define TEXT_FILE_PATH "TextFiles"
#define LIST_FILE_NAME "List.txt"

string DisplayOptions();

int GetUserInput();

void HandleOptions(int option);

void RunPracticeExercises();

void RunTestExercise();

void DisplayTestOptions();

void AddNameToList(list<string>& values);

void RemoveNameFromList(list<string>& values);

int main() {
    cout << "Please select from the following options:\n\n" << DisplayOptions() << endl;
    try {
        auto option = GetUserInput();
        HandleOptions(option);
    } catch (InputException &error) {
        cout << error.what() << endl;
    }
    return EXIT_SUCCESS;
}

string DisplayOptions() {
    vector<string> options;

    options.emplace_back("1. Run practice exercises.");
    options.emplace_back("2. Run test exercise.");

    stringstream msg;

    for (auto &curr : options) {
        msg << curr << endl;
    }

    return msg.str();
}

void HandleOptions(int option) {
    switch (option) {
        case 1:
            RunPracticeExercises();
            break;
        case 2:
            RunTestExercise();
            break;
        default:
            cout << "That option is not available." << endl;
    }
}

void RunPracticeExercises() {
    Exercises::Vectors();
    Exercises::VectorsAndMemory();
    Exercises::TwoDimVectors();
    Exercises::Lists();
    Exercises::Maps();
    Exercises::CustomObjectsAsMapValues();
    Exercises::CustomObjectsAsMapKeys();
    Exercises::MultiMaps();
    Exercises::Sets();
    Exercises::StacksAndQueues();
    Exercises::SortingVectors();
}

/** Test Exercise
 *
 *  Write a program which presents a menu. Depending on the user's selection, add or remove items from the list, or
 *  remove items from the list. For extra practice, use text files to read from and write to.
 *  */
void RunTestExercise() {
    list<string> names;

    cout << "Processing list..." << endl;

    fstream input;
    stringstream list_file_path;
    list_file_path.str("");
    list_file_path << "../" << TEXT_FILE_PATH << "/" << LIST_FILE_NAME;
    string filepath;
    list_file_path >> filepath;

    input.open(filepath, fstream::in | fstream::out | fstream::app);


    if (!input) {   /** If the file does not exist or is not created successfully, then we must do a workaround to
                     *  create it. */
        cout << "File does not exist. Initializing file..." << endl;
        input.open(filepath, fstream::in | fstream::out | fstream::trunc);
        input << "\n";
        input.close();
    } else {    /** Otherwise, work as normal. */
        cout << "File found." << endl;

        string line;
        while(!input.eof()) {
            getline(input, line);
            names.emplace_back(line);
            input.get();
            cout << line << endl;
        }
        input.close();

        cout << "Please select from the following options: " << endl;
        DisplayTestOptions();
        int choice = GetUserInput();
        while(choice != 0) {
            cin.clear();
            switch (choice) {
                case 1:
                    AddNameToList(names);
                    break;
                case 2:
                    RemoveNameFromList(names);
                    break;
                case 3:
                    for(auto &curr : names) {
                        cout << curr << endl;
                    }
                    break;
                default:
                    cout << "Invalid choice. Please select again.";
                    break;
            }

            DisplayTestOptions();
            choice = GetUserInput();
        }

        input.clear();
        input.open(filepath, fstream::in | fstream::out | fstream::app);
        for(auto &name : names) {
            input << name << endl;
        }
        input.close();

        cout << "Exiting system..." << endl;
    }


}

void RemoveNameFromList(list<string>& values) {
    cout << "Enter a name to search for." << endl;
    string name;
    cin >> name;
    cin.ignore();

    for (auto curr = values.begin(); curr != values.end(); curr++) {
        if (*curr == name) {
            values.remove(*curr);
            break;
        }
    }
}

void AddNameToList(list<string>& values) {
    cout << "Enter a name." << endl;
    string name;
    cin >> name;
    cin.ignore();
    values.emplace_back(name);
}

void DisplayTestOptions() {
    stringstream display;
    vector<string> options;

    options.emplace_back("0. Exit");
    options.emplace_back("1. Add to list.");
    options.emplace_back("2. Remove from list.");
    options.emplace_back("3. Print list.");

    for(auto &option : options) {
        cout << option << endl;
    }
    cout << endl;
}

int GetUserInput() {
    string input;
    getline(cin, input);
    cin.clear();
    int option = input[0] - '0';

    return option;
}