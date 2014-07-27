// Copyright (c) 2009-2014 The Bitcoin developers
// Copyright (c) 2014 The PayProCoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "chainparams.h"

#include "assert.h"
#include "core.h"
#include "protocol.h"
#include "util.h"

#include <boost/assign/list_of.hpp>

using namespace boost::assign;

//
// Main network
//

unsigned int pnSeed[] =
{
	0x38d0ff9e, 0x37acfca2, 0x53d6ff9e
};

class CMainParams : public CChainParams {
public:
    CMainParams() {
        // The message start string is designed to be unlikely to occur in normal data.
        // The characters are rarely used upper ASCII, not valid as UTF-8, and produce
        // a large 4-byte int at any alignment.
        pchMessageStart[0] = 0x70;
        pchMessageStart[1] = 0x70;
        pchMessageStart[2] = 0x72;
        pchMessageStart[3] = 0x6f;
        vAlertPubKey = ParseHex("04438149f356383735fae6282f584cb97b395152918c6bb9b30d0998df600ed8af1a701bfd9ea7a9fbcdde31616833a63c6a254111eb787f563eba4699e839a1c4");
        nDefaultPort = 28765;
        nRPCPort = 28764;
        bnProofOfWorkLimit = CBigNum(~uint256(0) >> 32);
        nSubsidyHalvingInterval = 105000;

        // Build the genesis block. Note that the output of the genesis coinbase cannot
        // be spent as it did not originally exist in the database.
        const char* pszTimestamp = "Sex, Drugs and GDP: the Challenge of Measuring the Shadow Economy";
        CTransaction txNew;
        txNew.vin.resize(1);
        txNew.vout.resize(1);
        txNew.vin[0].scriptSig = CScript() << 486604799 << CBigNum(4) << vector<unsigned char>((const unsigned char*)pszTimestamp, (const unsigned char*)pszTimestamp + strlen(pszTimestamp));
        txNew.vout[0].nValue = 1 * COIN;
        txNew.vout[0].scriptPubKey = CScript() << ParseHex("04678afdb0fe5548271967f1a67130b7105cd6a828e03909a67962e0ea1f61deb649f6bc3f4cef38c4f35504e51ec112de5c384df7ba0b8d578a4c702b6bf11d5f") << OP_CHECKSIG;
        genesis.vtx.push_back(txNew);
        genesis.hashPrevBlock = 0;
        genesis.hashMerkleRoot = genesis.BuildMerkleTree();
        genesis.nVersion = 1;
        genesis.nTime    = 1402319820;
        genesis.nBits    = 0x1d00ffff;
        genesis.nNonce   = 2290308334;

        hashGenesisBlock = genesis.GetHash();
        assert(hashGenesisBlock == uint256("0x00000000c114185cd50cd3ab396c61167a7532ddcc31d24cca843dfd333de65d"));
        assert(genesis.hashMerkleRoot == uint256("0x1a57ba32850899b6155348087919cd7bed8c79b7b02747df3f2c18eeca1e6b93"));

        vSeeds.push_back(CDNSSeedData("158.255.208.56", "158.255.208.56"));
        vSeeds.push_back(CDNSSeedData("162.252.172.55", "162.252.172.55"));
        vSeeds.push_back(CDNSSeedData("158.255.214.83", "158.255.214.83"));
        vSeeds.push_back(CDNSSeedData("67.220.103.126", "67.220.103.126"));


        base58Prefixes[PUBKEY_ADDRESS] = list_of(56);
        base58Prefixes[SCRIPT_ADDRESS] = list_of(5);
        base58Prefixes[SECRET_KEY] =     list_of(128);
        base58Prefixes[EXT_PUBLIC_KEY] = list_of(0x04)(0x88)(0xB2)(0x1E);
        base58Prefixes[EXT_SECRET_KEY] = list_of(0x04)(0x88)(0xAD)(0xE4);

        // Convert the pnSeeds array into usable address objects.
        for (unsigned int i = 0; i < ARRAYLEN(pnSeed); i++)
        {
            // It'll only connect to one or two seed nodes because once it connects,
            // it'll get a pile of addresses with newer timestamps.
            // Seed nodes are given a random 'last seen time' of between one and two
            // weeks ago.
            const int64_t nOneWeek = 7*24*60*60;
            struct in_addr ip;
            memcpy(&ip, &pnSeed[i], sizeof(ip));
            CAddress addr(CService(ip, GetDefaultPort()));
            addr.nTime = GetTime() - GetRand(nOneWeek) - nOneWeek;
            vFixedSeeds.push_back(addr);
        }
    }

    virtual const CBlock& GenesisBlock() const { return genesis; }
    virtual Network NetworkID() const { return CChainParams::MAIN; }

    virtual const vector<CAddress>& FixedSeeds() const {
        return vFixedSeeds;
    }
protected:
    CBlock genesis;
    vector<CAddress> vFixedSeeds;
};
static CMainParams mainParams;


//
// Testnet
//
class CTestNetParams : public CMainParams {
public:
    CTestNetParams() {
        // The message start string is designed to be unlikely to occur in normal data.
        // The characters are rarely used upper ASCII, not valid as UTF-8, and produce
        // a large 4-byte int at any alignment.
        pchMessageStart[0] = 0x6f;
        pchMessageStart[1] = 0x72;
        pchMessageStart[2] = 0x70;
        pchMessageStart[3] = 0x70;
        vAlertPubKey = ParseHex("04438149f356383735fae6282f584cb97b395152918c6bb9b30d0998df600ed8af1a701bfd9ea7a9fbcdde31616833a63c6a254111eb787f563eba4699e839a1c4");
        nDefaultPort = 38765;
        nRPCPort = 38764;
        strDataDir = "testnet";

        // Modify the testnet genesis block so the timestamp is valid for a later start.
        genesis.nTime    = 1402319820;
        genesis.nBits    = 0x1d00ffff;
        genesis.nNonce   = 2290308334;
        hashGenesisBlock = genesis.GetHash();
        assert(hashGenesisBlock == uint256("0x00000000c114185cd50cd3ab396c61167a7532ddcc31d24cca843dfd333de65d"));

        vFixedSeeds.clear();
        vSeeds.clear();
        vSeeds.push_back(CDNSSeedData("158.255.208.56", "158.255.208.56"));
        vSeeds.push_back(CDNSSeedData("162.252.172.55", "162.252.172.55"));
        vSeeds.push_back(CDNSSeedData("158.255.214.83", "158.255.214.83"));
        vSeeds.push_back(CDNSSeedData("67.220.103.126", "67.220.103.126"));

        base58Prefixes[PUBKEY_ADDRESS] = list_of(111);
        base58Prefixes[SCRIPT_ADDRESS] = list_of(196);
        base58Prefixes[SECRET_KEY]     = list_of(239);
        base58Prefixes[EXT_PUBLIC_KEY] = list_of(0x04)(0x35)(0x87)(0xCF);
        base58Prefixes[EXT_SECRET_KEY] = list_of(0x04)(0x35)(0x83)(0x94);
    }
    virtual Network NetworkID() const { return CChainParams::TESTNET; }
};
static CTestNetParams testNetParams;


//
// Regression test
//
class CRegTestParams : public CTestNetParams {
public:
    CRegTestParams() {
        pchMessageStart[0] = 0x72;
        pchMessageStart[1] = 0x6f;
        pchMessageStart[2] = 0x70;
        pchMessageStart[3] = 0x70;
        nSubsidyHalvingInterval = 150;
        bnProofOfWorkLimit = CBigNum(~uint256(0) >> 1);
        genesis.nTime    = 1402319820;
        genesis.nBits    = 0x1d00ffff;
        genesis.nNonce   = 2290308334;
        hashGenesisBlock = genesis.GetHash();
        nDefaultPort = 48765;
        strDataDir = "regtest";
        assert(hashGenesisBlock == uint256("0x00000000c114185cd50cd3ab396c61167a7532ddcc31d24cca843dfd333de65d"));

        vSeeds.clear();  // Regtest mode doesn't have any DNS seeds.
    }

    virtual bool RequireRPCPassword() const { return false; }
    virtual Network NetworkID() const { return CChainParams::REGTEST; }
};
static CRegTestParams regTestParams;

static CChainParams *pCurrentParams = &mainParams;

const CChainParams &Params() {
    return *pCurrentParams;
}

void SelectParams(CChainParams::Network network) {
    switch (network) {
        case CChainParams::MAIN:
            pCurrentParams = &mainParams;
            break;
        case CChainParams::TESTNET:
            pCurrentParams = &testNetParams;
            break;
        case CChainParams::REGTEST:
            pCurrentParams = &regTestParams;
            break;
        default:
            assert(false && "Unimplemented network");
            return;
    }
}

bool SelectParamsFromCommandLine() {
    bool fRegTest = GetBoolArg("-regtest", false);
    bool fTestNet = GetBoolArg("-testnet", false);

    if (fTestNet && fRegTest) {
        return false;
    }

    if (fRegTest) {
        SelectParams(CChainParams::REGTEST);
    } else if (fTestNet) {
        SelectParams(CChainParams::TESTNET);
    } else {
        SelectParams(CChainParams::MAIN);
    }
    return true;
}
