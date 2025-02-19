#include<iostream>
#include<string>
using namespace std;


//ToLowerCase
char toLowercase(char ch){
    if (ch>='a'&& ch<='z')
    {
        return ch;
    }
    else{
        char temp = ch-'A'+'a';
        return temp;
    }
    
}


//Check String is Palindorme

bool checkPalindorme(char c[],int n){
    int s = 0;
    int e = n-1;
    
    while (s<=e)
    {
       if (toLowercase(c[s])!=toLowercase(c[e]))
       {
         return 0;
       }
       else{
           s++;
           e--;
       }
       
    }
    
   return 1; 
}



//Reverse the String
void reverse(char name[],int n){
    int s = 0;//start
    int e = n-1; //end
    while (s<e)
    {
       swap(name[s++],name[e--]);
    }
    
}

int getLength(char name[]){
     
    int count =0;
    for (int i = 0; name[i]!='\0'; i++)
    {
        count++;
    }

    return count;
    
}

char getMaxCharacter(string s){
    int arr[26]={0};

    //create an array of count of characters
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number =0;
        number = ch - 'a';
        arr[number]++;
    }
     
    //find the maximum occ number
    int maxi = -1, ans =0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi<arr[i])
        {
             ans = i;
             maxi = arr[i];
        }
        
    }

    // char finalAns = 'a'+ans;
    // return finalAns;
    //i can also write this like 
    return 'a'+ans;
    
    
}

int main(){

    // char name[20];
    // cout<<"Enter the String Value"<<endl;
    // cin>>name;
    // //name[2]='\0';
    // cout<<"Your name is "<<endl;
    // cout<<name<<endl;
    // int len = getLength(name);
    // cout<<"Length: "<<len<<endl;
    
    // // reverse(name,len);
    // // cout<<"Your name is "<<endl;
    // // cout<<name<<endl;
    // cout<<checkPalindorme(name,len);
    string s;
    cout<<"Enter the String"<<endl;
    cin>>s;


    return 0;
}