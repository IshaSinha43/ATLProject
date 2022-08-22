// Circle.cpp : Implementation of CCircle

#include "pch.h"
#include "Circle.h"


// CCircle



STDMETHODIMP CCircle::get_Radius(DOUBLE* pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_dRadius;

	return S_OK;
}


STDMETHODIMP CCircle::put_Radius(DOUBLE newVal)
{
	// TODO: Add your implementation code here
	m_dRadius = newVal;
	return S_OK;
}


STDMETHODIMP CCircle::GetArea(DOUBLE* area)
{
	// TODO: Add your implementation code here
	double dArea = 3.14 * m_dRadius * m_dRadius;
	return S_OK;
}
