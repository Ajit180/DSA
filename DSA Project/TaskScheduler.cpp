#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct Task {
    int id;
    int priority;
    int executionTime;

    // Constructor
    Task(int i, int p, int e) : id(i), priority(p), executionTime(e) {}
};

// Comparator for the priority queue
struct CompareTask {
    bool operator()(Task const& t1, Task const& t2) {
        if (t1.priority == t2.priority) {
            return t1.executionTime > t2.executionTime;
        }
        return t1.priority > t2.priority;
    }
};

class TaskScheduler {
private:
    priority_queue<Task, vector<Task>, CompareTask> taskQueue;

public:
    void addTask(int id, int priority, int executionTime) {
        Task newTask(id, priority, executionTime);
        taskQueue.push(newTask);
    }

    void executeTasks() {
        while (!taskQueue.empty()) {
            Task currentTask = taskQueue.top();
            taskQueue.pop();
            cout << "Executing Task ID: " << currentTask.id << " with priority: "
                 << currentTask.priority << " and execution time: "
                 << currentTask.executionTime << endl;
        }
    }
};

int main() {
    TaskScheduler scheduler;
    scheduler.addTask(1, 5, 10);
    scheduler.addTask(2, 2, 5);
    scheduler.addTask(3, 1, 7);
    scheduler.addTask(4, 3, 4);

    scheduler.executeTasks();

    return 0;
}
