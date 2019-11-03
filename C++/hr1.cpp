/*Input will consist of four lines.
The first line will contain an integer, representing the age. The second line will contain a string, consisting of lower-case Latin characters ('a'-'z'), representing the first_name of a student.
The third line will contain another string, consisting of lower-case Latin characters ('a'-'z'), representing the last_name of a student.
The fourth line will contain an integer, representing the standard of student.

Note: The number of characters in first_name and last_name will not exceed 50.

Output Format

The code provided by HackerRank will use your class members to set and then get the elements of the Student class.

Sample Input

15
john
carmack
10
Sample Output

15
carmack, john
10

15,john,carmack,10
*/
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

class student{
    int age,standard;
    string first,last;
    public:
    void set_age(int a) {
        age=a;
    }
    void set_standard(int a) {standard=a;}
    void set_first_name(string l){first=l;}
    void set_last_name(string k){last=k;}
    int get_age(){
        return age;
    }
    int get_standard(){return standard;}
    string get_last_name();
    string get_first_name();
    void to_string();

};
string student :: get_last_name(){
        transform(last.begin(),last.end(),last.begin(), ::tolower);
        return last;
    }
string student :: get_first_name(){
    transform(first.begin(),first.end(),first.begin(), ::tolower);
    return first;
}
void student :: to_string(){
cout<<standard<<", "<<last<<", "<<first<<", "<<age<<endl;}
int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    st.to_string();

    return 0;
}

