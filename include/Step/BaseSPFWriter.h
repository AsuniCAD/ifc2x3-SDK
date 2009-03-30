/*//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/
#ifndef STEP_BASE_SPF_WRITER
#define STEP_BASE_SPF_WRITER

#include "StepDLL.h"
#include "ClassType.h"
#include "Types.h"
#include "BaseExpressDataSet.h"
#include "BaseEntity.h"
#include "SimpleTypes.h"

#include <fstream>
#include <string>
#include <sstream>
#include <map>
#include <iomanip>

namespace Step {
    class SPFData;
    class BaseSPFObject;
    class SPFHeader;

    /*!
    * \short Base class to write a STEP-21 file from a Model
    */
    class STEP_DLL_DEF BaseSPFWriter {

    public:

        /*!
        \short Constructor from a BaseExpressDataSet
        @param e The Express data set
        */
        BaseSPFWriter(BaseExpressDataSet * e);

        /*!
        \short Virtual Destructor. It does nothing
        */
        virtual ~BaseSPFWriter();

        /*!
        \short Write the STEP-21 file from a path
        @param filepath the output STEP-21 file path
        @return true if the model was correctly saved
        */
        virtual bool writeSPF(const std::string& filepath) = 0;

        /*!
        \short Set the decimal precision for writing Real values
        The decimal precision determines the maximum number of digits
        to be written on insertion operations to express floating-point values.
        @param precision the new decimal precision to use
        */
        virtual void setDecimalPrecision(const int precision);

    protected:

        /*!
        \short Init the output stream
        @param filepath the output STEP-21 file path
        @return true if the output stream was correctly inited
        */
        bool init(const std::string& filepath);

        /*!
        \short Write SPF header
        */
        void writeHeader();

        /*!
        \short Write the end of a STEP-21 file
        */
        void writeEnder();

        /*!
        \short Write method a non-inited entity (lazy loading concept)
        @param id the id of the entity
        @return true if the entity has been saved. It returns false if the entity was not \
        written because it was inited.
        */
        bool writeIfNotInited(Id id);

        /*!
        \short Write an Attribute (entity ref)
        @param entity A pointer to an entity
        */
        void writeAttribute(BaseEntity* entity);

        /*!
        \short Write an Attribute (Real number)
        @param value a Real value
        */
        void writeAttribute(Real value);

        /*!
        \short Write an Attribute (Integer number)
        @param value an Integer value
        */
        void writeAttribute(Integer value);

        /*!
        \short Write an Attribute (Boolean value)
        @param value an EXPRESS boolean value
        */
        void writeAttribute(Boolean value);

        /*!
        \short Write an Attribute (Logical value)
        @param value an EXPRESS Logical value
        */
        void writeAttribute(Logical value);

        /*!
        \short Write an Attribute (string value)
        @param value a String value
        */
        void writeAttribute(const String& value);

        /*!
        \short Write an Attribute (Binary value)
        @param value an EXPRESS binary value
        */
        template<int N>
        inline void writeAttribute(Binary<N>& value)
        {
            if (isUnset(value))
                m_out << "$";
            else
                m_out << "\"" << value.to_spfstring() << "\"";
        }

        std::ofstream m_out;
        BaseExpressDataSet *m_expressDataSet;
        int m_precision;
    };
}

#endif
