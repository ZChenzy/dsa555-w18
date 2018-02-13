template<class T>
class Queue{
	T* data_;
	int capacity_;
	int used_;
	int front_; //index of first item in queue
	int back_;  //index of last item in queue
	void grow(){
		T* tmp=new T[capacity_*2];
		int j=front_;
		for(int i=0;i<used_;i++,(j+1)%capacity_){
			tmp[i]=data[j];
		}
		delete [] data_;
		data_=tmp;
		capacity_=capacity_*2;
		front_=0;
		back_=used_;
	}
public:
	Queue(){
		capacity_=50;
		data_=new T[capacity_];
		used_=0;
		front_=0;
		back_=0;
	}
	void enqueue(const T& data){
		if(used_==capacity_){
			grow();
		}
		data_[back_]=data;
		back_=(back_+1)%capacity_;
		used_++;
	}
	void dequeue(){
		if(!empty()){
			used_--;
			front_=(front_==capacity_-1)?0:front_+1;
		}
	}
	T front() const{
		return data_[front_]
	}
	bool empty(){
		return used_==0;
	}
	~Queue(){
		delete [] data_;
	}
};