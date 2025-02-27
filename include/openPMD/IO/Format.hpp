/* Copyright 2017-2021 Fabian Koller, Axel Huebl
 *
 * This file is part of openPMD-api.
 *
 * openPMD-api is free software: you can redistribute it and/or modify
 * it under the terms of of either the GNU General Public License or
 * the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * openPMD-api is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License and the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License
 * and the GNU Lesser General Public License along with openPMD-api.
 * If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include <string>

namespace openPMD
{
/** File format to use during IO.
 */
enum class Format
{
    HDF5,
    ADIOS2_BP,
    ADIOS2_BP4,
    ADIOS2_BP5,
    ADIOS2_SST,
    ADIOS2_SSC,
    JSON,
    DUMMY
};

/** Determine the storage format of a Series from the used filename extension.
 *
 * @param   filename    string containing the filename.
 * @return  Format that best fits the filename extension.
 */
Format determineFormat(std::string const &filename);

/** Determine the default filename suffix for a given storage format.
 *
 * @param   f   File format to determine suffix for.
 * @return  String containing the default filename suffix
 */
std::string suffix(Format f);
} // namespace openPMD
