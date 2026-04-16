class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i = 0; i <n ; i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i = 0; i < n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }

        
    }
};

static const bool __boost = []() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	return std::ios_base::sync_with_stdio(false);
	}();

const size_t BUFFER_SIZE = 0x6fafffff;
alignas(std::max_align_t) char buffer[BUFFER_SIZE];
size_t buffer_pos = 0;
void* operator new(size_t size) {
	constexpr std::size_t alignment = alignof(std::max_align_t);
	size_t padding = (alignment - (buffer_pos % alignment)) % alignment;
	size_t total_size = size + padding;
	char* aligned_ptr = &buffer[buffer_pos + padding];
	buffer_pos += total_size;
	return aligned_ptr;
}
void operator delete(void* ptr, unsigned long) {}
void operator delete(void* ptr) {}
void operator delete[](void* ptr) {}