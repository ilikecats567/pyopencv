// This file has been generated by Py++.

#include "boost/python.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "opencv_headers.hpp"
#include "vector_Point2i.pypp.hpp"

namespace bp = boost::python;

static inline void resize(::std::vector< cv::Point_<int> > &inst, size_t num) { inst.resize(num); }

void register_vector_Point2i_class(){

    { //::std::vector< cv::Point_<int> >
        typedef bp::class_< std::vector< cv::Point_<int> > > vector_Point2i_exposer_t;
        vector_Point2i_exposer_t vector_Point2i_exposer = vector_Point2i_exposer_t( "vector_Point2i" );
        bp::scope vector_Point2i_scope( vector_Point2i_exposer );
        //WARNING: the next line of code will not compile, because "::cv::Point_<int>" does not have operator== !
        vector_Point2i_exposer.def( bp::vector_indexing_suite< ::std::vector< cv::Point_<int> > >() );
        vector_Point2i_exposer.def("resize", &::resize, ( bp::arg("num") ));
    }

}
