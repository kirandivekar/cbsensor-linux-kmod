/*
 * Copyright 2020 VMware, Inc.
 * SPDX-License-Identifier: BSD-2-Clause
 */

enum CB_DRIVER_REQUEST {
	CB_DRIVER_REQUEST_UNKNOWN = 0,

	CB_DRIVER_REQUEST_GET_VERSION  = 1, // not used?
	CB_DRIVER_REQUEST_APPLY_FILTER = 2, // one way, called by WEB and
					    // driver-manger;
	CB_DRIVER_REQUEST_IGNORE_UID	   = 3, // one way
	CB_DRIVER_REQUEST_IGNORE_PID	   = 4, // one way
	CB_DRIVER_REQUEST_IGNORE_SERVER	   = 5, // one way
	CB_DRIVER_REQUEST_SET_BANNED_PID   = 6, // not use?
	CB_DRIVER_REQUEST_SET_BANNED_INODE = 7, // one way, but called multiple
						// times
	CB_DRIVER_REQUEST_SET_TRUSTED_PATH	 = 8, // onw way
	CB_DRIVER_REQUEST_ISOLATION_MODE_CONTROL = 9, // one way, called by WEB
	CB_DRIVER_REQUEST_CLR_BANNED_INODE	 = 10, // one way
	CB_DRIVER_REQUEST_PROTECTION_ENABLED	 = 11, // one way
	CB_DRIVER_REQUEST_SET_LOG_LEVEL		 = 12, // one way
	CB_DRIVER_REQUEST_HEARTBEAT		 = 13, // two way

	CB_DRIVER_REQUEST_MAX
};
