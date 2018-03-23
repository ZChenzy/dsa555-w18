template <typename T>
class BST{

	struct Node{
		T data_;     //data stored
		Node* left_; //ptr to left child
		Node* right_;//ptr to right childe
		Node(const T& data=T{},Node* left=nullptr,Node* right=nullptr){
			data_=data;
			left_=left;
			right_=right;
		}
	};
	Node* root_;
	void insert(const T& data,Node*& subtreeroot){
		if(subtreeroot == nullptr){
			//tree is empty
			subtreeroot=new Node(data);
		}
		else{
			if(data > subtreeroot->data_){
				insert(data,subtreeroot->right_);
			}
			else{
				insert(data,subtreeroot->left_);
			}
		}
	}
public:
	BST(){
		//tree is empty
		root_=nullptr; 
	}
	void insert(const T& data){
		insert(data,root_);
	}
	void insertIterative(const T& data){
		Node* curr=root_;
		if(curr == nullptr){
			root_=new Node(data);
		}
		else{
			bool inserted=false;
			while(!inserted){
				if(data < curr->data_){
					//belongs to left
					if(curr->left_ == nullptr){
						curr->left_=new Node(data);
						inserted=true;
					}
					else{
						curr=curr->left_;
					}

				}
				else{
					//belongs to right
					if(curr->right_ == nullptr){
						curr->right_=new Node(data);
						inserted=true;
					}
					else{
						curr=curr->right_;
					}

				}
			}
		}
	}
};











