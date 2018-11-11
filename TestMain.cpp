#define TEST0

#include <MaskedOcclusionCulling.h>

int main()
{
        MaskedOcclusionCulling* moc = MaskedOcclusionCulling::Create();
 
	float vertices[3];
	uint32_t indices[1];
	moc->RenderTriangles(vertices, indices, 1, nullptr);

	MaskedOcclusionCulling::Destroy(moc);
}
