#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <algorithm>

class Task
{
private:
   std::string taskName;
   int id;
public:
    Task(const std::string& n, int id);
    int getId() const;
    const std::string& getName() const;
};
