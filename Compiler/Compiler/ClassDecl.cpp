#include "ClassDecl.h"

CClassDecl::CClassDecl( std::string _id, std::string _parentId, IVarDeclList* _varDecls, IMethodDeclList* _methodDecls, int _line ) :
	id( symbolStorage.Get(_id) ),
	parentId( symbolStorage.Get(_parentId) ),
	varDecls( _varDecls ),
	methodDecls( _methodDecls )
{
	// assert( _id != nullptr );
}

CClassDecl::~CClassDecl()
{
	if ( id != nullptr ) {
		delete id;
	}

	if ( parentId != nullptr ) {
		delete parentId;
	}

	if ( varDecls != nullptr ) {
		delete varDecls;
	}

	if ( methodDecls != nullptr ) {
		delete methodDecls;
	}
}

CSymbol* CClassDecl::Id() const
{
	return id;
}

CSymbol* CClassDecl::ParentId() const
{
	return parentId;
}

const IVarDeclList* CClassDecl::VarDeclList() const
{
	return varDecls;
}

const IMethodDeclList* CClassDecl::MethodDeclList() const
{
	return methodDecls;
}

