/*
 * Map is Like Python Dictionary we have Key and value Pair
 * there are following types of map
 * 1. Map
 * 2 . unordered_map
 * 3 . multimap
 * 4. unordered_multimap
 */


#include <iostream>
#include <map>
#include <algorithm>
#include <iterator>
#include <iomanip>
using namespace std;

int main()
{
    std::map<std::string, int> Person   {
            {"Soumil", 24}
                                    };
    cout <<"\n";
    cout << "-----------------------------------------------------------------------------" << endl;

    cout << "Inserting  Elements on Map " << endl;
    std::pair<string , int> p1 = {"Nitin", 60};
    Person.insert(p1);
    Person.insert(make_pair("Suhas", 61));
    Person["Shardaben"] = 92;

    cout << "Total Elements on Map " << Person.size() << endl;

    cout <<"\n";
    cout << "-----------------------------------------------------------------------------" << endl;

    std::cout << setw(12) << left << "Name" << setw(14) << right << "Age " << endl;

    for(auto pair: Person)
    {
        cout << setw(12) << left << pair.first << setw(12) << right << pair.second << endl;
    }

    cout <<"\n";
    cout << "-----------------------------------------------------------------------------" << endl;

    cout << "finding Person Soumil  in Map " << endl;
    auto it = Person.find("Soumil");
    cout << it->first << endl;
    cout << it->second << endl;

    cout <<"\n";
    cout << "-----------------------------------------------------------------------------" << endl;

    cout << "Erasing Soumil from map " << endl;
    auto it1 = Person.find("Soumil");
    Person.erase(it);
    cout << "\n";

    auto it2 = Person.begin();
    while (it2 != Person.end())
    {
        cout << it2->first << " | " << it2->first << endl;
        it2 ++;

    }
    cout <<"\n";
    cout << "-----------------------------------------------------------------------------" << endl;



    return 0;
}