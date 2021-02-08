/*
 * Below is the interface for Iterator, which is already defined for you.
 * **DO NOT** modify the interface for Iterator.
 *
 *  class Iterator {
 *		struct Data;
 * 		Data* data;
 *		Iterator(const vector<int>& nums);
 * 		Iterator(const Iterator& iter);
 *
 * 		// Returns the next element in the iteration.
 *		int next();
 *
 *		// Returns true if the iteration has more elements.
 *		bool hasNext() const;
 *	};
 */

class PeekingIterator : public Iterator {
public:
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	    // Initialize any member here.
	    // **DO NOT** save a copy of nums and manipulate it directly.
	    // You should only use the Iterator interface methods.
         m_hasNext = Iterator::hasNext();
        if (m_hasNext)
            m_next = Iterator::next();
	    
	}
	
    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
         return m_next;
        
	}
	
	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next() {
        int result = m_next;
        m_hasNext = Iterator::hasNext();
        if (m_hasNext)
            m_next = Iterator::next();
        return result;
	    
	}
	
	bool hasNext() const {
        return m_hasNext;
	    
	}
    private:
    bool m_hasNext = false;
    int m_next = -1;
};