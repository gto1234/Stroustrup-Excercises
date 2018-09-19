char ch;
extern char ch;


string s;
extern string s;

int count = 1;
extern int count;


const double pi = 3.1415926535897932385;
extern const double pi;


extern int error_number;
int error_number;


const char* name = "Njal";
extern const char* name;


const char* season[] = {"spring","summer","autumn","winter"}
extern const* season[];


struct Date {int d,m,y;};
extern stuct Date;


int day(Date* p){return p->d;}
int day(Date* p);


double sqrt(double);
double sqrt(double x){ return x; /*Yes, I know that it is bug*/}


template<class T> T abs(T a) {return a<0 ? -a: a;}
template<class T> T abs(T a);


