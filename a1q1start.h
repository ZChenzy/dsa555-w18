
template <typename T>

class DList{
	struct Node{

		Node(const T& data=T{},Node* nx=nullptr,Node* pr=nullptr){
			
		}
	};

public:
	class const_iterator{
	public:
		const_iterator(){}
		const_iterator operator++(){}
		const_iterator operator++(int){}
		const_iterator operator--(){}
		const_iterator operator--(int){}
		bool operator==(const_iterator rhs){}
		bool operator!=(const_iterator rhs){}
		const T& operator*()const{}
	};
	class iterator:public const_iterator{
	public:
		iterator(){}
		iterator operator++(){}
		iterator operator++(int){}
		iterator operator--(){}
		iterator operator--(int){}
		T& operator*(){}
		const T& operator*()const{}
	};
	DList();
	~DList();
	DList(const DList& rhs);
	DList& operator=(const DList& rhs);
	DList(DList&& rhs);
	DList& operator=(DList&& rhs);
	iterator begin(){}
	iterator end(){}
	const_iterator begin() const{}
	const_iterator end() const{}
	void push_front();
	void push_back();
	void pop_front();
	void pop_back();
	iterator insert(const T& data);
	iterator search(const T& data);
	const_iterator search(const T& data) const;
	iterator erase(iterator it);
	iterator erase(iterator first, iterator last);
	bool empty() const;
	int size() const;
};

template <typename T>
DList<T>::DList(){

}
template <typename T>
DList<T>::~DList(){

}
template <typename T>
DList<T>::DList(const DList& rhs){

}
template <typename T>
DList<T>& DList<T>::operator=(const DList& rhs){

}
template <typename T>
DList<T>::DList(DList&& rhs){

}

template <typename T>
DList<T>& DList<T>::operator=(DList&& rhs){

}

template <typename T>
void DList<T>::push_front(const T& data){

}
template <typename T>
void DList<T>::push_back(const T& data){

}
template <typename T>
void DList<T>::pop_front(){

}
template <typename T>
void DList<T>::pop_back(){

}

template <typename T>
typename DList<T>::iterator DList<T>::insert(const T& data){

}

template <typename T>
typename DList<T>::iterator DList<T>::search(const T& data){

}

template <typename T>
typename DList<T>::const_iterator DList<T>::search(const T& data) const{

}

template <typename T>
typename DList<T>::iterator DList<T>::erase(iterator it){

}

template <typename T>
typename DList<T>::iterator DList<T>::erase(iterator first, iterator last){

}
template <typename T>
bool DList<T>::empty() const{

}
template <typename T>
int DList<T>::size() const{

}
