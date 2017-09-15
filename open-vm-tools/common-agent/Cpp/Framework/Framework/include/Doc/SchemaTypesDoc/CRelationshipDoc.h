/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (c) 2012 Vmware, Inc.  All rights reserved.
 *  -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppDoc". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef CRelationshipDoc_h_
#define CRelationshipDoc_h_

namespace Caf {

/// Definition of a relationship between data classes
class CRelationshipDoc {
public:
	CRelationshipDoc() :
		_arity(ARITY_NONE),
		_isInitialized(false) {}
	virtual ~CRelationshipDoc() {}

public:
	/// Initializes the object with everything required by this
	/// container. Once initialized, this object cannot
	/// be changed (i.e. it is immutable).
	void initialize(
		const std::string namespaceVal,
		const std::string name,
		const std::string version,
		const ARITY_TYPE arity,
		const SmartPtrCClassCardinalityDoc dataClassLeft,
		const SmartPtrCClassCardinalityDoc dataClassRight,
		const std::string description = std::string()) {
		if (! _isInitialized) {
			_namespaceVal = namespaceVal;
			_name = name;
			_version = version;
			_arity = arity;
			_dataClassLeft = dataClassLeft;
			_dataClassRight = dataClassRight;
			_description = description;

			_isInitialized = true;
		}
	}

public:
	/// Accessor for the NamespaceVal
	std::string getNamespaceVal() const {
		return _namespaceVal;
	}

	/// Accessor for the Name
	std::string getName() const {
		return _name;
	}

	/// Accessor for the Version
	std::string getVersion() const {
		return _version;
	}

	/// Number of parts (sides) to relationship. Restricted to a two-sided relationship for now
	ARITY_TYPE getArity() const {
		return _arity;
	}

	/// Identifies the two classes that make up the relationship
	SmartPtrCClassCardinalityDoc getDataClassLeft() const {
		return _dataClassLeft;
	}

	/// Identifies the two classes that make up the relationship
	SmartPtrCClassCardinalityDoc getDataClassRight() const {
		return _dataClassRight;
	}

	/// A short human-readable description of the relationship
	std::string getDescription() const {
		return _description;
	}

private:
	std::string _namespaceVal;
	std::string _name;
	std::string _version;
	ARITY_TYPE _arity;
	SmartPtrCClassCardinalityDoc _dataClassLeft;
	SmartPtrCClassCardinalityDoc _dataClassRight;
	std::string _description;
	bool _isInitialized;


private:
	CAF_CM_DECLARE_NOCOPY(CRelationshipDoc);
};

CAF_DECLARE_SMART_POINTER(CRelationshipDoc);

}

#endif