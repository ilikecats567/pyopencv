// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "cxtypes_h_wrapper.hpp"
#include "boost/python/object.hpp"
#include "boost/python/str.hpp"
#include "CvTypeInfo.pypp.hpp"

namespace bp = boost::python;

static CvTypeInfo * get_prev( CvTypeInfo const & inst ) { return inst.prev; }

static CvTypeInfo * get_next( CvTypeInfo const & inst ) { return inst.next; }

static bp::object get_type_name( CvTypeInfo const & inst ){        
    return inst.type_name? bp::str(inst.type_name): bp::object();
}

void register_CvTypeInfo_class(){

    bp::class_< CvTypeInfo >( "CvTypeInfo" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvTypeInfo >() )    
        .def_readwrite( "flags", &CvTypeInfo::flags )    
        .def_readwrite( "header_size", &CvTypeInfo::header_size )    
        .add_property( "prev", bp::make_function(&::get_prev, bp::return_internal_reference<>()) )    
        .add_property( "next", bp::make_function(&::get_next, bp::return_internal_reference<>()) )    
        .add_property( "type_name", &::get_type_name );

}
