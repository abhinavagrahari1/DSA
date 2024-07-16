// 1656. Design an Ordered Stream

// There is a stream of n (idKey, value) pairs arriving in an arbitrary order, where idKey is an integer between 1 and n and value is a string. No two pairs have the same id.

// Design a stream that returns the values in increasing order of their IDs by returning a chunk (list) of values after each insertion. The concatenation of all the chunks should result in a list of the sorted values.

// Implement the OrderedStream class:

// OrderedStream(int n) Constructs the stream to take n values.
// String[] insert(int idKey, String value) Inserts the pair (idKey, value) into the stream, then returns the largest possible chunk of currently inserted values that appear next in the order.

class OrderedStream {

public:
vector<string>v1;
    OrderedStream(int n) {
        v1.resize(n);
    }
    int curr_index=0;
    
    vector<string> insert(int idKey, string value) {
        v1[idKey-1] = value;

        vector<string> s;
        while(curr_index < v1.size() && v1[curr_index] != ""){
            s.push_back(v1[curr_index]);
            curr_index++;
        }
        return s;        
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */