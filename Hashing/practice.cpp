#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

unordered_map<int, int> count;

int practice1(int arr[])
{   
     int num;
    for (int i = 0; i < 8; i++)
    {
        count[arr[i]]++;
        cout << count[arr[i]] << endl;
        num++;
    }

    return count[arr[num]];

    
    
}

int main()
{

    int arr[] = {2, 4, 3, 2, 3, 3, 2, 4};

    cout << practice1(&arr) << endl;

    for (auto it = count.begin(); it != count.end(); it++) {
    cout << "Element: " << it->first << ", Frequency: " << it->second << endl;
}

    return 0;
}