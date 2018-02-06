template <typename T>
class DList{

	struct Node{
		T data_;
		Node* next_;
		Node* prev_;
		Node(const T& d=T{}, Node* n=nullptr, Node* p=nullptr){
			data_=d;
			next_=n;
			prev_=p;
		}
	};
	Node* front_;
	Node* back_;
public:
	DList(){
		front_= new Node();
		back_=new Node();
		front_->next_ = back_;
		back_->prev_=front_;
	}
	//puts a new node containing data between the front sentinel (first node)
	//and second node (could be data, could be back sentinel)
	void push_front(const T& data){
		Node* first=front_;
		Node* second=first->next_;
		//make a new node with data ,next pointer points to second
		//node, previous is sentinel
		Node* nn=new Node(data,second,first);
		first->next_=nn;
		second->prev_=nn;
	}
	//puts a new node containing data at the back of the linked list
	void push_back(const T& data);
	//removes the first node in linked list
	void pop_front(){
		if(front_ != nullptr){
			Node* rm = front_;
			if(front_!=back_){  //make sure we have more than one node
				front_=front_->next_; //front_=rm->next_;
				front_->prev_=nullptr;
			}
			else{
				front_=back_=nullptr;
			}
			delete rm;
		}
	}
	//removes last node in linked list
	void pop_back();
	void print() const;
	~DList();	
};