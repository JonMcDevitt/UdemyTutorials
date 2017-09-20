//
// Created by Owner on 9/14/2017.
//

#include <set>
#include <stack>
#include <utility>
#include <queue>
#include <algorithm>
#include "Exercises.h"
#include "Objects/Person.h"

void Exercises::Vectors() {
    cout << endl << "----Vectors----" << endl;

    vector<string> stringVector;

    stringVector.emplace_back("one");
    stringVector.emplace_back("two");
    stringVector.emplace_back("three");

    for (auto &start : stringVector) {
        cout << start << endl;
    }
}

void Exercises::VectorsAndMemory() {
    cout << endl << "----Vectors and Memory----" << endl;

    vector<double> numbers(2);

    int cap = numbers.capacity();
    cout << "Capacity: " << cap << endl;

    for (int i = 0; i < 10000; i++) {
        numbers.push_back((double) i);
        if (numbers.capacity() != cap) {
            cap = numbers.capacity();
            cout << "Capacity: " << cap << endl;
        }
    }
}

void Exercises::TwoDimVectors() {
    cout << endl << "----2-D Vectors----" << endl;

    vector<vector<int>> grid(13, vector<int>(13, 0)); /** 3x4 table of 0s */

    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            grid[i][j] = i * j;
            if (grid[i][j] == 0) {
                grid[i][j] = i + j;
            }
        }
    }

    for (auto &row : grid) {
        for (auto &cell : row) {
            cout << cell << "\t" << flush;
        }
        cout << endl;
    }
}

void Exercises::Lists() {
    cout << endl << "----Lists----" << endl;

    list<int> numList;

    numList.push_back(1);
    numList.push_back(2);
    numList.push_back(3);

    auto curr = numList.begin();

    while (curr != numList.end()) {
        cout << "Element " << *curr << "\t";
        cout << "Address " << &curr << endl;
        curr++;
    }
    cout << endl;

    curr = numList.begin();
    curr++;
    numList.insert(curr, 1010);

    for (curr = numList.begin(); curr != numList.end(); curr++) {
        cout << "Element: " << *curr << endl;
    }
    cout << endl;

    auto eraseCurr = numList.begin();
    eraseCurr++;
    numList.erase(eraseCurr);

    for (curr = numList.begin(); curr != numList.end();) {
        if (*curr == 2) {
            numList.insert(curr, 1234);
        }

        if (*curr == 1) {
            curr = numList.erase(curr);
        } else {
            curr++;
        }
    }

    for (curr = numList.begin(); curr != numList.end(); curr++) {
        cout << "Element: " << *curr << endl;
    }
}

void Exercises::Maps() {
    cout << "----Maps----" << endl;

    map<string, int> people;

    people["Mike"] = 40;
    people["Rahj"] = 20;
    people["Vicky"] = 30;

    cout << people["rahj"] << endl;

    /** Iterate with an iterator    */
    for (auto &curr : people) {
        cout << curr.first << ": " << curr.second << endl;
    }

    /** Access pair directly    */
    for (auto &curr : people) {
        pair<string, int> age = curr;
        cout << age.first << ": " << age.second << endl;
    }

    if (people.find("Vicky") != people.end()) {
        cout << "Found Vicky." << endl;
    } else {
        cout << "Key not found." << endl;
    }
}

void Exercises::CustomObjectsAsMapValues() {
    cout << "----Custom Objects as Map Values----" << endl;

    map<int, Person> people;

    people[0] = Person("Mike", 40);
    people[1] = Person("Raj", 20);
    people[2] = Person("Vicky", 30);

    for (auto &curr : people) {
        cout << curr.first << "" << flush << endl;
        curr.second.Print();
    }
}

void Exercises::CustomObjectsAsMapKeys() {
    cout << "----Custom Objects as Map Keys----" << endl;

    map<Person, int> people;

    people[Person("Mike", 40)] = 40;
    people[Person("Mike", 10)] = 10;
    people[Person("Sue", 30)] = 30;
    people[Person("Raj", 20)] = 20;

    for (auto &curr : people) {
        cout << curr.second << ": " << flush;
        curr.first.Print();
        cout << endl;
    }
}

void Exercises::MultiMaps() {
    cout << "----MultiMaps----" << endl;

    /** Used to store maps with multiple keys*/

    multimap<int, string> lookup;

    lookup.insert(make_pair(10, "Mike"));
    lookup.insert(make_pair(20, "Sarah"));
    lookup.insert(make_pair(30, "Raj"));
    lookup.insert(make_pair(30, "Bob"));
    lookup.insert(make_pair(40, "Srini"));
    lookup.insert(make_pair(50, "Kat"));

    cout << "Getting all elements from the list." << endl;
    for (auto &curr : lookup) {
        cout << "\t" << curr.first << ": " << curr.second << endl;
    }
    cout << endl;

    cout << "Getting all elements starting from key 30" << endl;
    for (auto curr = lookup.find(30); curr != lookup.end(); curr++) {
        cout << "\t" << curr->first << ": " << curr->second << endl;
    }
    cout << endl;

    cout << "Getting all elements whose key is 30" << endl;
    auto rangeIterator = lookup.equal_range(30);
    auto curr = rangeIterator.first;
    int distance = std::distance(rangeIterator.first, rangeIterator.second);
    int currPointer = 0;

    for (currPointer = 0; currPointer < distance && curr != rangeIterator.second; curr++, currPointer++) {
        cout << "\t" << curr->first << ": " << curr->second << endl;
    }
}

void Exercises::Sets() {
    cout << "----Sets----" << endl;

    /** Exercise: Add values to a set. Start with primitive, then add objects */
    set<int> nums;

    for (int i = 0; i < 5; i++) {
        nums.insert(i + 1);
    }

    for (auto &curr : nums) {
        cout << curr << ", ";
    }
    cout << endl << endl;

    set<Person> people;
    people.insert(Person("Mike", 40));
    people.insert(Person("Mike", 10));
    people.insert(Person("Sue", 30));
    people.insert(Person("Raj", 20));

    for (auto &curr : people) {
        curr.Print();
    }
    cout << endl;

}

class Test {
private:
    string name;
    int id;
public:
    explicit Test(int id, string name) : name(std::move(name)), id(id) {
    }

    void print() const {
        cout << name << endl;
    }

    Test &operator=(const Test &test) {
        this->name = test.name;
    }

    bool operator<(const Test &test) const {
        return id < test.id && name < test.name;
    }

    bool operator==(const Test &test) const {
        return id == test.id && name == test.name;
    }

    bool operator>(const Test &test) const {
        return id > test.id && name > test.name;
    }

    bool compareTo(const Test &test) const {
        if(this < &test) {
            return -1;
        } else if (this == &test) {
            return 0;
        }
        return 1;
    }
};

void Exercises::StacksAndQueues() {


    cout << "----StacksAndQueues----" << endl;
    cout << endl;

    stack<Test> testStack;

    testStack.push(Test(10, "Jon"));
    testStack.push(Test(20, "Matt"));
    testStack.push(Test(30, "Grant"));
    testStack.push(Test(40, "Kat"));

    testStack.top().print();

    while (!testStack.empty()) {
        testStack.top().print();
        testStack.pop();
    }

    queue<Test> testQueue;

    testQueue.push(Test(10, "Jon"));
    testQueue.push(Test(20, "Matt"));
    testQueue.push(Test(30, "Grant"));
    testQueue.push(Test(40, "Kat"));

    /** Discovery: pushes in the back, pops from the front. Odd terminology for a queue, but whatever.  */
    for (int i = 1; !testQueue.empty(); i++) {
        cout << "Iteration " << i << endl;
        testQueue.back().print();
        testQueue.front().print();
        cout << endl;
        testQueue.pop();
    }
}



void Exercises::SortingVectors() {
    cout << "----Sorting Vectors----" << endl;
    cout << endl;

    vector<Test> testVector;

    testVector.emplace_back(Test(10, "Jon"));
    testVector.emplace_back(Test(20, "Matt"));
    testVector.emplace_back(Test(30, "Grant"));
    testVector.emplace_back(Test(40, "Kat"));

    int compare(const Test &test1, const Test &test2) {
        return test1.compareTo(test2);
    }

    /** Sort from index i to index j using function f   */
    sort(testVector.begin(), testVector.end(), compare);

    for(auto &curr : testVector) {
        curr.print();
    }
}
