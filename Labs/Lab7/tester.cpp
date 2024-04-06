// #include <iostream> 

// void square(int* a);

// int main()
// {
// 	int num = 5;

// 	square(&num);
// 	std::cout << num << std::endl;
//     return 0;
// }

// void square(int* a) {
// 	*a = (*a) * (*a);
// }

// #include <iostream>
// using namespace std;

// void countEven(int foo[5],int* a);

// int main()
// {
//     int nums[] = {1,2,3,4,5};
//     int count = 0;
//     int* x = &count;


// countEven(nums, x);

// cout<< *x << endl;
// return 0;
// }

// void countEven(int foo[5], int* a) 
// {
//     *a = 0;
//     for (int i = 0; i < 5; ++i)
//     {
//         if (foo[i] % 2 == 0){
//             (*a)++;
//         }
//     }
// }

// #include <iostream>

// int main() {
// 	int nums[] = {5, 10, 15, 20};
// 	int *x = &nums[2];
// 	int *y = x+1;
// 	std::cout << *x + *y;
// }

    // #include <iostream>

    // void foo(int x, int *someP) {
    //     *someP = x + 1;
    //     x = 80;
    // }

    // int main() {
    //     int a = 30;
    //     int b = 60;
    //     int *p = &a;
    //     int *z = &b;

    //     *p = 12;
    //     b = a;
    //     *p = 21;

    //     std::cout << "1: a=" << a << ", b=" << b << std::endl;
    //     foo(a, z);
    //     std::cout << "2: a=" << a << ", b=" << b << std::endl;

    //     *p = 1;
    //     p = z;
    //     *p = 3;

    //     std::cout << "3: a=" << a << ", b=" << b << std::endl;

    //     return 0;
    // }

// #include <iostream>
//     const int arrSize = 3;

// void fillArray(int arr[][arrSize]);
// void printArray(int arr[][arrSize]);

// int main()
// {
// 	int myArr[arrSize][arrSize];
	
// 	printArray(myArr);
// 	fillArray(myArr);
// 	printArray(myArr);
// }

// void fillArray(int arr[][arrSize]) {
// 	for (int i = 0; i < arrSize; i++) {
// 		for (int j = 0; j < arrSize; j++) {
// 			arr[i][j] = (i + 1) * (j + 1);
// 		}
// 	}
// }

// void printArray(int arr[][arrSize]) {
// 	for (int i = 0; i < arrSize; i++) {
// 		for (int j = 0; j < arrSize; j++) {
// 			std::cout << arr[i][j] << " ";
// 		}
// 		std::cout << std::endl;
// 	}
// 	std::cout << std::endl;
// }


// int * foo = new int[5];

//   foo[i] = i;
// }

// for(int i = 0 ; i < 5 ; i++) {
//   std::cout << foo[i];
// }

// std::cout << std::endl;

// delete[] foo;