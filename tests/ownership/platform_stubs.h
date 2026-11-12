#ifndef HARNESS_PLATFORM_STUBS_H
#define HARNESS_PLATFORM_STUBS_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HarnessDeviceFixture {
    int video;
    const char *uniqueID;
    const char *modelID;
    const char *manufacturer;
    const char *localizedName;
    int connected;
} HarnessDeviceFixture;

void harness_set_devices(const HarnessDeviceFixture *devices, int count);
int harness_device_enumerations(void);
void harness_probe_denied_selector(void);
void harness_probe_denied_session(void);

#ifdef __cplusplus
}
#endif

#endif
