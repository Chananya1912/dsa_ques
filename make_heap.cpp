#include <iostream>
#include <vector>

using namespace std;

struct Swap {
    int index1;
    int index2;
};

class HeapBuilder {
private:
    vector<int> data_;
    vector<Swap> swaps_;

    void SiftDown(int i) {
        int minIndex = i;
        int l = 2 * i + 1;
        if (l < data_.size() && data_[l] < data_[minIndex])
            minIndex = l;
        int r = 2 * i + 2;
        if (r < data_.size() && data_[r] < data_[minIndex])
            minIndex = r;

        if (i != minIndex) {
            swap(data_[i], data_[minIndex]);
            swaps_.push_back({i, minIndex});
            SiftDown(minIndex);
        }
    }

public:
    void ReadData() {
        int n;
        cin >> n;
        data_.resize(n);
        for (int i = 0; i < n; ++i)
            cin >> data_[i];
    }

    void GenerateSwaps() {
        swaps_.clear();
        for (int i = data_.size() / 2 - 1; i >= 0; --i)
            SiftDown(i);
    }

    void WriteResponse() const {
        cout << swaps_.size() << "\n";
        for (const Swap& swap : swaps_) {
            cout << swap.index1 << " " << swap.index2 << "\n";
        }
    }

    void Solve() {
        ReadData();
        GenerateSwaps();
        WriteResponse();
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    HeapBuilder heap_builder;
    heap_builder.Solve();
    return 0;
}
