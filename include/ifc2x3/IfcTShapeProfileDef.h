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

#ifndef IFC2X3_IFCTSHAPEPROFILEDEF_H
#define IFC2X3_IFCTSHAPEPROFILEDEF_H
#include "DefinedTypes.h"
#include "ifc2x3Export.h"

#include "IfcParameterizedProfileDef.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcTShapeProfileDef Entity.
     * 
     */
    class IFC2X3_EXPORT IfcTShapeProfileDef : public IfcParameterizedProfileDef {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'Depth'.
         * 
         */
        virtual IfcPositiveLengthMeasure getDepth();
        /**
         * (const) Returns the value of the explicit attribute 'Depth'.
         * 
         * @return the value of the explicit attribute 'Depth'
         */
        virtual const IfcPositiveLengthMeasure getDepth() const;
        /**
         * Sets the value of the explicit attribute 'Depth'.
         * 
         * @param value
         */
        virtual void setDepth(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'Depth'.
         * 
         */
        virtual void unsetDepth();
        /**
         * Test if the attribute 'Depth' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDepth() const;
        /**
         * Gets the value of the explicit attribute 'FlangeWidth'.
         * 
         */
        virtual IfcPositiveLengthMeasure getFlangeWidth();
        /**
         * (const) Returns the value of the explicit attribute 'FlangeWidth'.
         * 
         * @return the value of the explicit attribute 'FlangeWidth'
         */
        virtual const IfcPositiveLengthMeasure getFlangeWidth() const;
        /**
         * Sets the value of the explicit attribute 'FlangeWidth'.
         * 
         * @param value
         */
        virtual void setFlangeWidth(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'FlangeWidth'.
         * 
         */
        virtual void unsetFlangeWidth();
        /**
         * Test if the attribute 'FlangeWidth' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFlangeWidth() const;
        /**
         * Gets the value of the explicit attribute 'WebThickness'.
         * 
         */
        virtual IfcPositiveLengthMeasure getWebThickness();
        /**
         * (const) Returns the value of the explicit attribute 'WebThickness'.
         * 
         * @return the value of the explicit attribute 'WebThickness'
         */
        virtual const IfcPositiveLengthMeasure getWebThickness() const;
        /**
         * Sets the value of the explicit attribute 'WebThickness'.
         * 
         * @param value
         */
        virtual void setWebThickness(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'WebThickness'.
         * 
         */
        virtual void unsetWebThickness();
        /**
         * Test if the attribute 'WebThickness' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testWebThickness() const;
        /**
         * Gets the value of the explicit attribute 'FlangeThickness'.
         * 
         */
        virtual IfcPositiveLengthMeasure getFlangeThickness();
        /**
         * (const) Returns the value of the explicit attribute 'FlangeThickness'.
         * 
         * @return the value of the explicit attribute 'FlangeThickness'
         */
        virtual const IfcPositiveLengthMeasure getFlangeThickness() const;
        /**
         * Sets the value of the explicit attribute 'FlangeThickness'.
         * 
         * @param value
         */
        virtual void setFlangeThickness(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'FlangeThickness'.
         * 
         */
        virtual void unsetFlangeThickness();
        /**
         * Test if the attribute 'FlangeThickness' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFlangeThickness() const;
        /**
         * Gets the value of the explicit attribute 'FilletRadius'.
         * 
         */
        virtual IfcPositiveLengthMeasure getFilletRadius();
        /**
         * (const) Returns the value of the explicit attribute 'FilletRadius'.
         * 
         * @return the value of the explicit attribute 'FilletRadius'
         */
        virtual const IfcPositiveLengthMeasure getFilletRadius() const;
        /**
         * Sets the value of the explicit attribute 'FilletRadius'.
         * 
         * @param value
         */
        virtual void setFilletRadius(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'FilletRadius'.
         * 
         */
        virtual void unsetFilletRadius();
        /**
         * Test if the attribute 'FilletRadius' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFilletRadius() const;
        /**
         * Gets the value of the explicit attribute 'FlangeEdgeRadius'.
         * 
         */
        virtual IfcPositiveLengthMeasure getFlangeEdgeRadius();
        /**
         * (const) Returns the value of the explicit attribute 'FlangeEdgeRadius'.
         * 
         * @return the value of the explicit attribute 'FlangeEdgeRadius'
         */
        virtual const IfcPositiveLengthMeasure getFlangeEdgeRadius() const;
        /**
         * Sets the value of the explicit attribute 'FlangeEdgeRadius'.
         * 
         * @param value
         */
        virtual void setFlangeEdgeRadius(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'FlangeEdgeRadius'.
         * 
         */
        virtual void unsetFlangeEdgeRadius();
        /**
         * Test if the attribute 'FlangeEdgeRadius' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFlangeEdgeRadius() const;
        /**
         * Gets the value of the explicit attribute 'WebEdgeRadius'.
         * 
         */
        virtual IfcPositiveLengthMeasure getWebEdgeRadius();
        /**
         * (const) Returns the value of the explicit attribute 'WebEdgeRadius'.
         * 
         * @return the value of the explicit attribute 'WebEdgeRadius'
         */
        virtual const IfcPositiveLengthMeasure getWebEdgeRadius() const;
        /**
         * Sets the value of the explicit attribute 'WebEdgeRadius'.
         * 
         * @param value
         */
        virtual void setWebEdgeRadius(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'WebEdgeRadius'.
         * 
         */
        virtual void unsetWebEdgeRadius();
        /**
         * Test if the attribute 'WebEdgeRadius' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testWebEdgeRadius() const;
        /**
         * Gets the value of the explicit attribute 'WebSlope'.
         * 
         */
        virtual IfcPlaneAngleMeasure getWebSlope();
        /**
         * (const) Returns the value of the explicit attribute 'WebSlope'.
         * 
         * @return the value of the explicit attribute 'WebSlope'
         */
        virtual const IfcPlaneAngleMeasure getWebSlope() const;
        /**
         * Sets the value of the explicit attribute 'WebSlope'.
         * 
         * @param value
         */
        virtual void setWebSlope(IfcPlaneAngleMeasure value);
        /**
         * unset the attribute 'WebSlope'.
         * 
         */
        virtual void unsetWebSlope();
        /**
         * Test if the attribute 'WebSlope' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testWebSlope() const;
        /**
         * Gets the value of the explicit attribute 'FlangeSlope'.
         * 
         */
        virtual IfcPlaneAngleMeasure getFlangeSlope();
        /**
         * (const) Returns the value of the explicit attribute 'FlangeSlope'.
         * 
         * @return the value of the explicit attribute 'FlangeSlope'
         */
        virtual const IfcPlaneAngleMeasure getFlangeSlope() const;
        /**
         * Sets the value of the explicit attribute 'FlangeSlope'.
         * 
         * @param value
         */
        virtual void setFlangeSlope(IfcPlaneAngleMeasure value);
        /**
         * unset the attribute 'FlangeSlope'.
         * 
         */
        virtual void unsetFlangeSlope();
        /**
         * Test if the attribute 'FlangeSlope' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFlangeSlope() const;
        /**
         * Gets the value of the explicit attribute 'CentreOfGravityInY'.
         * 
         */
        virtual IfcPositiveLengthMeasure getCentreOfGravityInY();
        /**
         * (const) Returns the value of the explicit attribute 'CentreOfGravityInY'.
         * 
         * @return the value of the explicit attribute 'CentreOfGravityInY'
         */
        virtual const IfcPositiveLengthMeasure getCentreOfGravityInY() const;
        /**
         * Sets the value of the explicit attribute 'CentreOfGravityInY'.
         * 
         * @param value
         */
        virtual void setCentreOfGravityInY(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'CentreOfGravityInY'.
         * 
         */
        virtual void unsetCentreOfGravityInY();
        /**
         * Test if the attribute 'CentreOfGravityInY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCentreOfGravityInY() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTShapeProfileDef(Step::Id id, Step::SPFData *args);
        virtual ~IfcTShapeProfileDef();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTShapeProfileDef &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_depth;
        /**
         */
        Step::Real m_flangeWidth;
        /**
         */
        Step::Real m_webThickness;
        /**
         */
        Step::Real m_flangeThickness;
        /**
         */
        Step::Real m_filletRadius;
        /**
         */
        Step::Real m_flangeEdgeRadius;
        /**
         */
        Step::Real m_webEdgeRadius;
        /**
         */
        Step::Real m_webSlope;
        /**
         */
        Step::Real m_flangeSlope;
        /**
         */
        Step::Real m_centreOfGravityInY;

    };

}

#endif // IFC2X3_IFCTSHAPEPROFILEDEF_H
