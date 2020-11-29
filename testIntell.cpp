#include <iostream>
#include <thread>
#include <ctime> 


using namespace std;



void Find_min_value_in_random_array()
{
    srand(time(0));
    const int array_size = 250000; // size of array
    int array1[array_size]; // create of array
    for (int counter = 0; counter < array_size; counter++)
    {
     array1[counter] = rand() % 50 - rand() % 50; // fill array by numbers from -49 to 49 
     cout << array1[counter] << " "; // output number
    }
    int min = array1[0]; // min value
    for (int counter = 1; counter < array_size; counter++)
    {
     if ( min > array1[counter] ) // search min value in array  
         min = array1[counter];
    }
    

    cout<<min<<endl;
}
void Time_of_work(){
    cout << "runtime = " << clock()/100000.0 << endl; // time work of THE Program                   
    system("pause");
    
}


int main()
{   
    thread thread1(Find_min_value_in_random_array); 
    thread thread2(Find_min_value_in_random_array);
    thread thread3(Find_min_value_in_random_array);
    thread thread4(Find_min_value_in_random_array); 
    thread thread5(Find_min_value_in_random_array);
    thread thread6(Find_min_value_in_random_array);
    thread1.join();
    thread2.join();
    thread3.join();
    thread4.join();
    thread5.join();
    thread6.join(); 
    Time_of_work();

    return 0;
}