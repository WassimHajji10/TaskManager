#include "Taskmanager.h"

TaskManager::TaskManager() = default;

void TaskManager::addTask(const std::string& taskName, int id){
    if(tasksMap.find(id) == tasksMap.end()){
        Task task(taskName,id);
        tasks.push_back(task);
        tasksMap.insert({id,task});
    }
    else{
        std::cout << "ID has to be unique, choose another one";
    }
    
}
void TaskManager::deleteTask(int id){
    if(tasksMap.find(id) == tasksMap.end()){
        std::cout << "Task not found" << std::endl;
        return;
    }

    tasksMap.erase(id);

    for (std::vector<Task>::iterator it = tasks.begin(); it!=tasks.end();++it){
        if (it->getId() == id){

            tasks.erase(it);
            break;
        }
    }
    std::cout << "Task deleted successfully";

}
    
void TaskManager::searchAndPrintInfoTask(int id){

    auto task = tasksMap.find(id);
    if(task == tasksMap.end()) {
        std::cout << "Task not found!";
        return;
    }
    
    std::cout << "Task " << id << "Name " << task->second.getName() << std::endl;
}

void TaskManager::listTasks(){

    std::cout << "Tasks : " << std::endl;
    for(auto it : tasks){
        std::cout << "Task " << it.getId() << " Name " << it.getName() << std::endl;
    }
}