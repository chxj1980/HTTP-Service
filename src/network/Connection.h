/*
* This software is developed for study and improve coding skill ...
*
* Project:  Enjoyable Coding< EC >
* Copyright (C) 2014-2016 Gao Peng

* This library is free software; you can redistribute it and/or
* modify it under the terms of the GNU Library General Public
* License as published by the Free Software Foundation; either
* version 2 of the License, or (at your option) any later version.

* This library is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* Library General Public License for more details.

* You should have received a copy of the GNU Library General Public
* License along with this library; if not, write to the Free
* Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

* ---------------------------------------------------------------------
* Connection.h
* This file for Connection define and encapsulation.
*
* Eamil:   epengao@126.com
* Author:  Peter Gao
* Version: Intial first version.
* --------------------------------------------------------------------
*/

#ifndef CONNECTION_H
#define CONNECTION_H

#include "ECTCPSocket.h"

class Connection
{
public:
    Connection(ECTCPSocket *pSocket,
               ECSocketAddress *pClientAddr);
    ~Connection();
    EC_VOID Close();
    EC_BOOL CheckSecurity();
    ECTCPSocket* GetTCPSocket() const;
    ECSocketAddress* GetClientAddress() const;

private:
    ECTCPSocket* m_pSocket;
    ECSocketAddress *m_pClientAddr;
};

#endif /* CONNECTION_H */
