/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
 www.prokarpaty.net
 29, Sep 2016
***********************************************************/

#pragma once

#include "dropbox/endpoint/ApiUtil.h"

namespace dropboxQt{
namespace files{
    class ThumbnailFormat{
    public:
        enum Tag{

		/*None*/
		ThumbnailFormat_JPEG,
		/*None*/
		ThumbnailFormat_PNG
        };

        ThumbnailFormat(){}
        ThumbnailFormat(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js, QString name)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<ThumbnailFormat>  create(const QByteArray& data);
            static std::unique_ptr<ThumbnailFormat>  create(const QJsonObject& js);
        };




    protected:
        Tag m_tag;
    };//ThumbnailFormat

}//files
}//dropboxQt
