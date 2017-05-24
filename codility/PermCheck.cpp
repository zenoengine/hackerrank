//Score 100
//Time Complexity O(N)
//Space Complexity O(N)

int solution(vector<int> &A) {
    bool isPermutation = 1;

	int tableSize = A.size() + 1;
	int* table = new int[tableSize]();

	for (size_t idx = 0; idx < A.size(); idx++)
	{
		if (A[idx] > 0 && A[idx] < tableSize)
		{
			table[A[idx]] = 1;
		}
		else
		{
			isPermutation = 0;
		}
	}

	for (int idx = 1; idx < tableSize; idx++)
	{
		if (table[idx] != 1)
		{
			isPermutation = 0;
		}
	}
    
    delete [] table;
    
	return isPermutation;
}