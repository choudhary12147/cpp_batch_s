#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int linear_search(vector<int> vec, int key)
{

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == key)
        {
            return i;
        }
    }

    return -1;
}

vector<int> remove_dup(vector<int> &arr)
{

    vector<int> result;

    for (int i = 0; i < arr.size(); i++)
    {

        bool is_present = false;

        for (int j = 0; j < result.size(); j++)
        {
            if (arr[i] == result[j])
            {
                is_present = true;
                break;
            }
        }

        if (!is_present)
        {
            result.push_back(arr[i]);
        }
    }

    return result;
}

void decending_sort(vector<int> &vec)
{

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[i] < vec[j])
            {
                int temp = vec[i];

                vec[i] = vec[j];
                vec[j] = temp;
            }
        }
    }
}



vector<int> merge_sorted( vector<int> &arr1 , vector<int> &arr2){


    vector<int> res;

        int j=0,i=0;

        while (i< arr1.size() && j< arr2.size() )
        {
               
               if (arr1[i] > arr2[j])
               {
                   res.push_back(arr2[j]);
                   j++;
               }else
               {
                res.push_back(arr1[i]);
                i++;
               }
               

        }
        
        while (i < arr1.size())
        {
              res.push_back(arr1[i]);
              i++;
        }

        while (j< arr2.size())
        {
            res.push_back(arr2[j]);
            j++;
        }
        
        

      
   return res;

}






int main()
{

    // Create a vector of size n (user input) and initialize it such that the value at each index is i*i - 3.

    int n = 5;
    vector<int> vec(n);

    for (int i = 0; i < n; i++)
    {
        vec[i] = i * i - 3;
    }

    for (auto it : vec)
    {
        cout << it << ",";
    }
    cout << "\n \n";

    /*
     Create a vector of size 5, initialize it with values {10, 20, 30, 40, 50}, then resize it to 3 elements. Print the vector.
    */

    vector<int> vec1(n);

    for (int i = 0; i < n; i++)
    {
        vec1[i] = 10 * (i + 1);
    }

    for (auto it : vec1)
    {
        cout << it << ",";
    }
    cout << "\n \n";

    vec1.resize(3);

    for (auto it : vec1)
    {
        cout << it << ",";
    }
    cout << "\n \n";

    /*Write code to remove duplicate elements from a vector {10, 20, 30, 20, 10}.*/

    vector<int> arr = {10, 20, 30, 20, 10};

    vector<int> res = remove_dup(arr);

    for (auto it : res)
    {
        cout << it << ",";
    }
    cout << "\n \n";

    /*Create a vector with elements {10, 20, 30, 40}. Insert 25 between 20 and 30 using the insert method*/

    vector<int> vec2 = {10, 20, 30, 40};

    vec2.insert(vec2.begin() + 2, 25);

    for (auto it : vec2)
    {
        cout << it << ",";
    }
    cout << "\n \n";

    /* Create a vector {1, 2, 3, 4, 5, 6} and remove all even numbers using the erase method */

    vector<int> vec3 = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < vec3.size(); i++)
    {
        if (vec3[i] % 2 == 0)
        {
            vec3.erase(vec3.begin() + i);
        }
    }

    for (auto it : vec3)
    {
        cout << it << ",";
    }
    cout << "\n \n";

    /*
     Write code to reverse a vector {100, 200, 300, 400, 500} using the rbegin() and rend() iterators
    */

    vector<int> vec4 = {100, 200, 300, 400, 500};

    vec4.assign(vec4.rbegin(), vec4.rend());

    for (auto it : vec4)
    {
        cout << it << ",";
    }
    cout << "\n \n";

    /* Given a vector {3, 1, 4, 1, 5, 9}, sort it in descending order. */

    vector<int> vec5 = {3, 1, 4, 1, 5, 9};

    decending_sort(vec5);

    for (auto it : vec5)
    {
        cout << it << ",";
    }
    cout << "\n \n";

    /*
    Create two vectors {1, 3, 5} and {2, 4, 6}. Merge them into a single sorted vector.
    */

    vector<int> vect1 = {1, 3, 5};
    vector<int> vect2 = {2, 4, 6};

        vect1.insert(vect1.end(),vect2.begin(),vect2.end());

        for(auto it: vect1){

            cout<<it<<",";
        }

    cout<< "\n \n";

    /*Given a vector {10, 20, 30, 20, 10}, find the first occurrence of the element 20 and remove it.*/

    vector<int> vect = {10, 20, 30, 20, 10};

    int key = 20;

    int pos = linear_search(vect, key);

    cout << "occurance at " << pos << endl;

    // sortcut

    find(vect.begin(), vect.end(), 20);

    /*Write code to compute the sum of all elements in a vector using a loop.*/

    int sum = accumulate(vect.begin(), vect.end(), 0);
    cout << sum<<endl;

    
    // merge 2 sorted array and the result array is also sorted



      vector<int> arrr1 = {1,2,33,33,20,20,89};

      vector<int> arrr2  = {20,23,24,25,29,32,88};


       vector<int> ans =  merge_sorted(arrr1,arrr2);

   for (int i = 0; i < ans.size(); i++)
   {
        cout<<ans[i]<<",";
   }
   





    return 0;
}
