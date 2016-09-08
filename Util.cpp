class Element{

public:
	int key;
	Element(int);
	Element();
};

Element::Element(int key1){//constructors for Elements
	key=key1;
};
Element::Element(){};

class Heap{
private:
	int capacity;
	int size;
public:
	Element *H;
    Heap (int,int);
};

Heap::Heap (int cap, int siz) {//constructor for Heap
  capacity=cap;
  size=siz;

  Element *H=new Element[capacity+1];
};

Heap initialize(int n)
{
	Heap *heap1=new Heap(n,0);
	return *heap1;
};

int parent(int i)//parent of i in heap tree
{
	int result=i/2;
	return result;
};

int left(int i)//left child of i
{
	int result=2*i;
	return result;
};

int right(int i)//right child of i
{
	int result=2*i+1;
	return result;
};

int heapify(Element *A,int i)
{
	int l=left(i);
	int r=right(i);
	int largest;

	Element *leftOne=&A[l];
	int lKey=leftOne->key;
	Element *current=&A[i];
	int curKey=current->key;
	Element *rightOne=&A[r];
	int rKey=rightOne->key;//This made the red lines in the next conditionals go away.


	if(l<=sizeof(A)&& lKey>curKey)
	{
		largest=l;
	}
	else
		largest=i;

	Element *bigOne=&A[largest];
	int bKey=bigOne->key;

	if(r<=sizeof(A) && rKey>bKey)
		largest=r;

	if(largest!=i)//one of the children is larger than parent, so must swap parent with child
	{
		Element *bigOne=&A[largest];
		int bKey=bigOne->key;
		
		Element temp=A[i];
		A[i]=A[largest];
		A[largest]=temp;
		heapify(A,largest);

	}

	return 0;
}

void buildHeap(Heap *heap2, Element *x)
{
	for(int i=0;i<sizeof(x);i++)
	{
		heap2->H[i]=x[i];
	}

	int bound=sizeof(x)/2;
	for(int i=bound;i>=1;i--)
		heapify(x,i);

};

void insert (Heap H, int k)
{

};

int deleteMax (Heap H)
{
	int x;
	return x;
};
void increaseKey (Heap H, Element x, int value)
{
};
void printHeap (Heap H)
{
};