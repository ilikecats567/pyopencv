// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "cxtypes_h_wrapper.hpp"
#include "boost/python/object.hpp"
#include "boost/python/str.hpp"
#include "CvString.pypp.hpp"

namespace bp = boost::python;

struct CvString_wrapper : CvString, bp::wrapper< CvString > {

    CvString_wrapper(CvString const & arg )
    : CvString( arg )
      , bp::wrapper< CvString >(){
        // copy constructor
        
    }

    CvString_wrapper()
    : CvString()
      , bp::wrapper< CvString >(){
        // null constructor
        
    }

    static bp::object get_data( CvString const & inst ){        
    return inst.ptr? bp::str((const char *)inst.ptr, inst.len) : bp::object();
}

};

void register_CvString_class(){

    bp::class_< CvString_wrapper >( "CvString" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvString >() )    
        .add_property( "data", bp::make_function(&CvString_wrapper::get_data) );

}
