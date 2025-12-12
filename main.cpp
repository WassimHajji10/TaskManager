//design patterns C++
//1 - singleton pattern -> insure that a class has only one instance
//Provide a global point of acces to this instance
//use cases : logging systems, config managers and thread pools 
#include <iostream>
#include "Taskmanager.h"

//This is a task manager


int main(){
	TaskManager tm;

	tm.addTask("tache1",1);
	tm.addTask("tache2",2);
	tm.addTask("tache3",3);

	tm.listTasks();

	tm.searchAndPrintInfoTask(2);

	tm.deleteTask(2);
	tm.listTasks();


}