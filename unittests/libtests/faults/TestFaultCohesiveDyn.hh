// -*- C++ -*-
//
// ----------------------------------------------------------------------
//
// Brad T. Aagaard, U.S. Geological Survey
// Charles A. Williams, GNS Science
// Matthew G. Knepley, University of Chicago
//
// This code was developed as part of the Computational Infrastructure
// for Geodynamics (http://geodynamics.org).
//
// Copyright (c) 2010-2017 University of California, Davis
//
// See COPYING for license information.
//
// ----------------------------------------------------------------------
//

/**
 * @file unittests/libtests/faults/TestFaultCohesiveDyn.hh
 *
 * @brief C++ TestFaultCohesiveDyn object
 *
 * C++ unit testing for FaultCohesiveDyn.
 */

#if !defined(pylith_faults_testfaultcohesivedyn_hh)
#define pylith_faults_testfaultcohesivedyn_hh

#include <cppunit/extensions/HelperMacros.h>

#include "pylith/faults/faultsfwd.hh" // forward declarations
#include "pylith/topology/topologyfwd.hh" // USES Mesh
#include "pylith/feassemble/feassemblefwd.hh" // HOLDSA Quadrature
#include "pylith/friction/frictionfwd.hh" // HOLDSA FrictionModel
#include "spatialdata/spatialdb/spatialdbfwd.hh" // HOLDSA SpatialDB
#include <vector> // HASA std::vector
/// Namespace for pylith package
namespace pylith {
  namespace faults {
    class TestFaultCohesiveDyn;

    class CohesiveDynData;
  } // faults
} // pylith

/// C++ unit testing for FaultCohesiveDyn
class pylith::faults::TestFaultCohesiveDyn: public CppUnit::TestFixture
{ // class TestFaultCohesiveDyn

  // CPPUNIT TEST SUITE /////////////////////////////////////////////////
  CPPUNIT_TEST_SUITE( TestFaultCohesiveDyn );

  CPPUNIT_TEST( testConstructor );
  CPPUNIT_TEST( testTractPerturbation );
  CPPUNIT_TEST( testZeroTolerance );
  CPPUNIT_TEST( testOpenFreeSurf );

  // Tests in derived classes:
  // testInitialize()
  // testConstrainSolnSpaceStick()
  // testConstrainSolnSpaceSlip()
  // testConstrainSolnSpaceOpen()
  // testUpdateStateVars()
  // testCalcTractions()

  CPPUNIT_TEST_SUITE_END();

  // PROTECTED MEMBERS //////////////////////////////////////////////////
protected:

  CohesiveDynData* _data; ///< Data for testing
  feassemble::Quadrature* _quadrature; ///< Fault quad.
  TractPerturbation* _tractPerturbation; ///< Initial tractions.
  spatialdata::spatialdb::SpatialDB* _dbInitialTract; ///< Initial tractions.
  friction::FrictionModel* _friction; ///< Friction model
  spatialdata::spatialdb::SpatialDB* _dbFriction; ///< Friction parameters.

  // PUBLIC METHODS /////////////////////////////////////////////////////
public:

  /// Setup testing data.
  void setUp(void);

  /// Tear down testing data.
  void tearDown(void);

  /// Test constructor.
  void testConstructor(void);

  /// Test tractPerturbation().
  void testTractPerturbation(void);

  /// Test zeroTolerance().
  void testZeroTolerance(void);

  /// Test openFreeSurf().
  void testOpenFreeSurf(void);

  /// Test initialize().
  void testInitialize(void);

  /// Test constrainSolnSpace() for sticking case.
  void testConstrainSolnSpaceStick(void);

  /// Test constrainSolnSpace() for slipping case.
  void testConstrainSolnSpaceSlip(void);

  /// Test constrainSolnSpace for fault opening case().
  void testConstrainSolnSpaceOpen(void);

  /// Test updateStateVars().
  void testUpdateStateVars(void);

  /// Test _calcTractions().
  void testCalcTractions(void);

  // PRIVATE METHODS ////////////////////////////////////////////////////
private:

  /** Initialize FaultCohesiveDyn interface condition.
   *
   * @param mesh PETSc mesh to initialize
   * @param fault Cohesive fault interface condition to initialize.
   * @param fields Solution fields.
   */
  void _initialize(topology::Mesh* const mesh,
      FaultCohesiveDyn* const fault,
      topology::SolutionFields* const fields);

  /** Set values for fields and Jacobian.
   *
   * @pre Must call _initialize() before _setFieldsJacobian to set solution
   * field. Note: Call to Jacobian constructor should be after call to
   * _initialize() so that the solution field is setup.
   *
   * @param mesh PETSc mesh to initialize
   * @param fault Cohesive fault interface condition to initialize.
   * @param fields Solution fields.
   * @param jacobian Jacobian sparse matrix.
   * @param fieldIncrVals Values for solution increment field.
   */
  void _setFieldsJacobian(topology::Mesh* const mesh,
      FaultCohesiveDyn* const fault,
      topology::SolutionFields* const fields,
      topology::Jacobian* const jacobian,
      const PylithScalar* const fieldIncrVals);

  /** Determine if point is a Lagrange multiplier constraint point.
   *
   * @param point Label of point.
   *
   * @returns True if point is a constraint point, false otherwise.
   */
  bool _isConstraintEdge(const int point) const;

}; // class TestFaultCohesiveDyn

#endif // pylith_faults_testfaultcohesivedyn_hh

// End of file 
