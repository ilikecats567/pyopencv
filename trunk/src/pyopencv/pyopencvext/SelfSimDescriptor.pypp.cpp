// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "SelfSimDescriptor.pypp.hpp"

namespace bp = boost::python;

struct SelfSimDescriptor_wrapper : cv::SelfSimDescriptor, bp::wrapper< cv::SelfSimDescriptor > {

    SelfSimDescriptor_wrapper( )
    : cv::SelfSimDescriptor( )
      , bp::wrapper< cv::SelfSimDescriptor >(){
        // null constructor
    
    }

    SelfSimDescriptor_wrapper(int _ssize, int _lsize, int _startDistanceBucket=int(::cv::SelfSimDescriptor::DEFAULT_START_DISTANCE_BUCKET), int _numberOfDistanceBuckets=int(::cv::SelfSimDescriptor::DEFAULT_NUM_DISTANCE_BUCKETS), int _nangles=int(::cv::SelfSimDescriptor::DEFAULT_NUM_ANGLES) )
    : cv::SelfSimDescriptor( _ssize, _lsize, _startDistanceBucket, _numberOfDistanceBuckets, _nangles )
      , bp::wrapper< cv::SelfSimDescriptor >(){
        // constructor
    
    }

    SelfSimDescriptor_wrapper(::cv::SelfSimDescriptor const & ss )
    : cv::SelfSimDescriptor( boost::ref(ss) )
      , bp::wrapper< cv::SelfSimDescriptor >(){
        // copy constructor
    
    }

    virtual void SSD( ::cv::Mat const & img, ::cv::Point pt, ::cv::Mat & ssd ) const  {
        if( bp::override func_SSD = this->get_override( "SSD" ) )
            func_SSD( boost::ref(img), pt, boost::ref(ssd) );
        else{
            this->cv::SelfSimDescriptor::SSD( boost::ref(img), pt, boost::ref(ssd) );
        }
    }
    
    void default_SSD( ::cv::Mat const & img, ::cv::Point pt, ::cv::Mat & ssd ) const  {
        cv::SelfSimDescriptor::SSD( boost::ref(img), pt, boost::ref(ssd) );
    }

    virtual void compute( ::cv::Mat const & img, ::std::vector< float > & descriptors, ::cv::Size winStride=cv::Size_<int>(), ::std::vector< cv::Point_<int> > const & locations=std::vector<cv::Point>() ) const  {
        if( bp::override func_compute = this->get_override( "compute" ) )
            func_compute( boost::ref(img), boost::ref(descriptors), winStride, boost::ref(locations) );
        else{
            this->cv::SelfSimDescriptor::compute( boost::ref(img), boost::ref(descriptors), winStride, boost::ref(locations) );
        }
    }
    
    void default_compute( ::cv::Mat const & img, ::std::vector< float > & descriptors, ::cv::Size winStride=cv::Size_<int>(), ::std::vector< cv::Point_<int> > const & locations=std::vector<cv::Point>() ) const  {
        cv::SelfSimDescriptor::compute( boost::ref(img), boost::ref(descriptors), winStride, boost::ref(locations) );
    }

    virtual void computeLogPolarMapping( ::cv::Mat & mappingMask ) const  {
        if( bp::override func_computeLogPolarMapping = this->get_override( "computeLogPolarMapping" ) )
            func_computeLogPolarMapping( boost::ref(mappingMask) );
        else{
            this->cv::SelfSimDescriptor::computeLogPolarMapping( boost::ref(mappingMask) );
        }
    }
    
    void default_computeLogPolarMapping( ::cv::Mat & mappingMask ) const  {
        cv::SelfSimDescriptor::computeLogPolarMapping( boost::ref(mappingMask) );
    }

};

void register_SelfSimDescriptor_class(){

    { //::cv::SelfSimDescriptor
        typedef bp::class_< SelfSimDescriptor_wrapper > SelfSimDescriptor_exposer_t;
        SelfSimDescriptor_exposer_t SelfSimDescriptor_exposer = SelfSimDescriptor_exposer_t( "SelfSimDescriptor", bp::init< >() );
        bp::scope SelfSimDescriptor_scope( SelfSimDescriptor_exposer );
        SelfSimDescriptor_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::SelfSimDescriptor >() );
        bp::scope().attr("DEFAULT_SMALL_SIZE") = (int)cv::SelfSimDescriptor::DEFAULT_SMALL_SIZE;
        bp::scope().attr("DEFAULT_LARGE_SIZE") = (int)cv::SelfSimDescriptor::DEFAULT_LARGE_SIZE;
        bp::scope().attr("DEFAULT_NUM_ANGLES") = (int)cv::SelfSimDescriptor::DEFAULT_NUM_ANGLES;
        bp::scope().attr("DEFAULT_START_DISTANCE_BUCKET") = (int)cv::SelfSimDescriptor::DEFAULT_START_DISTANCE_BUCKET;
        bp::scope().attr("DEFAULT_NUM_DISTANCE_BUCKETS") = (int)cv::SelfSimDescriptor::DEFAULT_NUM_DISTANCE_BUCKETS;
        SelfSimDescriptor_exposer.def( bp::init< int, int, bp::optional< int, int, int > >(( bp::arg("_ssize"), bp::arg("_lsize"), bp::arg("_startDistanceBucket")=int(::cv::SelfSimDescriptor::DEFAULT_START_DISTANCE_BUCKET), bp::arg("_numberOfDistanceBuckets")=int(::cv::SelfSimDescriptor::DEFAULT_NUM_DISTANCE_BUCKETS), bp::arg("_nangles")=int(::cv::SelfSimDescriptor::DEFAULT_NUM_ANGLES) )) );
        SelfSimDescriptor_exposer.def( bp::init< cv::SelfSimDescriptor const & >(( bp::arg("ss") )) );
        { //::cv::SelfSimDescriptor::SSD
        
            typedef void ( ::cv::SelfSimDescriptor::*SSD_function_type )( ::cv::Mat const &,::cv::Point,::cv::Mat & ) const;
            typedef void ( SelfSimDescriptor_wrapper::*default_SSD_function_type )( ::cv::Mat const &,::cv::Point,::cv::Mat & ) const;
            
            SelfSimDescriptor_exposer.def( 
                "SSD"
                , SSD_function_type(&::cv::SelfSimDescriptor::SSD)
                , default_SSD_function_type(&SelfSimDescriptor_wrapper::default_SSD)
                , ( bp::arg("img"), bp::arg("pt"), bp::arg("ssd") ) );
        
        }
        { //::cv::SelfSimDescriptor::compute
        
            typedef void ( ::cv::SelfSimDescriptor::*compute_function_type )( ::cv::Mat const &,::std::vector< float > &,::cv::Size,::std::vector< cv::Point_<int> > const & ) const;
            typedef void ( SelfSimDescriptor_wrapper::*default_compute_function_type )( ::cv::Mat const &,::std::vector< float > &,::cv::Size,::std::vector< cv::Point_<int> > const & ) const;
            
            SelfSimDescriptor_exposer.def( 
                "compute"
                , compute_function_type(&::cv::SelfSimDescriptor::compute)
                , default_compute_function_type(&SelfSimDescriptor_wrapper::default_compute)
                , ( bp::arg("img"), bp::arg("descriptors"), bp::arg("winStride")=cv::Size_<int>(), bp::arg("locations")=std::vector<cv::Point>() ) );
        
        }
        { //::cv::SelfSimDescriptor::computeLogPolarMapping
        
            typedef void ( ::cv::SelfSimDescriptor::*computeLogPolarMapping_function_type )( ::cv::Mat & ) const;
            typedef void ( SelfSimDescriptor_wrapper::*default_computeLogPolarMapping_function_type )( ::cv::Mat & ) const;
            
            SelfSimDescriptor_exposer.def( 
                "computeLogPolarMapping"
                , computeLogPolarMapping_function_type(&::cv::SelfSimDescriptor::computeLogPolarMapping)
                , default_computeLogPolarMapping_function_type(&SelfSimDescriptor_wrapper::default_computeLogPolarMapping)
                , ( bp::arg("mappingMask") ) );
        
        }
        { //::cv::SelfSimDescriptor::getDescriptorSize
        
            typedef ::size_t ( ::cv::SelfSimDescriptor::*getDescriptorSize_function_type )(  ) const;
            
            SelfSimDescriptor_exposer.def( 
                "getDescriptorSize"
                , getDescriptorSize_function_type( &::cv::SelfSimDescriptor::getDescriptorSize ) );
        
        }
        { //::cv::SelfSimDescriptor::getGridSize
        
            typedef ::cv::Size ( ::cv::SelfSimDescriptor::*getGridSize_function_type )( ::cv::Size,::cv::Size ) const;
            
            SelfSimDescriptor_exposer.def( 
                "getGridSize"
                , getGridSize_function_type( &::cv::SelfSimDescriptor::getGridSize )
                , ( bp::arg("imgsize"), bp::arg("winStride") ) );
        
        }
        { //::cv::SelfSimDescriptor::operator=
        
            typedef ::cv::SelfSimDescriptor & ( ::cv::SelfSimDescriptor::*assign_function_type )( ::cv::SelfSimDescriptor const & ) ;
            
            SelfSimDescriptor_exposer.def( 
                "assign"
                , assign_function_type( &::cv::SelfSimDescriptor::operator= )
                , ( bp::arg("ss") )
                , bp::return_self< >()
                , "\nWrapped function:"
    "\n    operator=" );
        
        }
        SelfSimDescriptor_exposer.def_readwrite( "largeSize", &cv::SelfSimDescriptor::largeSize );
        SelfSimDescriptor_exposer.def_readwrite( "numberOfAngles", &cv::SelfSimDescriptor::numberOfAngles );
        SelfSimDescriptor_exposer.def_readwrite( "numberOfDistanceBuckets", &cv::SelfSimDescriptor::numberOfDistanceBuckets );
        SelfSimDescriptor_exposer.def_readwrite( "smallSize", &cv::SelfSimDescriptor::smallSize );
        SelfSimDescriptor_exposer.def_readwrite( "startDistanceBucket", &cv::SelfSimDescriptor::startDistanceBucket );
    }

}
