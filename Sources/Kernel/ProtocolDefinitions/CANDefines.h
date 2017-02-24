#ifndef CANDEFINES_H
#define CANDEFINES_H
#include "IClusterProps.h"
#include "CommonDefines.h"
#include "CCompuMethod.h"
#define FRAMEFORMATE 2147483648
#define DEFAULT_DBC_IDENTIFIER "Vector__XXX"

#pragma once

/*class CANEcuProperties
{
public:
    std::string m_ouEcuname;
};*/



enum class eCANMsgType
{
    eCan_Standard,
    eCan_Extended
};

class CANFrameProps : public FrameProps
{
public:
        eCANMsgType m_canMsgType;
	void CANFrameProps()
	{
		m_eProtocol = eProtocolType::eCANProtocol;
	}
    
};


class CANCompuMethods : public CompuMethodProps
{
public:
         CCompuMethod m_CompuMethod;
	void CANCompuMethods()
	{
		this->m_eType = eCANProtocol;
	}
   
};


class CANSignalProps : public SignalProps
{
public:
	CANSignalProps()
	{
		this->eType  = eCANProtocol;
	}
    /*double m_nSignalFactor;
    double m_nSignalOffset;
    double m_nSignalMaximum;
    double m_nSignalMinimum;*/
};

class CANEcuProperties : public EcuProperties
{
public:
	eProtocolType m_eProtocol;
	void CANEcuProperties()
	{
		m_eProtocol = eProtocolType::eCANProtocol;
	}
};

#endif
