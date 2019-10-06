#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
// -----------------------------------------------------------------------------

    std::vector <int> vec;
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(1);
    vec.push_back(32);
    vec.push_back(21);

    cout <<"\n";cout << "Elements in Vector are"<< endl;cout <<"\n";

    auto it = vec.begin();

    while(it != vec.end())
    {
        cout << *it << " ";
        it ++;
    }
    cout <<"\n";
    cout << "-----------------------------------------------------------------------------" << endl;

    cout <<"\n";cout << " Sorting Elements in Vector are"<< endl;cout <<"\n";

    std::sort(vec.begin(), vec.end());

    auto it1 = vec.begin();
    while(it1 != vec.end())
    {
        cout << *it1 << " ";
        it1 ++;
    }cout <<"\n";
    cout << "-----------------------------------------------------------------------------" << endl;

    cout << "Reverse Algorithms" << endl;
    std::reverse(vec.begin(), vec.end());
    auto it2 = vec.begin();
    while(it2 != vec.end())
    {
        cout << *it2 << " ";
        it2 ++;
    }cout <<"\n";
    cout << "-----------------------------------------------------------------------------" << endl;


    cout << "Methods on Vector " << endl;
    cout << vec.capacity() << endl;
    cout << vec.max_size() << endl;
    cout << vec.at(0) << endl;
    cout << vec[0] << endl;
    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.empty() << endl;


    cout <<"\n";
    cout << "-----------------------------------------------------------------------------" << endl;

    cout << "Replacing and find Method" << endl;
    auto f = std::find(vec.begin(), vec.end(), 32);
    if (f != vec.end())
    {
        cout << "Found Elements now Replacing it " <<*f << endl;
        std:: replace(vec.begin(), vec.end(), 32, 333);
    }
    auto it3 = vec.begin();
    while(it3 != vec.end())
    {
        cout << *it3 << " ";
        it3 ++;
    }cout <<"\n";
    cout << "-----------------------------------------------------------------------------" << endl;


    return 0;
}