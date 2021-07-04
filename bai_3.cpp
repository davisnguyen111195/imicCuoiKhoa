/*
*Xây dựng Class giải phương trình bậc 2
*/
#include <stdio.h>
#include <math.h>
#define EPSILON 0.0001f

class GiaiPhuongTrinhBac2 {
    public: 
        double a;
        double b;
        double c;
        double delta;
        double x1;
        double x2;
        double x;
        double sqrtDelta;
    GiaiPhuongTrinhBac2() {

    }
    GiaiPhuongTrinhBac2(double a, double b, double c) {
        this->a = a;
        this->b = b;
        this->c = c; 
        this->delta = b*b - 4*a*c;
        this->sqrtDelta = sqrt(delta);
        if(this->delta < 0) {
            printf("Vo Nghiem");
        } else if(this->delta == 0) {
            this->x = (-b) / (2*a);
            printf("PT co nghiem kep %lf", this->x);
        } else {
            this->x1 = ((-b) + this->sqrtDelta) / (2 * a);
            this->x2 = ((-b) - this->sqrtDelta) / (2 * a);
            printf("PT co nghiem x1 = %lf\n", this->x1);
            printf("PT co nghiem x2 = %lf\n", this->x2);
        }
    }
};



int main() {
    GiaiPhuongTrinhBac2 ptb2(5, 1, 1);
    return 0;
}
