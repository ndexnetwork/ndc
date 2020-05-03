// Copyright (c) 2010 Satoshi Nakamoto
// Copyright (c) 2009-2012 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// Thanks and Credits for Technologies found in NDC: Bitcoin, Novacoin, Blackcoin, Bitmessage, Shadowcoin, Cryptonote
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "assert.h"

#include "chainparams.h"
#include "main.h"
#include "util.h"

#include <boost/assign/list_of.hpp>

using namespace boost::assign;

struct SeedSpec6 {
    uint8_t addr[16];
    uint16_t port;
};

//#include "chainparamsseeds.h"

unsigned int pnSeed[] =
{
    //no need
};


int64_t CChainParams::GetProofOfWorkReward(int nHeight, int64_t nFees) const
{
    // miner's coin base reward
    int64_t nSubsidy = 0;

    if (nHeight <= 0)
        nSubsidy = 0;
    else
    if (nHeight <= nDistributionFund)
        nSubsidy = 1200000 * COIN;
	else
    if (nHeight <= nLastFairLaunchBlock)
        nSubsidy = 1 * COIN;
    else
    if (nHeight <= 200)
        nSubsidy = 5511 * COIN;
    else
     if (nHeight <= nLastPOWBlock)
        nSubsidy = 511 * COIN;




    if (fDebug && GetBoolArg("-printcreation"))
        LogPrintf("GetProofOfWorkReward() : create=%s nSubsidy=%d\n", FormatMoney(nSubsidy).c_str(), nSubsidy);

    return nSubsidy + nFees;
};


int64_t CChainParams::GetProofOfStakeReward(int64_t nCoinAge, int64_t nFees) const
{
    // miner's coin stake reward based on coin age spent (coin-days)
    int64_t nSubsidy = nCoinAge * FCOIN_YEAR_REWARD * 33 / (365 * 33 + 8);

     if (pindexBest->nHeight <= nFirstYearStake)
        nSubsidy = nCoinAge * COIN_YEAR_REWARD * 33 / (365 * 33 + 8);
    else
    if (pindexBest->nHeight <= nFirstBlockHalve)
        nSubsidy = nCoinAge * SCOIN_YEAR_REWARD * 33 / (365 * 33 + 8);
    else	
    if (pindexBest->nHeight <= nSecondBlockHalve)
        nSubsidy = nCoinAge * CCOIN_YEAR_REWARD * 33 / (365 * 33 + 8);
    else	
    if (pindexBest->nHeight <= nThirdBlockHalve)
        nSubsidy = nCoinAge * KCOIN_YEAR_REWARD * 33 / (365 * 33 + 8);
    else	
    if (pindexBest->nHeight <= nFourthBlockHalve)
        nSubsidy = nCoinAge * ICOIN_YEAR_REWARD * 33 / (365 * 33 + 8);
    else	
    if (pindexBest->nHeight <= nFifthBlockHalve)
        nSubsidy = nCoinAge * OCOIN_YEAR_REWARD * 33 / (365 * 33 + 8);
    else	
    if (pindexBest->nHeight <= nSixthBlockHalve)
        nSubsidy = nCoinAge * DCOIN_YEAR_REWARD * 33 / (365 * 33 + 8);
    else	
    if (pindexBest->nHeight <= nSeventhBlockHalve)
        nSubsidy = nCoinAge * RCOIN_YEAR_REWARD * 33 / (365 * 33 + 8);
    else	
    if (pindexBest->nHeight <= nEighthBlockHalve)
        nSubsidy = nCoinAge * ECOIN_YEAR_REWARD * 33 / (365 * 33 + 8);
    else	
    if (pindexBest->nHeight <= nNinthBlockHalve)
        nSubsidy = nCoinAge * ACOIN_YEAR_REWARD * 33 / (365 * 33 + 8);
    else	
    if (pindexBest->nHeight <= nTenthBlockHalve)
        nSubsidy = nCoinAge * MCOIN_YEAR_REWARD * 33 / (365 * 33 + 8);
    else	
    if (pindexBest->nHeight <= nElevenBlockHalve)
        nSubsidy = nCoinAge * ZCOIN_YEAR_REWARD * 33 / (365 * 33 + 8);
    else	
    if (pindexBest->nHeight <= nTwelveBlockHalve)
        nSubsidy = nCoinAge * XCOIN_YEAR_REWARD * 33 / (365 * 33 + 8);
    else	
    if (pindexBest->nHeight <= nThirteenBlockHalve)
        nSubsidy = nCoinAge * BCOIN_YEAR_REWARD * 33 / (365 * 33 + 8);
    else	
    if (pindexBest->nHeight <= nFourteenBlockHalve)
        nSubsidy = nCoinAge * GCOIN_YEAR_REWARD * 33 / (365 * 33 + 8);



    if (fDebug && GetBoolArg("-printcreation"))
        LogPrintf("GetProofOfStakeReward(): create=%s nCoinAge=%d\n", FormatMoney(nSubsidy).c_str(), nCoinAge);

    return nSubsidy + nFees;
}

//
// Main network
//

// Convert the pnSeeds6 array into usable address objects.
static void convertSeed6(std::vector<CAddress> &vSeedsOut, const SeedSpec6 *data, unsigned int count)
{
    // It'll only connect to one or two seed nodes because once it connects,
    // it'll get a pile of addresses with newer timestamps.
    // Seed nodes are given a random 'last seen time' of between one and two
    // weeks ago.
    const int64_t nOneWeek = 7*24*60*60;
    for (unsigned int i = 0; i < count; i++)
    {
        struct in6_addr ip;
        memcpy(&ip, data[i].addr, sizeof(ip));
        CAddress addr(CService(ip, data[i].port));
        addr.nTime = GetTime() - GetRand(nOneWeek) - nOneWeek;
        vSeedsOut.push_back(addr);
    }
}

// Convert the pnSeeds6 array into usable address objects.
static void convertSeeds(std::vector<CAddress> &vSeedsOut, unsigned int *data, unsigned int count, int port)
{
    // It'll only connect to one or two seed nodes because once it connects,
    // it'll get a pile of addresses with newer timestamps.
    // Seed nodes are given a random 'last seen time' of between one and two
    // weeks ago.
    const int64_t nOneWeek = 7*24*60*60;
    for (unsigned int i = 0; i < count; i++)
    {
        struct in_addr ip;
        memcpy(&ip, &pnSeed[i], sizeof(ip));
        CAddress addr(CService(ip, Params().GetDefaultPort()));
        addr.nTime = GetTime()-GetRand(nOneWeek)-nOneWeek;
        vSeedsOut.push_back(addr);
    }
}

class CMainParams : public CChainParams {
public:
    CMainParams() {
        strNetworkID = "main";

        // The message start string is designed to be unlikely to occur in normal data.
        // The characters are rarely used upper ASCII, not valid as UTF-8, and produce
        // a large 4-byte int at any alignment.
        pchMessageStart[0] = 0xe4;
        pchMessageStart[1] = 0xc0;
        pchMessageStart[2] = 0x0d;
        pchMessageStart[3] = 0xe4;

        vAlertPubKey = ParseHex("042757be1d3cbefdea62c321ed70841a73ec1eb79810332569c73bcd8eb80b6c52561015ac9b23dd36572f259ad3b004a961a967d9cc612e9501a4734e8f0fedec");

        nDefaultPort = 17799;
        nRPCPort = 17798;

        nFirstPosv2Block = 1910;

        bnProofOfWorkLimit = CBigNum(~uint256(0) >> 20); // "standard" scrypt target limit for proof of work, results with 0,000244140625 proof-of-work difficulty
        bnProofOfStakeLimit = CBigNum(~uint256(0) >> 20);
        bnProofOfStakeLimitV2 = CBigNum(~uint256(0) >> 48);

        const char* pszTimestamp = "Record number of Americans file for unemployment-BBC-2020/03/27";
        CTransaction txNew;
        txNew.nTime = 1585351941; //Friday, 27-Mar-20 23:32:21 UTC
        txNew.vin.resize(1);
        txNew.vout.resize(1);
        txNew.vin[0].scriptSig = CScript() << 0 << CBigNum(42) << std::vector<unsigned char>((const unsigned char*)pszTimestamp, (const unsigned char*)pszTimestamp + strlen(pszTimestamp));
        txNew.vout[0].SetEmpty();

        genesis.vtx.push_back(txNew);
        genesis.hashPrevBlock = 0;
        genesis.hashMerkleRoot = genesis.BuildMerkleTree();
        genesis.nVersion = 1;
        genesis.nTime    = 1585351941; //Friday, 27-Mar-20 23:32:21 UTC
        genesis.nBits    = bnProofOfWorkLimit.GetCompact();
        genesis.nNonce   = 408624;
        hashGenesisBlock = genesis.GetHash();
        assert(hashGenesisBlock == uint256("0x00000772bc915ff9b29c0ff560ae6069911c769759245c051c7ed1c6c9dd6b46"));
        assert(genesis.hashMerkleRoot == uint256("0x374680c66bac5575213c24a00963da96bef9f68aa0b7149bcd6f504cd5d6180e"));

        vSeeds.push_back(CDNSSeedData("ndcwallet.pro", "eu.ndcwallet.pro"));
        vSeeds.push_back(CDNSSeedData("ndcwallet.pro", "asia.ndcwallet.pro"));
        vSeeds.push_back(CDNSSeedData("ndcwallet.pro", "usny.ndcwallet.pro"));
        vSeeds.push_back(CDNSSeedData("ndcwallet.pro", "usnj.ndcwallet.pro"));

       base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1, 54);
       base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1, 110);
       base58Prefixes[SECRET_KEY] =     std::vector<unsigned char>(1, 183);
       base58Prefixes[EXT_PUBLIC_KEY] = boost::assign::list_of(0x04)(0x88)(0xB2)(0x1E).convert_to_container<std::vector<unsigned char> >();
       base58Prefixes[EXT_SECRET_KEY] = boost::assign::list_of(0x04)(0x88)(0xAD)(0xE4).convert_to_container<std::vector<unsigned char> >();
        //convertSeed6(vFixedSeeds, pnSeed6_main, ARRAYLEN(pnSeed6_main));
        convertSeeds(vFixedSeeds, pnSeed, ARRAYLEN(pnSeed), nDefaultPort);

        // 1 Year aprox = 501257 blocks
        nFourteenBlockHalve = 27589135; // + 10 year blocks average            x 0.69 % staking
        nThirteenBlockHalve = 22576565; // + 10 year blocks average            x 1 % staking
        nTwelveBlockHalve = 17563995; // + 10 year blocks average              x 2 % staking
        nElevenBlockHalve = 12551425; // + 10 year blocks average              x 3 % staking
        nTenthBlockHalve = 7538855; // + 2 year blocks average                 x 3.3 % staking
        nNinthBlockHalve = 6536341; // + 2 year blocks average                 x 3.6 % staking
        nEighthBlockHalve = 5533827; // + 2 year blocks average                x 3.9 % staking
        nSeventhBlockHalve = 4531313; // + 2 year blocks average               x 6.9 % staking
        nSixthBlockHalve = 3528799; // + 1 year blocks average                 x 11 % staking
        nFifthBlockHalve = 3027542; // + 1 year blocks average                 x 22 % staking
        nFourthBlockHalve = 2526285; // + 1 year blocks average                x 2.5 % staking
        nThirdBlockHalve = 2025028; // + 1 year blocks average                 x 5 % staking
        nSecondBlockHalve = 1523771; // + 1 year blocks average                x 10 % staking
        nFirstBlockHalve = 1022514; // + 1 year blocks average - 10k blockupdt x 20 % staking
        nFirstYearStake = 531257;  // 501257 blocks/year + 20k blocks + 10 k blocksupdate x 69 % staking


        nLastPOWBlock = 1200;

        nLastFairLaunchBlock = 1;
        nDistributionFund = 1;
    }

    virtual const CBlock& GenesisBlock() const { return genesis; }
    virtual Network NetworkID() const { return CChainParams::MAIN; }

    virtual const std::vector<CAddress>& FixedSeeds() const {
        return vFixedSeeds;
    }
protected:
    CBlock genesis;
    std::vector<CAddress> vFixedSeeds;
};
static CMainParams mainParams;

//
// Testnet
//

class CTestNetParams : public CMainParams {
public:
    CTestNetParams() {
        strNetworkID = "test";
        // The message start string is designed to be unlikely to occur in normal data.
        // The characters are rarely used upper ASCII, not valid as UTF-8, and produce
        // a large 4-byte int at any alignment.
        pchMessageStart[0] = 0x0f;
        pchMessageStart[1] = 0x4c;
        pchMessageStart[2] = 0xa6;
        pchMessageStart[3] = 0x0f;


        nFirstPosv2Block = 5000;

        bnProofOfWorkLimit = CBigNum(~uint256(0) >> 16);
        bnProofOfStakeLimit = CBigNum(~uint256(0) >> 20);
        bnProofOfStakeLimitV2 = CBigNum(~uint256(0) >> 16);

        vAlertPubKey = ParseHex("0497e21613c39c9260dccb6a1468b53f59f8f63513cef2e4a8dc2f2696aa357423134c7c9d89921cbf4ff2f553796a9444a2510f8eede2e992878b9e8522d58dea");
        nDefaultPort = 27799;
        nRPCPort = 27798;
        strDataDir = "testnet";

        genesis.nBits  = bnProofOfWorkLimit.GetCompact();
        genesis.nTime    = 1585351941; //Friday, 27-Mar-20 23:32:21 UTC
        genesis.nNonce = 408624;
        hashGenesisBlock = genesis.GetHash();
      //  assert(hashGenesisBlock == uint256("0x00000772bc915ff9b29c0ff560ae6069911c769759245c051c7ed1c6c9dd6b46"));
        assert(genesis.hashMerkleRoot == uint256("0x374680c66bac5575213c24a00963da96bef9f68aa0b7149bcd6f504cd5d6180e"));

        vFixedSeeds.clear();
        vSeeds.clear();

         base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1, 111);
         base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1, 196);
         base58Prefixes[SECRET_KEY]     = std::vector<unsigned char>(1, 239);
         base58Prefixes[EXT_PUBLIC_KEY] = boost::assign::list_of(0x04)(0x35)(0x87)(0xCF).convert_to_container<std::vector<unsigned char> >();
         base58Prefixes[EXT_SECRET_KEY] = boost::assign::list_of(0x04)(0x35)(0x83)(0x94).convert_to_container<std::vector<unsigned char> >();

        //convertSeed6(vFixedSeeds, pnSeed6_test, ARRAYLEN(pnSeed6_test));
        convertSeeds(vFixedSeeds, pnSeed, ARRAYLEN(pnSeed), nDefaultPort);

        //nLastPOWBlock = 0x7fffffff;
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
        strNetworkID = "regtest";
        pchMessageStart[0] = 0xa9;
        pchMessageStart[1] = 0x12;
        pchMessageStart[2] = 0x8f;
        pchMessageStart[3] = 0x19;
        bnProofOfWorkLimit = CBigNum(~uint256(0) >> 1);
        genesis.nTime    = 1585351941; //Friday, 27-Mar-20 23:32:21 UTC
        genesis.nBits  = bnProofOfWorkLimit.GetCompact();
        hashGenesisBlock = genesis.GetHash();
        nDefaultPort = 18999;
        strDataDir = "regtest";
        genesis.nNonce = 408624;
        hashGenesisBlock = genesis.GetHash();
      //assert(hashGenesisBlock == uint256("0x00000772bc915ff9b29c0ff560ae6069911c769759245c051c7ed1c6c9dd6b46"));
        assert(genesis.hashMerkleRoot == uint256("0x374680c66bac5575213c24a00963da96bef9f68aa0b7149bcd6f504cd5d6180e"));

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

const CChainParams &TestNetParams() {
    return testNetParams;
}

const CChainParams &MainNetParams() {
    return mainParams;
}

void SelectParams(CChainParams::Network network)
{
    switch (network)
    {
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
    };
};

bool SelectParamsFromCommandLine()
{
    bool fRegTest = GetBoolArg("-regtest", false);
    bool fTestNet = GetBoolArg("-testnet", false);

    if (fTestNet && fRegTest)
    {
        return false;
    };

    if (fRegTest)
    {
        SelectParams(CChainParams::REGTEST);
    } else
    if (fTestNet)
    {
        SelectParams(CChainParams::TESTNET);
    } else
    {
        SelectParams(CChainParams::MAIN);
    };

    return true;
}
