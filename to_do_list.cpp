#include <iostream>
using namespace std;

const int TASKS = 100; // Maximum number of tasks
const int TASK_LENGTH = 100; // Maximum length of a task description

int main()
{
    char tasks[TASKS][TASK_LENGTH]; // Array to store tasks
    int Count = 0; // Number of tasks in the list

    cout << "  ----------Simple To-Do List---------" << endl<<endl;

    while (true)
    {
        cout <<"Options:" << endl;
        cout << "1. Add a task in to-do list " << endl;
        cout << "2. View tasks in to-do list " << endl;
        cout << "3. Delete a task from to-do list " << endl;
        cout << "4. Quit from to-do list" << endl;

        int option;
        cout << "Enter any option according to your choice : ";
        cin >> option;
        cin.ignore(); // Clear the newline character from the buffer

        switch (option) {
            case 1:
                if (Count < TASKS) {
                    cout << "Enter a new task: ";
                    cin.getline(tasks[Count],TASK_LENGTH);
                    Count++;
                } else {
                    cout << "EXCEEDING FROM LIMIT!!!!" << endl;
                }
                break;

            case 2:
                if (Count > 0) {
                    cout << "Tasks:" << endl;
                    for (int i = 0; i < Count; i++) {
                        cout << i + 1<<"." << tasks[i] << endl;
                    }
                } else {
                    cout << "No tasks in the list." << endl;
                }
                break;

            case 3:
                if (Count > 0) {
                    int taskToDelete;
                    cout << "Enter the number of the task to delete: ";
                    cin >> taskToDelete;
                    cin.ignore(); // Clear the newline character from the buffer

                    if (taskToDelete >= 1 && taskToDelete <=Count) {
                        for (int i = taskToDelete - 1; i < Count - 1; i++) {
                            int j = 0;
                            while (tasks[i][j] != '\0') {
                                tasks[i][j] = tasks[i + 1][j];
                                j++;
                            }
                        }
                        Count--;
                        cout << "Task deleted." << endl;
                    } else {
                        cout << "Invalid task number." << endl;
                    }
                } else {
                    cout << "No tasks in the list." << endl;
                }
                break;

            case 4:
                cout << "THANKS FOR USING TO-DO-LIST CODE!" << endl;
                return 0;

            default:
                cout << "Invalid entry." << endl;
        }
    }

    return 0;
}

