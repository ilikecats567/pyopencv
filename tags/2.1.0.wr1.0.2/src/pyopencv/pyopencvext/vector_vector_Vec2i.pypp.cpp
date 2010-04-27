// This file has been generated by Py++.

#include "boost/python.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "opencv_headers.hpp"
#include "vector_vector_Vec2i.pypp.hpp"

namespace bp = boost::python;

static inline void resize(::std::vector< std::vector< cv::Vec<int, 2> > > &inst, size_t num) { inst.resize(num); }

void register_vector_vector_Vec2i_class(){

    { //::std::vector< std::vector< cv::Vec<int, 2> > >
        typedef bp::class_< std::vector< std::vector< cv::Vec<int, 2> > > > vector_vector_Vec2i_exposer_t;
        vector_vector_Vec2i_exposer_t vector_vector_Vec2i_exposer = vector_vector_Vec2i_exposer_t( "vector_vector_Vec2i" );
        bp::scope vector_vector_Vec2i_scope( vector_vector_Vec2i_exposer );
        //WARNING: the next line of code will not compile, because "::std::vector<cv::Vec<int, 2>, std::allocator<cv::Vec<int, 2> > >" does not have operator== !
        vector_vector_Vec2i_exposer.def( bp::vector_indexing_suite< ::std::vector< std::vector< cv::Vec<int, 2> > > >() );
        vector_vector_Vec2i_exposer.def("resize", &::resize, ( bp::arg("num") ));
    }

}
