#include "Task.h"

Task::Task(const std::string& taskName, int id) : taskName(taskName), id(id){};

int Task::getId() const{

    return id;
}
const std::string& Task::getName() const{
    return taskName;
}