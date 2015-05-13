/**
* This file is part of bimos.
*
* Copyright (C) 2015 Emilio Garcia-Fidalgo <emilio.garcia@uib.es> (University of the Balearic Islands)
* For more information see: <http://dmi.uib.es/~egarcia>
*
* bimos is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* bimos is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with bimos. If not, see <http://www.gnu.org/licenses/>.
*/

#include "bimos/MosaicBuilder.h"

namespace bimos
{

/**
 * @brief Default class constructor.
 * @param nh ROS node handle.
 */
MosaicBuilder::MosaicBuilder(const ros::NodeHandle _nh)
    : nh(_nh),
      params(0)
{
    ROS_INFO("Initializing node ...");
    ROS_INFO("Reading parameters ...");
    params = Params::getInstance();
    params->readParams(nh);
    ROS_INFO("Parameters read");
    ROS_INFO("Node initialized");
}

/**
 * @brief Default class destructor.
 */
MosaicBuilder::~MosaicBuilder()
{
}

}