// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

#ifndef Step_BaseSPFReader_h
#define Step_BaseSPFReader_h

#include "StepExport.h"

#include "ClassType.h"
#include "Types.h"
#include "SPFHeader.h"
#include "CallBack.h"

#include <istream>
#include <string>
#include <map>

namespace Step {
    class SPFData;
    class BaseExpressDataSet;
    class BaseSPFObject;

    /*!
    * \short Base class for loading a STEP-21 file. It reads header and entities.
    */
    class STEP_EXPORT BaseSPFReader
    {

    public:

        /*!
        ** \short Constructor. It does nothing.
        */
        BaseSPFReader();

        /*!
        ** \short Virtual Destructor
        */
        virtual ~BaseSPFReader();

        /*!
        ** \short Load a file from a path
        ** @param input input stream to read from
        ** @return true if the stream was correctly read
        */
        virtual bool read(std::istream& input);

        /*!
        ** \short Get the ExpressDataSet after the loading of the file
        ** @return the BaseExpressDataSet created from the input file
        */
        virtual BaseExpressDataSet* getExpressDataSet();

        /*!
        ** \short Get the SPF Header
        ** @return the header from the input file
        */
        virtual SPFHeader& getHeader();

        std::vector<std::string> errors() const { return _errors; }

        void setCallBack(CallBack *callback) { _callback = callback; }

    protected:

        /*!
        ** \short Call the adapted load function from the name of the entity (pure virtual)
        ** @param s the name of the entity
        ** @return true if the function was correctly called
        */
        virtual bool callLoadFunction(const std::string& s) = 0;

        //! pointer to the data set created while reading the stream
        BaseExpressDataSet* m_expressDataSet;

        //! current Entity Id being parsed
        Id m_currentId;

        //! stores a pointer to the current entity needing allocation
        AllocateFuncType m_currentType;

        //! stores the current line number, usefull when parsing errors occurs
        unsigned int m_currentLineNb;

        //! A pointer to the current Entity
        BaseSPFObject*  m_currentObj;

        //! the SPF header
        SPFHeader m_header;

        //! errors during reading
        std::vector<std::string> _errors;

        //! our callback
        CallBack *_callback;
    };
}
#endif
