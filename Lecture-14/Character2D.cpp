// Character2D.cpp
#include <iostream>
using namespace std;

int main() {

	// char a[3][4] = {
	// 	{'A', 'B', 'C', '\0'},
	// 	{'D', 'E', 'F', '\0'},
	// 	{'G', 'H', 'I', '\0'}
	// };

	char a[][100] = {
		"Kartik Mathur",
		"Utkarsh Pandey",
		"Avneesh"
	};
	int row = 3, col = 3;
	cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a[2] << endl;
	// for (int r = 0; r < row; ++r)
	// {
	// 	for (int c = 0; c < col; ++c)
	// 	{
	// 		cout << a[r][c] << " ";
	// 	}
	// 	cout << endl;
	// }


	return 0;
}
















