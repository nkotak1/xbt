// xcc_error.cpp: implementation of the Cxcc_error class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "xcc_error.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Cxcc_error::Cxcc_error()
{
}

Cxcc_error::Cxcc_error(const string& message)
{
	m_message = message;
}