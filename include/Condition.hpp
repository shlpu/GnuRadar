// Copyright (c) 2012 Ryan Seal <rlseal -at- gmail.com>
//
// This file is part of GnuRadar Software.
//
// GnuRadar is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//  
// GnuRadar is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with GnuRadar.  If not, see <http://www.gnu.org/licenses/>.
#ifndef CONDITION_HPP
#define CONDITION_HPP

#include <pthread.h>
#include <boost/shared_ptr.hpp>

namespace thread{

   struct Condition{

      pthread_cond_t condition_;

      public:

      Condition(){
         pthread_cond_init ( &condition_, NULL );
      }

      pthread_cond_t& Get() { return condition_; }
   };

   typedef boost::shared_ptr<Condition> ConditionPtr;
};

#endif
