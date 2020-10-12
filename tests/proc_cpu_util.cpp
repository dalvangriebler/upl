/* ***************************************************************************
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as 
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 *  As a special exception, you may use this file as part of a free software
 *  library without restriction.  Specifically, if other files instantiate
 *  templates or use macros or inline functions from this file, or you compile
 *  this file and link it with other files to produce an executable, this
 *  file does not by itself cause the resulting executable to be covered by
 *  the GNU General Public License.  This exception does not however
 *  invalidate any other reasons why the executable file might be covered by
 *  the GNU General Public License.
 *
 *****************************************************************************
 * 
 *	UPL: This file is part of the Utility Performance Library (UPL)
 * 
 *
 ============================================================================  
  Name        : proc_cpu_util.cpp
  Author      : Dalvan Griebler <dalvangriebler@gmail.com>
  Version     : 1.0 (11/10/2020)
  Copyright   : GNU General Public License
  Description : This file test specific functions of the UPL library in C++ style  
 ============================================================================
*/


#include <upl.h>
#include <iostream>


//This code has been taken from https://github.com/dalvangriebler/SPar/blob/master/examples/prime_number/prime.cpp
int prime_number ( int n ){
        int total = 0;
        for (int i = 2; i <= n; i++ ){
                int prime = 1;
                for (int j = 2; j < i; j++ ){
                        if ( i % j == 0 ){
                                prime = 0;
                                break;
                        }
                }
                {total = total + prime;}
        }
        return total;
}
int main(int argc, char const *argv[]){
    std::cout << "UPTIME: " << UPL_get_uptime() << std::endl;
    for (size_t i = 1; i < 10; i++){
        std::cout << "Total Prime: " << prime_number (i*20000) << std::endl;        
        std::cout << "CPU load: " << UPL_get_proc_load_average_now(UPL_getProcID()) << std::endl;
    }    
	return 0;
}
