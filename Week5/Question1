#include<iostream>
#include<algorithm>

using namespace std;

char char_freq[26] = {0};

void max_char_freq(char arr[],int n){
	for(int i=0;i<n;i++){
    int val = (int)(arr[i])-97;
		char_freq[val]++;
	}	
}

int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		char arr[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];

    for(int i=0;i<26;i++) char_freq[i]=0;
		
		max_char_freq(arr,n);
		int max= *max_element(char_freq,char_freq+26);
		int ind = max_element(char_freq,char_freq+26)-char_freq;
    char ch = 'a' + (char)(ind);
    
		if(max>1)
			cout << ch << "-" << max << endl;
		else
			cout << "No Duplicate Present" << endl;
	}
}
