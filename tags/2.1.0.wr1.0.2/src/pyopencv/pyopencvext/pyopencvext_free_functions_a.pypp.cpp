// This file has been generated by Py++.

#include "boost/python.hpp"
#include "opencv_headers.hpp"
#include "pyopencvext_free_functions_a.pypp.hpp"

namespace bp = boost::python;

void register_free_functions_a(){

    { //::cv::absdiff
    
        typedef void ( *absdiff_function_type )( ::cv::MatND const &,::cv::Scalar const &,::cv::MatND & );
        
        bp::def( 
            "absdiff"
            , absdiff_function_type( &::cv::absdiff )
            , ( bp::arg("a"), bp::arg("s"), bp::arg("c") )
            , "\nComputes per-element absolute difference between 2 arrays or between "
    "\narray and a scalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#absdiff" );
    
    }

    { //::cv::absdiff
    
        typedef void ( *absdiff_function_type )( ::cv::MatND const &,::cv::MatND const &,::cv::MatND & );
        
        bp::def( 
            "absdiff"
            , absdiff_function_type( &::cv::absdiff )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("c") )
            , "\nComputes per-element absolute difference between 2 arrays or between "
    "\narray and a scalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#absdiff" );
    
    }

    { //::cv::absdiff
    
        typedef void ( *absdiff_function_type )( ::cv::Mat const &,::cv::Scalar const &,::cv::Mat & );
        
        bp::def( 
            "absdiff"
            , absdiff_function_type( &::cv::absdiff )
            , ( bp::arg("a"), bp::arg("s"), bp::arg("c") )
            , "\nComputes per-element absolute difference between 2 arrays or between "
    "\narray and a scalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#absdiff" );
    
    }

    { //::cv::absdiff
    
        typedef void ( *absdiff_function_type )( ::cv::Mat const &,::cv::Mat const &,::cv::Mat & );
        
        bp::def( 
            "absdiff"
            , absdiff_function_type( &::cv::absdiff )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("c") )
            , "\nComputes per-element absolute difference between 2 arrays or between "
    "\narray and a scalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#absdiff" );
    
    }

    { //::cv::accumulate
    
        typedef void ( *accumulate_function_type )( ::cv::Mat const &,::cv::Mat &,::cv::Mat const & );
        
        bp::def( 
            "accumulate"
            , accumulate_function_type( &::cv::accumulate )
            , ( bp::arg("src"), bp::arg("dst"), bp::arg("mask")=cv::Mat() ) );
    
    }

    { //::cv::accumulateProduct
    
        typedef void ( *accumulateProduct_function_type )( ::cv::Mat const &,::cv::Mat const &,::cv::Mat &,::cv::Mat const & );
        
        bp::def( 
            "accumulateProduct"
            , accumulateProduct_function_type( &::cv::accumulateProduct )
            , ( bp::arg("src1"), bp::arg("src2"), bp::arg("dst"), bp::arg("mask")=cv::Mat() ) );
    
    }

    { //::cv::accumulateSquare
    
        typedef void ( *accumulateSquare_function_type )( ::cv::Mat const &,::cv::Mat &,::cv::Mat const & );
        
        bp::def( 
            "accumulateSquare"
            , accumulateSquare_function_type( &::cv::accumulateSquare )
            , ( bp::arg("src"), bp::arg("dst"), bp::arg("mask")=cv::Mat() ) );
    
    }

    { //::cv::accumulateWeighted
    
        typedef void ( *accumulateWeighted_function_type )( ::cv::Mat const &,::cv::Mat &,double,::cv::Mat const & );
        
        bp::def( 
            "accumulateWeighted"
            , accumulateWeighted_function_type( &::cv::accumulateWeighted )
            , ( bp::arg("src"), bp::arg("dst"), bp::arg("alpha"), bp::arg("mask")=cv::Mat() ) );
    
    }

    { //::cv::adaptiveThreshold
    
        typedef void ( *adaptiveThreshold_function_type )( ::cv::Mat const &,::cv::Mat &,double,int,int,int,double );
        
        bp::def( 
            "adaptiveThreshold"
            , adaptiveThreshold_function_type( &::cv::adaptiveThreshold )
            , ( bp::arg("src"), bp::arg("dst"), bp::arg("maxValue"), bp::arg("adaptiveMethod"), bp::arg("thresholdType"), bp::arg("blockSize"), bp::arg("C") ) );
    
    }

    { //::cv::add
    
        typedef void ( *add_function_type )( ::cv::MatND const &,::cv::Scalar const &,::cv::MatND &,::cv::MatND const & );
        
        bp::def( 
            "add"
            , add_function_type( &::cv::add )
            , ( bp::arg("a"), bp::arg("s"), bp::arg("c"), bp::arg("mask")=cv::MatND() )
            , "\nComputes the per-element sum of two arrays or an array and a scalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#add" );
    
    }

    { //::cv::add
    
        typedef void ( *add_function_type )( ::cv::MatND const &,::cv::MatND const &,::cv::MatND & );
        
        bp::def( 
            "add"
            , add_function_type( &::cv::add )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("c") )
            , "\nComputes the per-element sum of two arrays or an array and a scalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#add" );
    
    }

    { //::cv::add
    
        typedef void ( *add_function_type )( ::cv::MatND const &,::cv::MatND const &,::cv::MatND &,::cv::MatND const & );
        
        bp::def( 
            "add"
            , add_function_type( &::cv::add )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("c"), bp::arg("mask") )
            , "\nComputes the per-element sum of two arrays or an array and a scalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#add" );
    
    }

    { //::cv::add
    
        typedef void ( *add_function_type )( ::cv::Mat const &,::cv::Scalar const &,::cv::Mat &,::cv::Mat const & );
        
        bp::def( 
            "add"
            , add_function_type( &::cv::add )
            , ( bp::arg("a"), bp::arg("s"), bp::arg("c"), bp::arg("mask")=cv::Mat() )
            , "\nComputes the per-element sum of two arrays or an array and a scalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#add" );
    
    }

    { //::cv::add
    
        typedef void ( *add_function_type )( ::cv::Mat const &,::cv::Mat const &,::cv::Mat & );
        
        bp::def( 
            "add"
            , add_function_type( &::cv::add )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("c") )
            , "\nComputes the per-element sum of two arrays or an array and a scalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#add" );
    
    }

    { //::cv::add
    
        typedef void ( *add_function_type )( ::cv::Mat const &,::cv::Mat const &,::cv::Mat &,::cv::Mat const & );
        
        bp::def( 
            "add"
            , add_function_type( &::cv::add )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("c"), bp::arg("mask") )
            , "\nComputes the per-element sum of two arrays or an array and a scalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#add" );
    
    }

    { //::cv::addWeighted
    
        typedef void ( *addWeighted_function_type )( ::cv::MatND const &,double,::cv::MatND const &,double,double,::cv::MatND & );
        
        bp::def( 
            "addWeighted"
            , addWeighted_function_type( &::cv::addWeighted )
            , ( bp::arg("a"), bp::arg("alpha"), bp::arg("b"), bp::arg("beta"), bp::arg("gamma"), bp::arg("c") )
            , "\nComputes the weighted sum of two arrays."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#addweighted" );
    
    }

    { //::cv::addWeighted
    
        typedef void ( *addWeighted_function_type )( ::cv::Mat const &,double,::cv::Mat const &,double,double,::cv::Mat & );
        
        bp::def( 
            "addWeighted"
            , addWeighted_function_type( &::cv::addWeighted )
            , ( bp::arg("a"), bp::arg("alpha"), bp::arg("b"), bp::arg("beta"), bp::arg("gamma"), bp::arg("c") )
            , "\nComputes the weighted sum of two arrays."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#addweighted" );
    
    }

    { //::cv::arcLength
    
        typedef double ( *arcLength_function_type )( ::cv::Mat const &,bool );
        
        bp::def( 
            "arcLength"
            , arcLength_function_type( &::cv::arcLength )
            , ( bp::arg("curve"), bp::arg("closed") ) );
    
    }

    { //::cvApproxChains
    
        typedef ::CvSeq * ( *approxChains_function_type )( ::CvSeq *,::CvMemStorage *,int,double,int,int );
        
        bp::def( 
            "approxChains"
            , approxChains_function_type( &::cvApproxChains )
            , ( bp::arg("src_seq"), bp::arg("storage"), bp::arg("method")=(int)(2), bp::arg("parameter")=0, bp::arg("minimal_perimeter")=(int)(0), bp::arg("recursive")=(int)(0) )
            , bp::with_custodian_and_ward_postcall< 0, 2, bp::return_value_policy< bp::reference_existing_object > >()
            , "\nWrapped function:"
    "\n    cvApproxChains" );
    
    }

    { //::cvAttrValue
    
        typedef char const * ( *attrValue_function_type )( ::CvAttrList const *,char const * );
        
        bp::def( 
            "attrValue"
            , attrValue_function_type( &::cvAttrValue )
            , ( bp::arg("attr"), bp::arg("attr_name") )
            , "\nWrapped function:"
    "\n    cvAttrValue" );
    
    }

}
