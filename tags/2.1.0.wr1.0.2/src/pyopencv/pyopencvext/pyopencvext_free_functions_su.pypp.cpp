// This file has been generated by Py++.

#include "boost/python.hpp"
#include "opencv_headers.hpp"
#include "pyopencvext_free_functions_su.pypp.hpp"

namespace bp = boost::python;

void register_free_functions_su(){

    { //::cvSubdiv2DEdgeDst
    
        typedef ::CvSubdiv2DPoint * ( *subdiv2DEdgeDst_function_type )( ::CvSubdiv2DEdge );
        
        bp::def( 
            "subdiv2DEdgeDst"
            , subdiv2DEdgeDst_function_type( &::cvSubdiv2DEdgeDst )
            , ( bp::arg("edge") )
            , bp::return_value_policy< bp::reference_existing_object >()
            , "\nWrapped function:"
    "\n    cvSubdiv2DEdgeDst" );
    
    }

    { //::cvSubdiv2DEdgeOrg
    
        typedef ::CvSubdiv2DPoint * ( *subdiv2DEdgeOrg_function_type )( ::CvSubdiv2DEdge );
        
        bp::def( 
            "subdiv2DEdgeOrg"
            , subdiv2DEdgeOrg_function_type( &::cvSubdiv2DEdgeOrg )
            , ( bp::arg("edge") )
            , bp::return_value_policy< bp::reference_existing_object >()
            , "\nWrapped function:"
    "\n    cvSubdiv2DEdgeOrg" );
    
    }

    { //::cvSubdiv2DGetEdge
    
        typedef ::CvSubdiv2DEdge ( *subdiv2DGetEdge_function_type )( ::CvSubdiv2DEdge,::CvNextEdgeType );
        
        bp::def( 
            "subdiv2DGetEdge"
            , subdiv2DGetEdge_function_type( &::cvSubdiv2DGetEdge )
            , ( bp::arg("edge"), bp::arg("type") )
            , "\nWrapped function:"
    "\n    cvSubdiv2DGetEdge" );
    
    }

    { //::cvSubdiv2DNextEdge
    
        typedef ::CvSubdiv2DEdge ( *subdiv2DNextEdge_function_type )( ::CvSubdiv2DEdge );
        
        bp::def( 
            "subdiv2DNextEdge"
            , subdiv2DNextEdge_function_type( &::cvSubdiv2DNextEdge )
            , ( bp::arg("edge") )
            , "\nWrapped function:"
    "\n    cvSubdiv2DNextEdge" );
    
    }

    { //::cvSubdiv2DRotateEdge
    
        typedef ::CvSubdiv2DEdge ( *subdiv2DRotateEdge_function_type )( ::CvSubdiv2DEdge,int );
        
        bp::def( 
            "subdiv2DRotateEdge"
            , subdiv2DRotateEdge_function_type( &::cvSubdiv2DRotateEdge )
            , ( bp::arg("edge"), bp::arg("rotate") )
            , "\nWrapped function:"
    "\n    cvSubdiv2DRotateEdge" );
    
    }

    { //::cvSubdiv2DSymEdge
    
        typedef ::CvSubdiv2DEdge ( *subdiv2DSymEdge_function_type )( ::CvSubdiv2DEdge );
        
        bp::def( 
            "subdiv2DSymEdge"
            , subdiv2DSymEdge_function_type( &::cvSubdiv2DSymEdge )
            , ( bp::arg("edge") )
            , "\nWrapped function:"
    "\n    cvSubdiv2DSymEdge" );
    
    }

    { //::cvSubstituteContour
    
        typedef void ( *substituteContour_function_type )( ::CvContourScanner,::CvSeq * );
        
        bp::def( 
            "substituteContour"
            , substituteContour_function_type( &::cvSubstituteContour )
            , ( bp::arg("scanner"), bp::arg("new_contour") )
            , "\nWrapped function:"
    "\n    cvSubstituteContour" );
    
    }

    { //::cv::subtract
    
        typedef void ( *subtract_function_type )( ::cv::MatND const &,::cv::Scalar const &,::cv::MatND &,::cv::MatND const & );
        
        bp::def( 
            "subtract"
            , subtract_function_type( &::cv::subtract )
            , ( bp::arg("a"), bp::arg("s"), bp::arg("c"), bp::arg("mask")=cv::MatND() )
            , "\nCalculates per-element difference between two arrays or array and a "
    "\nscalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-subtract" );
    
    }

    { //::cv::subtract
    
        typedef void ( *subtract_function_type )( ::cv::Scalar const &,::cv::MatND const &,::cv::MatND &,::cv::MatND const & );
        
        bp::def( 
            "subtract"
            , subtract_function_type( &::cv::subtract )
            , ( bp::arg("s"), bp::arg("a"), bp::arg("c"), bp::arg("mask")=cv::MatND() )
            , "\nCalculates per-element difference between two arrays or array and a "
    "\nscalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-subtract" );
    
    }

    { //::cv::subtract
    
        typedef void ( *subtract_function_type )( ::cv::MatND const &,::cv::MatND const &,::cv::MatND & );
        
        bp::def( 
            "subtract"
            , subtract_function_type( &::cv::subtract )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("c") )
            , "\nCalculates per-element difference between two arrays or array and a "
    "\nscalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-subtract" );
    
    }

    { //::cv::subtract
    
        typedef void ( *subtract_function_type )( ::cv::MatND const &,::cv::MatND const &,::cv::MatND &,::cv::MatND const & );
        
        bp::def( 
            "subtract"
            , subtract_function_type( &::cv::subtract )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("c"), bp::arg("mask") )
            , "\nCalculates per-element difference between two arrays or array and a "
    "\nscalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-subtract" );
    
    }

    { //::cv::subtract
    
        typedef void ( *subtract_function_type )( ::cv::Scalar const &,::cv::Mat const &,::cv::Mat &,::cv::Mat const & );
        
        bp::def( 
            "subtract"
            , subtract_function_type( &::cv::subtract )
            , ( bp::arg("s"), bp::arg("a"), bp::arg("c"), bp::arg("mask")=cv::Mat() )
            , "\nCalculates per-element difference between two arrays or array and a "
    "\nscalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-subtract" );
    
    }

    { //::cv::subtract
    
        typedef void ( *subtract_function_type )( ::cv::Mat const &,::cv::Scalar const &,::cv::Mat &,::cv::Mat const & );
        
        bp::def( 
            "subtract"
            , subtract_function_type( &::cv::subtract )
            , ( bp::arg("a"), bp::arg("s"), bp::arg("c"), bp::arg("mask")=cv::Mat() )
            , "\nCalculates per-element difference between two arrays or array and a "
    "\nscalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-subtract" );
    
    }

    { //::cv::subtract
    
        typedef void ( *subtract_function_type )( ::cv::Mat const &,::cv::Mat const &,::cv::Mat & );
        
        bp::def( 
            "subtract"
            , subtract_function_type( &::cv::subtract )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("c") )
            , "\nCalculates per-element difference between two arrays or array and a "
    "\nscalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-subtract" );
    
    }

    { //::cv::subtract
    
        typedef void ( *subtract_function_type )( ::cv::Mat const &,::cv::Mat const &,::cv::Mat &,::cv::Mat const & );
        
        bp::def( 
            "subtract"
            , subtract_function_type( &::cv::subtract )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("c"), bp::arg("mask") )
            , "\nCalculates per-element difference between two arrays or array and a "
    "\nscalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-subtract" );
    
    }

    { //::cv::sum
    
        typedef ::cv::Scalar ( *sum_function_type )( ::cv::MatND const & );
        
        bp::def( 
            "sum"
            , sum_function_type( &::cv::sum )
            , ( bp::arg("m") )
            , "\nCalculates sum of array elements."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-sum" );
    
    }

    { //::cv::sum
    
        typedef ::cv::Scalar ( *sum_function_type )( ::cv::Mat const & );
        
        bp::def( 
            "sum"
            , sum_function_type( &::cv::sum )
            , ( bp::arg("m") )
            , "\nCalculates sum of array elements."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-sum" );
    
    }

}