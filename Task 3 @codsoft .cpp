//to-do list  creates by NISHA PATEL Task 3 @codsoft 
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to display the menu
void displayMenu()
 {
    cout <<"welcome to TO DO LIST "<<endl;
     cout<<"here some menu list for your betterment "<<endl;
    cout << "1. Add task\n";
    cout << "2. View tasks\n";
    cout << "3. Mark task as completed\n";
    cout << "4. Exit\n";
}

// Function to add a task to the list
void addTask(vector<string> & tasks) 
{
   string task;
    cout << "Enter task: ";
    cin>>task;
   // getline(cin, task);
    tasks.push_back(task);
    cout << "YOUR TASK ADDED SUCCESSFULLY !!!!"<<endl;
}

// Function to view all tasks
void viewTasks(const vector<string>& tasks)
{
    cout << "Tasks:"<<endl;
    for (size_t i = 0; i < tasks.size(); ++i)
    {
        cout << i+1 << ". " << tasks[i] << endl;
    }
}

// Function to mark a task as completed
void markCompleted(vector<string>& tasks) {
    int index;
    cout << "Enter task number to mark as completed: ";
    cin >> index;
    if (index >= 1 && index <= tasks.size()) {
        tasks.erase(tasks.begin() + index - 1);
        cout << "Task marked as completed!\n";
    } else {
        cout << "Invalid task number!\n";
    }
}

int main() {
    vector<string> tasks;
    int choice;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Ignore newline character left in the input buffer
        switch (choice) {
            case 1:
                addTask(tasks);
                break;
            case 2:
                viewTasks(tasks);
                break;
            case 3:
                markCompleted(tasks);
                break;
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}