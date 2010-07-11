// This file has been generated by Py++.

#include "boost/python.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "opencv_headers.hpp"
#include "vector_Vec2b.pypp.hpp"

namespace bp = boost::python;

static inline void resize(::std::vector< cv::Vec<unsigned char, 2> > &inst, size_t num) { inst.resize(num); }

void register_vector_Vec2b_class(){

    { //::std::vector< cv::Vec<unsigned char, 2> >
        typedef bp::class_< std::vector< cv::Vec<unsigned char, 2> > > vector_Vec2b_exposer_t;
        vector_Vec2b_exposer_t vector_Vec2b_exposer = vector_Vec2b_exposer_t( "vector_Vec2b" );
        bp::scope vector_Vec2b_scope( vector_Vec2b_exposer );
        //WARNING: the next line of code will not compile, because "cv::Vec<unsigned char,2>" does not have operator== !
        vector_Vec2b_exposer.def( bp::vector_indexing_suite< ::std::vector< cv::Vec<unsigned char, 2> > >() );
        vector_Vec2b_exposer.def("resize", &::resize, ( bp::arg("num") ));
    }

}
