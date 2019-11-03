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

