#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// A map stores each student's ID as a key, 
// and a vector stores the marks for different subjects.



int main(){
   
   // Map to store student ID and their subject marks
   map<int,vector<int>>studentMarks;

   //adding marks to student 

   studentMarks[0] = {85,90,67};
   studentMarks[1]={90,23,44,56,8};
   studentMarks[2]={56,77,44,22,66,69};




//   //cout << "Marks of Student 0: ";
//    for (int mark:studentMarks[0])
//    {
   
//     cout<<mark<<" "<<endl;
//    }


  for(const auto& student:studentMarks){
      
      cout<<"Student Id "<<student.first<<"->Marks ";
      for (int marks:student.second)
      {
        cout<<marks<<"  ";
      }
      
  }


    return 0;
}