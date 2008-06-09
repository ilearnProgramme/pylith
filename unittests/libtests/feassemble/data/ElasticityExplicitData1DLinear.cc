// -*- C++ -*-
//
// ======================================================================
//
//                           Brad T. Aagaard
//                        U.S. Geological Survey
//
// {LicenseText}
//
// ======================================================================
//

// DO NOT EDIT THIS FILE
// This file was generated from python application elasticityexplicit.

#include "ElasticityExplicitData1DLinear.hh"

const int pylith::feassemble::ElasticityExplicitData1DLinear::_spaceDim = 1;

const int pylith::feassemble::ElasticityExplicitData1DLinear::_cellDim = 1;

const int pylith::feassemble::ElasticityExplicitData1DLinear::_numVertices = 2;

const int pylith::feassemble::ElasticityExplicitData1DLinear::_numCells = 1;

const int pylith::feassemble::ElasticityExplicitData1DLinear::_numBasis = 2;

const int pylith::feassemble::ElasticityExplicitData1DLinear::_numQuadPts = 1;

const char* pylith::feassemble::ElasticityExplicitData1DLinear::_matType = "ElasticStrain1D";

const char* pylith::feassemble::ElasticityExplicitData1DLinear::_matDBFilename = "data/elasticstrain1d.spatialdb";

const int pylith::feassemble::ElasticityExplicitData1DLinear::_matId = 0;

const char* pylith::feassemble::ElasticityExplicitData1DLinear::_matLabel = "elastic strain 1-D";

const double pylith::feassemble::ElasticityExplicitData1DLinear::_dt =   1.00000000e-02;

const double pylith::feassemble::ElasticityExplicitData1DLinear::_gravityVec[] = {
 -1.00000000e+08,
};

const double pylith::feassemble::ElasticityExplicitData1DLinear::_vertices[] = {
 -2.50000000e-01,
  2.00000000e+00,
};

const int pylith::feassemble::ElasticityExplicitData1DLinear::_cells[] = {
0,1,
};

const double pylith::feassemble::ElasticityExplicitData1DLinear::_verticesRef[] = {
 -1.00000000e+00,
  1.00000000e+00,
};

const double pylith::feassemble::ElasticityExplicitData1DLinear::_quadPts[] = {
  0.00000000e+00,
};

const double pylith::feassemble::ElasticityExplicitData1DLinear::_quadWts[] = {
  2.00000000e+00,
};

const double pylith::feassemble::ElasticityExplicitData1DLinear::_basis[] = {
  5.00000000e-01,
  5.00000000e-01,
};

const double pylith::feassemble::ElasticityExplicitData1DLinear::_basisDerivRef[] = {
 -5.00000000e-01,
  5.00000000e-01,
};

const double pylith::feassemble::ElasticityExplicitData1DLinear::_fieldTpdt[] = {
  1.20000000e+00,
  1.70000000e+00,
};

const double pylith::feassemble::ElasticityExplicitData1DLinear::_fieldT[] = {
  1.10000000e+00,
  1.50000000e+00,
};

const double pylith::feassemble::ElasticityExplicitData1DLinear::_fieldTmdt[] = {
  1.00000000e+00,
  1.30000000e+00,
};

const double pylith::feassemble::ElasticityExplicitData1DLinear::_valsResidual[] = {
  1.60407812e+10,
 -1.59592188e+10,
};

const double pylith::feassemble::ElasticityExplicitData1DLinear::_valsJacobian[] = {
  1.40625000e+07,
  1.40625000e+07,
  1.40625000e+07,
  1.40625000e+07,
};

pylith::feassemble::ElasticityExplicitData1DLinear::ElasticityExplicitData1DLinear(void)
{ // constructor
  spaceDim = _spaceDim;
  cellDim = _cellDim;
  numVertices = _numVertices;
  numCells = _numCells;
  numBasis = _numBasis;
  numQuadPts = _numQuadPts;
  matType = const_cast<char*>(_matType);
  matDBFilename = const_cast<char*>(_matDBFilename);
  matId = _matId;
  matLabel = const_cast<char*>(_matLabel);
  dt = _dt;
  gravityVec = const_cast<double*>(_gravityVec);
  vertices = const_cast<double*>(_vertices);
  cells = const_cast<int*>(_cells);
  verticesRef = const_cast<double*>(_verticesRef);
  quadPts = const_cast<double*>(_quadPts);
  quadWts = const_cast<double*>(_quadWts);
  basis = const_cast<double*>(_basis);
  basisDerivRef = const_cast<double*>(_basisDerivRef);
  fieldTpdt = const_cast<double*>(_fieldTpdt);
  fieldT = const_cast<double*>(_fieldT);
  fieldTmdt = const_cast<double*>(_fieldTmdt);
  valsResidual = const_cast<double*>(_valsResidual);
  valsJacobian = const_cast<double*>(_valsJacobian);
} // constructor

pylith::feassemble::ElasticityExplicitData1DLinear::~ElasticityExplicitData1DLinear(void)
{}


// End of file
