/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
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

#ifndef IFC2X3_IFCBRIDGESEGMENTPART_H
#define IFC2X3_IFCBRIDGESEGMENTPART_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcCivilElementPart.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcBridgeSegmentPart : public IfcCivilElementPart {
    public:
        /**
         * Accepts a read/write DatatypeVisitor.
         * 
         * @param v the read/write DatatypeVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *v);
        /**
         */
        virtual const std::string &type();
        /**
         */
        static Step::ClassType getClassType();
        /**
         */
        virtual Step::ClassType getType() const;
        /**
         * @param t
         */
        virtual bool isOfType(Step::ClassType t);
        /**
         */
        IfcBridgeSubPartType getSubPartType();
        /**
         * Sets the value of the explicit attribute 'SubPartType'.
         * 
         * @param value
         */
        void setSubPartType(IfcBridgeSubPartType value);
        /**
         */
        IfcBridgeMechanicalRoleType getMechanicalRole();
        /**
         * Sets the value of the explicit attribute 'MechanicalRole'.
         * 
         * @param value
         */
        void setMechanicalRole(IfcBridgeMechanicalRoleType value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcBridgeSegmentPart(Step::Id id, Step::SPFData *args);
        virtual ~IfcBridgeSegmentPart();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcBridgeSegmentPart &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcBridgeSubPartType m_subPartType;
        /**
         */
        IfcBridgeMechanicalRoleType m_mechanicalRole;

    };

}

#endif // IFC2X3_IFCBRIDGESEGMENTPART_H