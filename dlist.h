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
	class const_iterator{
		friend class DList;
	protected:
		Node* curr_;
		//assign curr_ with n;
		const_iterator(Node* n){
			curr_=n;
		}
	public:
		const_iterator(){
			curr_=nullptr;
		}
		const_iterator operator++(){
			//++x
			curr_=curr_->next_;
			return *this;
		}
		const_iterator operator++(int){
			//x++
			const_iterator old=*this;
			curr_=curr_->next_;
			return old;
		}
		const_iterator operator--(){
			//--x
			curr_=curr_->prev_;
			return *this;
		}
		const_iterator operator--(int){
			//x--
			const_iterator old=*this;
			curr_=curr_->prev_;
			return old;
		}
		const T& operator*() const{
			return curr_->data_;
		}
		bool operator!=(const_iterator rhs) const{
			return (curr_!=rhs.curr_);
		}
		bool operator==(const_iterator rhs) const{
			return (curr_==rhs.curr_);
		}
	};
	class iterator:public const_iterator{
		friend class DList;
		iterator(Node* n):const_iterator(n){}
	public:
		iterator():const_iterator(){}
		iterator operator++(){
			//++x
			this->curr_=this->curr_->next_;
			return *this;
		}
		iterator operator++(int){
			//x++
			iterator old=*this;
			this->curr_=this->curr_->next_;
			return old;
		}
		iterator operator--(){
			//--x
			this->curr_=this->curr_->prev_;
			return *this;
		}
		iterator operator--(int){
			//x--
			iterator old=*this;
			this->curr_=this->curr_->prev_;
			return old;
		}
		T& operator*() const{
			return this->curr_->data_;
		}
	};
	DList(){
		front_=nullptr;
		back_=nullptr;
	}

	//puts a new node containing data at the front of the linked list
	void push_front(const T& data){
		//make a new node with data ,next pointer gets same as front prev is nullptr
		Node* nn=new Node(data,front_,nullptr);
		if(front_!=nullptr){
			//make front's prev point to new node
			front_->prev_ = nn;
		}
		else{
		
			back_=nn;
		}
		//make front point to new node
		front_=nn;
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
	void pop_back(){}
	void print() const{}
	~DList(){}
	const_iterator begin() const{return const_iterator(front_);}
	const_iterator end() const{return const_iterator(nullptr);}
	iterator begin() {return iterator(front_);}
	iterator end() {return iterator(nullptr);}

};











