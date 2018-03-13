#include <bits/stdc++.h>
#include <string>

using namespace std;

string timeConversion(string s) {
    string hour = s.substr(0,2);
    string min = s.substr(3,2);
    string sec = s.substr(6,2);
    string amOrPM = s.substr(8,2);
    int tempHour = stoi(hour);
    if (amOrPM == "AM"){
        if (tempHour == 12){
            hour = "00";
        }
    }else if (amOrPM == "PM"){
        if (tempHour != 12)
            hour = to_string(tempHour+12);
    }
    return hour + ":" + min + ":" + sec;
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}
