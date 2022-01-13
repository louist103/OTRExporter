#include "PathExporter.h"
#include "../ZAPD/ZFile.h"

void OTRExporter_Path::Save(ZResource* res, fs::path outPath, BinaryWriter* writer)
{
	ZPath* path = (ZPath*)res;

	WriteHeader(res, outPath, writer, Ship::ResourceType::Path);
	
	writer->Write((uint32_t)path->pathways.size());

	for (int k = 0; k < path->pathways.size(); k++)
	{
		writer->Write((uint32_t)path->pathways[k].points.size());

		for (int i = 0; i < path->pathways[k].points.size(); i++)
		{
			writer->Write(path->pathways[k].points[i].scalars[0].scalarData.s16);
			writer->Write(path->pathways[k].points[i].scalars[1].scalarData.s16);
			writer->Write(path->pathways[k].points[i].scalars[2].scalarData.s16);
		}
	}
}