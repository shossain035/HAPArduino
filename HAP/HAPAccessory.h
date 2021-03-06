#ifndef _HAPACCESSORY_H_
#define _HAPACCESSORY_H_

#include <HAPService.h>


class HAPAccessory : public HAPBase
{
public:
	HAPAccessory(unsigned char instanceId, HAPService ** const services, unsigned char servicesCount);
	virtual int sendToClient(Client & client);
private:
	HAPService ** const _services;
	unsigned char _servicesCount;
};

#endif
