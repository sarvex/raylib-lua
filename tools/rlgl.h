void rlMatrixMode(int mode)
void rlPushMatrix(void)
void rlPopMatrix(void)
void rlLoadIdentity(void)
void rlTranslatef(float x, float y, float z)
void rlRotatef(float angleDeg, float x, float y, float z)
void rlScalef(float x, float y, float z)
void rlMultMatrixf(float *matf)
void rlFrustum(double left, double right, double bottom, double top, double znear, double zfar)
void rlOrtho(double left, double right, double bottom, double top, double znear, double zfar)
void rlViewport(int x, int y, int width, int height)
void rlBegin(int mode)
void rlEnd(void)
void rlVertex2i(int x, int y)
void rlVertex2f(float x, float y)
void rlVertex3f(float x, float y, float z)
void rlTexCoord2f(float x, float y)
void rlNormal3f(float x, float y, float z)
void rlColor4ub(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
void rlColor3f(float x, float y, float z)
void rlColor4f(float x, float y, float z, float w)
void rlEnableTexture(unsigned int id)
void rlDisableTexture(void)
void rlTextureParameters(unsigned int id, int param, int value)
void rlEnableShader(unsigned int id)
void rlDisableShader(void)
void rlEnableFramebuffer(unsigned int id)
void rlDisableFramebuffer(void)
void rlEnableDepthTest(void)
void rlDisableDepthTest(void)
void rlEnableBackfaceCulling(void)
void rlDisableBackfaceCulling(void)
void rlEnableScissorTest(void)
void rlDisableScissorTest(void)
void rlScissor(int x, int y, int width, int height)
void rlEnableWireMode(void)
void rlDisableWireMode(void)
void rlClearColor(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
void rlClearScreenBuffers(void)
void rlUpdateBuffer(int bufferId, void *data, int dataSize)
unsigned int rlLoadAttribBuffer(unsigned int vaoId, int shaderLoc, void *buffer, int size, bool dynamic)
void rlglInit(int width, int height)
void rlglClose(void)
void rlglDraw(void)
void rlCheckErrors(void)
int rlGetVersion(void)
bool rlCheckBufferLimit(int vCount)
void rlSetDebugMarker(const char *text)
void rlSetBlendMode(int glSrcFactor, int glDstFactor, int glEquation)
void rlLoadExtensions(void *loader)
unsigned int rlLoadTexture(void *data, int width, int height, int format, int mipmapCount)
unsigned int rlLoadTextureDepth(int width, int height, bool useRenderBuffer)
unsigned int rlLoadTextureCubemap(void *data, int size, int format)
void rlUpdateTexture(unsigned int id, int offsetX, int offsetY, int width, int height, int format, const void *data)
void rlGetGlTextureFormats(int format, unsigned int *glInternalFormat, unsigned int *glFormat, unsigned int *glType)
void rlUnloadTexture(unsigned int id)
void rlGenerateMipmaps(Texture2D *texture)
void *rlReadTexturePixels(Texture2D texture)
unsigned char *rlReadScreenPixels(int width, int height)
unsigned int rlLoadFramebuffer(int width, int height)
void rlFramebufferAttach(unsigned int fboId, unsigned int texId, int attachType)
bool rlFramebufferComplete(unsigned int id)
void rlUnloadFramebuffer(unsigned int id)
void rlLoadMesh(Mesh *mesh, bool dynamic)
void rlUpdateMesh(Mesh mesh, int buffer, int num)
void rlUpdateMeshAt(Mesh mesh, int buffer, int num, int index)
void rlDrawMeshInstanced(Mesh mesh, Material material, Matrix *transforms, int count)
void rlDrawMesh(Mesh mesh, Material material, Matrix transform)
void rlUnloadMesh(Mesh mesh)
