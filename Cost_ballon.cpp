#include<bits/stdc++.h>
using namespace std;

 main(){
	int t;
	cin>>t;
	while(t--){
		int green_price,purple_price;
		cin>>green_price>>purple_price;
		int n;
		cin>>n;
		int left[n];
		int right[n];
		for(int i=0;i<n;i++){
			cin>>left[i];
			cin>>right[i];
		}
		int count_left=0,count_right=0;
		for(int i=0;i<n;i++){
			if(left[i] == 1)
				count_left++;
			if(right[i] == 1)
				count_right++;
		}
		int result = max(count_right,count_left) * min(green_price,purple_price) + min(count_left,count_right) * max(green_price,purple_price);
		cout<<result<<endl;
	}
}
