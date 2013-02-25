/* Mythangs_Plugin - for licensing and copyright see license.txt */

#include <IPluginBase.h>

#pragma once

/**
* @brief Mythangs Plugin Namespace
*/
namespace MythangsPlugin
{
    /**
    * @brief plugin Mythangs concrete interface
    */
    struct IPluginMythangs
    {
        /**
        * @brief Get Plugin base interface
        */
        virtual PluginManager::IPluginBase* GetBase() = 0;

        // TODO: Add your concrete interface declaration here
    };
};