#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
You have to create a class, named Student, representing the student's details, as mentioned above, and store the data of a student. Create setter and getter functions for each element; that is, the class should at least have following functions:

get_age, set_age
get_first_name, set_first_name
get_last_name, set_last_name
get_standard, set_standard
Also, you have to create another method to_string() which returns the string consisting of the above elements, separated by a comma(,). You can refer to stringstream for this.
*/
class Student
{
    private: 
        int age,standard;
        string first_name, last_name;
    public:
        void set_age(int ageV)
        {
            age = ageV;
        }
        void set_standard(unsigned standardV)
        {
            standard = standardV;
        }
        void set_first_name(string firstName)
        {
            first_name = firstName;
        }
        void set_last_name(string lastName)
        {
            last_name = lastName;
        }
        int get_age()
        {
            return age;
        }
        int get_standard()
        {
            return standard;
        }
        string get_first_name()
        {
            return first_name;
        }
        string get_last_name()
        {
            return last_name;
        }
        string to_string(){
        string result = std::to_string(age) +','+get_first_name()+','+get_last_name()+','+std::to_string(standard);
        return result;
    }
        
};

int main() 
{
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
