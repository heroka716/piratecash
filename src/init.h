// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2014 The Bitcoin developers
// Copyright (c) 2018-2022 The PirateCash developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_INIT_H
#define BITCOIN_INIT_H

#include <string>

class CScheduler;
class CWallet;

namespace boost
{
class thread_group;
} // namespace boost

extern CWallet* pwalletMain;

void StartShutdown();
bool ShutdownRequested();
/** Interrupt threads */
void Interrupt(boost::thread_group& threadGroup);
void Shutdown();
void PrepareShutdown();
bool AppInit2(boost::thread_group& threadGroup, CScheduler& scheduler);
/** Help for options shared between UI and daemon (for -help) */
std::string HelpMessage();
/** Returns licensing information (for -version) */
std::string LicenseInfo();
extern bool fOnlyTor;

#endif // BITCOIN_INIT_H
