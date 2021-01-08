#include <iostream>
using namespace std;

int main(){
	int count[5] = {0,0,0,0,0};
	char grade = 'X';
	int cnt = 1;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	while(grade != '0'){
		cout << "Student [" << cnt << "]: ";
		cnt++;
		cin >> grade; 
		if(grade == 'A'){ 
			count[0]++;
		}else if(grade == 'B'){ 
			count[1]++;
		}else if(grade == 'C'){ 
			count[2]++;
		}else if(grade == 'D'){
			count[3]++;
		}else if(grade == 'F'){
			count[4]++;
		}else if(grade == '0'){
			cnt--;
			break;
		}else{
			cout << "Wrong input. Please input again.\n";
			cnt--;
			continue;
		}
	}
	
	cout << "In total " << cnt-1 << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	
	return 0;
}
