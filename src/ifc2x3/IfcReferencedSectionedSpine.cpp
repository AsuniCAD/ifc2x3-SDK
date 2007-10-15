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

#include "ifc2x3/IfcReferencedSectionedSpine.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcProfileDef.h"
#include "ifc2x3/IfcReferenceCurve.h"
#include "ifc2x3/IfcReferencePlacement.h"
#include "ifc2x3/IfcSolidModel.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcReferencedSectionedSpine::IfcReferencedSectionedSpine(Step::Id id, Step::SPFData *args) : IfcSolidModel(id, args) {
    m_spineCurve = NULL;
    m_crossSections.setUnset(true);
    m_crossSectionPositions.setUnset(true);
}

IfcReferencedSectionedSpine::~IfcReferencedSectionedSpine() {
}

bool IfcReferencedSectionedSpine::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcReferencedSectionedSpine(this);
}

const std::string &IfcReferencedSectionedSpine::type() {
    return IfcReferencedSectionedSpine::s_type.getName();
}

Step::ClassType IfcReferencedSectionedSpine::getClassType() {
    return IfcReferencedSectionedSpine::s_type;
}

Step::ClassType IfcReferencedSectionedSpine::getType() const {
    return IfcReferencedSectionedSpine::s_type;
}

bool IfcReferencedSectionedSpine::isOfType(Step::ClassType t) {
    return IfcReferencedSectionedSpine::s_type == t ? true : IfcSolidModel::isOfType(t);
}

IfcReferenceCurve *IfcReferencedSectionedSpine::getSpineCurve() {
    if (Step::BaseObject::inited()) {
        return m_spineCurve.get();
    }
    else {
        return NULL;
    }
}

void IfcReferencedSectionedSpine::setSpineCurve(const Step::RefPtr< IfcReferenceCurve > &value) {
    m_spineCurve = value;
}

Step::List< Step::RefPtr< IfcProfileDef > > &IfcReferencedSectionedSpine::getCrossSections() {
    if (Step::BaseObject::inited()) {
        return m_crossSections;
    }
    else {
        m_crossSections.setUnset(true);
        return m_crossSections;
    }
}

void IfcReferencedSectionedSpine::setCrossSections(const Step::List< Step::RefPtr< IfcProfileDef > > &value) {
    m_crossSections = value;
}

Step::List< Step::RefPtr< IfcReferencePlacement > > &IfcReferencedSectionedSpine::getCrossSectionPositions() {
    if (Step::BaseObject::inited()) {
        return m_crossSectionPositions;
    }
    else {
        m_crossSectionPositions.setUnset(true);
        return m_crossSectionPositions;
    }
}

void IfcReferencedSectionedSpine::setCrossSectionPositions(const Step::List< Step::RefPtr< IfcReferencePlacement > > &value) {
    m_crossSectionPositions = value;
}

void IfcReferencedSectionedSpine::release() {
    IfcSolidModel::release();
    m_spineCurve.release();
    m_crossSections.clear();
    m_crossSectionPositions.clear();
}

bool IfcReferencedSectionedSpine::init() {
    bool status = IfcSolidModel::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_spineCurve = NULL;
    }
    else {
        m_spineCurve = static_cast< IfcReferenceCurve * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_crossSections.setUnset(true);
    }
    else {
        m_crossSections.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcProfileDef > attr2;
                attr2 = static_cast< IfcProfileDef * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_crossSections.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_crossSectionPositions.setUnset(true);
    }
    else {
        m_crossSectionPositions.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcReferencePlacement > attr2;
                attr2 = static_cast< IfcReferencePlacement * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_crossSectionPositions.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcReferencedSectionedSpine::copy(const IfcReferencedSectionedSpine &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcProfileDef > >::const_iterator it_m_crossSections;
    Step::List< Step::RefPtr< IfcReferencePlacement > >::const_iterator it_m_crossSectionPositions;
    IfcSolidModel::copy(obj, copyop);
    setSpineCurve(copyop(obj.m_spineCurve.get()));
    for (it_m_crossSections = obj.m_crossSections.begin(); it_m_crossSections != obj.m_crossSections.end(); ++it_m_crossSections) {
        Step::RefPtr< IfcProfileDef > copyTarget = copyop((*it_m_crossSections).get());
        m_crossSections.push_back(copyTarget.get());
    }
    for (it_m_crossSectionPositions = obj.m_crossSectionPositions.begin(); it_m_crossSectionPositions != obj.m_crossSectionPositions.end(); ++it_m_crossSectionPositions) {
        Step::RefPtr< IfcReferencePlacement > copyTarget = copyop((*it_m_crossSectionPositions).get());
        m_crossSectionPositions.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcReferencedSectionedSpine::s_type("IfcReferencedSectionedSpine");