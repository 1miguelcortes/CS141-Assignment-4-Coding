/** @author Cortes, Miguel
 * Homework 4
 * 2020-02-11
 */
#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void printSet(const set<string>& inSet) {
    // Takes in a set of strings and prints to terminal
    cout << "{";
    for (const string& elem : inSet) {
        cout << elem << ",";
    }
    //Print the last bracket, going back one space unless input is an empty set
    if (inSet.empty()){
        cout << "}";
    }
    else {
        cout << "\b}";
    }
}

int main() {
    // Declare set a
    set<string> a{
        "a", "b", "c", "d", "e"
    };
    // Declare set b
    set<string> b{
        "a","b","c","d","e","f","g","h"
    };
   set<string> intersect,unionAB,subtractAB,subtractBA;

    // Subproblem A
    set_union(a.begin(), a.end(), b.begin(), b.end(), inserter(unionAB, unionAB.begin()));
    cout << "Union of A and B :" << endl;
    printSet(unionAB);
    cout << endl;

    // Subproblem B
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), inserter(intersect, intersect.begin()));
    cout << "Intersection of A and B :" << endl;
    printSet(intersect);
    cout << endl;

    // Subproblem C
    set_difference(a.begin(), a.end(), b.begin(), b.end(), inserter(subtractAB, subtractAB.begin()));
    cout << "Set A minus set B :" << endl;
    printSet(subtractAB);
    cout << endl;

    // Subproblem D
    set_difference(b.begin(), b.end(), a.begin(), a.end(), inserter(subtractBA, subtractBA.begin()));
    cout << "Set B minus set A :" << endl;
    printSet(subtractBA);
    cout << endl;

    return 0;
}