#include <iostream>
using namespace std;

int main()
{

    int arr[3][3];
    //Taking input Row Wise
    // for (int i = 0; i <3; i++)
    // {
    //     for (int j = 0; j <3; j++)
    //     {
    //         cin >> arr[j][i];
    //     }
    // }


       //Taking input Column Wise
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            cin >> arr[j][i];
        }
    }

    

    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            cout<< arr[i][j]<<" ";
        }

        cout << endl;
    }

    return 0;
}