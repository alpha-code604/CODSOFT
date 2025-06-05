#include <iostream>
#include <vector>
#include <string>
using namespace std;

class TaskManager {
private:
    vector<string> tasks;

public:
    void showMenu() {
        cout << "1. Add task" << endl;
        cout << "2. Show tasks" << endl;
        cout << "3. Mark done" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose: ";
    }

    void addTask() {
        string task;
        cout << "Enter task: ";
        getline(cin, task);
        tasks.push_back(task);
        cout << "Added!" << endl;
    }

    void showTasks() {
        if (tasks.empty()) {
            cout << "No tasks!" << endl;
            return;
        }
        
        for (int i = 0; i < tasks.size(); i++) {
            cout<<"\n";
            cout<<"List of tasks"<<endl;
            cout<<"--------------------------------"<<endl;
            cout << i + 1 << ". " << tasks[i] << endl;
            cout<<"--------------------------------"<<endl;
        }
    }

    void markDone() {
        if (tasks.empty()) {
            cout << "No tasks!" << endl;
            return;
        }

        showTasks();
        int num;
        cout << "Enter task number: ";
        cin >> num;
        cin.ignore();

        if (num > 0 && num <= tasks.size()) {
            tasks[num - 1] += "-Done";
            cout << "Marked as done!" << endl;
        }
    }

    void start() {
        int choice;
        
        while (true) {
            showMenu();
            cin >> choice;
            cin.ignore();

            switch (choice) {
                case 1: 
                addTask(); 
                break;
                case 2: 
                showTasks(); 
                break;
                case 3: 
                markDone(); 
                break;
                case 4:
                    cout<<"Ending...."<<endl ;
                    return;
                default:
                cout<<"Invalid operation"<<endl;
            }
        }
    }
};

int main() {
    TaskManager app;
    app.start();
    return 0;
}








