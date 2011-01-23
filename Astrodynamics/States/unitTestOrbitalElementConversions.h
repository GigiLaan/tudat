/*! \file unitTestOrbitalElementConversions.h
 *    Header file of unit test for the orbitalElementConversion, from Cartesian
 *    to Keplerian and viceversa.
 *
 *    Path              : /Astrodynamics/States/
 *    Version           : 1
 *    Check status      : Checked
 *
 *    Author            : E. Iorfida
 *    Affiliation       : Delft University of Technology
 *    E-mail address    : elisabetta_iorfida@yahoo.it
 *
 *    Checker           : J. Melman
 *    Affiliation       : Delft University of Technology
 *    E-mail address    : J.C.P.Melman@tudelft.nl
 *
 *    Date created      : 11 January, 2011
 *    Last modified     : 11 January, 2011
 *
 *    References
 *
 *    Notes
 *      Test runs code and verifies result against expected value.
 *      If the tested code is erroneous, the test function returns a boolean
 *      true; if the code is correct, the function returns a boolean false.
 *
 *    Copyright (c) 2010 Delft University of Technology.
 *
 *    This software is protected by national and international copyright.
 *    Any unauthorized use, reproduction or modification is unlawful and
 *    will be prosecuted. Commercial and non-private application of the
 *    software in any form is strictly prohibited unless otherwise granted
 *    by the authors.
 *
 *    The code is provided without any warranty; without even the implied
 *    warranty of merchantibility or fitness for a particular purpose.
 *
 *    Changelog
 *      YYMMDD    Author              Comment
 *      110111    E. Iorfida          First creation of the code.
 */

#ifndef UNITTESTORBITALELEMENTCONVERSIONS_H
#define UNITTESTORBITALELEMENTCONVERSIONS_H

// Include statements.
#include <cmath>
#include "orbitalElementConversions.h"

//! Namespace for all unit tests.
/*!
 * Namespace containing all unit tests.
 */
namespace unit_tests
{

//! Test of orbital element conversions code.
/*!
 * Test of orbital element conversions code.
 * \return Boolean indicating success of test
 * ( false = successful; true = failed ).
 */
bool testOrbitalElementConversions( );

}

#endif // UNITTESTORBITALELEMENTCONVERSIONS_H

// End of file.