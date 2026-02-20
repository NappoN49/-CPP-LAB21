#include <iostream>
#include <string>

using namespace std;

int main(int argc,char *argv[]){
	if(argc==1){
		cout<<"Please input numbers to find average.";
	}
	else{
		double sumw=0;
		for(int i=1;i<argc;i++) sumw+=stod(argv[i]);
		cout<<"---------------------------------\n";
		cout<<"Average of "<<argc-1<<" numbers = "<< sumw/(argc-1.0) <<"\n";
		cout<<"---------------------------------";
	}
    return 0;
}