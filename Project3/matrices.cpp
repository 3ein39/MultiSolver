#include <bits/stdc++.h>

using namespace std;



/*
 * read matrix from user
 *
 * parameters: 2d vector of doubles
 * return type: none
 * time complexity: O(n^2)
 */

void read_matrix(vector<vector<double>> &matrix){


    int rows, cols;
    cout << "Enter the number of rows and columns: ";

    cin >> rows >> cols;

    matrix.resize(rows); // resize rows


    for (int i = 0; i < rows; i++) {
        matrix[i].resize(cols); // resize cols
        for (int j = 0; j < cols; j++) {
            cout << "Enter element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }
}



/*
 * print matrix
 *
 * parameters: 2d vector of doubles
 * return type: none
 * time complexity: O(n^2)
 */
void print_matrix(vector<vector<double>> &matrix){


    for (int i = 0; i < (int)matrix.size(); i++) {
        for (int j = 0; j < (int)matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}


/*
 * multiply two matrices
 *
 * parameters: 2d vector of doubles of the first matrix, 2d vector of doubles of the second matrix
 * return type: 2d vector of doubles of the result matrix
 * time complexity: O(n^3)
 */
vector<vector<double>> multiplication(vector<vector<double>> matrix1, vector<vector<double>> matrix2){

    vector<vector<double>> result;
    int rows1 = matrix1.size();
    int cols1 = matrix1[0].size();
    int rows2 = matrix2.size();
    int cols2 = matrix2[0].size();

    // if can multiply
    if(cols1 == rows2){

        result.resize(rows1);
        for (int i = 0; i < rows1; i++){

            result[i].resize(cols2);
            for(int j = 0; j < cols2; j++){
                result[i][j]=0;
                for(int k = 0;k < cols1; k++){
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }
    }

    return result;
}

/*
 * subtract two matrices
 * parameters: 2d vector of doubles of the first matrix, 2d vector of doubles of the second matrix
 * return type: 2d vector of doubles of the result matrix
 * time complexity: O(n^2)
 *
 */
vector<vector<double>> subtraction(vector<vector<double>> matrix1, vector<vector<double>> matrix2){

    vector<vector<double>> result;

    int rows1 = matrix1.size();
    int cols1 = matrix1[0].size();
    int rows2 = matrix2.size();
    int cols2 = matrix2[0].size();



    if (rows1==rows2 && cols1==cols2){
        result.resize(rows1);
        for(int i = 0; i < rows1; i++){
            result[i].resize(cols1);
            for(int j = 0; j < cols1; j++){
                result[i][j] = matrix1[i][j] - matrix2[i][j];
            }
        }

    }

    return result;
}

/*
 * add two matrices
 * parameters: 2d vector of doubles of the first matrix, 2d vector of doubles of the second matrix
 * return type: 2d vector of doubles of the result matrix
 * time complexity: O(n^2)
 */
vector<vector<double>> addition(vector<vector<double>> matrix1, vector<vector<double>> matrix2){

    vector<vector<double>> result;
    int rows1 = matrix1.size();
    int cols1 = matrix1[0].size();
    int rows2 = matrix2.size();
    int cols2 = matrix2[0].size();

    if (rows1==rows2 && cols1==cols2){
        result.resize(rows1);
        for(int i = 0; i < rows1; i++){
            result[i].resize(cols1);
            for(int j = 0; j < cols1; j++){
                result[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
    }

    return result;
}

/*
 * find the transpose of a matrix
 * parameters: 2d vector of doubles of the matrix
 * return type: 2d vector of doubles of the transpose matrix
 * time complexity: O(n^2)
 */
vector<vector<double>> transpose(vector<vector<double>> matrix){

    vector<vector<double>> transpose(matrix[0].size(), vector<double>(matrix.size()));

    for (int i = 0; i < matrix.size(); i++)
        for (int j = 0; j < matrix[i].size(); j++)
            transpose[j][i] = matrix[i][j];
    return transpose;
}

/*
 * check if a matrix is symmetric
 * parameters: 2d vector of doubles of the matrix
 * return type: bool of whether the matrix is symmetric
 * time complexity: O(n^2)
 */

bool is_symmetric(vector<vector<double>> matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();

    if (rows != cols)
        return false;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if (matrix[i][j] != matrix[j][i]){
                return false;
            }
        }
    }
    return true;
}

/*
 * check if a matrix is skew-symmetric
 * parameters: 2d vector of doubles of the matrix
 * return type: bool of whether the matrix is skew-symmetric
 * time complexity: O(n^2)
 *
 */
bool is_skew_symmetric(vector<vector<double>> matrix){

    int rows = matrix.size();
    int cols = matrix[0].size();

    if (rows != cols)
        return false;

    for(int i = 0;i < rows; i++){
        for(int j = 0; j < cols; j++){
            if (matrix[i][j] != -1 * matrix[j][i]){
                return false;
            }
        }
    }
    return true;
}

/*
 * find the determinant of a matrix
 * parameters: 2d vector of doubles of the matrix
 * return type: double of the determinant of the matrix
 * time complexity: O(n^3)
 */
double determinant(vector<vector<double>> matrix){

    int rows = matrix.size();
    int cols = matrix[0].size();

    // if the matrix is not square
    if (rows != cols)
        return -1;

    double det = 0;
    if (rows == 1)
        return matrix[0][0];
    if (rows == 2)
        return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    else{
        for (int i = 0; i < rows; i++){

            vector<vector<double>> sub_matrix;
            for (int j = 1; j < rows; j++){
                vector<double> sub_matrix_row;
                for (int k = 0; k < cols; k++){
                    if (k != i)
                        sub_matrix_row.push_back(matrix[j][k]);
                }
                sub_matrix.push_back(sub_matrix_row);
            }
            det += matrix[0][i] * pow(-1, i) * determinant(sub_matrix);
        }
    }
    return det;
}

/*
 * check if a matrix is singular
 * parameters: 2d vector of doubles of the matrix
 * return type: bool of whether the matrix is singular
 * time complexity: O(n^3)
 */

bool is_singular(vector<vector<double>> matrix){
    return (determinant(matrix) == 0);
}

/*
 * find the adjoint of a matrix
 * parameters: 2d vector of doubles of the matrix
 * return type: 2d vector of doubles of the adjoint matrix
 * time complexity: O(n^3)
 *
 */

vector<vector<double>> adjoint(vector<vector<double>> matrix){

    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<vector<double>> adj_matrix(rows, vector<double>(cols));

    // if the matrix is not square
    if (rows != cols) {
        adj_matrix.clear();
        return adj_matrix;
    }


    if (rows == 1)
        return matrix;
    if (rows == 2) {
        adj_matrix[0][0] = matrix[1][1];
        adj_matrix[0][1] = -1 * matrix[0][1];
        adj_matrix[1][0] = -1 * matrix[1][0];
        adj_matrix[1][1] = matrix[0][0];
        return adj_matrix;
    }

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){

            vector<vector<double>> sub_matrix;
            for (int k = 0; k < rows; k++){
                if (k != i){
                    vector<double> sub_matrix_row;
                    for (int h = 0; h < cols; h++){
                        if (h != j)
                            sub_matrix_row.push_back(matrix[k][h]);
                    }

                    sub_matrix.push_back(sub_matrix_row);
                }
            }

            adj_matrix[j][i] = pow(-1, i + j) * determinant(sub_matrix);
        }
    }
    return adj_matrix;
}

/*
 * find the inverse of a matrix
 * parameters: 2d vector of doubles of the matrix
 * return type: 2d vector of doubles of the inverse matrix
 * time complexity: O(n^3)
 */

vector<vector<double>> inverse(vector<vector<double>> matrix) {

    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<vector<double>> inverse_matrix;

    double det = determinant(matrix);

    // if the matrix is not square or the matrix is singular
    if (rows != cols || det == 0)
        return inverse_matrix;

    inverse_matrix.resize(rows);

    vector<vector<double>> adj_matrix = adjoint(matrix); // O(n^3)

    for (int i = 0; i < rows; i++) {
        inverse_matrix[i].resize(cols);
        for (int j = 0; j < cols; j++) {
            inverse_matrix[i][j] = adj_matrix[i][j] / det;
        }
    }

    return inverse_matrix;
}

/*
 * read two matrices from the user and add them than print the result
 * parameters: none
 * return type: none
 * time complexity: O(n^2)
 */

void add_two_matrices(){

    vector<vector<double>> matrix_1, matrix_2;
    cout << "Enter the first matrix" << endl;
    read_matrix(matrix_1);

    cout << "Enter the second matrix" << endl;
    read_matrix(matrix_2);

    vector<vector<double>> result = addition(matrix_1, matrix_2); // O(n^2)

    if (!result.empty()) {
        cout << "The sum of the two matrices is: " << endl;
        print_matrix(result); // O(n^2)
    } else
        cout << "Matrices cannot be added\n";

}
/*
 * read two matrices from the user and subtract them than print the result
 * parameters: none
 * return type: none
 * time complexity: O(n^2)
 */

void subtract_two_matrices(){
    vector<vector<double>> matrix_1,matrix_2;
    cout<<"Enter the first matrix"<<endl;
    read_matrix(matrix_1); // O(n^2)
    cout<<"Enter the second matrix"<<endl;
    read_matrix(matrix_2);// O(n^2)

    vector<vector<double>> result = subtraction(matrix_1, matrix_2);

    if (!result.empty()) {
        cout << "The difference of the two matrices is: " << endl;
        print_matrix(result);// O(n^2)
    }

    else
        cout<<"Matrices cannot be subtracted\n";
}

/*
 * read two matrices from the user and multiply them than print the result
 * parameters: none
 * return type: none
 * time complexity: O(n^3)
 */

void multiply_two_matrices(){
    vector<vector<double>> matrix_1,matrix_2;
    cout<<"Enter the first matrix"<<endl;
    read_matrix(matrix_1);// O(n^2)
    cout<<"Enter the second matrix"<<endl;
    read_matrix(matrix_2);// O(n^2)

    vector<vector<double>> result = multiplication(matrix_1, matrix_2); // O(n^3)

    if (!result.empty()) {
        cout << "The product of the two matrices is: " << endl;
        print_matrix(result);// O(n^2)
    }

    else
        cout<<"Matrices cannot be multiplied\n";

}

/*
 * read a matrix from the user and find its transpose than print the result
 * parameters: none
 * return type: none
 * time complexity: O(n^2)
 */

void get_matrix_transpose(){
    vector<vector<double>> matrix;
    cout<<"Enter the matrix"<<endl;
    read_matrix(matrix);// O(n^2)

    vector<vector<double>> result = transpose(matrix);// O(n^2)

    if (!result.empty()) {
        cout << "The transpose of the matrix is: " << endl;
        print_matrix(result);// O(n^2)
    }
}

/*
 * read a matrix from the user and find its determinant than print the result
 * parameters: none
 * return type: none
 * time complexity: O(n^3)
 */

void get_matrix_determinant(){
    vector<vector<double>> matrix;
    cout<<"Enter the matrix"<<endl;
    read_matrix(matrix);// O(n^2)

    double result = determinant(matrix);// O(n^3)

    if (result != -1)
        cout << "The determinant of the matrix is: " << result << endl;
    else cout << "The matrix is not square" << endl;
}
/*
 * read a matrix from the user and find its inverse than print the result
 * parameters: none
 * return type: none
 * time complexity: O(n^3)
 */
void get_matrix_inverse(){
    vector<vector<double>> matrix;
    cout<<"Enter the matrix"<<endl;
    read_matrix(matrix);// O(n^2)

    vector<vector<double>> result = inverse(matrix);// O(n^3)

    if (!result.empty()) {
        cout << "The inverse of the matrix is: " << endl;
        print_matrix(result);// O(n^2)
    }

    else
        cout << "The matrix is not invertible" << endl;
}

/*
 * read a matrix from the user and find its adjoint than print the result
 * parameters: none
 * return type: none
 * time complexity: O(n^3)
 */
void get_matrix_adjoint(){
    vector<vector<double>> matrix;
    cout<<"Enter the matrix"<<endl;
    read_matrix(matrix);

    vector<vector<double>> result = adjoint(matrix);

    if (!result.empty()) {
        cout << "The adjoint of the matrix is: " << endl;
        print_matrix(result);
    }
    else
        cout<<"The matrix is not square"<<endl;
}

/*
 * read a matrix from the user and check  if it is a symmetric matrix

 * parameters: none
 * return type: none
 * time complexity: O(n^2)
 */

void check_matrix_is_symmetric(){
    vector<vector<double>> matrix;
    cout<<"Enter the matrix"<<endl;
    read_matrix(matrix);

    bool result = is_symmetric(matrix); // O(n^2)

    if (result)
        cout << "The matrix is symmetric" << endl;
    else cout << "The matrix is not symmetric" << endl;


}

/*
 * read a matrix from the user and check  if it is a skew-symmetric matrix
 * parameters: none
 * return type: none
 * time complexity: O(n^2)
 */

void check_matrix_is_skew_symmetric(){
    vector<vector<double>> matrix;
    cout<<"Enter the matrix"<<endl;
    read_matrix(matrix);

    bool result = is_skew_symmetric(matrix); // O(n^2)

    if (result)
        cout << "The matrix is skew symmetric" << endl;
    else cout << "The matrix is not skew symmetric" << endl;


}

/*
 * read a matrix from the user and check  if it is a singular matrix
 * parameters: none
 * return type: none
 * time complexity: O(n^2)

 */
void check_matrix_is_singular(){


    vector<vector<double>> matrix;
    cout<<"Enter the matrix"<<endl;
    read_matrix(matrix);

    bool result = is_singular(matrix);// O(n^3)

    if (result)
        cout << "The matrix is singular" << endl;
    else cout << "The matrix is not singular" << endl;


}
/*
 * display the menu
 * parameters: none
 * return type: int
 * time complexity: O(1)
 *
 */

int menu(){
    int choice=-1;

    // keep asking until the user enters a valid choice
    while (choice == -1){

        cout << "             *****Welcome to matrices solver******"<<endl;
        cout<<"1) add two matrices"<<endl;
        cout<<"2) subtract two matrices"<<endl;
        cout<<"3) multiply two matrices"<<endl;
        cout<<"4) get the transpose of a matrix"<<endl;
        cout<<"5) get the determinant of a matrix"<<endl;
        cout<<"6) get the inverse of a matrix"<<endl;
        cout<<"7) get the adjoint of a matrix"<<endl;
        cout<<"8) check if a matrix is symmetric"<<endl;
        cout<<"9) check if a matrix is skew symmetric"<<endl;
        cout<<"10) check if a matrix is singular"<<endl;
        cout<<"11) exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        if (!(choice >= 1 && choice <= 11) ){
            cout<<"Invalid choice, try again\n";
            choice =-1;
        }
    }
    return choice;
}

/*
 * run the program
 * parameters: none
 * return type: none
 * time complexity: O(n^3)
 */


void run(){

    bool exit = false;

    while (!exit){

        int choice = menu();

        switch (choice){
            case 1:
                add_two_matrices();
                break;
            case 2:
                subtract_two_matrices();
                break;
            case 3:
                multiply_two_matrices();
                break;
            case 4:
                get_matrix_transpose();
                break;
            case 5:
                get_matrix_determinant();
                break;
            case 6:
                get_matrix_inverse();
                break;
            case 7:
                get_matrix_adjoint();
                break;
            case 8:
                check_matrix_is_symmetric();
                break;
            case 9:
                check_matrix_is_skew_symmetric();
                break;
            case 10:
                check_matrix_is_singular();
                break;
            case 11:
                exit = true;
                break;
        }
    }

}

int main(){

    run();

}


