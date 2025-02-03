#include "VersionInfo.h"
#include <libultraship/bridge.h>
#include "../../mm/2s2h/resource/type/2shResourceType.h"

std::map<uint32_t, uint32_t> resourceVersions;

void InitVersionInfo()
{
	resourceVersions = std::map<uint32_t, uint32_t> {
	{ static_cast<uint32_t>(SOH::ResourceType::SOH_Animation), 0 },
	{ static_cast<uint32_t>(Fast::ResourceType::Texture), 0 },
	{ static_cast<uint32_t>(SOH::ResourceType::SOH_PlayerAnimation), 0 },
	{ static_cast<uint32_t>(Fast::ResourceType::DisplayList), 0 },
	{ static_cast<uint32_t>(SOH::ResourceType::SOH_Room), 0 },
	{ static_cast<uint32_t>(SOH::ResourceType::SOH_CollisionHeader), 0 },
	{ static_cast<uint32_t>(SOH::ResourceType::SOH_Skeleton), 0 },
	{ static_cast<uint32_t>(SOH::ResourceType::SOH_SkeletonLimb), 0 },
	{ static_cast<uint32_t>(Fast::ResourceType::Matrix), 0 },
	{ static_cast<uint32_t>(SOH::ResourceType::SOH_Path), 0 },
	{ static_cast<uint32_t>(Fast::ResourceType::Vertex), 0 },
	{ static_cast<uint32_t>(SOH::ResourceType::SOH_Cutscene), 0 },
	{ static_cast<uint32_t>(SOH::ResourceType::SOH_Array), 0 },
	{ static_cast<uint32_t>(SOH::ResourceType::SOH_Text), 0 },
	{ static_cast<uint32_t>(Ship::ResourceType::Blob), 0 },
	};
}
