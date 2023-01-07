#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<pair<int, int>> v;
    v.push_back(make_pair(1, 10));
    v.push_back(make_pair(2, 20));
    v.push_back(make_pair(3, 30));
    v.push_back(make_pair(4, 40));
    v.push_back(make_pair(5, 50));

    for (int i=0;i<v.size();i++)
    {
        cout <<v[i].first<<" "<<v[i].second<< endl;
    }
    cout<<endl<<endl;
    for (auto i : v)
    {
        cout << i.first<<" "<<i.second<< endl;
    }
    cout << v.size() << " " << v.capacity() << endl;
    cout << v.size() << " " << v.capacity() << endl;
    return 0;
}