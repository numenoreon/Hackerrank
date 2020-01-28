class Message {
public:
    Message() {}
    Message(const string& y, const int& x) : content(y), messageOrder(x) {}

    const string& get_text() {
        return content;
    }
    const int& get_id() const {
        return messageOrder;
    } 

private:
    string content;
    int messageOrder;

};

bool operator<(const Message& first, const Message& second) {
    return first.get_id() < second.get_id();   
}

class MessageFactory {
public:
    MessageFactory() {}
    Message create_message(const string& text) {
        return {text,messageNumber++};
    }
private :
    int messageNumber;
};