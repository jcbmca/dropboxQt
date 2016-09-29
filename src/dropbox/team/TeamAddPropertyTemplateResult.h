/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
 www.prokarpaty.net
 29, Sep 2016
***********************************************************/

#pragma once
#include "dropbox/endpoint/ApiUtil.h"

namespace dropboxQt{
namespace team{
    class AddPropertyTemplateResult{
        /**
            field: template_id: An identifier for property template added by
                :meth:`properties_template_add`.
        */

    public:
        AddPropertyTemplateResult(){};

        AddPropertyTemplateResult(const QString& arg){ m_template_id = arg; };

    public:
            /**
                An identifier for property template added by
                :meth:`properties_template_add`.
            */
        QString templateId()const{return m_template_id;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<AddPropertyTemplateResult>  create(const QByteArray& data);
            static std::unique_ptr<AddPropertyTemplateResult>  create(const QJsonObject& js);
        };




    protected:
            /**
                An identifier for property template added by
                :meth:`properties_template_add`.
            */
        QString m_template_id;

    };//AddPropertyTemplateResult

}//team
}//dropboxQt
