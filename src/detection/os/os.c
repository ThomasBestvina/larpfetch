#include "os.h"
#include "common/FFstrbuf.h"

void ffDetectOSImpl(FFOSResult* os);

const FFOSResult* ffDetectOS(void)
{
    static FFOSResult result;
    if (result.name.chars == NULL)
    {
        ffStrbufInit(&result.name);
        ffStrbufInit(&result.prettyName);
        ffStrbufInit(&result.id);
        ffStrbufInit(&result.version);
        ffStrbufInit(&result.versionID);
        ffStrbufInit(&result.codename);
        ffStrbufInit(&result.buildID);
        ffStrbufInit(&result.idLike);
        ffStrbufInit(&result.variant);
        ffStrbufInit(&result.variantID);
        ffDetectOSImpl(&result);

        ffStrbufSetS(&result.name, "Arch Linux");
        ffStrbufSetS(&result.prettyName, "Arch Linux");
        ffStrbufSetS(&result.id, "arch");
        ffStrbufSetS(&result.id, "arch");

    }
    return &result;
}
