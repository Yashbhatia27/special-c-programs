#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <ctime>
#include <string>
#define PI 3.14
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c, d;
    cout << "Enter number of rows and columns in matrix 1:" << endl;
    cin >> a >> b;
    cout << "Enter number of rows and columns in matrix 2:" << endl;
    cin >> c >> d;
    int sparsemat1[a][3], sparsemat2[c][3], value;
    int counter = 0;
    int pointer = 1;
    cout << "Enter the matrix 1" << endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> value;
            if (value != 0)
            {
                sparsemat1[pointer][0] = i;
                sparsemat1[pointer][1] = j;
                sparsemat1[pointer][2] = value;

                counter++;
                pointer++;
            }
        }
    }
    sparsemat1[0][0] = a;
    sparsemat1[0][1] = b;
    sparsemat1[0][2] = counter;
    cout << "The sparse matrix 1 is : " << endl;
    for (int i = 0; i <= counter; i++)
    {
        cout << sparsemat1[i][0] << " " << sparsemat1[i][1] << " " << sparsemat1[i][2] << endl;
    }
    counter = 0;
    pointer = 1;

    cout << "Enter the matrix 2" << endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            cin >> value;
            if (value != 0)
            {
                sparsemat2[pointer][0] = i;
                sparsemat2[pointer][1] = j;
                sparsemat2[pointer][2] = value;

                counter++;
                pointer++;
            }
        }
    }
    sparsemat2[0][0] = c;
    sparsemat2[0][1] = d;
    sparsemat2[0][2] = counter;
    cout << "The sparse matrix 2 is : " << endl;
    for (int i = 0; i <= counter; i++)
    {
        cout << sparsemat2[i][0] << " " << sparsemat2[i][1] << " " << sparsemat2[i][2] << endl;
        if (sparsemat1[0][1] == sparsemat2[0][0])
        {
            int multi_mat[a * d + 1][3] ={0};
            multi_mat[0][0] = a;
            multi_mat[0][1] = d;
           
            int m = 1;
            for (int i = 1; i <= sparsemat1[0][2]; i++)
            {
                for (int j = 1; j <= sparsemat2[0][2]; j++)
                {
                    if (sparsemat1[i][1] == sparsemat2[j][0])
                    {
                        for (int k = 1; k <= m; k++)
                        {
                            if (k < m)
                            {
                                if (multi_mat[k][0] == sparsemat1[i][0] && multi_mat[k][1] == sparsemat2[j][1])
                                {
                                    multi_mat[k][2] += sparsemat1[i][2] * sparsemat2[j][2];
                                    break;
                                }
                            }
                            else
                            {
                                multi_mat[m][0] = sparsemat1[i][0];
                                multi_mat[m][1] = sparsemat2[j][1];
                                multi_mat[m][2] = sparsemat1[i][2] * sparsemat2[j][2];
                                m++;
                                break;
                            }
                        }
                    }
                }
            }
            multi_mat[0][2] = m - 1;
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j <= 2; j++)
                {
                    cout << multi_mat[i][j] << " ";
                }
                cout << "\n";
            }
        }
        return 0;
    }
}
