class Solution {
public:
    bool BinarySearch(vector<vector<int>>& matrix,int target,int row){
        int st = 0;
        int end = matrix[0].size()-1;

        while(st<=end){
            int mid = st+(end-st)/2;

            if(matrix[row][mid] == target){
                return true;
            }
            else if(target > matrix[row][mid]){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int sRow = 0, eRow = m-1;

        while(sRow <= eRow){
            int mRow = sRow + (eRow - sRow)/2;

            if(target >= matrix[mRow][0] && target <= matrix[mRow][n-1]){
                return BinarySearch(matrix,target,mRow);
            }
            else if(target >= matrix[mRow][n-1]){
                sRow = mRow+1;
            }
            else{
                eRow = mRow-1;
            }
        }
        return false;
    }
};

#pragma GCC optimize("Ofast")
const size_t BUFFER_SIZE = 0x6fafffff; alignas(std::max_align_t) char buffer[BUFFER_SIZE]; size_t buffer_pos = 0; void* operator new(size_t size) { constexpr std::size_t alignment = alignof(std::max_align_t); size_t padding = (alignment - (buffer_pos % alignment)) % alignment; size_t total_size = size + padding; char* aligned_ptr = &buffer[buffer_pos + padding]; buffer_pos += total_size; return aligned_ptr; } void operator delete(void* ptr, unsigned long) {} void operator delete(void* ptr) {} void operator delete[](void* ptr) {}