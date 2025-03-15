#include<iostream>
#include<vector>
#include <string>
#include <algorithm>
using namespace std ;



int minPeopleKilled(string s) {

        int pplcnt=0;
        vector <int> group;
    for (char c : s){
        
        if(c == 'p'){
            pplcnt++;
        }
        else if(c == '@' || c == '$'){
            if(pplcnt>0){

            
            group.push_back(pplcnt);
            pplcnt=0;
            }

        }

        
    }
    if(pplcnt>0){
        group.push_back(pplcnt);
    }

    if(group.size()==0) {return 0;}

    sort(group.begin(),group.end());
 
    return group[0];

}



int main() {
    string s;
    cout << "Enter the input string: ";
    cin >> s;

    int result = minPeopleKilled(s);
    cout << "Minimum number of people killed: " << result << endl;

    return 0;
}