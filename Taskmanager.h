#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "Task.h"

class TaskManager{
private:
    std::vector<Task> tasks;
    std::unordered_map<int, Task> tasksMap;

public:
    TaskManager();
    void addTask(const std::string& taskName, int id);
    void deleteTask(int id);
    void searchAndPrintInfoTask(int id);
    void listTasks();


};