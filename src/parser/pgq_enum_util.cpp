#include "duckdb/common/enum_util.hpp"
#include "duckdb/common/exception/conversion_exception.hpp"
#include "duckdb/parser/path_element.hpp"
#include "duckdb/parser/path_reference.hpp"
#include "duckdb/parser/subpath_element.hpp"

namespace duckdb {

template <>
const char *EnumUtil::ToChars<PGQMatchType>(PGQMatchType value) {
	switch (value) {
	case PGQMatchType::MATCH_VERTEX:
		return "MATCH_VERTEX";
	case PGQMatchType::MATCH_EDGE_ANY:
		return "MATCH_EDGE_ANY";
	case PGQMatchType::MATCH_EDGE_LEFT:
		return "MATCH_EDGE_LEFT";
	case PGQMatchType::MATCH_EDGE_RIGHT:
		return "MATCH_EDGE_RIGHT";
	case PGQMatchType::MATCH_EDGE_LEFT_RIGHT:
		return "MATCH_EDGE_LEFT_RIGHT";
	default:
		throw NotImplementedException(StringUtil::Format("Enum value: '%d' not implemented", value));
	}
}

template <>
PGQMatchType EnumUtil::FromString<PGQMatchType>(const char *value) {
	if (StringUtil::Equals(value, "MATCH_VERTEX")) {
		return PGQMatchType::MATCH_VERTEX;
	}
	if (StringUtil::Equals(value, "MATCH_EDGE_ANY")) {
		return PGQMatchType::MATCH_EDGE_ANY;
	}
	if (StringUtil::Equals(value, "MATCH_EDGE_LEFT")) {
		return PGQMatchType::MATCH_EDGE_LEFT;
	}
	if (StringUtil::Equals(value, "MATCH_EDGE_RIGHT")) {
		return PGQMatchType::MATCH_EDGE_RIGHT;
	}
	if (StringUtil::Equals(value, "MATCH_EDGE_LEFT_RIGHT")) {
		return PGQMatchType::MATCH_EDGE_LEFT_RIGHT;
	}
	throw NotImplementedException(StringUtil::Format("Enum value: '%s' not implemented", value));
}

template <>
const char *EnumUtil::ToChars<PGQPathMode>(PGQPathMode value) {
	switch (value) {
	case PGQPathMode::NONE:
		return "NONE";
	case PGQPathMode::WALK:
		return "WALK";
	case PGQPathMode::SIMPLE:
		return "SIMPLE";
	case PGQPathMode::TRAIL:
		return "TRAIL";
	case PGQPathMode::ACYCLIC:
		return "ACYCLIC";
	default:
		throw NotImplementedException(StringUtil::Format("Enum value: '%d' not implemented", value));
	}
}

template <>
PGQPathMode EnumUtil::FromString<PGQPathMode>(const char *value) {
	if (StringUtil::Equals(value, "NONE")) {
		return PGQPathMode::NONE;
	}
	if (StringUtil::Equals(value, "WALK")) {
		return PGQPathMode::WALK;
	}
	if (StringUtil::Equals(value, "SIMPLE")) {
		return PGQPathMode::SIMPLE;
	}
	if (StringUtil::Equals(value, "TRAIL")) {
		return PGQPathMode::TRAIL;
	}
	if (StringUtil::Equals(value, "ACYCLIC")) {
		return PGQPathMode::ACYCLIC;
	}
	throw NotImplementedException(StringUtil::Format("Enum value: '%s' not implemented", value));
}

template <>
const char *EnumUtil::ToChars<PGQPathReferenceType>(PGQPathReferenceType value) {
	switch (value) {
	case PGQPathReferenceType::PATH_ELEMENT:
		return "PATH_ELEMENT";
	case PGQPathReferenceType::SUBPATH:
		return "SUBPATH";
	case PGQPathReferenceType::UNKNOWN:
		return "UNKNOWN";
	default:
		throw NotImplementedException(StringUtil::Format("Enum value: '%d' not implemented", value));
	}
}

template <>
PGQPathReferenceType EnumUtil::FromString<PGQPathReferenceType>(const char *value) {
	if (StringUtil::Equals(value, "PATH_ELEMENT")) {
		return PGQPathReferenceType::PATH_ELEMENT;
	}
	if (StringUtil::Equals(value, "SUBPATH")) {
		return PGQPathReferenceType::SUBPATH;
	}
	if (StringUtil::Equals(value, "UNKNOWN")) {
		return PGQPathReferenceType::UNKNOWN;
	}
	throw NotImplementedException(StringUtil::Format("Enum value: '%s' not implemented", value));
}

} // namespace duckdb
