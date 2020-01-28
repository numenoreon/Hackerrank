class BadLengthException {
    int n;
    public:
    BadLengthException(int num) {
        n = num;
    }
    int what() {
        return n;
    }
};