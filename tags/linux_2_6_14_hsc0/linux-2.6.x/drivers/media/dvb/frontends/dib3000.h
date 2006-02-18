/*
 * public header file of the frontend drivers for mobile DVB-T demodulators
 * DiBcom 3000M-B and DiBcom 3000P/M-C (http://www.dibcom.fr/)
 *
 * Copyright (C) 2004-5 Patrick Boettcher (patrick.boettcher@desy.de)
 *
 * based on GPL code from DibCom, which has
 *
 * Copyright (C) 2004 Amaury Demol for DiBcom (ademol@dibcom.fr)
 *
 *	This program is free software; you can redistribute it and/or
 *	modify it under the terms of the GNU General Public License as
 *	published by the Free Software Foundation, version 2.
 *
 * Acknowledgements
 *
 *  Amaury Demol (ademol@dibcom.fr) from DiBcom for providing specs and driver
 *  sources, on which this driver (and the dvb-dibusb) are based.
 *
 * see Documentation/dvb/README.dibusb for more information
 *
 */

#ifndef DIB3000_H
#define DIB3000_H

#include <linux/dvb/frontend.h>

struct dib3000_config
{
	/* the demodulator's i2c address */
	u8 demod_address;

	/* PLL maintenance and the i2c address of the PLL */
	int (*pll_init)(struct dvb_frontend *fe);
	int (*pll_set)(struct dvb_frontend *fe, struct dvb_frontend_parameters* params);
};

struct dib_fe_xfer_ops
{
	/* pid and transfer handling is done in the demodulator */
	int (*pid_parse)(struct dvb_frontend *fe, int onoff);
	int (*fifo_ctrl)(struct dvb_frontend *fe, int onoff);
	int (*pid_ctrl)(struct dvb_frontend *fe, int index, int pid, int onoff);
	int (*tuner_pass_ctrl)(struct dvb_frontend *fe, int onoff, u8 pll_ctrl);
};

extern struct dvb_frontend* dib3000mb_attach(const struct dib3000_config* config,
					     struct i2c_adapter* i2c, struct dib_fe_xfer_ops *xfer_ops);

extern struct dvb_frontend* dib3000mc_attach(const struct dib3000_config* config,
					     struct i2c_adapter* i2c, struct dib_fe_xfer_ops *xfer_ops);
#endif // DIB3000_H
