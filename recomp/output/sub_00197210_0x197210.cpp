#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00197210
// Address: 0x197210 - 0x197640
void sub_00197210_0x197210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197210_0x197210");
#endif

    switch (ctx->pc) {
        case 0x197210u: goto label_197210;
        case 0x197214u: goto label_197214;
        case 0x197218u: goto label_197218;
        case 0x19721cu: goto label_19721c;
        case 0x197220u: goto label_197220;
        case 0x197224u: goto label_197224;
        case 0x197228u: goto label_197228;
        case 0x19722cu: goto label_19722c;
        case 0x197230u: goto label_197230;
        case 0x197234u: goto label_197234;
        case 0x197238u: goto label_197238;
        case 0x19723cu: goto label_19723c;
        case 0x197240u: goto label_197240;
        case 0x197244u: goto label_197244;
        case 0x197248u: goto label_197248;
        case 0x19724cu: goto label_19724c;
        case 0x197250u: goto label_197250;
        case 0x197254u: goto label_197254;
        case 0x197258u: goto label_197258;
        case 0x19725cu: goto label_19725c;
        case 0x197260u: goto label_197260;
        case 0x197264u: goto label_197264;
        case 0x197268u: goto label_197268;
        case 0x19726cu: goto label_19726c;
        case 0x197270u: goto label_197270;
        case 0x197274u: goto label_197274;
        case 0x197278u: goto label_197278;
        case 0x19727cu: goto label_19727c;
        case 0x197280u: goto label_197280;
        case 0x197284u: goto label_197284;
        case 0x197288u: goto label_197288;
        case 0x19728cu: goto label_19728c;
        case 0x197290u: goto label_197290;
        case 0x197294u: goto label_197294;
        case 0x197298u: goto label_197298;
        case 0x19729cu: goto label_19729c;
        case 0x1972a0u: goto label_1972a0;
        case 0x1972a4u: goto label_1972a4;
        case 0x1972a8u: goto label_1972a8;
        case 0x1972acu: goto label_1972ac;
        case 0x1972b0u: goto label_1972b0;
        case 0x1972b4u: goto label_1972b4;
        case 0x1972b8u: goto label_1972b8;
        case 0x1972bcu: goto label_1972bc;
        case 0x1972c0u: goto label_1972c0;
        case 0x1972c4u: goto label_1972c4;
        case 0x1972c8u: goto label_1972c8;
        case 0x1972ccu: goto label_1972cc;
        case 0x1972d0u: goto label_1972d0;
        case 0x1972d4u: goto label_1972d4;
        case 0x1972d8u: goto label_1972d8;
        case 0x1972dcu: goto label_1972dc;
        case 0x1972e0u: goto label_1972e0;
        case 0x1972e4u: goto label_1972e4;
        case 0x1972e8u: goto label_1972e8;
        case 0x1972ecu: goto label_1972ec;
        case 0x1972f0u: goto label_1972f0;
        case 0x1972f4u: goto label_1972f4;
        case 0x1972f8u: goto label_1972f8;
        case 0x1972fcu: goto label_1972fc;
        case 0x197300u: goto label_197300;
        case 0x197304u: goto label_197304;
        case 0x197308u: goto label_197308;
        case 0x19730cu: goto label_19730c;
        case 0x197310u: goto label_197310;
        case 0x197314u: goto label_197314;
        case 0x197318u: goto label_197318;
        case 0x19731cu: goto label_19731c;
        case 0x197320u: goto label_197320;
        case 0x197324u: goto label_197324;
        case 0x197328u: goto label_197328;
        case 0x19732cu: goto label_19732c;
        case 0x197330u: goto label_197330;
        case 0x197334u: goto label_197334;
        case 0x197338u: goto label_197338;
        case 0x19733cu: goto label_19733c;
        case 0x197340u: goto label_197340;
        case 0x197344u: goto label_197344;
        case 0x197348u: goto label_197348;
        case 0x19734cu: goto label_19734c;
        case 0x197350u: goto label_197350;
        case 0x197354u: goto label_197354;
        case 0x197358u: goto label_197358;
        case 0x19735cu: goto label_19735c;
        case 0x197360u: goto label_197360;
        case 0x197364u: goto label_197364;
        case 0x197368u: goto label_197368;
        case 0x19736cu: goto label_19736c;
        case 0x197370u: goto label_197370;
        case 0x197374u: goto label_197374;
        case 0x197378u: goto label_197378;
        case 0x19737cu: goto label_19737c;
        case 0x197380u: goto label_197380;
        case 0x197384u: goto label_197384;
        case 0x197388u: goto label_197388;
        case 0x19738cu: goto label_19738c;
        case 0x197390u: goto label_197390;
        case 0x197394u: goto label_197394;
        case 0x197398u: goto label_197398;
        case 0x19739cu: goto label_19739c;
        case 0x1973a0u: goto label_1973a0;
        case 0x1973a4u: goto label_1973a4;
        case 0x1973a8u: goto label_1973a8;
        case 0x1973acu: goto label_1973ac;
        case 0x1973b0u: goto label_1973b0;
        case 0x1973b4u: goto label_1973b4;
        case 0x1973b8u: goto label_1973b8;
        case 0x1973bcu: goto label_1973bc;
        case 0x1973c0u: goto label_1973c0;
        case 0x1973c4u: goto label_1973c4;
        case 0x1973c8u: goto label_1973c8;
        case 0x1973ccu: goto label_1973cc;
        case 0x1973d0u: goto label_1973d0;
        case 0x1973d4u: goto label_1973d4;
        case 0x1973d8u: goto label_1973d8;
        case 0x1973dcu: goto label_1973dc;
        case 0x1973e0u: goto label_1973e0;
        case 0x1973e4u: goto label_1973e4;
        case 0x1973e8u: goto label_1973e8;
        case 0x1973ecu: goto label_1973ec;
        case 0x1973f0u: goto label_1973f0;
        case 0x1973f4u: goto label_1973f4;
        case 0x1973f8u: goto label_1973f8;
        case 0x1973fcu: goto label_1973fc;
        case 0x197400u: goto label_197400;
        case 0x197404u: goto label_197404;
        case 0x197408u: goto label_197408;
        case 0x19740cu: goto label_19740c;
        case 0x197410u: goto label_197410;
        case 0x197414u: goto label_197414;
        case 0x197418u: goto label_197418;
        case 0x19741cu: goto label_19741c;
        case 0x197420u: goto label_197420;
        case 0x197424u: goto label_197424;
        case 0x197428u: goto label_197428;
        case 0x19742cu: goto label_19742c;
        case 0x197430u: goto label_197430;
        case 0x197434u: goto label_197434;
        case 0x197438u: goto label_197438;
        case 0x19743cu: goto label_19743c;
        case 0x197440u: goto label_197440;
        case 0x197444u: goto label_197444;
        case 0x197448u: goto label_197448;
        case 0x19744cu: goto label_19744c;
        case 0x197450u: goto label_197450;
        case 0x197454u: goto label_197454;
        case 0x197458u: goto label_197458;
        case 0x19745cu: goto label_19745c;
        case 0x197460u: goto label_197460;
        case 0x197464u: goto label_197464;
        case 0x197468u: goto label_197468;
        case 0x19746cu: goto label_19746c;
        case 0x197470u: goto label_197470;
        case 0x197474u: goto label_197474;
        case 0x197478u: goto label_197478;
        case 0x19747cu: goto label_19747c;
        case 0x197480u: goto label_197480;
        case 0x197484u: goto label_197484;
        case 0x197488u: goto label_197488;
        case 0x19748cu: goto label_19748c;
        case 0x197490u: goto label_197490;
        case 0x197494u: goto label_197494;
        case 0x197498u: goto label_197498;
        case 0x19749cu: goto label_19749c;
        case 0x1974a0u: goto label_1974a0;
        case 0x1974a4u: goto label_1974a4;
        case 0x1974a8u: goto label_1974a8;
        case 0x1974acu: goto label_1974ac;
        case 0x1974b0u: goto label_1974b0;
        case 0x1974b4u: goto label_1974b4;
        case 0x1974b8u: goto label_1974b8;
        case 0x1974bcu: goto label_1974bc;
        case 0x1974c0u: goto label_1974c0;
        case 0x1974c4u: goto label_1974c4;
        case 0x1974c8u: goto label_1974c8;
        case 0x1974ccu: goto label_1974cc;
        case 0x1974d0u: goto label_1974d0;
        case 0x1974d4u: goto label_1974d4;
        case 0x1974d8u: goto label_1974d8;
        case 0x1974dcu: goto label_1974dc;
        case 0x1974e0u: goto label_1974e0;
        case 0x1974e4u: goto label_1974e4;
        case 0x1974e8u: goto label_1974e8;
        case 0x1974ecu: goto label_1974ec;
        case 0x1974f0u: goto label_1974f0;
        case 0x1974f4u: goto label_1974f4;
        case 0x1974f8u: goto label_1974f8;
        case 0x1974fcu: goto label_1974fc;
        case 0x197500u: goto label_197500;
        case 0x197504u: goto label_197504;
        case 0x197508u: goto label_197508;
        case 0x19750cu: goto label_19750c;
        case 0x197510u: goto label_197510;
        case 0x197514u: goto label_197514;
        case 0x197518u: goto label_197518;
        case 0x19751cu: goto label_19751c;
        case 0x197520u: goto label_197520;
        case 0x197524u: goto label_197524;
        case 0x197528u: goto label_197528;
        case 0x19752cu: goto label_19752c;
        case 0x197530u: goto label_197530;
        case 0x197534u: goto label_197534;
        case 0x197538u: goto label_197538;
        case 0x19753cu: goto label_19753c;
        case 0x197540u: goto label_197540;
        case 0x197544u: goto label_197544;
        case 0x197548u: goto label_197548;
        case 0x19754cu: goto label_19754c;
        case 0x197550u: goto label_197550;
        case 0x197554u: goto label_197554;
        case 0x197558u: goto label_197558;
        case 0x19755cu: goto label_19755c;
        case 0x197560u: goto label_197560;
        case 0x197564u: goto label_197564;
        case 0x197568u: goto label_197568;
        case 0x19756cu: goto label_19756c;
        case 0x197570u: goto label_197570;
        case 0x197574u: goto label_197574;
        case 0x197578u: goto label_197578;
        case 0x19757cu: goto label_19757c;
        case 0x197580u: goto label_197580;
        case 0x197584u: goto label_197584;
        case 0x197588u: goto label_197588;
        case 0x19758cu: goto label_19758c;
        case 0x197590u: goto label_197590;
        case 0x197594u: goto label_197594;
        case 0x197598u: goto label_197598;
        case 0x19759cu: goto label_19759c;
        case 0x1975a0u: goto label_1975a0;
        case 0x1975a4u: goto label_1975a4;
        case 0x1975a8u: goto label_1975a8;
        case 0x1975acu: goto label_1975ac;
        case 0x1975b0u: goto label_1975b0;
        case 0x1975b4u: goto label_1975b4;
        case 0x1975b8u: goto label_1975b8;
        case 0x1975bcu: goto label_1975bc;
        case 0x1975c0u: goto label_1975c0;
        case 0x1975c4u: goto label_1975c4;
        case 0x1975c8u: goto label_1975c8;
        case 0x1975ccu: goto label_1975cc;
        case 0x1975d0u: goto label_1975d0;
        case 0x1975d4u: goto label_1975d4;
        case 0x1975d8u: goto label_1975d8;
        case 0x1975dcu: goto label_1975dc;
        case 0x1975e0u: goto label_1975e0;
        case 0x1975e4u: goto label_1975e4;
        case 0x1975e8u: goto label_1975e8;
        case 0x1975ecu: goto label_1975ec;
        case 0x1975f0u: goto label_1975f0;
        case 0x1975f4u: goto label_1975f4;
        case 0x1975f8u: goto label_1975f8;
        case 0x1975fcu: goto label_1975fc;
        case 0x197600u: goto label_197600;
        case 0x197604u: goto label_197604;
        case 0x197608u: goto label_197608;
        case 0x19760cu: goto label_19760c;
        case 0x197610u: goto label_197610;
        case 0x197614u: goto label_197614;
        case 0x197618u: goto label_197618;
        case 0x19761cu: goto label_19761c;
        case 0x197620u: goto label_197620;
        case 0x197624u: goto label_197624;
        case 0x197628u: goto label_197628;
        case 0x19762cu: goto label_19762c;
        case 0x197630u: goto label_197630;
        case 0x197634u: goto label_197634;
        case 0x197638u: goto label_197638;
        case 0x19763cu: goto label_19763c;
        default: break;
    }

    ctx->pc = 0x197210u;

label_197210:
    // 0x197210: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x197210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_197214:
    // 0x197214: 0x3c06bfff  lui         $a2, 0xBFFF
    ctx->pc = 0x197214u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49151 << 16));
label_197218:
    // 0x197218: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x197218u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_19721c:
    // 0x19721c: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x19721cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
label_197220:
    // 0x197220: 0x34c601ff  ori         $a2, $a2, 0x1FF
    ctx->pc = 0x197220u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)511);
label_197224:
    // 0x197224: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x197224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_197228:
    // 0x197228: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x197228u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_19722c:
    // 0x19722c: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x19722cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
label_197230:
    // 0x197230: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x197230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_197234:
    // 0x197234: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x197234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197238:
    // 0x197238: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x197238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_19723c:
    // 0x19723c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19723cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_197240:
    // 0x197240: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x197240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_197244:
    // 0x197244: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x197244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_197248:
    // 0x197248: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x197248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19724c:
    // 0x19724c: 0xdc621020  ld          $v0, 0x1020($v1)
    ctx->pc = 0x19724cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4128)));
label_197250:
    // 0x197250: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x197250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_197254:
    // 0x197254: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x197254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_197258:
    // 0x197258: 0xc061a4c  jal         func_186930
label_19725c:
    if (ctx->pc == 0x19725Cu) {
        ctx->pc = 0x19725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197258u;
        // 0x19725c: 0xfc621020  sd          $v0, 0x1020($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 4128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197260u;
        goto label_197260;
    }
    ctx->pc = 0x197258u;
    SET_GPR_U32(ctx, 31, 0x197260u);
    ctx->pc = 0x19725Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197258u;
    // 0x19725c: 0xfc621020  sd          $v0, 0x1020($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 4128), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186930u, 0x197258u, 0x197260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197260u;
label_197260:
    // 0x197260: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x197260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_197264:
    // 0x197264: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x197264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_197268:
    // 0x197268: 0x14700006  bne         $v1, $s0, . + 4 + (0x6 << 2)
label_19726c:
    if (ctx->pc == 0x19726Cu) {
        ctx->pc = 0x197270u;
        goto label_197270;
    }
    ctx->pc = 0x197268u;
    {
        const bool branch_taken_0x197268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x197268) {
            ctx->pc = 0x197284u;
            goto label_197284;
        }
    }
    ctx->pc = 0x197270u;
label_197270:
    // 0x197270: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x197270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_197274:
    // 0x197274: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x197274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_197278:
    // 0x197278: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x197278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_19727c:
    // 0x19727c: 0x1000000a  b           . + 4 + (0xA << 2)
label_197280:
    if (ctx->pc == 0x197280u) {
        ctx->pc = 0x197280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19727Cu;
        // 0x197280: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x197284u;
        goto label_197284;
    }
    ctx->pc = 0x19727Cu;
    {
        const bool branch_taken_0x19727c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19727Cu;
        // 0x197280: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19727c) {
            ctx->pc = 0x1972A8u;
            goto label_1972a8;
        }
    }
    ctx->pc = 0x197284u;
label_197284:
    // 0x197284: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_197288:
    if (ctx->pc == 0x197288u) {
        ctx->pc = 0x197288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197284u;
        // 0x197288: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19728Cu;
        goto label_19728c;
    }
    ctx->pc = 0x197284u;
    {
        const bool branch_taken_0x197284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x197288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197284u;
        // 0x197288: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197284) {
            ctx->pc = 0x1972A0u;
            goto label_1972a0;
        }
    }
    ctx->pc = 0x19728Cu;
label_19728c:
    // 0x19728c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19728cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_197290:
    // 0x197290: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_197294:
    if (ctx->pc == 0x197294u) {
        ctx->pc = 0x197294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197290u;
        // 0x197294: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197298u;
        goto label_197298;
    }
    ctx->pc = 0x197290u;
    {
        const bool branch_taken_0x197290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x197294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197290u;
        // 0x197294: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197290) {
            ctx->pc = 0x1972A0u;
            goto label_1972a0;
        }
    }
    ctx->pc = 0x197298u;
label_197298:
    // 0x197298: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_19729c:
    if (ctx->pc == 0x19729Cu) {
        ctx->pc = 0x19729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197298u;
        // 0x19729c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1972A0u;
        goto label_1972a0;
    }
    ctx->pc = 0x197298u;
    {
        const bool branch_taken_0x197298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197298u;
        // 0x19729c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197298) {
            ctx->pc = 0x1972A8u;
            goto label_1972a8;
        }
    }
    ctx->pc = 0x1972A0u;
label_1972a0:
    // 0x1972a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1972a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1972a4:
    // 0x1972a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1972a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1972a8:
    // 0x1972a8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1972ac:
    if (ctx->pc == 0x1972ACu) {
        ctx->pc = 0x1972ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972A8u;
        // 0x1972ac: 0x26300030  addiu       $s0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1972B0u;
        goto label_1972b0;
    }
    ctx->pc = 0x1972A8u;
    {
        const bool branch_taken_0x1972a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1972ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972A8u;
        // 0x1972ac: 0x26300030  addiu       $s0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1972a8) {
            ctx->pc = 0x1972E4u;
            goto label_1972e4;
        }
    }
    ctx->pc = 0x1972B0u;
label_1972b0:
    // 0x1972b0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1972b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1972b4:
    // 0x1972b4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1972b8:
    if (ctx->pc == 0x1972B8u) {
        ctx->pc = 0x1972B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972B4u;
        // 0x1972b8: 0x38420005  xori        $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1972BCu;
        goto label_1972bc;
    }
    ctx->pc = 0x1972B4u;
    {
        const bool branch_taken_0x1972b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1972B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972B4u;
        // 0x1972b8: 0x38420005  xori        $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1972b4) {
            ctx->pc = 0x1972D0u;
            goto label_1972d0;
        }
    }
    ctx->pc = 0x1972BCu;
label_1972bc:
    // 0x1972bc: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1972bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1972c0:
    // 0x1972c0: 0xc06fb64  jal         func_1BED90
label_1972c4:
    if (ctx->pc == 0x1972C4u) {
        ctx->pc = 0x1972C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972C0u;
        // 0x1972c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1972C8u;
        goto label_1972c8;
    }
    ctx->pc = 0x1972C0u;
    SET_GPR_U32(ctx, 31, 0x1972C8u);
    ctx->pc = 0x1972C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1972C0u;
    // 0x1972c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x1972C0u, 0x1972C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1972C8u;
label_1972c8:
    // 0x1972c8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1972cc:
    if (ctx->pc == 0x1972CCu) {
        ctx->pc = 0x1972CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972C8u;
        // 0x1972cc: 0x26220050  addiu       $v0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1972D0u;
        goto label_1972d0;
    }
    ctx->pc = 0x1972C8u;
    {
        const bool branch_taken_0x1972c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1972CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972C8u;
        // 0x1972cc: 0x26220050  addiu       $v0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1972c8) {
            ctx->pc = 0x1972E8u;
            goto label_1972e8;
        }
    }
    ctx->pc = 0x1972D0u;
label_1972d0:
    // 0x1972d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1972d4:
    if (ctx->pc == 0x1972D4u) {
        ctx->pc = 0x1972D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972D0u;
        // 0x1972d4: 0x26220050  addiu       $v0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1972D8u;
        goto label_1972d8;
    }
    ctx->pc = 0x1972D0u;
    {
        const bool branch_taken_0x1972d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1972D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972D0u;
        // 0x1972d4: 0x26220050  addiu       $v0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1972d0) {
            ctx->pc = 0x1972E8u;
            goto label_1972e8;
        }
    }
    ctx->pc = 0x1972D8u;
label_1972d8:
    // 0x1972d8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1972d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1972dc:
    // 0x1972dc: 0xc06fb1e  jal         func_1BEC78
label_1972e0:
    if (ctx->pc == 0x1972E0u) {
        ctx->pc = 0x1972E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972DCu;
        // 0x1972e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1972E4u;
        goto label_1972e4;
    }
    ctx->pc = 0x1972DCu;
    SET_GPR_U32(ctx, 31, 0x1972E4u);
    ctx->pc = 0x1972E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1972DCu;
    // 0x1972e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEC78u, 0x1972DCu, 0x1972E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1972E4u;
label_1972e4:
    // 0x1972e4: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x1972e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1972e8:
    // 0x1972e8: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1972e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1972ec:
    // 0x1972ec: 0x14800020  bnez        $a0, . + 4 + (0x20 << 2)
label_1972f0:
    if (ctx->pc == 0x1972F0u) {
        ctx->pc = 0x1972F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972ECu;
        // 0x1972f0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1972F4u;
        goto label_1972f4;
    }
    ctx->pc = 0x1972ECu;
    {
        const bool branch_taken_0x1972ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1972F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972ECu;
        // 0x1972f0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1972ec) {
            ctx->pc = 0x197370u;
            goto label_197370;
        }
    }
    ctx->pc = 0x1972F4u;
label_1972f4:
    // 0x1972f4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1972f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1972f8:
    // 0x1972f8: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1972f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1972fc:
    // 0x1972fc: 0x8ca21004  lw          $v0, 0x1004($a1)
    ctx->pc = 0x1972fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4100)));
label_197300:
    // 0x197300: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
label_197304:
    if (ctx->pc == 0x197304u) {
        ctx->pc = 0x197308u;
        goto label_197308;
    }
    ctx->pc = 0x197300u;
    {
        const bool branch_taken_0x197300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x197300) {
            ctx->pc = 0x197370u;
            goto label_197370;
        }
    }
    ctx->pc = 0x197308u;
label_197308:
    // 0x197308: 0x8ca21050  lw          $v0, 0x1050($a1)
    ctx->pc = 0x197308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4176)));
label_19730c:
    // 0x19730c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_197310:
    if (ctx->pc == 0x197310u) {
        ctx->pc = 0x197314u;
        goto label_197314;
    }
    ctx->pc = 0x19730Cu;
    {
        const bool branch_taken_0x19730c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19730c) {
            ctx->pc = 0x197370u;
            goto label_197370;
        }
    }
    ctx->pc = 0x197314u;
label_197314:
    // 0x197314: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_197318:
    if (ctx->pc == 0x197318u) {
        ctx->pc = 0x197318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197314u;
        // 0x197318: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19731Cu;
        goto label_19731c;
    }
    ctx->pc = 0x197314u;
    {
        const bool branch_taken_0x197314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x197318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197314u;
        // 0x197318: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197314) {
            ctx->pc = 0x197330u;
            goto label_197330;
        }
    }
    ctx->pc = 0x19731Cu;
label_19731c:
    // 0x19731c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19731cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_197320:
    // 0x197320: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_197324:
    if (ctx->pc == 0x197324u) {
        ctx->pc = 0x197324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197320u;
        // 0x197324: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197328u;
        goto label_197328;
    }
    ctx->pc = 0x197320u;
    {
        const bool branch_taken_0x197320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x197324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197320u;
        // 0x197324: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197320) {
            ctx->pc = 0x197330u;
            goto label_197330;
        }
    }
    ctx->pc = 0x197328u;
label_197328:
    // 0x197328: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
label_19732c:
    if (ctx->pc == 0x19732Cu) {
        ctx->pc = 0x197330u;
        goto label_197330;
    }
    ctx->pc = 0x197328u;
    {
        const bool branch_taken_0x197328 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x197328) {
            ctx->pc = 0x197334u;
            goto label_197334;
        }
    }
    ctx->pc = 0x197330u;
label_197330:
    // 0x197330: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x197330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197334:
    // 0x197334: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_197338:
    if (ctx->pc == 0x197338u) {
        ctx->pc = 0x19733Cu;
        goto label_19733c;
    }
    ctx->pc = 0x197334u;
    {
        const bool branch_taken_0x197334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x197334) {
            ctx->pc = 0x197370u;
            goto label_197370;
        }
    }
    ctx->pc = 0x19733Cu;
label_19733c:
    // 0x19733c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x19733cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_197340:
    // 0x197340: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_197344:
    if (ctx->pc == 0x197344u) {
        ctx->pc = 0x197344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197340u;
        // 0x197344: 0x38420005  xori        $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        ctx->pc = 0x197348u;
        goto label_197348;
    }
    ctx->pc = 0x197340u;
    {
        const bool branch_taken_0x197340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197340u;
        // 0x197344: 0x38420005  xori        $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x197340) {
            ctx->pc = 0x19735Cu;
            goto label_19735c;
        }
    }
    ctx->pc = 0x197348u;
label_197348:
    // 0x197348: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x197348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_19734c:
    // 0x19734c: 0xc06fb64  jal         func_1BED90
label_197350:
    if (ctx->pc == 0x197350u) {
        ctx->pc = 0x197350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19734Cu;
        // 0x197350: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197354u;
        goto label_197354;
    }
    ctx->pc = 0x19734Cu;
    SET_GPR_U32(ctx, 31, 0x197354u);
    ctx->pc = 0x197350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19734Cu;
    // 0x197350: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x19734Cu, 0x197354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197354u;
label_197354:
    // 0x197354: 0x10000006  b           . + 4 + (0x6 << 2)
label_197358:
    if (ctx->pc == 0x197358u) {
        ctx->pc = 0x19735Cu;
        goto label_19735c;
    }
    ctx->pc = 0x197354u;
    {
        const bool branch_taken_0x197354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197354) {
            ctx->pc = 0x197370u;
            goto label_197370;
        }
    }
    ctx->pc = 0x19735Cu;
label_19735c:
    // 0x19735c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_197360:
    if (ctx->pc == 0x197360u) {
        ctx->pc = 0x197364u;
        goto label_197364;
    }
    ctx->pc = 0x19735Cu;
    {
        const bool branch_taken_0x19735c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19735c) {
            ctx->pc = 0x197370u;
            goto label_197370;
        }
    }
    ctx->pc = 0x197364u;
label_197364:
    // 0x197364: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x197364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_197368:
    // 0x197368: 0xc06fb1e  jal         func_1BEC78
label_19736c:
    if (ctx->pc == 0x19736Cu) {
        ctx->pc = 0x19736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197368u;
        // 0x19736c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197370u;
        goto label_197370;
    }
    ctx->pc = 0x197368u;
    SET_GPR_U32(ctx, 31, 0x197370u);
    ctx->pc = 0x19736Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197368u;
    // 0x19736c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEC78u, 0x197368u, 0x197370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197370u;
label_197370:
    // 0x197370: 0xc061a12  jal         func_186848
label_197374:
    if (ctx->pc == 0x197374u) {
        ctx->pc = 0x197374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197370u;
        // 0x197374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197378u;
        goto label_197378;
    }
    ctx->pc = 0x197370u;
    SET_GPR_U32(ctx, 31, 0x197378u);
    ctx->pc = 0x197374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197370u;
    // 0x197374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x197370u, 0x197378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197378u;
label_197378:
    // 0x197378: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x197378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_19737c:
    // 0x19737c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x19737cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_197380:
    // 0x197380: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x197380u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_197384:
    // 0x197384: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x197384u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_197388:
    // 0x197388: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x197388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_19738c:
    // 0x19738c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x19738cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_197390:
    // 0x197390: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x197390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_197394:
    // 0x197394: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x197394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_197398:
    // 0x197398: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x197398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_19739c:
    // 0x19739c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19739cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1973a0:
    // 0x1973a0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1973a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1973a4:
    // 0x1973a4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1973a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1973a8:
    // 0x1973a8: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1973a8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1973ac:
    // 0x1973ac: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1973acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1973b0:
    // 0x1973b0: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1973b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1973b4:
    // 0x1973b4: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1973b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1973b8:
    // 0x1973b8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1973b8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1973bc:
    // 0x1973bc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1973bcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_1973c0:
    // 0x1973c0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1973c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_1973c4:
    // 0x1973c4: 0x46000004  c1          0x4
    ctx->pc = 0x1973c4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_1973c8:
    // 0x1973c8: 0xc061a12  jal         func_186848
label_1973cc:
    if (ctx->pc == 0x1973CCu) {
        ctx->pc = 0x1973CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973C8u;
        // 0x1973cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1973D0u;
        goto label_1973d0;
    }
    ctx->pc = 0x1973C8u;
    SET_GPR_U32(ctx, 31, 0x1973D0u);
    ctx->pc = 0x1973CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1973C8u;
    // 0x1973cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1973C8u, 0x1973D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1973D0u;
label_1973d0:
    // 0x1973d0: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x1973d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_1973d4:
    // 0x1973d4: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1973d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1973d8:
    // 0x1973d8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1973d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1973dc:
    // 0x1973dc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1973dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1973e0:
    // 0x1973e0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1973e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_1973e4:
    // 0x1973e4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1973e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1973e8:
    // 0x1973e8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1973e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1973ec:
    // 0x1973ec: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1973ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1973f0:
    // 0x1973f0: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x1973f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1973f4:
    // 0x1973f4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1973f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1973f8:
    // 0x1973f8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1973f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1973fc:
    // 0x1973fc: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1973fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_197400:
    // 0x197400: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x197400u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_197404:
    // 0x197404: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x197404u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_197408:
    // 0x197408: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x197408u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_19740c:
    // 0x19740c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x19740cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_197410:
    // 0x197410: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x197410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_197414:
    // 0x197414: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x197414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_197418:
    // 0x197418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x197418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19741c:
    // 0x19741c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x19741cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_197420:
    // 0x197420: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x197420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_197424:
    // 0x197424: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x197424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_197428:
    // 0x197428: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x197428u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_19742c:
    // 0x19742c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x19742cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_197430:
    // 0x197430: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x197430u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_197434:
    // 0x197434: 0xc061a12  jal         func_186848
label_197438:
    if (ctx->pc == 0x197438u) {
        ctx->pc = 0x197438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197434u;
        // 0x197438: 0xe7a2002c  swc1        $f2, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19743Cu;
        goto label_19743c;
    }
    ctx->pc = 0x197434u;
    SET_GPR_U32(ctx, 31, 0x19743Cu);
    ctx->pc = 0x197438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197434u;
    // 0x197438: 0xe7a2002c  swc1        $f2, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x197434u, 0x19743Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19743Cu;
label_19743c:
    // 0x19743c: 0x8c430338  lw          $v1, 0x338($v0)
    ctx->pc = 0x19743cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 824)));
label_197440:
    // 0x197440: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_197444:
    if (ctx->pc == 0x197444u) {
        ctx->pc = 0x197444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197440u;
        // 0x197444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197448u;
        goto label_197448;
    }
    ctx->pc = 0x197440u;
    {
        const bool branch_taken_0x197440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x197444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197440u;
        // 0x197444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197440) {
            ctx->pc = 0x1974B8u;
            goto label_1974b8;
        }
    }
    ctx->pc = 0x197448u;
label_197448:
    // 0x197448: 0xc061a12  jal         func_186848
label_19744c:
    if (ctx->pc == 0x19744Cu) {
        ctx->pc = 0x19744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197448u;
        // 0x19744c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197450u;
        goto label_197450;
    }
    ctx->pc = 0x197448u;
    SET_GPR_U32(ctx, 31, 0x197450u);
    ctx->pc = 0x19744Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197448u;
    // 0x19744c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x197448u, 0x197450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197450u;
label_197450:
    // 0x197450: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197454:
    // 0x197454: 0x8e030394  lw          $v1, 0x394($s0)
    ctx->pc = 0x197454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 916)));
label_197458:
    // 0x197458: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x197458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_19745c:
    // 0x19745c: 0x40f809  jalr        $v0
label_197460:
    if (ctx->pc == 0x197460u) {
        ctx->pc = 0x197460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19745Cu;
        // 0x197460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197464u;
        goto label_197464;
    }
    ctx->pc = 0x19745Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197464u);
        ctx->pc = 0x197460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19745Cu;
        // 0x197460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19745Cu, 0x197464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197464u;
label_197464:
    // 0x197464: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_197468:
    if (ctx->pc == 0x197468u) {
        ctx->pc = 0x197468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197464u;
        // 0x197468: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19746Cu;
        goto label_19746c;
    }
    ctx->pc = 0x197464u;
    {
        const bool branch_taken_0x197464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197464u;
        // 0x197468: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197464) {
            ctx->pc = 0x19747Cu;
            goto label_19747c;
        }
    }
    ctx->pc = 0x19746Cu;
label_19746c:
    // 0x19746c: 0x8e0500e4  lw          $a1, 0xE4($s0)
    ctx->pc = 0x19746cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_197470:
    // 0x197470: 0xc0f62ca  jal         func_3D8B28
label_197474:
    if (ctx->pc == 0x197474u) {
        ctx->pc = 0x197474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197470u;
        // 0x197474: 0x2484f140  addiu       $a0, $a0, -0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197478u;
        goto label_197478;
    }
    ctx->pc = 0x197470u;
    SET_GPR_U32(ctx, 31, 0x197478u);
    ctx->pc = 0x197474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197470u;
    // 0x197474: 0x2484f140  addiu       $a0, $a0, -0xEC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8B28u, 0x197470u, 0x197478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197478u;
label_197478:
    // 0x197478: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x197478u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19747c:
    // 0x19747c: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
label_197480:
    if (ctx->pc == 0x197480u) {
        ctx->pc = 0x197484u;
        goto label_197484;
    }
    ctx->pc = 0x19747Cu;
    {
        const bool branch_taken_0x19747c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x19747c) {
            ctx->pc = 0x1974C0u;
            goto label_1974c0;
        }
    }
    ctx->pc = 0x197484u;
label_197484:
    // 0x197484: 0xc061a12  jal         func_186848
label_197488:
    if (ctx->pc == 0x197488u) {
        ctx->pc = 0x197488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197484u;
        // 0x197488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19748Cu;
        goto label_19748c;
    }
    ctx->pc = 0x197484u;
    SET_GPR_U32(ctx, 31, 0x19748Cu);
    ctx->pc = 0x197488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197484u;
    // 0x197488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x197484u, 0x19748Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19748Cu;
label_19748c:
    // 0x19748c: 0x244300d0  addiu       $v1, $v0, 0xD0
    ctx->pc = 0x19748cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_197490:
    // 0x197490: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x197490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_197494:
    // 0x197494: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x197494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_197498:
    // 0x197498: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_19749c:
    if (ctx->pc == 0x19749Cu) {
        ctx->pc = 0x19749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197498u;
        // 0x19749c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1974A0u;
        goto label_1974a0;
    }
    ctx->pc = 0x197498u;
    {
        const bool branch_taken_0x197498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197498u;
        // 0x19749c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197498) {
            ctx->pc = 0x1974A4u;
            goto label_1974a4;
        }
    }
    ctx->pc = 0x1974A0u;
label_1974a0:
    // 0x1974a0: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x1974a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1974a4:
    // 0x1974a4: 0xc061a12  jal         func_186848
label_1974a8:
    if (ctx->pc == 0x1974A8u) {
        ctx->pc = 0x1974A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974A4u;
        // 0x1974a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1974ACu;
        goto label_1974ac;
    }
    ctx->pc = 0x1974A4u;
    SET_GPR_U32(ctx, 31, 0x1974ACu);
    ctx->pc = 0x1974A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1974A4u;
    // 0x1974a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1974A4u, 0x1974ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1974ACu;
label_1974ac:
    // 0x1974ac: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1974acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1974b0:
    // 0x1974b0: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
label_1974b4:
    if (ctx->pc == 0x1974B4u) {
        ctx->pc = 0x1974B8u;
        goto label_1974b8;
    }
    ctx->pc = 0x1974B0u;
    {
        const bool branch_taken_0x1974b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1974b0) {
            ctx->pc = 0x1974C0u;
            goto label_1974c0;
        }
    }
    ctx->pc = 0x1974B8u;
label_1974b8:
    // 0x1974b8: 0xc065fa0  jal         func_197E80
label_1974bc:
    if (ctx->pc == 0x1974BCu) {
        ctx->pc = 0x1974BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974B8u;
        // 0x1974bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1974C0u;
        goto label_1974c0;
    }
    ctx->pc = 0x1974B8u;
    SET_GPR_U32(ctx, 31, 0x1974C0u);
    ctx->pc = 0x1974BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1974B8u;
    // 0x1974bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197E80u, 0x1974B8u, 0x1974C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1974C0u;
label_1974c0:
    // 0x1974c0: 0xc061a1e  jal         func_186878
label_1974c4:
    if (ctx->pc == 0x1974C4u) {
        ctx->pc = 0x1974C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974C0u;
        // 0x1974c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1974C8u;
        goto label_1974c8;
    }
    ctx->pc = 0x1974C0u;
    SET_GPR_U32(ctx, 31, 0x1974C8u);
    ctx->pc = 0x1974C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1974C0u;
    // 0x1974c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1974C0u, 0x1974C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1974C8u;
label_1974c8:
    // 0x1974c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1974c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1974cc:
    // 0x1974cc: 0xc06cdea  jal         func_1B37A8
label_1974d0:
    if (ctx->pc == 0x1974D0u) {
        ctx->pc = 0x1974D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974CCu;
        // 0x1974d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1974D4u;
        goto label_1974d4;
    }
    ctx->pc = 0x1974CCu;
    SET_GPR_U32(ctx, 31, 0x1974D4u);
    ctx->pc = 0x1974D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1974CCu;
    // 0x1974d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B37A8u, 0x1974CCu, 0x1974D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1974D4u;
label_1974d4:
    // 0x1974d4: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1974d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1974d8:
    // 0x1974d8: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x1974d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1974dc:
    // 0x1974dc: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_1974e0:
    if (ctx->pc == 0x1974E0u) {
        ctx->pc = 0x1974E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974DCu;
        // 0x1974e0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1974E4u;
        goto label_1974e4;
    }
    ctx->pc = 0x1974DCu;
    {
        const bool branch_taken_0x1974dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1974E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974DCu;
        // 0x1974e0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1974dc) {
            ctx->pc = 0x197620u;
            goto label_197620;
        }
    }
    ctx->pc = 0x1974E4u;
label_1974e4:
    // 0x1974e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1974e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1974e8:
    // 0x1974e8: 0x2442fde0  addiu       $v0, $v0, -0x220
    ctx->pc = 0x1974e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966752));
label_1974ec:
    // 0x1974ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1974ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1974f0:
    // 0x1974f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1974f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1974f4:
    // 0x1974f4: 0x800008  jr          $a0
label_1974f8:
    if (ctx->pc == 0x1974F8u) {
        ctx->pc = 0x1974FCu;
        goto label_1974fc;
    }
    ctx->pc = 0x1974F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1974FCu: goto label_1974fc;
            case 0x19750Cu: goto label_19750c;
            case 0x19751Cu: goto label_19751c;
            case 0x19752Cu: goto label_19752c;
            case 0x197560u: goto label_197560;
            case 0x1975ACu: goto label_1975ac;
            case 0x197618u: goto label_197618;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1974F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1974FCu;
label_1974fc:
    // 0x1974fc: 0xc065d92  jal         func_197648
label_197500:
    if (ctx->pc == 0x197500u) {
        ctx->pc = 0x197500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974FCu;
        // 0x197500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197504u;
        goto label_197504;
    }
    ctx->pc = 0x1974FCu;
    SET_GPR_U32(ctx, 31, 0x197504u);
    ctx->pc = 0x197500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1974FCu;
    // 0x197500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197648u, 0x1974FCu, 0x197504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197504u;
label_197504:
    // 0x197504: 0x10000047  b           . + 4 + (0x47 << 2)
label_197508:
    if (ctx->pc == 0x197508u) {
        ctx->pc = 0x197508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197504u;
        // 0x197508: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19750Cu;
        goto label_19750c;
    }
    ctx->pc = 0x197504u;
    {
        const bool branch_taken_0x197504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197504u;
        // 0x197508: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197504) {
            ctx->pc = 0x197624u;
            goto label_197624;
        }
    }
    ctx->pc = 0x19750Cu;
label_19750c:
    // 0x19750c: 0xc065e38  jal         func_1978E0
label_197510:
    if (ctx->pc == 0x197510u) {
        ctx->pc = 0x197510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19750Cu;
        // 0x197510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197514u;
        goto label_197514;
    }
    ctx->pc = 0x19750Cu;
    SET_GPR_U32(ctx, 31, 0x197514u);
    ctx->pc = 0x197510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19750Cu;
    // 0x197510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1978E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1978E0u, 0x19750Cu, 0x197514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197514u;
label_197514:
    // 0x197514: 0x10000043  b           . + 4 + (0x43 << 2)
label_197518:
    if (ctx->pc == 0x197518u) {
        ctx->pc = 0x197518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197514u;
        // 0x197518: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19751Cu;
        goto label_19751c;
    }
    ctx->pc = 0x197514u;
    {
        const bool branch_taken_0x197514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197514u;
        // 0x197518: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197514) {
            ctx->pc = 0x197624u;
            goto label_197624;
        }
    }
    ctx->pc = 0x19751Cu;
label_19751c:
    // 0x19751c: 0xc065ec0  jal         func_197B00
label_197520:
    if (ctx->pc == 0x197520u) {
        ctx->pc = 0x197520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19751Cu;
        // 0x197520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197524u;
        goto label_197524;
    }
    ctx->pc = 0x19751Cu;
    SET_GPR_U32(ctx, 31, 0x197524u);
    ctx->pc = 0x197520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19751Cu;
    // 0x197520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197B00u, 0x19751Cu, 0x197524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197524u;
label_197524:
    // 0x197524: 0x1000003f  b           . + 4 + (0x3F << 2)
label_197528:
    if (ctx->pc == 0x197528u) {
        ctx->pc = 0x197528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197524u;
        // 0x197528: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19752Cu;
        goto label_19752c;
    }
    ctx->pc = 0x197524u;
    {
        const bool branch_taken_0x197524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197524u;
        // 0x197528: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197524) {
            ctx->pc = 0x197624u;
            goto label_197624;
        }
    }
    ctx->pc = 0x19752Cu;
label_19752c:
    // 0x19752c: 0xc061a12  jal         func_186848
label_197530:
    if (ctx->pc == 0x197530u) {
        ctx->pc = 0x197530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19752Cu;
        // 0x197530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197534u;
        goto label_197534;
    }
    ctx->pc = 0x19752Cu;
    SET_GPR_U32(ctx, 31, 0x197534u);
    ctx->pc = 0x197530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19752Cu;
    // 0x197530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19752Cu, 0x197534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197534u;
label_197534:
    // 0x197534: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x197534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_197538:
    // 0x197538: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19753c:
    // 0x19753c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19753cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_197540:
    // 0x197540: 0x40f809  jalr        $v0
label_197544:
    if (ctx->pc == 0x197544u) {
        ctx->pc = 0x197548u;
        goto label_197548;
    }
    ctx->pc = 0x197540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197548u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197540u, 0x197548u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197548u;
label_197548:
    // 0x197548: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_19754c:
    if (ctx->pc == 0x19754Cu) {
        ctx->pc = 0x19754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197548u;
        // 0x19754c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197550u;
        goto label_197550;
    }
    ctx->pc = 0x197548u;
    {
        const bool branch_taken_0x197548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197548u;
        // 0x19754c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197548) {
            ctx->pc = 0x197624u;
            goto label_197624;
        }
    }
    ctx->pc = 0x197550u;
label_197550:
    // 0x197550: 0xc066040  jal         func_198100
label_197554:
    if (ctx->pc == 0x197554u) {
        ctx->pc = 0x197554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197550u;
        // 0x197554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197558u;
        goto label_197558;
    }
    ctx->pc = 0x197550u;
    SET_GPR_U32(ctx, 31, 0x197558u);
    ctx->pc = 0x197554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197550u;
    // 0x197554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198100u, 0x197550u, 0x197558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197558u;
label_197558:
    // 0x197558: 0x10000032  b           . + 4 + (0x32 << 2)
label_19755c:
    if (ctx->pc == 0x19755Cu) {
        ctx->pc = 0x19755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197558u;
        // 0x19755c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197560u;
        goto label_197560;
    }
    ctx->pc = 0x197558u;
    {
        const bool branch_taken_0x197558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197558u;
        // 0x19755c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197558) {
            ctx->pc = 0x197624u;
            goto label_197624;
        }
    }
    ctx->pc = 0x197560u;
label_197560:
    // 0x197560: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x197560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_197564:
    // 0x197564: 0x8c431004  lw          $v1, 0x1004($v0)
    ctx->pc = 0x197564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
label_197568:
    // 0x197568: 0x8c640334  lw          $a0, 0x334($v1)
    ctx->pc = 0x197568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
label_19756c:
    // 0x19756c: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x19756cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_197570:
    // 0x197570: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x197570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
label_197574:
    // 0x197574: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x197574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_197578:
    // 0x197578: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_19757c:
    if (ctx->pc == 0x19757Cu) {
        ctx->pc = 0x19757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197578u;
        // 0x19757c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197580u;
        goto label_197580;
    }
    ctx->pc = 0x197578u;
    {
        const bool branch_taken_0x197578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197578u;
        // 0x19757c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197578) {
            ctx->pc = 0x197624u;
            goto label_197624;
        }
    }
    ctx->pc = 0x197580u;
label_197580:
    // 0x197580: 0xc061a1e  jal         func_186878
label_197584:
    if (ctx->pc == 0x197584u) {
        ctx->pc = 0x197584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197580u;
        // 0x197584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197588u;
        goto label_197588;
    }
    ctx->pc = 0x197580u;
    SET_GPR_U32(ctx, 31, 0x197588u);
    ctx->pc = 0x197584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197580u;
    // 0x197584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x197580u, 0x197588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197588u;
label_197588:
    // 0x197588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x197588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19758c:
    // 0x19758c: 0xc061a1e  jal         func_186878
label_197590:
    if (ctx->pc == 0x197590u) {
        ctx->pc = 0x197590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19758Cu;
        // 0x197590: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197594u;
        goto label_197594;
    }
    ctx->pc = 0x19758Cu;
    SET_GPR_U32(ctx, 31, 0x197594u);
    ctx->pc = 0x197590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19758Cu;
    // 0x197590: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19758Cu, 0x197594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197594u;
label_197594:
    // 0x197594: 0xc06e0e6  jal         func_1B8398
label_197598:
    if (ctx->pc == 0x197598u) {
        ctx->pc = 0x197598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197594u;
        // 0x197598: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19759Cu;
        goto label_19759c;
    }
    ctx->pc = 0x197594u;
    SET_GPR_U32(ctx, 31, 0x19759Cu);
    ctx->pc = 0x197598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197594u;
    // 0x197598: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8398u, 0x197594u, 0x19759Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19759Cu;
label_19759c:
    // 0x19759c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_1975a0:
    if (ctx->pc == 0x1975A0u) {
        ctx->pc = 0x1975A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19759Cu;
        // 0x1975a0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1975A4u;
        goto label_1975a4;
    }
    ctx->pc = 0x19759Cu;
    {
        const bool branch_taken_0x19759c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1975A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19759Cu;
        // 0x1975a0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19759c) {
            ctx->pc = 0x197624u;
            goto label_197624;
        }
    }
    ctx->pc = 0x1975A4u;
label_1975a4:
    // 0x1975a4: 0x10000018  b           . + 4 + (0x18 << 2)
label_1975a8:
    if (ctx->pc == 0x1975A8u) {
        ctx->pc = 0x1975ACu;
        goto label_1975ac;
    }
    ctx->pc = 0x1975A4u;
    {
        const bool branch_taken_0x1975a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1975a4) {
            ctx->pc = 0x197608u;
            goto label_197608;
        }
    }
    ctx->pc = 0x1975ACu;
label_1975ac:
    // 0x1975ac: 0xc061a16  jal         func_186858
label_1975b0:
    if (ctx->pc == 0x1975B0u) {
        ctx->pc = 0x1975B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975ACu;
        // 0x1975b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1975B4u;
        goto label_1975b4;
    }
    ctx->pc = 0x1975ACu;
    SET_GPR_U32(ctx, 31, 0x1975B4u);
    ctx->pc = 0x1975B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1975ACu;
    // 0x1975b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1975ACu, 0x1975B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1975B4u;
label_1975b4:
    // 0x1975b4: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1975b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_1975b8:
    // 0x1975b8: 0xc061a26  jal         func_186898
label_1975bc:
    if (ctx->pc == 0x1975BCu) {
        ctx->pc = 0x1975BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975B8u;
        // 0x1975bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1975C0u;
        goto label_1975c0;
    }
    ctx->pc = 0x1975B8u;
    SET_GPR_U32(ctx, 31, 0x1975C0u);
    ctx->pc = 0x1975BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1975B8u;
    // 0x1975bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1975B8u, 0x1975C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1975C0u;
label_1975c0:
    // 0x1975c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1975c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1975c4:
    // 0x1975c4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1975c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_1975c8:
    // 0x1975c8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_1975cc:
    if (ctx->pc == 0x1975CCu) {
        ctx->pc = 0x1975CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975C8u;
        // 0x1975cc: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1975D0u;
        goto label_1975d0;
    }
    ctx->pc = 0x1975C8u;
    {
        const bool branch_taken_0x1975c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1975CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975C8u;
        // 0x1975cc: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1975c8) {
            ctx->pc = 0x197624u;
            goto label_197624;
        }
    }
    ctx->pc = 0x1975D0u;
label_1975d0:
    // 0x1975d0: 0xc061a1e  jal         func_186878
label_1975d4:
    if (ctx->pc == 0x1975D4u) {
        ctx->pc = 0x1975D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975D0u;
        // 0x1975d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1975D8u;
        goto label_1975d8;
    }
    ctx->pc = 0x1975D0u;
    SET_GPR_U32(ctx, 31, 0x1975D8u);
    ctx->pc = 0x1975D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1975D0u;
    // 0x1975d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1975D0u, 0x1975D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1975D8u;
label_1975d8:
    // 0x1975d8: 0xc06e0e6  jal         func_1B8398
label_1975dc:
    if (ctx->pc == 0x1975DCu) {
        ctx->pc = 0x1975DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975D8u;
        // 0x1975dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1975E0u;
        goto label_1975e0;
    }
    ctx->pc = 0x1975D8u;
    SET_GPR_U32(ctx, 31, 0x1975E0u);
    ctx->pc = 0x1975DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1975D8u;
    // 0x1975dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8398u, 0x1975D8u, 0x1975E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1975E0u;
label_1975e0:
    // 0x1975e0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1975e4:
    if (ctx->pc == 0x1975E4u) {
        ctx->pc = 0x1975E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975E0u;
        // 0x1975e4: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1975E8u;
        goto label_1975e8;
    }
    ctx->pc = 0x1975E0u;
    {
        const bool branch_taken_0x1975e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1975E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975E0u;
        // 0x1975e4: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1975e0) {
            ctx->pc = 0x197624u;
            goto label_197624;
        }
    }
    ctx->pc = 0x1975E8u;
label_1975e8:
    // 0x1975e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1975e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1975ec:
    // 0x1975ec: 0x8c431004  lw          $v1, 0x1004($v0)
    ctx->pc = 0x1975ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
label_1975f0:
    // 0x1975f0: 0x8c640334  lw          $a0, 0x334($v1)
    ctx->pc = 0x1975f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
label_1975f4:
    // 0x1975f4: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x1975f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_1975f8:
    // 0x1975f8: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x1975f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
label_1975fc:
    // 0x1975fc: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x1975fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_197600:
    // 0x197600: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_197604:
    if (ctx->pc == 0x197604u) {
        ctx->pc = 0x197604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197600u;
        // 0x197604: 0xdfb10048  ld          $s1, 0x48($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197608u;
        goto label_197608;
    }
    ctx->pc = 0x197600u;
    {
        const bool branch_taken_0x197600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197600) {
            ctx->pc = 0x197604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197600u;
            // 0x197604: 0xdfb10048  ld          $s1, 0x48($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197628u;
            goto label_197628;
        }
    }
    ctx->pc = 0x197608u;
label_197608:
    // 0x197608: 0xc065f40  jal         func_197D00
label_19760c:
    if (ctx->pc == 0x19760Cu) {
        ctx->pc = 0x19760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197608u;
        // 0x19760c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197610u;
        goto label_197610;
    }
    ctx->pc = 0x197608u;
    SET_GPR_U32(ctx, 31, 0x197610u);
    ctx->pc = 0x19760Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197608u;
    // 0x19760c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197D00u, 0x197608u, 0x197610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197610u;
label_197610:
    // 0x197610: 0x10000004  b           . + 4 + (0x4 << 2)
label_197614:
    if (ctx->pc == 0x197614u) {
        ctx->pc = 0x197614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197610u;
        // 0x197614: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197618u;
        goto label_197618;
    }
    ctx->pc = 0x197610u;
    {
        const bool branch_taken_0x197610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197610u;
        // 0x197614: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197610) {
            ctx->pc = 0x197624u;
            goto label_197624;
        }
    }
    ctx->pc = 0x197618u;
label_197618:
    // 0x197618: 0xc065d90  jal         func_197640
label_19761c:
    if (ctx->pc == 0x19761Cu) {
        ctx->pc = 0x19761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197618u;
        // 0x19761c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197620u;
        goto label_197620;
    }
    ctx->pc = 0x197618u;
    SET_GPR_U32(ctx, 31, 0x197620u);
    ctx->pc = 0x19761Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197618u;
    // 0x19761c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197640u, 0x197618u, 0x197620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197620u;
label_197620:
    // 0x197620: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x197620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_197624:
    // 0x197624: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x197624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_197628:
    // 0x197628: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x197628u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19762c:
    // 0x19762c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x19762cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_197630:
    // 0x197630: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x197630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_197634:
    // 0x197634: 0x3e00008  jr          $ra
label_197638:
    if (ctx->pc == 0x197638u) {
        ctx->pc = 0x197638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197634u;
        // 0x197638: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19763Cu;
        goto label_19763c;
    }
    ctx->pc = 0x197634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197634u;
        // 0x197638: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19763Cu;
label_19763c:
    // 0x19763c: 0x0  nop
    ctx->pc = 0x19763cu;
    // NOP
    ctx->pc = 0x197640u;
}
