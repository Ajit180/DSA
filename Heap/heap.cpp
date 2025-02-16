#include<iostream>
#include<queue>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;
    heap(){
        arr[0]=-1;
        size = 0;

    }

    void insert(int val){
         
         size = size +1;
         int index = size;
         arr[index] = val;
         


         while (index >1)//This part is for if the array has more than 1 array then swaping purpose
         {
            int parent = index/2;
            if (arr[parent]<arr[index])
            {
                swap(arr[parent],arr[index]);
                index = parent;// update index now index is pointing to parent
            }
            else
            {
                return;
            }
            
            
         }
         
       
    }

    void print(){
        for (int i = 1; i <=size; i++)
        {
            cout<<arr[i]<<"  ";

        }
        cout<<endl;
        
    }

    void deleteformHeap(){

        if (size==0)
        {
            cout<<"Nothing have to delete"<<endl;
            return;
        }

        //step 1: put last element into first index 
        arr[1]=arr[size];
        //step 2: remove last element
        size--;

        int i = 1;
        while (i<size)  // array traverse form 1 to size
        {
            int leftindex = 2*i;
            int rightindex = 2*i+1;

            if(leftindex<size && arr[i]<arr[leftindex] ){
                swap(arr[i],arr[leftindex]);
                i=leftindex;
            }
            else if (rightindex<size && arr[i]<arr[rightindex])
            {
                swap(arr[i],arr[rightindex]);
                i = rightindex;
            }
            else
            {
                return;
            }
            
        }
        
        
    }

};

void heapify(int arr[],int n , int i){
 
  int largest = i;
  int left= i*2;
  int right = i*2+1;

  if (left<=n && arr[largest]<arr[left])
  {
    largest=left;
  }

  if (right<=n && arr[largest]<arr[right])
  {
    largest=right;
  }

  if (largest!=i)
  {
    swap(arr[largest],arr[i]);
    heapify(arr,n,largest);
  }
  
  

}

void heapifymin(int arr[], int n, int i) {
    int smallest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left < n && arr[smallest] > arr[left]) {
        smallest = left;
    }

    if (right < n && arr[smallest] > arr[right]) {
        smallest = right;
    }

    if (smallest != i) {
        swap(arr[smallest], arr[i]);
        heapifymin(arr, n, smallest);
    }
}

void heapsort(int arr[],int n){

    int size=n;

    while (size>1)
    {
        //step1: Swap last element form first
        swap(arr[size],arr[1]);
        size--;
        //step2:
        heapify(arr,size ,1);
    }
    
}


int main(){

    heap h;
    h.insert(50);
    h.insert(54);
    h.insert(79);
    h.insert(58);
    h.insert(89);
    h.print();
    h.deleteformHeap();
    h.print();

    int arr[]= {-1,54,53,55,52,50};
    int n= 5;
    for (int i = n/2; i>0; i--)
    {
        heapify(arr,n,i);
    }

    // cout<<"printing the array now "<<endl;
    // for (int i = 1; i < n; i++)
    // {
    //     cout<<arr[i]<<"  ";
    // }cout<<endl;


    //  for (int i = n/2-1; i>0; i--)
    // {
    //     heapifymin(arr,n,i);
    // }

    cout<<"printing the array now for min heap"<<endl;
    for (int i = 1; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }cout<<endl;

    //heap Sort Function Call
    heapsort(arr,n);

    cout<<"printing The Sorted Heap"<<endl;
    for (int i = 1; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }cout<<endl;

    //Priority Queue

    cout<<"Priority Queue from Here "<<endl;
    //Max Heap
    priority_queue<int>pq;
    pq.push(56);
    pq.push(78);
    pq.push(54);
    pq.push(1);

    cout<<"The top of the priority queue is: "<<pq.top()<<endl;
    pq.pop();
    cout<<"The top of the priority queue is: "<<pq.top()<<endl;
    cout<<"The size of the priority Queue is: "<<pq.size()<<endl;

    //Min Heap
    priority_queue<int,vector<int>,greater<int>>minheap;
    minheap.push(5);
    minheap.push(7);
    minheap.push(4);
    minheap.push(1);
    cout<<"The top of the priority queue is: "<<minheap.top()<<endl;
    minheap.pop();
    cout<<"The top of the priority queue is: "<<minheap.top()<<endl;
    cout<<"The size of the priority Queue is: "<<minheap.size()<<endl;

    
        

    return 0;
}