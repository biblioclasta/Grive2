/*
	grive2: an GPL program to sync a local directory with Google Drive
	Forked from grive project
	
	Copyright (C) 2012  Wan Wai Ho
	Copyright (C) 2014  Vladimir Kamensky

	This program is free software; you can redistribute it and/or
	modify it under the terms of the GNU General Public License
	as published by the Free Software Foundation version 2
	of the License.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

#include "CommonUri.hh"
#include <boost/format.hpp>

namespace gr { namespace v1 {

std::string ChangesFeed( int changestamp )
{
	boost::format feed( feed_changes + "?start-index=%1%" ) ;
	return changestamp > 0 ? (feed%changestamp).str() : feed_changes ;
}

} }
