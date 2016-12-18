#ifndef __ARRAY_H__
#define __ARRAY_H__

class Array {
	public:
		Array();
		Array( const Array& );
		Array( const int*, int );
		~Array();
	
		unsigned int getLength() const;
//		operator const char*() const;
		Array& operator=( const Array& );
		bool operator==( const Array& );
		bool operator!=( const Array& );
		
		int &operator[](unsigned int);
		const int &operator[](unsigned int) const;
		
	private:
		void duplicate( const Array& );
		int length;
		int *data;
};

#endif // __ARRAY_H__
