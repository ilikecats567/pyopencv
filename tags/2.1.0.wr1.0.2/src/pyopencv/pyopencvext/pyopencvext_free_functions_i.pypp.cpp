// This file has been generated by Py++.

#include "boost/python.hpp"
#include "opencv_headers.hpp"
#include "pyopencvext_free_functions_i.pypp.hpp"

namespace bp = boost::python;

void register_free_functions_i(){

    { //::cvInitSubdivDelaunay2D
    
        typedef void ( *initSubdivDelaunay2D_function_type )( ::CvSubdiv2D *,::CvRect );
        
        bp::def( 
            "initSubdivDelaunay2D"
            , initSubdivDelaunay2D_function_type( &::cvInitSubdivDelaunay2D )
            , ( bp::arg("subdiv"), bp::arg("rect") )
            , "\nWrapped function:"
    "\n    cvInitSubdivDelaunay2D" );
    
    }

    { //::cvIsInf
    
        typedef int ( *isInf_function_type )( double );
        
        bp::def( 
            "isInf"
            , isInf_function_type( &::cvIsInf )
            , ( bp::arg("value") )
            , "\nWrapped function:"
    "\n    cvIsInf" );
    
    }

    { //::cvIsNaN
    
        typedef int ( *isNaN_function_type )( double );
        
        bp::def( 
            "isNaN"
            , isNaN_function_type( &::cvIsNaN )
            , ( bp::arg("value") )
            , "\nWrapped function:"
    "\n    cvIsNaN" );
    
    }

    { //::cv::idct
    
        typedef void ( *idct_function_type )( ::cv::Mat const &,::cv::Mat &,int );
        
        bp::def( 
            "idct"
            , idct_function_type( &::cv::idct )
            , ( bp::arg("src"), bp::arg("dst"), bp::arg("flags")=(int)(0) )
            , "\nComputes inverse Discrete Cosine Transform of a 1D or 2D array."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-idct" );
    
    }

    { //::cv::idft
    
        typedef void ( *idft_function_type )( ::cv::Mat const &,::cv::Mat &,int,int );
        
        bp::def( 
            "idft"
            , idft_function_type( &::cv::idft )
            , ( bp::arg("src"), bp::arg("dst"), bp::arg("flags")=(int)(0), bp::arg("nonzeroRows")=(int)(0) )
            , "\nComputes inverse Discrete Fourier Transform of a 1D or 2D array."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-idft" );
    
    }

    { //::cv::imdecode
    
        typedef ::cv::Mat ( *imdecode_function_type )( ::cv::Mat const &,int );
        
        bp::def( 
            "imdecode"
            , imdecode_function_type( &::cv::imdecode )
            , ( bp::arg("buf"), bp::arg("flags") )
            , "\nReads an image from a buffer in memory."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/reading_and_writing_images_and_video.html#cv-imdecode" );
    
    }

    { //::cv::imread
    
        typedef ::cv::Mat ( *imread_function_type )( ::std::string const &,int );
        
        bp::def( 
            "imread"
            , imread_function_type( &::cv::imread )
            , ( bp::arg("filename"), bp::arg("flags")=(int)(1) )
            , "\nLoads an image from a file."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/reading_and_writing_images_and_video.html#cv-imread" );
    
    }

    { //::cv::imshow
    
        typedef void ( *imshow_function_type )( ::std::string const &,::cv::Mat const & );
        
        bp::def( 
            "imshow"
            , imshow_function_type( &::cv::imshow )
            , ( bp::arg("winname"), bp::arg("mat") )
            , "\nDisplays the image in the specified window."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/user_interface.html#cv-imshow" );
    
    }

    { //::cv::inRange
    
        typedef void ( *inRange_function_type )( ::cv::MatND const &,::cv::Scalar const &,::cv::Scalar const &,::cv::MatND & );
        
        bp::def( 
            "inRange"
            , inRange_function_type( &::cv::inRange )
            , ( bp::arg("src"), bp::arg("lowerb"), bp::arg("upperb"), bp::arg("dst") )
            , "\nChecks if array elements lie between the elements of two other arrays."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-inrange" );
    
    }

    { //::cv::inRange
    
        typedef void ( *inRange_function_type )( ::cv::MatND const &,::cv::MatND const &,::cv::MatND const &,::cv::MatND & );
        
        bp::def( 
            "inRange"
            , inRange_function_type( &::cv::inRange )
            , ( bp::arg("src"), bp::arg("lowerb"), bp::arg("upperb"), bp::arg("dst") )
            , "\nChecks if array elements lie between the elements of two other arrays."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-inrange" );
    
    }

    { //::cv::inRange
    
        typedef void ( *inRange_function_type )( ::cv::Mat const &,::cv::Scalar const &,::cv::Scalar const &,::cv::Mat & );
        
        bp::def( 
            "inRange"
            , inRange_function_type( &::cv::inRange )
            , ( bp::arg("src"), bp::arg("lowerb"), bp::arg("upperb"), bp::arg("dst") )
            , "\nChecks if array elements lie between the elements of two other arrays."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-inrange" );
    
    }

    { //::cv::inRange
    
        typedef void ( *inRange_function_type )( ::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::cv::Mat & );
        
        bp::def( 
            "inRange"
            , inRange_function_type( &::cv::inRange )
            , ( bp::arg("src"), bp::arg("lowerb"), bp::arg("upperb"), bp::arg("dst") )
            , "\nChecks if array elements lie between the elements of two other arrays."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-inrange" );
    
    }

    { //::cv::initUndistortRectifyMap
    
        typedef void ( *initUndistortRectifyMap_function_type )( ::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::cv::Size,int,::cv::Mat &,::cv::Mat & );
        
        bp::def( 
            "initUndistortRectifyMap"
            , initUndistortRectifyMap_function_type( &::cv::initUndistortRectifyMap )
            , ( bp::arg("cameraMatrix"), bp::arg("distCoeffs"), bp::arg("R"), bp::arg("newCameraMatrix"), bp::arg("size"), bp::arg("m1type"), bp::arg("map1"), bp::arg("map2") ) );
    
    }

    { //::cv::inpaint
    
        typedef void ( *inpaint_function_type )( ::cv::Mat const &,::cv::Mat const &,::cv::Mat &,double,int );
        
        bp::def( 
            "inpaint"
            , inpaint_function_type( &::cv::inpaint )
            , ( bp::arg("src"), bp::arg("inpaintMask"), bp::arg("dst"), bp::arg("inpaintRange"), bp::arg("flags") ) );
    
    }

    { //::cv::integral
    
        typedef void ( *integral_function_type )( ::cv::Mat const &,::cv::Mat &,::cv::Mat &,::cv::Mat &,int );
        
        bp::def( 
            "integral"
            , integral_function_type( &::cv::integral )
            , ( bp::arg("src"), bp::arg("sum"), bp::arg("sqsum"), bp::arg("tilted"), bp::arg("sdepth")=(int)(-0x000000001) ) );
    
    }

    { //::cv::integral
    
        typedef void ( *integral_function_type )( ::cv::Mat const &,::cv::Mat &,::cv::Mat &,int );
        
        bp::def( 
            "integral"
            , integral_function_type( &::cv::integral )
            , ( bp::arg("src"), bp::arg("sum"), bp::arg("sqsum"), bp::arg("sdepth")=(int)(-0x000000001) ) );
    
    }

    { //::cv::integral
    
        typedef void ( *integral_function_type )( ::cv::Mat const &,::cv::Mat &,int );
        
        bp::def( 
            "integral"
            , integral_function_type( &::cv::integral )
            , ( bp::arg("src"), bp::arg("sum"), bp::arg("sdepth")=(int)(-0x000000001) ) );
    
    }

    { //::cv::invert
    
        typedef double ( *invert_function_type )( ::cv::Mat const &,::cv::Mat &,int );
        
        bp::def( 
            "invert"
            , invert_function_type( &::cv::invert )
            , ( bp::arg("a"), bp::arg("c"), bp::arg("flags")=int(::cv::DECOMP_LU) )
            , "\nFinds the inverse or pseudo-inverse of a matrix."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-invert" );
    
    }

    { //::cv::invertAffineTransform
    
        typedef void ( *invertAffineTransform_function_type )( ::cv::Mat const &,::cv::Mat & );
        
        bp::def( 
            "invertAffineTransform"
            , invertAffineTransform_function_type( &::cv::invertAffineTransform )
            , ( bp::arg("M"), bp::arg("iM") ) );
    
    }

    { //::cv::isContourConvex
    
        typedef bool ( *isContourConvex_function_type )( ::cv::Mat const & );
        
        bp::def( 
            "isContourConvex"
            , isContourConvex_function_type( &::cv::isContourConvex )
            , ( bp::arg("contour") ) );
    
    }

}
