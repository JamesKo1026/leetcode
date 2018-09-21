/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
/*
// DFS
class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int, Employee*> m;
        
        for (auto& employee : employees){   // build the map
            m[employee->id] = employee;
        }
        
        return DFS(m, id);
    }
    int DFS(unordered_map<int, Employee*> m, int id){
        int sum = m[id]->importance;    // don't forget to add the importance of id's itself
        
        for (auto& i : m[id]->subordinates){
            sum += DFS(m, i);
        }
        return sum;
    }
};
*/

// BFS
class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int, Employee*> m;
        
        for (auto& employee : employees){   // build the map
            m[employee->id] = employee;
        }
        int sum = 0;
        queue<Employee*> q;
        q.push(m[id]);
        
        while (!q.empty()){
            Employee* front = q.front();
            q.pop();
            
            for (auto& i : front->subordinates){
                q.push(m[i]);
            }
            sum += front->importance;
        }
       return sum; 
    }
};