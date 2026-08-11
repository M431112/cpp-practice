#include<iostream>
#include<vector>

using namespace std;

template <class T>
void display(vector<T> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    
    vector<float> vec1;
    float element; 
    int size;
    cout<<"Enter the size of vector: ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the element to store in the vector: ";
        cin>>element;
        vec1.push_back(element);  //push_back(), to insert elements in vector from the rear end.
    }
    cout<<"Displaying vec1 vector!"<<endl;
    display(vec1);

    cout<<"Using pop_back() function!"<<endl;
    vec1.pop_back();  //This method of vectors, deletes the last element of the vector.
    display(vec1);

    cout<<"Using insert and begin() function!"<<endl;
    vector<float> :: iterator iter = vec1.begin();
    vec1.insert(iter+4, 56.76);
    display(vec1);

    cout<<"Vector with length 5 and all the elements being 7."<<endl;
    vector<int> vec4(5,7);
    display(vec4);

    return 0;
}