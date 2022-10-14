#include <iostream>
using namespace std;

class Matrix 
{
    private:
        int x[10][10];
        int row, col;
    public:
    void getMatrix(int r, int c)
    {
        Matrix M1;
        row = r;
        col = c;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
            cout << "Enter x[" << i << "][" << j << "] : ";
            cin >> x[i][j];
            }
        }
    }

    void putMatrix()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++) {
            cout << x[i][j] << " ";
        }
        cout << "\n";
        }
    }

    Matrix add(Matrix M2)
    {
        Matrix M;
        M.row = row;
        M.col = col;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                M.x[i][j] = x[i][j] + M2.x[i][j];
            }
        }
        return (M);
    }

    Matrix sub(Matrix M2)
    {
        Matrix M;
        M.row = row;
        M.col = col;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                M.x[i][j] = x[i][j] - M2.x[i][j];
            }
        }
        return (M);
    }


    Matrix mul(Matrix M2)
    {
        Matrix M;
        M.row = row;
        M.col = col;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                M.x[i][j]=0;
                for(int k=0;k<col;k++)   
                {    
                     M.x[i][j] += x[i][k] * M2.x[k][j];
                }
            }
        }
        return (M);
    }
};

    int main()
    {
        Matrix M1, M2, M3;
        cout << "Enter Matrix A\n" << endl;
        M1.getMatrix(2, 2);

        cout << "\nEnter Matrix B\n" << endl;
        M2.getMatrix(2, 2);

        cout << "\nMatrix A:" << endl;
        M1.putMatrix();

        cout << endl;

        cout << "Matrix B:" << endl;
        M2.putMatrix();

        M3 = M1.add(M2);
        cout << "\nAddition of A and B matrix\n" << endl;
        M3.putMatrix();

        M3 = M1.sub(M2);
        cout << "\nSubtraction of A and B matrix\n" << endl;
        M3.putMatrix();

        M3 = M1.mul(M2);
        cout << "\nMultiplication of A and B matrix\n" << endl;
        M3.putMatrix(); 
    return 0;
}