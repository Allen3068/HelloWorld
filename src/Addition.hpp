/**
 * @file
 * @author  bababa <bababa@example.com>
 * @version 1.0
 *
 * @section LICENSE
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details at
 * http://www.gnu.org/copyleft/gpl.html
 *
 * @section DESCRIPTION
 *
 * The Addition class which defined some addition methods.
 */

#ifndef _ADDITION_HPP_
#define _ADDITION_HPP_
class Addition
{
public:
    /**
     * Static method twoValues
     *
     * @param x int
     * @param y int
     * @return sum of two input integers.
     */
    static int twoValues(const int x, const int y);  
    /**
     * Static method threeValues
     *
     * @param x int
     * @param y int
     * @param z int
     * @return sum of three input integers.
     */
    static int threeValues(const int x, const int y, const int z);  
};
#endif

