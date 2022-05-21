#include <bits/stdc++.h>

using namespace std;

class SegmentTree{
    private:
        vector<int> st;
        vector<int> datos;
        int n;
    //private: int A;

        int left(int p){
            return p << 1;
        }
        int right(int p){
            return (p << 1) + 1;
        }
        void build(int p, int L, int R){
            if(L == R) st[p] = L;
            else {
                build(left(p),L,(L+R)/2);
                build(right(p), (L+R)/2 + 1, R);
                int p1 = st[left(p)];
                int p2 = st[right(p)];
                st[p] = (datos[p1] <= datos[p2])? p1 : p2;
            }
        }
        //El menor de un intervalo
        int rmq (int p, int L, int R, int i, int j){
            if(i > R || j < L) return -1;
            if(L >= i && R <= j) return st[p];

            int p1 = rmq(left(p), L, (L+R)/2, i, j);
            int p2 = rmq(right(p),(L+R)/2 + 1, R, i, j);

            if(p == -1) return p2;
            if(p == -1) return p1;
            return ((datos[p1] <= datos[p2])? p1 : p2);
        }
        //Cambiar valor
        int update_point(int p, int L, int R, int idx, int new_value) {
            int i = idx, j = idx;
            if (i > R || j < L)
                return st[p];
            if (L == i && R == j) {
                datos[i] = new_value;
                return st[p] = L;
            }
            int p1, p2;
            p1 = update_point(left(p) , L              , (L + R) / 2, idx, new_value);
            p2 = update_point(right(p), (L + R) / 2 + 1, R          , idx, new_value);
            return st[p] = (datos[p1] <= datos[p2]) ? p1 : p2;
        }

    public:
        SegmentTree(vector<int> _datos) {
            datos = _datos;
            n = datos.size();
            st.clear();
            //st = new int[4 * n];
            for (int i = 0; i < 4 * n; i++){
                st.push_back(0);
            }
            build(1, 0, n - 1);
        }

        int rmq(int i, int j) {
            return rmq(1, 0, n - 1, i, j);
        }

        int update_point(int idx, int new_value) {
            return update_point(1, 0, n - 1, idx, new_value);
        }
};



int main(){
    int a;
    a = (2 << 1) +1  ;
    cout<< a<<endl;

    vector<int> datos = {18, 17, 13, 19, 15, 11, 20};
    SegmentTree st(datos);
    cout<<"                 idx 0, 1, 2, 3, 4,  5, 6\n"<<endl;
    cout<<"              A es {18,17,13,19,15, 11,20}\n"<<endl;
    cout<<"RMQ(1, 3) = " << st.rmq(1, 3)<<endl; // answer = index 2
    cout<<"RMQ(4, 6) = "<< st.rmq(4, 6)<<endl; // answer = index 5
    cout<<"RMQ(3, 4) = "<< st.rmq(3, 4)<<endl; // answer = index 4
    cout<<"RMQ(0, 0) = "<< st.rmq(0, 0)<<endl; // answer = index 0
    cout<<"RMQ(0, 1) = "<< st.rmq(0, 1)<<endl; // answer = index 1
    cout<<"RMQ(0, 6) = "<< st.rmq(0, 6)<<endl; // answer = index 5

    cout<<"                         idx    0, 1, 2, 3, 4,  5, 6\n"<<endl;
    cout<<"Ahora, modificamos A entonces {18,17,13,19,15,100,20}\n"<<endl;
    st.update_point(5, 100);                  // update A[5] from 11 to 100
    cout<<"Estos valores no cambiaron\n"<<endl;
    cout<<"RMQ(1, 3) = "<< st.rmq(1, 3)<<endl;               // 2
    cout<<"RMQ(3, 4) = "<< st.rmq(3, 4)<<endl;               // 4
    cout<<"RMQ(0, 0) = "<< st.rmq(0, 0)<<endl;               // 0
    cout<<"RMQ(0, 1) = "<< st.rmq(0, 1)<<endl;               // 1
    cout<<"Estos valores cambiaron\n"<<endl;
    cout<<"RMQ(0, 6) = "<< st.rmq(0, 6)<<endl;            // 5->2
    cout<<"RMQ(4, 6) = "<< st.rmq(4, 6)<<endl;            // 5->4
    cout<<"RMQ(4, 5) = "<< st.rmq(4, 5)<<endl;            // 5->4

}
