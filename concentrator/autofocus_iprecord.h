#ifndef __autofocus_iprecord_h
#define __autofocus_iprecord_h

#include <map>
#include <list>
#include "autofocus_attribute.h"

class report;
class attribute;
enum report_enum { payload_tcp, payload_udp, fanouts, NUM_REPORTS };

typedef struct IPRecord {
	uint32_t subnetIP;
	uint32_t subnetBits;
	std::map<report_enum,attribute*> attributes;
}IPRecord;

typedef	struct treeNode {
	IPRecord data;
	treeNode* left;
	treeNode* right;
}treeNode;

typedef struct treeRecord {
	treeNode* root;
	std::list<report*> reports;
}treeRecord;
#endif
