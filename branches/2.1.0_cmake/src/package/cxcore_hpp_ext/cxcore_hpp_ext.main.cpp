// This file has been generated by Py++.

#include "boost/python.hpp"

#include "opencv_converters.hpp"

#include "__call_policies.pypp.hpp"

#include "__convenience.pypp.hpp"

#include "ndarray.hpp"

#include "__array_1.pypp.hpp"

#include "boost/python/suite/indexing/vector_indexing_suite.hpp"

#include "__ctypes_integration.pypp.hpp"

#include "cxcore_hpp_wrapper.hpp"

#include "cxcore_hpp_ext/cxcore_hpp_ext_classes_1.pypp.hpp"

#include "cxcore_hpp_ext/cxcore_hpp_ext_classes_2.pypp.hpp"

#include "cxcore_hpp_ext/cxcore_hpp_ext_classes_3.pypp.hpp"

#include "cxcore_hpp_ext/cxcore_hpp_ext_classes_4.pypp.hpp"

#include "cxcore_hpp_ext/cxcore_hpp_ext_free_functions.pypp.hpp"

namespace bp = boost::python;

static boost::python::tuple checkRange_138f1b60b28a059182d9f09088ca2474( ::cv::MatND const & a, bool quiet=true, double minVal=-1.79769313486231570814527423731704356798070567526e+308, double maxVal=1.79769313486231570814527423731704356798070567526e+308 ){
    int idx2;
    bool result = ::cv::checkRange(a, quiet, &idx2, minVal, maxVal);
    return bp::make_tuple( result, idx2 );
}

static boost::python::tuple checkRange_31cc45f75977959e58047954bd730b32( ::cv::Mat const & a, bool quiet=true, double minVal=-1.79769313486231570814527423731704356798070567526e+308, double maxVal=1.79769313486231570814527423731704356798070567526e+308 ){
    cv::Point_<int> pt2;
    bool result = ::cv::checkRange(a, quiet, &pt2, minVal, maxVal);
    return bp::make_tuple( result, pt2 );
}

static void fillConvexPoly_1312287b0cded13c02c57cc3d8ebf4b4( ::cv::Mat & img, std::vector<cv::Point_<int> > const & pts, ::cv::Scalar const & color, int lineType=8, int shift=0 ){
    ::cv::fillConvexPoly(img, (::cv::Point const *)(&pts[0]), (int)(pts.size()), color, lineType, shift);
}

static void fillPoly_e862cfcf1208f193efcd2bec59b744ec( ::cv::Mat & img, std::vector<std::vector<cv::Point_<int> > > const & pts, ::cv::Scalar const & color, int lineType=8, int shift=0, ::cv::Point offset=cv::Point_<int>() ){
    size_t n0_pts = pts.size();
    std::vector< cv::Point_<int> * > buf_pts(n0_pts);
    std::vector<size_t> n1_pts(n0_pts);
    for(size_t i_pts = 0; i_pts<n0_pts; ++i_pts)
    {
        buf_pts[i_pts] = (cv::Point_<int> *)(&pts[i_pts][0]);
        n1_pts[i_pts] = pts[i_pts].size();
    }
        
    ::cv::fillPoly(img, (::cv::Point const * *)(&buf_pts[0]), (int const *)(&n1_pts[0]), n0_pts, color, lineType, shift, offset);
}

static boost::python::tuple getTextSize_efe6452b14ca0fcca5a50ca33199f5e7( ::std::string const & text, int fontFace, double fontScale, int thickness ){
    int baseLine2;
    ::cv::Size result = ::cv::getTextSize(text, fontFace, fontScale, thickness, &baseLine2);
    return bp::make_tuple( result, baseLine2 );
}

static boost::python::tuple kmeans_7acc1faebc4e430dbd210d93113e85c9( ::cv::Mat const & data, int K, ::cv::Mat & best_labels, ::cv::TermCriteria criteria, int attempts, int flags ){
    cv::Mat centers2;
    double result = ::cv::kmeans(data, K, best_labels, criteria, attempts, flags, &centers2);
    return bp::make_tuple( result, centers2 );
}

static boost::python::tuple minMaxLoc_5898fb91ebb58d1df6569148b5c62cce( ::cv::SparseMat const & a ){
    double minVal2;
    double maxVal2;
    int minIdx2;
    int maxIdx2;
    ::cv::minMaxLoc(a, &minVal2, &maxVal2, &minIdx2, &maxIdx2);
    return bp::make_tuple( minVal2, maxVal2, minIdx2, maxIdx2 );
}

static boost::python::tuple minMaxLoc_794fc6a6cce59bf895fdda1a015e64b1( ::cv::MatND const & a, ::cv::MatND const & mask=cv::MatND() ){
    double minVal2;
    double maxVal2;
    int minIdx2;
    int maxIdx2;
    ::cv::minMaxLoc(a, &minVal2, &maxVal2, &minIdx2, &maxIdx2, mask);
    return bp::make_tuple( minVal2, maxVal2, minIdx2, maxIdx2 );
}

static boost::python::tuple minMaxLoc_35f2a2e80fcf305e891ee746d58be725( ::cv::Mat const & a, ::cv::Mat const & mask=cv::Mat() ){
    double minVal2;
    double maxVal2;
    cv::Point_<int> minLoc2;
    cv::Point_<int> maxLoc2;
    ::cv::minMaxLoc(a, &minVal2, &maxVal2, &minLoc2, &maxLoc2, mask);
    return bp::make_tuple( minVal2, maxVal2, minLoc2, maxLoc2 );
}

static void mixChannels_c8fa9614f4fb5a79f84423883d102a9e( ::std::vector< cv::MatND > const & src, ::std::vector< cv::MatND > & dst, std::vector<int> const & fromTo, int npairs ){
    ::cv::mixChannels(src, dst, (int const *)(&fromTo[0]), npairs);
}

static void mixChannels_269d2fa250748779c49641b632451e5f( ::std::vector< cv::Mat > const & src, ::std::vector< cv::Mat > & dst, std::vector<int> const & fromTo, int npairs ){
    ::cv::mixChannels(src, dst, (int const *)(&fromTo[0]), npairs);
}

static void polylines_4b2b9aca4a0ee1864678eae6b982fcc0( ::cv::Mat & img, std::vector<std::vector<cv::Point_<int> > > const & pts, bool isClosed, ::cv::Scalar const & color, int thickness=1, int lineType=8, int shift=0 ){
    size_t n0_pts = pts.size();
    std::vector< cv::Point_<int> * > buf_pts(n0_pts);
    std::vector<size_t> n1_pts(n0_pts);
    for(size_t i_pts = 0; i_pts<n0_pts; ++i_pts)
    {
        buf_pts[i_pts] = (cv::Point_<int> *)(&pts[i_pts][0]);
        n1_pts[i_pts] = pts[i_pts].size();
    }
        
    ::cv::polylines(img, (::cv::Point const * *)(&buf_pts[0]), (int const *)(&n1_pts[0]), n0_pts, isClosed, color, thickness, lineType, shift);
}

#include "ndarray.hpp"

cv::MemStorage createMemStorage(int block_size CV_DEFAULT(0))
{
    return cv::MemStorage(cvCreateMemStorage(block_size));
}

cv::MemStorage createChildMemStorage(cv::MemStorage &parent)
{
    return cv::MemStorage(cvCreateChildMemStorage((CvMemStorage *)parent));
}

BOOST_PYTHON_MODULE(cxcore_hpp_ext){
    bp::implicitly_convertible< cv::FileNode, std::string >();

    bp::implicitly_convertible< cv::FileNode, double >();

    bp::implicitly_convertible< cv::FileNode, float >();

    bp::implicitly_convertible< cv::FileNode, int >();

    bp::implicitly_convertible< cv::RNG, schar >();

    bp::implicitly_convertible< cv::RNG, uchar >();

    bp::implicitly_convertible< cv::RNG, ushort >();

    bp::implicitly_convertible< cv::RNG, double >();

    bp::implicitly_convertible< cv::RNG, float >();

    bp::implicitly_convertible< cv::RNG, int >();

    bp::implicitly_convertible< cv::RNG, short int >();

    bp::implicitly_convertible< cv::RNG, unsigned int >();

    bp::implicitly_convertible< cv::Seq< int >, std::vector< int > >();

    { //::cv::checkRange
    
        typedef boost::python::tuple ( *checkRange_function_type )( cv::MatND const &,bool,double,double );
        
        bp::def( 
            "checkRange"
            , checkRange_function_type( &checkRange_138f1b60b28a059182d9f09088ca2474 )
            , ( bp::arg("a"), bp::arg("quiet")=(bool)(true), bp::arg("minVal")=-1.79769313486231570814527423731704356798070567526e+308, bp::arg("maxVal")=1.79769313486231570814527423731704356798070567526e+308 )
            , "\nChecks every element of an input array for invalid values."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#checkrange"
    "\nArgument 'idx':"\
    "\n    C++ type: int *."\
    "\n    Python type: int."\
    "\n    Output argument: omitted from input and returned as output."\
    "\nReturns:"\
    "\n    ((bool), idx)" );
    
    }

    { //::cv::checkRange
    
        typedef boost::python::tuple ( *checkRange_function_type )( cv::Mat const &,bool,double,double );
        
        bp::def( 
            "checkRange"
            , checkRange_function_type( &checkRange_31cc45f75977959e58047954bd730b32 )
            , ( bp::arg("a"), bp::arg("quiet")=(bool)(true), bp::arg("minVal")=-1.79769313486231570814527423731704356798070567526e+308, bp::arg("maxVal")=1.79769313486231570814527423731704356798070567526e+308 )
            , "\nChecks every element of an input array for invalid values."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#checkrange"
    "\nArgument 'pt':"\
    "\n    C++ type: ::cv::Point *."\
    "\n    Python type: Point2i."\
    "\n    Output argument: omitted from input and returned as output."\
    "\nReturns:"\
    "\n    ((bool), pt)" );
    
    }

    { //::cv::fillConvexPoly
    
        typedef void ( *fillConvexPoly_function_type )( cv::Mat &,std::vector<cv::Point_<int> > const &,::cv::Scalar const &,int,int );
        
        bp::def( 
            "fillConvexPoly"
            , fillConvexPoly_function_type( &fillConvexPoly_1312287b0cded13c02c57cc3d8ebf4b4 )
            , ( bp::arg("img"), bp::arg("pts"), bp::arg("color"), bp::arg("lineType")=(int)(8), bp::arg("shift")=(int)(0) )
            , "\nFills a convex polygon."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/drawing_functions.html#cv-fillconvexpoly"
    "\nArgument 'pts':"\
    "\n    C++ type: ::cv::Point const *."\
    "\n    Python type: _."\
    "\nArgument 'npts':"\
    "\n    Dependent argument: omitted from input. Its value is derived from "\
    "\n    argument 'pts'." );
    
    }

    { //::cv::fillPoly
    
        typedef void ( *fillPoly_function_type )( cv::Mat &,std::vector<std::vector<cv::Point_<int> > > const &,::cv::Scalar const &,int,int,::cv::Point );
        
        bp::def( 
            "fillPoly"
            , fillPoly_function_type( &fillPoly_e862cfcf1208f193efcd2bec59b744ec )
            , ( bp::arg("img"), bp::arg("pts"), bp::arg("color"), bp::arg("lineType")=(int)(8), bp::arg("shift")=(int)(0), bp::arg("offset")=cv::Point_<int>() )
            , "\nFills the area bounded by one or more polygons."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/drawing_functions.html#cv-fillpoly"
    "\nArgument 'pts':"\
    "\n    C++ type: ::cv::Point const * *."\
    "\n    Python type: _."\
    "\nArgument 'npts':"\
    "\n    Dependent argument: omitted from input. Its value is derived from "\
    "\n    argument 'pts'."\
    "\nArgument 'ncontours':"\
    "\n    Dependent argument: omitted from input. Its value is derived from "\
    "\n    argument 'pts'." );
    
    }

    { //::cv::getTextSize
    
        typedef boost::python::tuple ( *getTextSize_function_type )( ::std::string const &,int,double,int );
        
        bp::def( 
            "getTextSize"
            , getTextSize_function_type( &getTextSize_efe6452b14ca0fcca5a50ca33199f5e7 )
            , ( bp::arg("text"), bp::arg("fontFace"), bp::arg("fontScale"), bp::arg("thickness") )
            , "\nCalculates the width and height of a text string."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/drawing_functions.html#cv-gettextsize"
    "\nArgument 'baseLine':"\
    "\n    C++ type: int *."\
    "\n    Python type: int."\
    "\n    Output argument: omitted from input and returned as output."\
    "\nReturns:"\
    "\n    (((C++)cv::Size), baseLine)" );
    
    }

    { //::cv::kmeans
    
        typedef boost::python::tuple ( *kmeans_function_type )( cv::Mat const &,int,cv::Mat &,cv::TermCriteria,int,int );
        
        bp::def( 
            "kmeans"
            , kmeans_function_type( &kmeans_7acc1faebc4e430dbd210d93113e85c9 )
            , ( bp::arg("data"), bp::arg("K"), bp::arg("best_labels"), bp::arg("criteria"), bp::arg("attempts"), bp::arg("flags") )
            , "\nArgument 'centers':"\
    "\n    C++ type: ::cv::Mat *."\
    "\n    Python type: Mat."\
    "\n    Output argument: omitted from input and returned as output."\
    "\nReturns:"\
    "\n    ((float64), centers)" );
    
    }

    { //::cv::minMaxLoc
    
        typedef boost::python::tuple ( *minMaxLoc_function_type )( cv::SparseMat const & );
        
        bp::def( 
            "minMaxLoc"
            , minMaxLoc_function_type( &minMaxLoc_5898fb91ebb58d1df6569148b5c62cce )
            , ( bp::arg("a") )
            , "\nFinds global minimum and maximum in a whole array or sub-array."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-minmaxloc"
    "\nArgument 'minVal':"\
    "\n    C++ type: double *."\
    "\n    Python type: float64."\
    "\n    Output argument: omitted from input and returned as output."\
    "\nArgument 'maxVal':"\
    "\n    C++ type: double *."\
    "\n    Python type: float64."\
    "\n    Output argument: omitted from input and returned as output."\
    "\nArgument 'minIdx':"\
    "\n    C++ type: int *."\
    "\n    Python type: int."\
    "\n    Output argument: omitted from input and returned as output."\
    "\nArgument 'maxIdx':"\
    "\n    C++ type: int *."\
    "\n    Python type: int."\
    "\n    Output argument: omitted from input and returned as output."\
    "\nReturns:"\
    "\n    (minVal, maxVal, minIdx, maxIdx)" );
    
    }

    { //::cv::minMaxLoc
    
        typedef boost::python::tuple ( *minMaxLoc_function_type )( cv::MatND const &,cv::MatND const & );
        
        bp::def( 
            "minMaxLoc"
            , minMaxLoc_function_type( &minMaxLoc_794fc6a6cce59bf895fdda1a015e64b1 )
            , ( bp::arg("a"), bp::arg("mask")=cv::MatND() )
            , "\nFinds global minimum and maximum in a whole array or sub-array."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-minmaxloc"
    "\nArgument 'minVal':"\
    "\n    C++ type: double *."\
    "\n    Python type: float64."\
    "\n    Output argument: omitted from input and returned as output."\
    "\nArgument 'maxVal':"\
    "\n    C++ type: double *."\
    "\n    Python type: float64."\
    "\n    Output argument: omitted from input and returned as output."\
    "\nArgument 'minIdx':"\
    "\n    C++ type: int *."\
    "\n    Python type: int."\
    "\n    Output argument: omitted from input and returned as output."\
    "\nArgument 'maxIdx':"\
    "\n    C++ type: int *."\
    "\n    Python type: int."\
    "\n    Output argument: omitted from input and returned as output."\
    "\nReturns:"\
    "\n    (minVal, maxVal, minIdx, maxIdx)" );
    
    }

    { //::cv::minMaxLoc
    
        typedef boost::python::tuple ( *minMaxLoc_function_type )( cv::Mat const &,cv::Mat const & );
        
        bp::def( 
            "minMaxLoc"
            , minMaxLoc_function_type( &minMaxLoc_35f2a2e80fcf305e891ee746d58be725 )
            , ( bp::arg("a"), bp::arg("mask")=cv::Mat() )
            , "\nFinds global minimum and maximum in a whole array or sub-array."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-minmaxloc"
    "\nArgument 'minVal':"\
    "\n    C++ type: double *."\
    "\n    Python type: float64."\
    "\n    Output argument: omitted from input and returned as output."\
    "\nArgument 'maxVal':"\
    "\n    C++ type: double *."\
    "\n    Python type: float64."\
    "\n    Output argument: omitted from input and returned as output."\
    "\nArgument 'minLoc':"\
    "\n    C++ type: ::cv::Point *."\
    "\n    Python type: Point2i."\
    "\n    Output argument: omitted from input and returned as output."\
    "\nArgument 'maxLoc':"\
    "\n    C++ type: ::cv::Point *."\
    "\n    Python type: Point2i."\
    "\n    Output argument: omitted from input and returned as output."\
    "\nReturns:"\
    "\n    (minVal, maxVal, minLoc, maxLoc)" );
    
    }

    { //::cv::mixChannels
    
        typedef void ( *mixChannels_function_type )( std::vector<cv::MatND> const &,std::vector<cv::MatND> &,std::vector<int> const &,int );
        
        bp::def( 
            "mixChannels"
            , mixChannels_function_type( &mixChannels_c8fa9614f4fb5a79f84423883d102a9e )
            , ( bp::arg("src"), bp::arg("dst"), bp::arg("fromTo"), bp::arg("npairs") )
            , "\nCopies specified channels from input arrays to the specified channels "
    "\nof output arrays."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-mixchannels"
    "\nArgument 'fromTo':"\
    "\n    C++ type: int const *."\
    "\n    Python type: (C++)std::vector<int>." );
    
    }

    { //::cv::mixChannels
    
        typedef void ( *mixChannels_function_type )( std::vector<cv::Mat> const &,std::vector<cv::Mat> &,std::vector<int> const &,int );
        
        bp::def( 
            "mixChannels"
            , mixChannels_function_type( &mixChannels_269d2fa250748779c49641b632451e5f )
            , ( bp::arg("src"), bp::arg("dst"), bp::arg("fromTo"), bp::arg("npairs") )
            , "\nCopies specified channels from input arrays to the specified channels "
    "\nof output arrays."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-mixchannels"
    "\nArgument 'fromTo':"\
    "\n    C++ type: int const *."\
    "\n    Python type: (C++)std::vector<int>." );
    
    }

    { //::cv::polylines
    
        typedef void ( *polylines_function_type )( cv::Mat &,std::vector<std::vector<cv::Point_<int> > > const &,bool,::cv::Scalar const &,int,int,int );
        
        bp::def( 
            "polylines"
            , polylines_function_type( &polylines_4b2b9aca4a0ee1864678eae6b982fcc0 )
            , ( bp::arg("img"), bp::arg("pts"), bp::arg("isClosed"), bp::arg("color"), bp::arg("thickness")=(int)(1), bp::arg("lineType")=(int)(8), bp::arg("shift")=(int)(0) )
            , "\nDraws several polygonal curves."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/drawing_functions.html#cv-polylines"
    "\nArgument 'pts':"\
    "\n    C++ type: ::cv::Point const * *."\
    "\n    Python type: _."\
    "\nArgument 'npts':"\
    "\n    Dependent argument: omitted from input. Its value is derived from "\
    "\n    argument 'pts'."\
    "\nArgument 'ncontours':"\
    "\n    Dependent argument: omitted from input. Its value is derived from "\
    "\n    argument 'pts'." );
    
    }

    bp::def("asSize2i", &sdcpp::from_ndarray< cv::Size_<int> >, (bp::arg("inst_ndarray")) );

    bp::def("asndarray", &sdcpp::as_ndarray< cv::Size_<int> >, (bp::arg("inst_Size2i")) );

    bp::def("asSize2f", &sdcpp::from_ndarray< cv::Size_<float> >, (bp::arg("inst_ndarray")) );

    bp::def("asndarray", &sdcpp::as_ndarray< cv::Size_<float> >, (bp::arg("inst_Size2f")) );

    bp::def("asRect", &sdcpp::from_ndarray< cv::Rect_<int> >, (bp::arg("inst_ndarray")) );

    bp::def("asndarray", &sdcpp::as_ndarray< cv::Rect_<int> >, (bp::arg("inst_Rect")) );

    bp::def("asRotatedRect", &sdcpp::from_ndarray< cv::RotatedRect >, (bp::arg("inst_ndarray")) );

    bp::def("asndarray", &sdcpp::as_ndarray< cv::RotatedRect >, (bp::arg("inst_RotatedRect")) );

    bp::def("createMemStorage", &::createMemStorage);

    bp::def("createChildMemStorage", &::createChildMemStorage, bp::with_custodian_and_ward_postcall<0,1>());

    register_classes_1();

    register_classes_2();

    register_classes_3();

    register_classes_4();

    register_free_functions();
}

