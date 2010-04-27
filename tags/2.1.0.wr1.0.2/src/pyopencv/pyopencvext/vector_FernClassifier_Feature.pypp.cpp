// This file has been generated by Py++.

#include "boost/python.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "opencv_headers.hpp"
#include "vector_FernClassifier_Feature.pypp.hpp"

namespace bp = boost::python;

static inline void resize(::std::vector< cv::FernClassifier::Feature > &inst, size_t num) { inst.resize(num); }

void register_vector_FernClassifier_Feature_class(){

    { //::std::vector< cv::FernClassifier::Feature >
        typedef bp::class_< std::vector< cv::FernClassifier::Feature > > vector_FernClassifier_Feature_exposer_t;
        vector_FernClassifier_Feature_exposer_t vector_FernClassifier_Feature_exposer = vector_FernClassifier_Feature_exposer_t( "vector_FernClassifier_Feature" );
        bp::scope vector_FernClassifier_Feature_scope( vector_FernClassifier_Feature_exposer );
        //WARNING: the next line of code will not compile, because "::cv::FernClassifier::Feature" does not have operator== !
        vector_FernClassifier_Feature_exposer.def( bp::vector_indexing_suite< ::std::vector< cv::FernClassifier::Feature > >() );
        vector_FernClassifier_Feature_exposer.def("resize", &::resize, ( bp::arg("num") ));
    }

}
