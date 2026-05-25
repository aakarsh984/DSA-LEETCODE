const size_t BUFFER_SIZE = 0x6fafffff; alignas(std::max_align_t) char buffer[BUFFER_SIZE]; size_t buffer_pos = 0; void* operator new(size_t size) { constexpr std::size_t alignment = alignof(std::max_align_t); size_t padding = (alignment - (buffer_pos % alignment)) % alignment; size_t total_size = size + padding; char* aligned_ptr = &buffer[buffer_pos + padding]; buffer_pos += total_size; return aligned_ptr; } void operator delete(void* ptr, unsigned long) {} void operator delete(void* ptr) {} void operator delete[](void* ptr) {}
class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& nums, int i, vector<int>& sub) {
        if (i == nums.size()) {
            ans.push_back(sub);
            return;
        }
        // notpick
        solve(nums, i + 1, sub);
        // pick
        sub.push_back(nums[i]);
        solve(nums, i + 1, sub);
        sub.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> sub;

        solve(nums, 0, sub);

        return ans;
    }
};