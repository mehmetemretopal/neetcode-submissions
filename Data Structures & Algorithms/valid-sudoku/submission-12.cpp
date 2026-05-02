class Solution {
   public:
   bool isValidSudoku(vector<vector<char>> &board)
    {
        unordered_map<char, int> um1;
        unordered_map<char, int> um2;
        unordered_map<char, int> um3;
        for (size_t i = 0; i < board.size(); i++)
        {
            for (size_t j = 0; j < board.size(); j++)
            {
                char a1 = board[j][i];
                char a2 = board[i][j];

                if (a1 != '.')
                {
                    if (um1.find(a1) != um1.end())
                    {
                        cout << "sorun var" << endl;
                        return false;
                    }
                    um1[a1] = j;
                }
                if (a2 != '.')
                {
                    if (um2.find(a2) != um2.end())
                    {
                        cout << "sorun var" << endl;
                        return false;
                    }
                    um2[a2] = j;
                }
            }
            um1.clear();
            um2.clear();

            int blockRow = (i / 3) * 3;
            int blockCol = (i % 3) * 3;

            for (int dr = 0; dr < 3; dr++)
            {
                for (int dc = 0; dc < 3; dc++)
                {
                    char a3 = board[blockRow + dr][blockCol + dc];
                    if (a3 != '.')
                    {
                        if (um3.find(a3) != um3.end())
                        {
                            cout << "sorun var" << endl;
                            return false;
                        }
                        um3[a3] = i;
                    }
                }
            }
            um3.clear();
        }
        cout << "sorun yok devam" << endl;
        return true;
    }
};