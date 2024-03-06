// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.

#ifndef ASPOSE_CELLS_UUID_H
#define ASPOSE_CELLS_UUID_H

#ifdef _WIN32
#include <guiddef.h>
#else
#include <uuid/uuid.h>
#endif

namespace Aspose { namespace Cells {
	/// <summary>
	/// Guid struct.
	/// </summary>
#ifdef _WIN32
	typedef GUID UUID;
#else
	typedef uuid_t UUID;
#endif
} }

#endif
