#ifndef _NETWORKING_IMPL_KADC_UTIL_H_
#define _NETWORKING_IMPL_KADC_UTIL_H_

#include <iostream>

#include "../../../common.h"

namespace networking {
namespace kadc {
namespace util {

struct kadc_pars {
    unsigned short udp_port;
    unsigned short tcp_port;
    inline kadc_pars(unsigned short udp_p = 2304,
                     unsigned short tcp_p = 2301) 
      : udp_port(udp_p), tcp_port(tcp_p)
    {}
};

int overnet_contacts_to_kadc_ini(std::istream &contacts, 
                                 std::ostream &kadc_ini,
                                 kadc_pars p = kadc_pars());

int kadc_ini_to_overnet_contacts(std::istream &kadc_ini,
                                 std::ostream &contacts);


} // ns util
} // ns kadc
} // ns networking

#endif //_NETWORKING_IMPL_KADC_UTIL_H_
