#ifndef QOPCUAABSTRACTOBJECT_H
#define QOPCUAABSTRACTOBJECT_H

#include <QOpcUaNodeFactory>
#include <QOpcUaBaseDataVariable>

/*
typedef struct {                          // UA_ObjectTypeAttributes_default
	// Node Attributes
	UA_UInt32        specifiedAttributes; // 0,
	UA_LocalizedText displayName;         // {{0, NULL}, {0, NULL}},
	UA_LocalizedText description;         // {{0, NULL}, {0, NULL}},
	UA_UInt32        writeMask;           // 0,
	UA_UInt32        userWriteMask;       // 0,
	// Object Type Attributes
	UA_Boolean       isAbstract;          // false
} UA_ObjectTypeAttributes;

typedef struct {                          // UA_ObjectAttributes_default
	// Node Attributes
	UA_UInt32        specifiedAttributes; // 0,
	UA_LocalizedText displayName;         // {{0, NULL}, {0, NULL}},
	UA_LocalizedText description;         // {{0, NULL}, {0, NULL}},
	UA_UInt32        writeMask;           // 0,
	UA_UInt32        userWriteMask;       // 0,
	// Object Attributes
	UA_Byte          eventNotifier;       // 0
} UA_ObjectAttributes;
*/


class QOpcUaAbstractObject : public QOpcUaServerNode
{
    Q_OBJECT

	// Object Attributes

	// TODO
	//Q_PROPERTY(UA_Byte eventNotifier READ get_eventNotifier)

public:
    explicit QOpcUaAbstractObject(QOpcUaServerNode *parent);

protected:
	// NOTE : this private method exists so QOpcUaServer can create the UA_NS0ID_OBJECTSFOLDER instance
	explicit QOpcUaAbstractObject(QOpcUaServer *server);
};

#endif // QOPCUAABSTRACTOBJECT_H