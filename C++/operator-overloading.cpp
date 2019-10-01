// Operator Overloading

class Matrix
{
public:
    vector<vector<int>> a;
    Matrix operator+(const Matrix &M)
    {
        Matrix res;
        for(int i = 0; i < a.size(); ++i)
        {
            vector<int> b;
            for(int j = 0; j < a[i].size(); ++j)
                b.push_back(a[i][j] + M.a[i][j]);
            res.a.push_back(b);
        }
        return res;
    }
};
