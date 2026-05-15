/**
 * ⚡ LEETCODE ULTIMATE PERFORMANCE TEMPLATE ⚡
 * 1. Aggressive GCC Pragmas: Unrolls loops and enables SIMD vectorization.
 * 2. Custom Bump Allocator: Nano-second 'new' operations.
 * 3. Fast I/O: Bypasses standard C++ stream overhead.
 */

#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")

#include <iostream>
#include <vector>
#include <algorithm>

/* --- 1. Custom Bump Allocator --- */
// Pre-allocates a 64MB block in BSS to avoid malloc/free overhead.
static constexpr std::size_t MAX_MEM = 64 * 1024 * 1024;
static unsigned char BUFFER[MAX_MEM];
static std::size_t pos = 0;

// Overriding global new to use our pre-allocated buffer
void* operator new(std::size_t size) {
    const std::size_t align = alignof(std::max_align_t);
    pos = (pos + align - 1) & ~(align - 1); // Align memory address
    void* ptr = &BUFFER[pos];
    pos += size;
    return ptr;
}

void* operator new[](std::size_t size) { return operator new(size); }
void operator delete(void*) noexcept {}
void operator delete[](void*) noexcept {}
void operator delete(void*, std::size_t) noexcept {}
void operator delete[](void*, std::size_t) noexcept {}

/* --- 2. Fast I/O Initialization --- */
// Disables synchronization with C streams before any solution runs.
static const auto fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    // Optional: Reset allocator pos for every new test process if needed
    // pos = 0; 
    return 0;
}();
class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;

        while (l < r) {
            int mid = l + (r - l) / 2;

           
            if (nums[mid] > nums[r]) {
                l = mid + 1;
            }
            else {
                r = mid;
            }
        }

        return nums[l];
    }
};