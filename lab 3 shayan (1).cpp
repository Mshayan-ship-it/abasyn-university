int main() {
    // Declare variables
    string name;
    string department;
    int age;
    float gpa;
    int birthYear;

    // Take input from the user
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your GPA: ";
    cin >> gpa;

    cout << "Enter your department: ";
    cin >> department;

    // Calculate birth year
    birthYear = 2026 - age;

    // Display student information
    cout << "\nStudent Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Department: " << department << endl;
    cout << "Birth Year: " << birthYear << endl;

    return 0;
}