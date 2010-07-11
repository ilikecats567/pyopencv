// This file has been generated by Py++.

#include "boost/python.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "opencv_headers.hpp"
#include "vector_Rect.pypp.hpp"

namespace bp = boost::python;

static inline void resize(::std::vector< cv::Rect_<int> > &inst, size_t num) { inst.resize(num); }

void register_vector_Rect_class(){

    { //::std::vector< cv::Rect_<int> >
        typedef bp::class_< std::vector< cv::Rect_<int> > > vector_Rect_exposer_t;
        vector_Rect_exposer_t vector_Rect_exposer = vector_Rect_exposer_t( "vector_Rect" );
        bp::scope vector_Rect_scope( vector_Rect_exposer );
        //WARNING: the next line of code will not compile, because "cv::Rect_<int>" does not have operator== !
        vector_Rect_exposer.def( bp::vector_indexing_suite< ::std::vector< cv::Rect_<int> > >() );
        vector_Rect_exposer.def("resize", &::resize, ( bp::arg("num") ));
    }

}
