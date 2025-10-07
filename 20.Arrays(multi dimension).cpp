//#include <iostream>
//#include <iterator>
//
//int main()
//{
//
//    int scoresV2[5]{ 20,50,60,80,100 };
//
//    for (int i = 0; i<5 ; i++) {
//        std::cout << scoresV2[i]<<'\n';
//    }
//
//
//}


////#include <iostream>
////#include <iterator>
////
////int main()
////{
////
////    int arr[1][1][1]{ {{1}} }; //Multi dimensional arrays
////   
////    
////    std::cout << arr[0][0][0];
////
////}



#include <iostream>
#include <iterator>

int main()
{

    int arr[1][2][3]{
    {
        {2, 3, 5} ,
        {6, 3, 4}
    }
    };

    /*std::cout << arr[0][0][2];*/

    for (int i = 0; i < 1; i++) 
    {

        for (int j = 0; j < 2; j++) 
        { 

            for (int k = 0; k < 3; k++) 
            {
                std::cout << arr[i][j][k]<<'\n';
            }
        }
    }

}
//This is a nested loop example 3 dimensions