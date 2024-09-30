#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <string>

using namespace std;

string toLower(string s){
    string res;
    for(char c : s){
        res += tolower(c);
    }
    return res;
}

int main(){
    string response = "y";

    vector<string> list;
    vector<string> sortedList;
    string entry;//individual entries

    cout << "Welcome to the Business Sorting Program!\n";

    do {
        cout << "Please enter the name of a business:  ";
        getline(cin, entry);
        list.push_back(entry);
        entry = "";
        response = "";
        cout << "Another business?  ";
        cin >> response;
        //cout << "\n";
        cin.ignore();
    }while(toLower(response) == "y" || toLower(response) == "yes");

    cout << "Your businesses are:\n";
    sort(list.begin(), list.end());
    for(string s : list){
        cout << s << "\n";
    }
    if(toLower(response) != "y" || toLower(response) != "yes"){
        cout << "\nThank you for using the Business Sorting Program!\n";
    }
    return 0;
}