#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define int long long
#define float long double
#define endl "\n"
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

bool canplace(vector<string> &board, int row, int col)
{
    int drow = row, dcol = col;
    while (dcol >= 0)
    {
        if (board[drow][dcol] == 'Q')
            return false;
        dcol--;
    }
    dcol=col;
    while (drow >= 0 && dcol >= 0)
    {
        if (board[drow][dcol] == 'Q')
            return false;
        drow--;
        dcol--;
    }
    drow = row;
    dcol = col;
    while (drow < board.size() && dcol >= 0)
    {
        if (board[drow][dcol] == 'Q')
            return false;
        drow++;
        dcol--;
    }
    return true;
}

void nqueen(vector<vector<string>> &ans, vector<string> &board, int n, int cind)
{
    if (cind == n)
    {
        ans.push_back(board);
        return;
    }

    for (int row = 0; row < n; row++)
    {
        if (canplace(board, row, cind))
        {
            board[row][cind] = 'Q';
            nqueen(ans, board, n, cind + 1);
            board[row][cind] = '.';
        }
        
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        vector<vector<string>> ans;
        vector<string> board;
        int n = 4;
        for (int i = 0; i < n; i++)
        {
            string t(n, '.');
            board.push_back(t);
        }
        // cout<<board.size()<<"&\n";
        // ans.push_back(board);
        // ans.push_back(board);
        nqueen(ans, board, n, 0);
        for (auto it : ans)
        {
            for (auto i : it)
            {
                cout << i << "\n";
            }
            cout << "\n";
        }
    }
    return 0;
}