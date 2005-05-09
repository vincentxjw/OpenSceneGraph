// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/CopyOp>
#include <osg/Image>
#include <osg/Object>
#include <osg/State>
#include <osg/StateAttribute>
#include <osg/Texture2D>

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osg::Texture2D)
	BaseType(osg::Texture);
	Constructor0();
	Constructor1(IN, osg::Image *, image);
	ConstructorWithDefaults2(IN, const osg::Texture2D &, text, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY);
	Method0(osg::Object *, cloneType);
	Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	Method0(const char *, libraryName);
	Method0(const char *, className);
	Method0(osg::StateAttribute::Type, getType);
	Method1(int, compare, IN, const osg::StateAttribute &, rhs);
	Method1(bool, getModeUsage, IN, osg::StateAttribute::ModeUsage &, usage);
	Method1(void, setImage, IN, osg::Image *, image);
	Method0(osg::Image *, getImage);
	Method0(const osg::Image *, getImage);
	Method1(unsigned int &, getModifiedCount, IN, unsigned int, contextID);
	Method2(void, setImage, IN, unsigned, int, IN, osg::Image *, image);
	Method1(osg::Image *, getImage, IN, unsigned, int);
	Method1(const osg::Image *, getImage, IN, unsigned, int);
	Method0(unsigned int, getNumImages);
	Method2(void, setTextureSize, IN, int, width, IN, int, height);
	Method1(void, setTextureWidth, IN, int, width);
	Method0(int, getTextureWidth);
	Method1(void, setTextureHeight, IN, int, height);
	Method0(int, getTextureHeight);
	Method1(void, setSubloadCallback, IN, osg::Texture2D::SubloadCallback *, cb);
	Method0(osg::Texture2D::SubloadCallback *, getSubloadCallback);
	Method0(const osg::Texture2D::SubloadCallback *, getSubloadCallback);
	Method1(void, setNumMipmapLevels, IN, unsigned int, num);
	Method0(unsigned int, getNumMipmapLevels);
	Method5(void, copyTexImage2D, IN, osg::State &, state, IN, int, x, IN, int, y, IN, int, width, IN, int, height);
	Method7(void, copyTexSubImage2D, IN, osg::State &, state, IN, int, xoffset, IN, int, yoffset, IN, int, x, IN, int, y, IN, int, width, IN, int, height);
	Method1(void, apply, IN, osg::State &, state);
	Property(osg::Image *, Image);
	WriteOnlyProperty(unsigned int, NumMipmapLevels);
	Property(osg::Texture2D::SubloadCallback *, SubloadCallback);
	Property(int, TextureHeight);
	Property(int, TextureWidth);
	ReadOnlyProperty(osg::StateAttribute::Type, Type);
END_REFLECTOR

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osg::Texture2D::SubloadCallback)
	BaseType(osg::Referenced);
	Constructor0();
	Method2(void, load, IN, const osg::Texture2D &, texture, IN, osg::State &, state);
	Method2(void, subload, IN, const osg::Texture2D &, texture, IN, osg::State &, state);
END_REFLECTOR

