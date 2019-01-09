//
// Created by jcfei on 18-9-17.
//

#include "tensor.h"
#include "Tensor3D.h"

template<class datatype>
class tsvd_format{
    Tensor3D<datatype> U,Theta,V;
};

template <class datatype>
tsvd_format<datatype> tsvd(Tensor3D<datatype>& a) {
//    int *shape = a.getsize();  //dimension
//    int n1 = shape[0]; int n2 =shape[1]; int n3 = shape[2];
//    int N0 = floor(n3/2.0)+1;
//    cout << "N0 " << N0 <<endl;
//
//    Tensor3D<datatype> v_t(n1,n2,2*N0);
//    fftw_complex out[N0]; //fftw_alloc_real()
//    double *in = fftw_alloc_real(n3);
//    fftw_plan p_fft;
//    p_fft = fftw_plan_dft_r2c_1d(n3, in, out, FFTW_ESTIMATE);
//    p_fft=fftw_plan_dft_r2c_1d(n3,in,out,FFTW_MEASURE);
//
////#pragma omp parallel for num_threads(8)
//    datatype* vex;   // 长度 n3
//    for (int i = 0; i < n1; i++) {
//        for (int j = 0; j < n2; j++) {
//            vex = a.tube(i,j);   //第三维赋值
//            in = vex;
//            fftw_execute_dft_r2c(p_fft, in, out);
//            for (int k = 0; k < N0; k++) {
//                v_t(i,j,k) = out[k][0];
//                v_t(i,j,N0+k) = out[k][1];
//            }               //局部变量归零了？？
//        }
//    }
//
//
//    Tensor3D<datatype> uf(n1,n1,N0),uf1(n1,n1,N0);
//    Tensor3D<datatype> theta(n1,n2,N0);
//    Tensor3D<datatype> vf(n2,n2,N0), vf1(n2,n2,N0);
//
////    cx_mat TMP = zeros<cx_mat>(n1, n2);
////    cx_mat TMPU = zeros<cx_mat>(n1, n1);
////    cx_mat TMPV = zeros<cx_mat>(n2, n2);
////    colvec TMPT;
//
////    for (int k = 0; k < N0; k++) {
////        for (int i = 0; i < n1; i++) {
////            for (int j = 0; j < n2; j++) {
////                TMP(i, j).real(v_t(i,j,k));
////                TMP(i, j).imag(v_t(i,j,N0+k));
////            }
////        }
////
////        svd(TMPU, TMPT, TMPV, TMP, "dc");
////        svd(TMPU,TMPT,TMPV,TMP,"std");
////
////        for (int i = 0; i < n1; i++) {
////            for (int j = 0; j < n1; j++) {
////                uf(i,j,k) = TMPU(i, j).real();
////                uf1(i,j,k) = TMPU(i, j).imag();
////            }
////        }
////        for (int i = 0; i < n2; i++) {
////            for (int j = 0; j < n2; j++) {
////                vf(i,j,k) = TMPV(i, j).real();
////                vf1(i,j,k) = TMPV(i, j).imag();
////            }
////        }
////        if (n1 <= n2) {
////            for (int i = 0; i < n1; i++) {
////                theta(i,i,k) = TMPT(i);
////            }
////        } else {
////            for (int i = 0; i < n2; i++) {
////                theta(i,i,k) = TMPT(i);
////            }
////        }
////    }
//    v_t.reset();
//
//
//    fftw_complex out1[N0]; //fftw_alloc_real()
//    double *in1 = fftw_alloc_real(n3);
//    p_fft = fftw_plan_dft_c2r_1d(n3, out1, in1, FFTW_ESTIMATE);
//
//    Tensor3D<datatype> U(n1,n1,n3);
//    for (int i = 0; i < n1; i++) {
//        for (int j = 0; j < n1; j++) {
//            for (int k = 0; k < N0; k++) {
//                out1[k][0] = uf(i,j,k);
//                out1[k][1] = uf1(i,j,k);
//            }
//            fftw_execute_dft_c2r(p_fft, out1, in1);
//            for (int k = 0; k < n3; k++) {
//                U(i,j,k) = 1.0 / n3 * in1[k];
//            }
//        }
//    }
//    uf.reset();
//    uf1.reset();
//
//    Tensor3D<datatype> V(n1,n1,n3);
//    for (int i = 0; i < n1; i++) {
//        for (int j = 0; j < n1; j++) {
//            for (int k = 0; k < N0; k++) {
//                out1[k][0] = vf(i,j,k);
//                out1[k][1] = vf1(i,j,k);
//            }
//            fftw_execute_dft_c2r(p_fft, out1, in1);
//            for (int k = 0; k < n3; k++) {
//                V(i,j,k) = 1.0 / n3 * in1[k];
//            }
//        }
//    }
//    uf.reset();
//    uf1.reset();
//
//    Tensor3D<datatype> Theta(n1,n2,n3);
//    for (int i = 0; i < n1; i++) {
//        for (int j = 0; j < n2; j++) {
//            for (int k = 0; k < N0; k++) {
//                out1[k][0] = theta(i,j,k);
//                out1[k][1] = 0;
//            }
//            fftw_execute_dft_c2r(p_fft, out1, in1);
//            for (int k = 0; k < n3; k++) {
//                Theta(i,j,k) = 1.0 / n3 * in1[k];
//            }
//        }
//    }
//    theta.reset();
//    fftw_destroy_plan(p_fft);
//
//    tsvd_format<datatype> c;
//    c.U = U;
//    c.Theta = Theta;
//    c.V = V;
//
//    return c;
}





