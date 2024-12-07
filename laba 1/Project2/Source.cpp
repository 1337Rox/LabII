//Edit From Github and edit from VSC
//add comm for ver 1.0
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	//Ââîä
	int price, disc;
	cout << "Price: ";
	cin >> price;
	cout << "Discount: ";
	cin >> disc;
	// Âû÷èñëåíèå ñòîèìîñòè ñî ñêèäêîé
	double discprice = price * (1 - disc / 100.0);
	// Âûâîä ðåçóëüòàòà ñ òî÷íîñòüþ äî äâóõ çíàêîâ
	cout << "A product priced at " << price << " with a " << disc << " precent discount will cost "
		<< fixed << setprecision(2) << discprice << endl;
	return 0;
}

//#include <iostream>
//using namespace std;
//int main() {
//	int num=1322;
////	cin >> num;
//	int th = num / 1000;
//	int hun = (num / 100) % 10;
//	int tens = (num / 10) % 10;
//	int ones = num % 10;
//	// Èñïîëüçóåì ðàçíèöó
//	int res = (th - ones) * (th - ones) + (hun - tens) * (hun - tens);
//	cout << res;
//	return 0;
//}
//
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main() {
//	double x, y, z;
//	cout << "x, y, z: ";
//	cin >> x >> y >> z;
//	double delim = (1 + log(fabs(x + z))) * z;
//	double delit = fabs(sqrt(x) + y / (pow(x, 2) + 4));
//	double res = delim / delit;
//	cout << res;
//	return 0;
//}
