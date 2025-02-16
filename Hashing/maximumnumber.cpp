#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm> // For max function

using namespace std;

int maximumFrequency(vector<int>& arr, int n) {
    unordered_map<int, int> count;

    int maxFreq = 0;
    int maxAns = 0; 

    for (int i = 0; i < arr.size(); i++) {


        // {4, 5, 3, 5, 2, 5, 3}
        //cout<<"Before the count Frequency of "<<arr[i]<<"  is "<<count[i]<<endl;
        //cout<<arr[i]<<"->"<<count[arr[i]]<<endl;
        count[arr[i]]++;

        //cout<<"After the itration "<<arr[i]<<" freq->"<<count[arr[i]]<<endl;
        maxFreq = max(maxFreq, count[arr[i]]);
    }

    int maxi = INT16_MIN;
    int ans=-1;

    for(auto i:count){

        if (i.first>maxi)
        {
            maxi = i.second;
            ans= i.first;
        }

        cout<<ans<<"->"<<maxi<<endl;
        
    }cout<<endl;


      // Print the count map (key-value pairs)


    // for (const auto& pair : count) {
    //     cout << "Element: " << pair.first << ", Frequency: " << pair.second << endl;

    //Method 2:Using a Standard for Loop with an Iterator    

    for (auto it = count.begin(); it != count.end(); it++) {
    cout << "Element: " << it->first << ", Frequency: " << it->second << endl;
}
    
    

    for (int i = 0; i < arr.size(); i++) {
        if (maxFreq == count[arr[i]]) {
            maxAns = arr[i];
            break;
        }
    }



    return maxAns;
}

int main() {
    vector<int> arr = {4, 5, 3, 5, 2, 5, 3};
    int n = arr.size();

    int result = maximumFrequency(arr, n);
    //cout << "Element with maximum frequency: " << result << endl;


    return 0;
}
