#include <stdio.h>

/* 点の構造体を定義します. */
struct point {
    double x, y; /* x, y座標 */
};

/* 長方形の構造体を定義します. */
struct rect {
    struct point p1, p2; /* 左下と右上の点（図2を参照） */
};

/* 長方形を作ります. */
struct rect make_rect(struct point, struct point);

/* 長方形の面積を計算します. */
double compute_area(struct rect);


/*
* main関数です．
*/
int main(void){


    /* 左下と右上の点を宣言します */
    struct point p1 = {10, 20}; /* x = 10, y = 20 */
    struct point p2 = {40, 40}; /* x = 40, y = 40 */
    /* 長方形 */
    struct rect r;
    /* 長方形の面積 */
    double area;

    /* 長方形を作ります */
    r = make_rect(p1, p2);
    /* 長方形の面積を計算・表示します */
    area = compute_area(r);
    printf("長方形の面積 = %lf\n", area);
    /* 正常終了します */
    return 0;
}


    /*
    * 長方形を作ります．
    */
    struct rect make_rect(struct point p1, struct point p2){
        /* 長方形 */
        struct rect r;
        /* 左下の点を設定します */
        r.p1.x = p1.x;
        r.p1.y = p1.y;
        /* 右上の点を設定します */
        r.p2.x = p2.x;
        r.p2.y = p2.y;
        /* 長方形を返します */
        return r;
    }

    /*
    * 長方形の面積を計算します．
    */
    double compute_area(struct rect r){
        /* 面積 */
        double area;
        /* 面積を計算します */
        area = (r.p2.x - r.p1.x) * (r.p2.y - r.p1.y);
        /* 面積を返します */
        return area;
    }