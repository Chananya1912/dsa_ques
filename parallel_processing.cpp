#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Job {
    long long start_time;
    int thread;
};

struct Compare {
    bool operator()(pair<long long, int> a, pair<long long, int> b) {
        if (a.first == b.first) return a.second > b.second;
        return a.first > b.first;
    }
};

int main() {
    int num_threads, m;
    cin >> num_threads >> m;
    vector<long long> jobs(m);
    for (int i = 0; i < m; ++i)
        cin >> jobs[i];

    priority_queue<pair<long long, int>, vector<pair<long long, int>>, Compare> pq;
    for (int i = 0; i < num_threads; ++i)
        pq.push({0, i});

    for (int i = 0; i < m; ++i) {
        auto current = pq.top();
        pq.pop();
        cout << current.second << " " << current.first << "\n";
        pq.push({current.first + jobs[i], current.second});
    }

    return 0;
}
