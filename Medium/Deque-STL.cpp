void printKMax(int arr[], int n, int k){
    deque<int> data;
	for(int i = 0; i < n; i++)
    {
        while(!data.empty() && data.back()<arr[i])
            data.pop_back();

        data.push_back(arr[i]);

        if(i>=k && data.front()==arr[i-k])
            data.pop_front();

        if(i>=k-1){
            cout << data.front() << " ";
        }
	}
    cout << endl;
}