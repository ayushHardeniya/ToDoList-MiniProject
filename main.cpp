#include<bits/stdc++.h>
using namespace std;

class Tasks {
    private:
        string desc;
        bool completed;
    public:
        // constructor to initialize task and initiall completed false status
        Tasks (string taskname) : desc(taskname), completed(false) {}
        void markcompleted(){
            completed = true;    // marking the task as completed when method called

        }
        // displaying the task
        void displaytask(){
            cout << "Task: " << desc << endl;
            cout << "Status: " << (completed ? "[✓]" : "[ ]") << endl;  //symbol is copied form google as character 
        }

};
class todo {
    private:
        vector<Tasks> tasks;
        string name;
    public:

        void setname(string name){           //setter for name for to do list
            this-> name = name;
        }
        void addtask(string taskdesc){
            tasks.push_back(Tasks(taskdesc));  // adding task to the vector of tasks "arthat, from string to container of tasks"
        }
        void removetask (int index){
            if (index >= 1 && index <= tasks.size()) {
                tasks.erase(tasks.begin() + index - 1);       ///iterator to the element to be removed
                cout << "Task removed...!" << endl;
            } 
            else {
                cout << "Invalid task index." << endl;
            }
        }
        void markcompleted (int giveindex){
            if (giveindex > 0 && giveindex <= tasks.size()){    //checking for right index (as it should lie b/w the vector size)
                tasks[giveindex-1].markcompleted();
            } else {
                cout << "Invalid task index" << endl;
            }   

        }
        void displayAll(){
            for (size_t i=0; i<tasks.size(); i++){
                cout << "Task " << i+1 << ":" << endl;
                tasks[i].displaytask();
            }
        }
        bool empty() const {
            return tasks.empty();
        }
        size_t size() const {           //size_t is an unsigned integer type used for sizes nd counts
            return tasks.size();
        }

};


int main (){
    
    string description;
    int choice =0;
    cout << "Enter the name o to do list:" << " ";
    getline(cin, description);    // differencve between getline and cin : getlines takes full line as input with white spaces
                                 // cin takes input till first white space, it is good for single word kindaa i/p
    
                                 // object for todo list (todo call)
    todo List;
    List.setname(description);

    do {

        //menu for to do list each time for a list, controlled by while loop

        cout << "Opt the choice:" << endl;
        cout << "1: Create Task" << endl;
        cout << "2: Remove Task" << endl;
        cout << "3: Mark Task Completed" << endl;
        cout << "4: Show all" << endl;
        cout << "5: Quit" << endl;
        cout << "-----------------------------" << endl;
        cout << "Entered desired choice (1-5):" << " ";
        cin >> choice;
        cin.ignore();   // to ignore the newline character left in the input buffer after reading choice
        
        // switch case for the choices and working on individual tasks now inside a particular to do list
        string task;
        switch (choice){
            case 1: {
                cout << "Enter the task:" << " ";
                getline(cin, task);
                List.addtask(task);
                cout << endl << endl;
                break;
            }
            case 2: {
                if (List.empty()){
                    cout << "No tasks to remove" << endl;
                } else {
                    List.displayAll();
                    cout << "Enter the index of task to remove: (in int value): ";
                    int index;
                    cin >> index;
                    cin.ignore();
                    List.removetask(index);
                }
                cout << endl << endl;

                break;
            }
            case 3: {
                if (List.empty()) {
                    cout << "No tasks to mark as completed." << endl;
                } else {
                    List.displayAll();
                    int index;
                    cout << "Enter the index of task to mark completed (1-" << List.size() << "): ";
                    cin >> index;
                    cin.ignore();
                    List.markcompleted(index);
                }
                cout << endl << endl;
                break;
            }
            case 4: {
                cout << "following are ur tasks in the to do list:" << endl;
                List.displayAll();
                cout << endl << endl;
                break;
            }
            case 5: {
                cout << "exiting the program..." << endl;
                cout << endl << endl;
                break;
            }
            default:{
                cout << "Choose right choice (1-5)" << endl;
                cout << endl << endl;
                break;
            }
        }
    } while (choice != 5);    //loop will continue until the userr wants to quit

}