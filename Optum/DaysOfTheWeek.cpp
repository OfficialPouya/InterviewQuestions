/*
Days of the week or president has three letters strings
"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"
Write a function solution that given estring S representing 
the day of the week and integer K (between zero and 500 
inclusive) returns the day of the week that is K days later
*/

#include <string>
#include <vector>
#include <unordered_map>

string solution(string &S, int K) {
    // write your code in C++14 (g++ 6.2.0)
    vector<string> week_days = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    unordered_map<string, int> day_names = {{"Mon",0}, 
                                            {"Tue",1}, 
                                            {"Wed",2},
                                            {"Thu",3},
                                            {"Fri",4},
                                            {"Sat",5},
                                            {"Sun",6}};
    return week_days[(day_names[S]+ K) % 7];
}
