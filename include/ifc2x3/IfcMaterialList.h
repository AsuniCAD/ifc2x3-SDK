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

#ifndef IFC2X3_IFCMATERIALLIST_H
#define IFC2X3_IFCMATERIALLIST_H
#include "DefinedTypes.h"
#include "ifc2x3Export.h"

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcMaterialList Entity.
     * 
     */
    class IFC2X3_EXPORT IfcMaterialList : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'Materials'.
         * 
         */
        virtual List_IfcMaterial_1_n &getMaterials();
        /**
         * (const) Returns the value of the explicit attribute 'Materials'.
         * 
         * @return the value of the explicit attribute 'Materials'
         */
        virtual const List_IfcMaterial_1_n &getMaterials() const;
        /**
         * Sets the value of the explicit attribute 'Materials'.
         * 
         * @param value
         */
        virtual void setMaterials(const List_IfcMaterial_1_n &value);
        /**
         * unset the attribute 'Materials'.
         * 
         */
        virtual void unsetMaterials();
        /**
         * Test if the attribute 'Materials' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMaterials() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcMaterialList(Step::Id id, Step::SPFData *args);
        virtual ~IfcMaterialList();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcMaterialList &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        List_IfcMaterial_1_n m_materials;

    };

}

#endif // IFC2X3_IFCMATERIALLIST_H
