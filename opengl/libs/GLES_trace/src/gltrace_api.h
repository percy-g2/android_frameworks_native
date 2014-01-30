/*
 * Copyright 2011, The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * THIS FILE WAS GENERATED BY A SCRIPT. DO NOT EDIT.
 */

namespace android {
namespace gltrace {

// Declarations for GL2 APIs

void GLTrace_glActiveTexture(GLenum texture);
void GLTrace_glAttachShader(GLuint program, GLuint shader);
void GLTrace_glBindAttribLocation(GLuint program, GLuint index, const GLchar* name);
void GLTrace_glBindBuffer(GLenum target, GLuint buffer);
void GLTrace_glBindFramebuffer(GLenum target, GLuint framebuffer);
void GLTrace_glBindRenderbuffer(GLenum target, GLuint renderbuffer);
void GLTrace_glBindTexture(GLenum target, GLuint texture);
void GLTrace_glBlendColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
void GLTrace_glBlendEquation(GLenum mode);
void GLTrace_glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha);
void GLTrace_glBlendFunc(GLenum sfactor, GLenum dfactor);
void GLTrace_glBlendFuncSeparate(GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
void GLTrace_glBufferData(GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage);
void GLTrace_glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data);
GLenum GLTrace_glCheckFramebufferStatus(GLenum target);
void GLTrace_glClear(GLbitfield mask);
void GLTrace_glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
void GLTrace_glClearDepthf(GLclampf depth);
void GLTrace_glClearStencil(GLint s);
void GLTrace_glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
void GLTrace_glCompileShader(GLuint shader);
void GLTrace_glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* data);
void GLTrace_glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* data);
void GLTrace_glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
void GLTrace_glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
GLuint GLTrace_glCreateProgram(void);
GLuint GLTrace_glCreateShader(GLenum type);
void GLTrace_glCullFace(GLenum mode);
void GLTrace_glDeleteBuffers(GLsizei n, const GLuint* buffers);
void GLTrace_glDeleteFramebuffers(GLsizei n, const GLuint* framebuffers);
void GLTrace_glDeleteProgram(GLuint program);
void GLTrace_glDeleteRenderbuffers(GLsizei n, const GLuint* renderbuffers);
void GLTrace_glDeleteShader(GLuint shader);
void GLTrace_glDeleteTextures(GLsizei n, const GLuint* textures);
void GLTrace_glDepthFunc(GLenum func);
void GLTrace_glDepthMask(GLboolean flag);
void GLTrace_glDepthRangef(GLclampf zNear, GLclampf zFar);
void GLTrace_glDetachShader(GLuint program, GLuint shader);
void GLTrace_glDisable(GLenum cap);
void GLTrace_glDisableVertexAttribArray(GLuint index);
void GLTrace_glDrawArrays(GLenum mode, GLint first, GLsizei count);
void GLTrace_glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices);
void GLTrace_glEnable(GLenum cap);
void GLTrace_glEnableVertexAttribArray(GLuint index);
void GLTrace_glFinish(void);
void GLTrace_glFlush(void);
void GLTrace_glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
void GLTrace_glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
void GLTrace_glFrontFace(GLenum mode);
void GLTrace_glGenBuffers(GLsizei n, GLuint* buffers);
void GLTrace_glGenerateMipmap(GLenum target);
void GLTrace_glGenFramebuffers(GLsizei n, GLuint* framebuffers);
void GLTrace_glGenRenderbuffers(GLsizei n, GLuint* renderbuffers);
void GLTrace_glGenTextures(GLsizei n, GLuint* textures);
void GLTrace_glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLint* size, GLenum* type, GLchar* name);
void GLTrace_glGetActiveUniform(GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLint* size, GLenum* type, GLchar* name);
void GLTrace_glGetAttachedShaders(GLuint program, GLsizei maxcount, GLsizei* count, GLuint* shaders);
int GLTrace_glGetAttribLocation(GLuint program, const GLchar* name);
void GLTrace_glGetBooleanv(GLenum pname, GLboolean* params);
void GLTrace_glGetBufferParameteriv(GLenum target, GLenum pname, GLint* params);
GLenum GLTrace_glGetError(void);
void GLTrace_glGetFloatv(GLenum pname, GLfloat* params);
void GLTrace_glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint* params);
void GLTrace_glGetIntegerv(GLenum pname, GLint* params);
void GLTrace_glGetProgramiv(GLuint program, GLenum pname, GLint* params);
void GLTrace_glGetProgramInfoLog(GLuint program, GLsizei bufsize, GLsizei* length, GLchar* infolog);
void GLTrace_glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint* params);
void GLTrace_glGetShaderiv(GLuint shader, GLenum pname, GLint* params);
void GLTrace_glGetShaderInfoLog(GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* infolog);
void GLTrace_glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision);
void GLTrace_glGetShaderSource(GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* source);
const GLubyte* GLTrace_glGetString(GLenum name);
void GLTrace_glGetTexParameterfv(GLenum target, GLenum pname, GLfloat* params);
void GLTrace_glGetTexParameteriv(GLenum target, GLenum pname, GLint* params);
void GLTrace_glGetUniformfv(GLuint program, GLint location, GLfloat* params);
void GLTrace_glGetUniformiv(GLuint program, GLint location, GLint* params);
int GLTrace_glGetUniformLocation(GLuint program, const GLchar* name);
void GLTrace_glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat* params);
void GLTrace_glGetVertexAttribiv(GLuint index, GLenum pname, GLint* params);
void GLTrace_glGetVertexAttribPointerv(GLuint index, GLenum pname, GLvoid** pointer);
void GLTrace_glHint(GLenum target, GLenum mode);
GLboolean GLTrace_glIsBuffer(GLuint buffer);
GLboolean GLTrace_glIsEnabled(GLenum cap);
GLboolean GLTrace_glIsFramebuffer(GLuint framebuffer);
GLboolean GLTrace_glIsProgram(GLuint program);
GLboolean GLTrace_glIsRenderbuffer(GLuint renderbuffer);
GLboolean GLTrace_glIsShader(GLuint shader);
GLboolean GLTrace_glIsTexture(GLuint texture);
void GLTrace_glLineWidth(GLfloat width);
void GLTrace_glLinkProgram(GLuint program);
void GLTrace_glPixelStorei(GLenum pname, GLint param);
void GLTrace_glPolygonOffset(GLfloat factor, GLfloat units);
void GLTrace_glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels);
void GLTrace_glReleaseShaderCompiler(void);
void GLTrace_glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
void GLTrace_glSampleCoverage(GLclampf value, GLboolean invert);
void GLTrace_glScissor(GLint x, GLint y, GLsizei width, GLsizei height);
void GLTrace_glShaderBinary(GLsizei n, const GLuint* shaders, GLenum binaryformat, const GLvoid* binary, GLsizei length);
void GLTrace_glShaderSource(GLuint shader, GLsizei count, const GLchar** string, const GLint* length);
void GLTrace_glStencilFunc(GLenum func, GLint ref, GLuint mask);
void GLTrace_glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask);
void GLTrace_glStencilMask(GLuint mask);
void GLTrace_glStencilMaskSeparate(GLenum face, GLuint mask);
void GLTrace_glStencilOp(GLenum fail, GLenum zfail, GLenum zpass);
void GLTrace_glStencilOpSeparate(GLenum face, GLenum fail, GLenum zfail, GLenum zpass);
void GLTrace_glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
void GLTrace_glTexParameterf(GLenum target, GLenum pname, GLfloat param);
void GLTrace_glTexParameterfv(GLenum target, GLenum pname, const GLfloat* params);
void GLTrace_glTexParameteri(GLenum target, GLenum pname, GLint param);
void GLTrace_glTexParameteriv(GLenum target, GLenum pname, const GLint* params);
void GLTrace_glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels);
void GLTrace_glUniform1f(GLint location, GLfloat x);
void GLTrace_glUniform1fv(GLint location, GLsizei count, const GLfloat* v);
void GLTrace_glUniform1i(GLint location, GLint x);
void GLTrace_glUniform1iv(GLint location, GLsizei count, const GLint* v);
void GLTrace_glUniform2f(GLint location, GLfloat x, GLfloat y);
void GLTrace_glUniform2fv(GLint location, GLsizei count, const GLfloat* v);
void GLTrace_glUniform2i(GLint location, GLint x, GLint y);
void GLTrace_glUniform2iv(GLint location, GLsizei count, const GLint* v);
void GLTrace_glUniform3f(GLint location, GLfloat x, GLfloat y, GLfloat z);
void GLTrace_glUniform3fv(GLint location, GLsizei count, const GLfloat* v);
void GLTrace_glUniform3i(GLint location, GLint x, GLint y, GLint z);
void GLTrace_glUniform3iv(GLint location, GLsizei count, const GLint* v);
void GLTrace_glUniform4f(GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void GLTrace_glUniform4fv(GLint location, GLsizei count, const GLfloat* v);
void GLTrace_glUniform4i(GLint location, GLint x, GLint y, GLint z, GLint w);
void GLTrace_glUniform4iv(GLint location, GLsizei count, const GLint* v);
void GLTrace_glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
void GLTrace_glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
void GLTrace_glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
void GLTrace_glUseProgram(GLuint program);
void GLTrace_glValidateProgram(GLuint program);
void GLTrace_glVertexAttrib1f(GLuint indx, GLfloat x);
void GLTrace_glVertexAttrib1fv(GLuint indx, const GLfloat* values);
void GLTrace_glVertexAttrib2f(GLuint indx, GLfloat x, GLfloat y);
void GLTrace_glVertexAttrib2fv(GLuint indx, const GLfloat* values);
void GLTrace_glVertexAttrib3f(GLuint indx, GLfloat x, GLfloat y, GLfloat z);
void GLTrace_glVertexAttrib3fv(GLuint indx, const GLfloat* values);
void GLTrace_glVertexAttrib4f(GLuint indx, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void GLTrace_glVertexAttrib4fv(GLuint indx, const GLfloat* values);
void GLTrace_glVertexAttribPointer(GLuint indx, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid* ptr);
void GLTrace_glViewport(GLint x, GLint y, GLsizei width, GLsizei height);

// Declarations for GL2Ext APIs

void GLTrace_glEGLImageTargetTexture2DOES(GLenum target, GLeglImageOES image);
void GLTrace_glEGLImageTargetRenderbufferStorageOES(GLenum target, GLeglImageOES image);
void GLTrace_glGetProgramBinaryOES(GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, GLvoid *binary);
void GLTrace_glProgramBinaryOES(GLuint program, GLenum binaryFormat, const GLvoid *binary, GLint length);
void* GLTrace_glMapBufferOES(GLenum target, GLenum access);
GLboolean GLTrace_glUnmapBufferOES(GLenum target);
void GLTrace_glGetBufferPointervOES(GLenum target, GLenum pname, GLvoid** params);
void GLTrace_glTexImage3DOES(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
void GLTrace_glTexSubImage3DOES(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid* pixels);
void GLTrace_glCopyTexSubImage3DOES(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
void GLTrace_glCompressedTexImage3DOES(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid* data);
void GLTrace_glCompressedTexSubImage3DOES(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid* data);
void GLTrace_glFramebufferTexture3DOES(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
void GLTrace_glBindVertexArrayOES(GLuint array);
void GLTrace_glDeleteVertexArraysOES(GLsizei n, const GLuint *arrays);
void GLTrace_glGenVertexArraysOES(GLsizei n, GLuint *arrays);
GLboolean GLTrace_glIsVertexArrayOES(GLuint array);
void GLTrace_glGetPerfMonitorGroupsAMD(GLint *numGroups, GLsizei groupsSize, GLuint *groups);
void GLTrace_glGetPerfMonitorCountersAMD(GLuint group, GLint *numCounters, GLint *maxActiveCounters, GLsizei counterSize, GLuint *counters);
void GLTrace_glGetPerfMonitorGroupStringAMD(GLuint group, GLsizei bufSize, GLsizei *length, GLchar *groupString);
void GLTrace_glGetPerfMonitorCounterStringAMD(GLuint group, GLuint counter, GLsizei bufSize, GLsizei *length, GLchar *counterString);
void GLTrace_glGetPerfMonitorCounterInfoAMD(GLuint group, GLuint counter, GLenum pname, GLvoid *data);
void GLTrace_glGenPerfMonitorsAMD(GLsizei n, GLuint *monitors);
void GLTrace_glDeletePerfMonitorsAMD(GLsizei n, GLuint *monitors);
void GLTrace_glSelectPerfMonitorCountersAMD(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint *countersList);
void GLTrace_glBeginPerfMonitorAMD(GLuint monitor);
void GLTrace_glEndPerfMonitorAMD(GLuint monitor);
void GLTrace_glGetPerfMonitorCounterDataAMD(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint *data, GLint *bytesWritten);
void GLTrace_glBlitFramebufferANGLE(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
void GLTrace_glRenderbufferStorageMultisampleANGLE(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
void GLTrace_glRenderbufferStorageMultisampleAPPLE(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
void GLTrace_glResolveMultisampleFramebufferAPPLE(void);
void GLTrace_glLabelObjectEXT(GLenum type, GLuint object, GLsizei length, const GLchar *label);
void GLTrace_glGetObjectLabelEXT(GLenum type, GLuint object, GLsizei bufSize, GLsizei *length, GLchar *label);
void GLTrace_glInsertEventMarkerEXT(GLsizei length, const GLchar *marker);
void GLTrace_glPushGroupMarkerEXT(GLsizei length, const GLchar *marker);
void GLTrace_glPopGroupMarkerEXT(void);
void GLTrace_glDiscardFramebufferEXT(GLenum target, GLsizei numAttachments, const GLenum *attachments);
void GLTrace_glRenderbufferStorageMultisampleEXT(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
void GLTrace_glFramebufferTexture2DMultisampleEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples);
void GLTrace_glMultiDrawArraysEXT(GLenum mode, GLint *first, GLsizei *count, GLsizei primcount);
void GLTrace_glMultiDrawElementsEXT(GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount);
void GLTrace_glGenQueriesEXT(GLsizei n, GLuint *ids);
void GLTrace_glDeleteQueriesEXT(GLsizei n, const GLuint *ids);
GLboolean GLTrace_glIsQueryEXT(GLuint id);
void GLTrace_glBeginQueryEXT(GLenum target, GLuint id);
void GLTrace_glEndQueryEXT(GLenum target);
void GLTrace_glGetQueryivEXT(GLenum target, GLenum pname, GLint *params);
void GLTrace_glGetQueryObjectuivEXT(GLuint id, GLenum pname, GLuint *params);
GLenum GLTrace_glGetGraphicsResetStatusEXT(void);
void GLTrace_glReadnPixelsEXT(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
void GLTrace_glGetnUniformfvEXT(GLuint program, GLint location, GLsizei bufSize, float *params);
void GLTrace_glGetnUniformivEXT(GLuint program, GLint location, GLsizei bufSize, GLint *params);
void GLTrace_glUseProgramStagesEXT(GLuint pipeline, GLbitfield stages, GLuint program);
void GLTrace_glActiveShaderProgramEXT(GLuint pipeline, GLuint program);
GLuint GLTrace_glCreateShaderProgramvEXT(GLenum type, GLsizei count, const GLchar **strings);
void GLTrace_glBindProgramPipelineEXT(GLuint pipeline);
void GLTrace_glDeleteProgramPipelinesEXT(GLsizei n, const GLuint *pipelines);
void GLTrace_glGenProgramPipelinesEXT(GLsizei n, GLuint *pipelines);
GLboolean GLTrace_glIsProgramPipelineEXT(GLuint pipeline);
void GLTrace_glProgramParameteriEXT(GLuint program, GLenum pname, GLint value);
void GLTrace_glGetProgramPipelineivEXT(GLuint pipeline, GLenum pname, GLint *params);
void GLTrace_glProgramUniform1iEXT(GLuint program, GLint location, GLint x);
void GLTrace_glProgramUniform2iEXT(GLuint program, GLint location, GLint x, GLint y);
void GLTrace_glProgramUniform3iEXT(GLuint program, GLint location, GLint x, GLint y, GLint z);
void GLTrace_glProgramUniform4iEXT(GLuint program, GLint location, GLint x, GLint y, GLint z, GLint w);
void GLTrace_glProgramUniform1fEXT(GLuint program, GLint location, GLfloat x);
void GLTrace_glProgramUniform2fEXT(GLuint program, GLint location, GLfloat x, GLfloat y);
void GLTrace_glProgramUniform3fEXT(GLuint program, GLint location, GLfloat x, GLfloat y, GLfloat z);
void GLTrace_glProgramUniform4fEXT(GLuint program, GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void GLTrace_glProgramUniform1ivEXT(GLuint program, GLint location, GLsizei count, const GLint *value);
void GLTrace_glProgramUniform2ivEXT(GLuint program, GLint location, GLsizei count, const GLint *value);
void GLTrace_glProgramUniform3ivEXT(GLuint program, GLint location, GLsizei count, const GLint *value);
void GLTrace_glProgramUniform4ivEXT(GLuint program, GLint location, GLsizei count, const GLint *value);
void GLTrace_glProgramUniform1fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat *value);
void GLTrace_glProgramUniform2fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat *value);
void GLTrace_glProgramUniform3fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat *value);
void GLTrace_glProgramUniform4fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat *value);
void GLTrace_glProgramUniformMatrix2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
void GLTrace_glProgramUniformMatrix3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
void GLTrace_glProgramUniformMatrix4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
void GLTrace_glValidateProgramPipelineEXT(GLuint pipeline);
void GLTrace_glGetProgramPipelineInfoLogEXT(GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
void GLTrace_glTexStorage1DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
void GLTrace_glTexStorage2DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
void GLTrace_glTexStorage3DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
void GLTrace_glTextureStorage1DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
void GLTrace_glTextureStorage2DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
void GLTrace_glTextureStorage3DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
void GLTrace_glRenderbufferStorageMultisampleIMG(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
void GLTrace_glFramebufferTexture2DMultisampleIMG(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples);
void GLTrace_glCoverageMaskNV(GLboolean mask);
void GLTrace_glCoverageOperationNV(GLenum operation);
void GLTrace_glDrawBuffersNV(GLsizei n, const GLenum *bufs);
void GLTrace_glDeleteFencesNV(GLsizei n, const GLuint *fences);
void GLTrace_glGenFencesNV(GLsizei n, GLuint *fences);
GLboolean GLTrace_glIsFenceNV(GLuint fence);
GLboolean GLTrace_glTestFenceNV(GLuint fence);
void GLTrace_glGetFenceivNV(GLuint fence, GLenum pname, GLint *params);
void GLTrace_glFinishFenceNV(GLuint fence);
void GLTrace_glSetFenceNV(GLuint fence, GLenum condition);
void GLTrace_glReadBufferNV(GLenum mode);
void GLTrace_glAlphaFuncQCOM(GLenum func, GLclampf ref);
void GLTrace_glGetDriverControlsQCOM(GLint *num, GLsizei size, GLuint *driverControls);
void GLTrace_glGetDriverControlStringQCOM(GLuint driverControl, GLsizei bufSize, GLsizei *length, GLchar *driverControlString);
void GLTrace_glEnableDriverControlQCOM(GLuint driverControl);
void GLTrace_glDisableDriverControlQCOM(GLuint driverControl);
void GLTrace_glExtGetTexturesQCOM(GLuint *textures, GLint maxTextures, GLint *numTextures);
void GLTrace_glExtGetBuffersQCOM(GLuint *buffers, GLint maxBuffers, GLint *numBuffers);
void GLTrace_glExtGetRenderbuffersQCOM(GLuint *renderbuffers, GLint maxRenderbuffers, GLint *numRenderbuffers);
void GLTrace_glExtGetFramebuffersQCOM(GLuint *framebuffers, GLint maxFramebuffers, GLint *numFramebuffers);
void GLTrace_glExtGetTexLevelParameterivQCOM(GLuint texture, GLenum face, GLint level, GLenum pname, GLint *params);
void GLTrace_glExtTexObjectStateOverrideiQCOM(GLenum target, GLenum pname, GLint param);
void GLTrace_glExtGetTexSubImageQCOM(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLvoid *texels);
void GLTrace_glExtGetBufferPointervQCOM(GLenum target, GLvoid **params);
void GLTrace_glExtGetShadersQCOM(GLuint *shaders, GLint maxShaders, GLint *numShaders);
void GLTrace_glExtGetProgramsQCOM(GLuint *programs, GLint maxPrograms, GLint *numPrograms);
GLboolean GLTrace_glExtIsProgramBinaryQCOM(GLuint program);
void GLTrace_glExtGetProgramBinarySourceQCOM(GLuint program, GLenum shadertype, GLchar *source, GLint *length);
void GLTrace_glStartTilingQCOM(GLuint x, GLuint y, GLuint width, GLuint height, GLbitfield preserveMask);
void GLTrace_glEndTilingQCOM(GLbitfield preserveMask);

// Declarations for GL1 APIs

void GLTrace_glAlphaFunc(GLenum func, GLclampf ref);
void GLTrace_glClipPlanef(GLenum plane, const GLfloat *equation);
void GLTrace_glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void GLTrace_glFogf(GLenum pname, GLfloat param);
void GLTrace_glFogfv(GLenum pname, const GLfloat *params);
void GLTrace_glFrustumf(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar);
void GLTrace_glGetClipPlanef(GLenum pname, GLfloat eqn[4]);
void GLTrace_glGetLightfv(GLenum light, GLenum pname, GLfloat *params);
void GLTrace_glGetMaterialfv(GLenum face, GLenum pname, GLfloat *params);
void GLTrace_glGetTexEnvfv(GLenum env, GLenum pname, GLfloat *params);
void GLTrace_glLightModelf(GLenum pname, GLfloat param);
void GLTrace_glLightModelfv(GLenum pname, const GLfloat *params);
void GLTrace_glLightf(GLenum light, GLenum pname, GLfloat param);
void GLTrace_glLightfv(GLenum light, GLenum pname, const GLfloat *params);
void GLTrace_glLoadMatrixf(const GLfloat *m);
void GLTrace_glMaterialf(GLenum face, GLenum pname, GLfloat param);
void GLTrace_glMaterialfv(GLenum face, GLenum pname, const GLfloat *params);
void GLTrace_glMultMatrixf(const GLfloat *m);
void GLTrace_glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
void GLTrace_glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz);
void GLTrace_glOrthof(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar);
void GLTrace_glPointParameterf(GLenum pname, GLfloat param);
void GLTrace_glPointParameterfv(GLenum pname, const GLfloat *params);
void GLTrace_glPointSize(GLfloat size);
void GLTrace_glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
void GLTrace_glScalef(GLfloat x, GLfloat y, GLfloat z);
void GLTrace_glTexEnvf(GLenum target, GLenum pname, GLfloat param);
void GLTrace_glTexEnvfv(GLenum target, GLenum pname, const GLfloat *params);
void GLTrace_glTranslatef(GLfloat x, GLfloat y, GLfloat z);
void GLTrace_glAlphaFuncx(GLenum func, GLclampx ref);
void GLTrace_glClearColorx(GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha);
void GLTrace_glClearDepthx(GLclampx depth);
void GLTrace_glClientActiveTexture(GLenum texture);
void GLTrace_glClipPlanex(GLenum plane, const GLfixed *equation);
void GLTrace_glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
void GLTrace_glColor4x(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
void GLTrace_glColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
void GLTrace_glDepthRangex(GLclampx zNear, GLclampx zFar);
void GLTrace_glDisableClientState(GLenum array);
void GLTrace_glEnableClientState(GLenum array);
void GLTrace_glFogx(GLenum pname, GLfixed param);
void GLTrace_glFogxv(GLenum pname, const GLfixed *params);
void GLTrace_glFrustumx(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar);
void GLTrace_glGetClipPlanex(GLenum pname, GLfixed eqn[4]);
void GLTrace_glGetFixedv(GLenum pname, GLfixed *params);
void GLTrace_glGetLightxv(GLenum light, GLenum pname, GLfixed *params);
void GLTrace_glGetMaterialxv(GLenum face, GLenum pname, GLfixed *params);
void GLTrace_glGetPointerv(GLenum pname, GLvoid **params);
void GLTrace_glGetTexEnviv(GLenum env, GLenum pname, GLint *params);
void GLTrace_glGetTexEnvxv(GLenum env, GLenum pname, GLfixed *params);
void GLTrace_glGetTexParameterxv(GLenum target, GLenum pname, GLfixed *params);
void GLTrace_glLightModelx(GLenum pname, GLfixed param);
void GLTrace_glLightModelxv(GLenum pname, const GLfixed *params);
void GLTrace_glLightx(GLenum light, GLenum pname, GLfixed param);
void GLTrace_glLightxv(GLenum light, GLenum pname, const GLfixed *params);
void GLTrace_glLineWidthx(GLfixed width);
void GLTrace_glLoadIdentity(void);
void GLTrace_glLoadMatrixx(const GLfixed *m);
void GLTrace_glLogicOp(GLenum opcode);
void GLTrace_glMaterialx(GLenum face, GLenum pname, GLfixed param);
void GLTrace_glMaterialxv(GLenum face, GLenum pname, const GLfixed *params);
void GLTrace_glMatrixMode(GLenum mode);
void GLTrace_glMultMatrixx(const GLfixed *m);
void GLTrace_glMultiTexCoord4x(GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q);
void GLTrace_glNormal3x(GLfixed nx, GLfixed ny, GLfixed nz);
void GLTrace_glNormalPointer(GLenum type, GLsizei stride, const GLvoid *pointer);
void GLTrace_glOrthox(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar);
void GLTrace_glPointParameterx(GLenum pname, GLfixed param);
void GLTrace_glPointParameterxv(GLenum pname, const GLfixed *params);
void GLTrace_glPointSizex(GLfixed size);
void GLTrace_glPolygonOffsetx(GLfixed factor, GLfixed units);
void GLTrace_glPopMatrix(void);
void GLTrace_glPushMatrix(void);
void GLTrace_glRotatex(GLfixed angle, GLfixed x, GLfixed y, GLfixed z);
void GLTrace_glSampleCoveragex(GLclampx value, GLboolean invert);
void GLTrace_glScalex(GLfixed x, GLfixed y, GLfixed z);
void GLTrace_glShadeModel(GLenum mode);
void GLTrace_glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
void GLTrace_glTexEnvi(GLenum target, GLenum pname, GLint param);
void GLTrace_glTexEnvx(GLenum target, GLenum pname, GLfixed param);
void GLTrace_glTexEnviv(GLenum target, GLenum pname, const GLint *params);
void GLTrace_glTexEnvxv(GLenum target, GLenum pname, const GLfixed *params);
void GLTrace_glTexParameterx(GLenum target, GLenum pname, GLfixed param);
void GLTrace_glTexParameterxv(GLenum target, GLenum pname, const GLfixed *params);
void GLTrace_glTranslatex(GLfixed x, GLfixed y, GLfixed z);
void GLTrace_glVertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
void GLTrace_glPointSizePointerOES(GLenum type, GLsizei stride, const GLvoid *pointer);

// Declarations for GL1Ext APIs

void GLTrace_glBlendEquationSeparateOES(GLenum modeRGB, GLenum modeAlpha);
void GLTrace_glBlendFuncSeparateOES(GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
void GLTrace_glBlendEquationOES(GLenum mode);
void GLTrace_glDrawTexsOES(GLshort x, GLshort y, GLshort z, GLshort width, GLshort height);
void GLTrace_glDrawTexiOES(GLint x, GLint y, GLint z, GLint width, GLint height);
void GLTrace_glDrawTexxOES(GLfixed x, GLfixed y, GLfixed z, GLfixed width, GLfixed height);
void GLTrace_glDrawTexsvOES(const GLshort *coords);
void GLTrace_glDrawTexivOES(const GLint *coords);
void GLTrace_glDrawTexxvOES(const GLfixed *coords);
void GLTrace_glDrawTexfOES(GLfloat x, GLfloat y, GLfloat z, GLfloat width, GLfloat height);
void GLTrace_glDrawTexfvOES(const GLfloat *coords);
void GLTrace_glAlphaFuncxOES(GLenum func, GLclampx ref);
void GLTrace_glClearColorxOES(GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha);
void GLTrace_glClearDepthxOES(GLclampx depth);
void GLTrace_glClipPlanexOES(GLenum plane, const GLfixed *equation);
void GLTrace_glColor4xOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
void GLTrace_glDepthRangexOES(GLclampx zNear, GLclampx zFar);
void GLTrace_glFogxOES(GLenum pname, GLfixed param);
void GLTrace_glFogxvOES(GLenum pname, const GLfixed *params);
void GLTrace_glFrustumxOES(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar);
void GLTrace_glGetClipPlanexOES(GLenum pname, GLfixed eqn[4]);
void GLTrace_glGetFixedvOES(GLenum pname, GLfixed *params);
void GLTrace_glGetLightxvOES(GLenum light, GLenum pname, GLfixed *params);
void GLTrace_glGetMaterialxvOES(GLenum face, GLenum pname, GLfixed *params);
void GLTrace_glGetTexEnvxvOES(GLenum env, GLenum pname, GLfixed *params);
void GLTrace_glGetTexParameterxvOES(GLenum target, GLenum pname, GLfixed *params);
void GLTrace_glLightModelxOES(GLenum pname, GLfixed param);
void GLTrace_glLightModelxvOES(GLenum pname, const GLfixed *params);
void GLTrace_glLightxOES(GLenum light, GLenum pname, GLfixed param);
void GLTrace_glLightxvOES(GLenum light, GLenum pname, const GLfixed *params);
void GLTrace_glLineWidthxOES(GLfixed width);
void GLTrace_glLoadMatrixxOES(const GLfixed *m);
void GLTrace_glMaterialxOES(GLenum face, GLenum pname, GLfixed param);
void GLTrace_glMaterialxvOES(GLenum face, GLenum pname, const GLfixed *params);
void GLTrace_glMultMatrixxOES(const GLfixed *m);
void GLTrace_glMultiTexCoord4xOES(GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q);
void GLTrace_glNormal3xOES(GLfixed nx, GLfixed ny, GLfixed nz);
void GLTrace_glOrthoxOES(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar);
void GLTrace_glPointParameterxOES(GLenum pname, GLfixed param);
void GLTrace_glPointParameterxvOES(GLenum pname, const GLfixed *params);
void GLTrace_glPointSizexOES(GLfixed size);
void GLTrace_glPolygonOffsetxOES(GLfixed factor, GLfixed units);
void GLTrace_glRotatexOES(GLfixed angle, GLfixed x, GLfixed y, GLfixed z);
void GLTrace_glSampleCoveragexOES(GLclampx value, GLboolean invert);
void GLTrace_glScalexOES(GLfixed x, GLfixed y, GLfixed z);
void GLTrace_glTexEnvxOES(GLenum target, GLenum pname, GLfixed param);
void GLTrace_glTexEnvxvOES(GLenum target, GLenum pname, const GLfixed *params);
void GLTrace_glTexParameterxOES(GLenum target, GLenum pname, GLfixed param);
void GLTrace_glTexParameterxvOES(GLenum target, GLenum pname, const GLfixed *params);
void GLTrace_glTranslatexOES(GLfixed x, GLfixed y, GLfixed z);
GLboolean GLTrace_glIsRenderbufferOES(GLuint renderbuffer);
void GLTrace_glBindRenderbufferOES(GLenum target, GLuint renderbuffer);
void GLTrace_glDeleteRenderbuffersOES(GLsizei n, const GLuint* renderbuffers);
void GLTrace_glGenRenderbuffersOES(GLsizei n, GLuint* renderbuffers);
void GLTrace_glRenderbufferStorageOES(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
void GLTrace_glGetRenderbufferParameterivOES(GLenum target, GLenum pname, GLint* params);
GLboolean GLTrace_glIsFramebufferOES(GLuint framebuffer);
void GLTrace_glBindFramebufferOES(GLenum target, GLuint framebuffer);
void GLTrace_glDeleteFramebuffersOES(GLsizei n, const GLuint* framebuffers);
void GLTrace_glGenFramebuffersOES(GLsizei n, GLuint* framebuffers);
GLenum GLTrace_glCheckFramebufferStatusOES(GLenum target);
void GLTrace_glFramebufferRenderbufferOES(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
void GLTrace_glFramebufferTexture2DOES(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
void GLTrace_glGetFramebufferAttachmentParameterivOES(GLenum target, GLenum attachment, GLenum pname, GLint* params);
void GLTrace_glGenerateMipmapOES(GLenum target);
void GLTrace_glCurrentPaletteMatrixOES(GLuint matrixpaletteindex);
void GLTrace_glLoadPaletteFromModelViewMatrixOES(void);
void GLTrace_glMatrixIndexPointerOES(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
void GLTrace_glWeightPointerOES(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
GLbitfield GLTrace_glQueryMatrixxOES(GLfixed mantissa[16], GLint exponent[16]);
void GLTrace_glDepthRangefOES(GLclampf zNear, GLclampf zFar);
void GLTrace_glFrustumfOES(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar);
void GLTrace_glOrthofOES(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar);
void GLTrace_glClipPlanefOES(GLenum plane, const GLfloat *equation);
void GLTrace_glGetClipPlanefOES(GLenum pname, GLfloat eqn[4]);
void GLTrace_glClearDepthfOES(GLclampf depth);
void GLTrace_glTexGenfOES(GLenum coord, GLenum pname, GLfloat param);
void GLTrace_glTexGenfvOES(GLenum coord, GLenum pname, const GLfloat *params);
void GLTrace_glTexGeniOES(GLenum coord, GLenum pname, GLint param);
void GLTrace_glTexGenivOES(GLenum coord, GLenum pname, const GLint *params);
void GLTrace_glTexGenxOES(GLenum coord, GLenum pname, GLfixed param);
void GLTrace_glTexGenxvOES(GLenum coord, GLenum pname, const GLfixed *params);
void GLTrace_glGetTexGenfvOES(GLenum coord, GLenum pname, GLfloat *params);
void GLTrace_glGetTexGenivOES(GLenum coord, GLenum pname, GLint *params);
void GLTrace_glGetTexGenxvOES(GLenum coord, GLenum pname, GLfixed *params);
void GLTrace_glClipPlanefIMG(GLenum p, const GLfloat *eqn);
void GLTrace_glClipPlanexIMG(GLenum p, const GLfixed *eqn);

}; // namespace gltrace
}; // namespace android
