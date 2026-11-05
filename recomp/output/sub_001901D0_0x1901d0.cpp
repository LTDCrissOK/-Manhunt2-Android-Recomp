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

// Function: sub_001901D0
// Address: 0x1901d0 - 0x190538
void sub_001901D0_0x1901d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001901D0_0x1901d0");
#endif

    switch (ctx->pc) {
        case 0x1901d0u: goto label_1901d0;
        case 0x1901d4u: goto label_1901d4;
        case 0x1901d8u: goto label_1901d8;
        case 0x1901dcu: goto label_1901dc;
        case 0x1901e0u: goto label_1901e0;
        case 0x1901e4u: goto label_1901e4;
        case 0x1901e8u: goto label_1901e8;
        case 0x1901ecu: goto label_1901ec;
        case 0x1901f0u: goto label_1901f0;
        case 0x1901f4u: goto label_1901f4;
        case 0x1901f8u: goto label_1901f8;
        case 0x1901fcu: goto label_1901fc;
        case 0x190200u: goto label_190200;
        case 0x190204u: goto label_190204;
        case 0x190208u: goto label_190208;
        case 0x19020cu: goto label_19020c;
        case 0x190210u: goto label_190210;
        case 0x190214u: goto label_190214;
        case 0x190218u: goto label_190218;
        case 0x19021cu: goto label_19021c;
        case 0x190220u: goto label_190220;
        case 0x190224u: goto label_190224;
        case 0x190228u: goto label_190228;
        case 0x19022cu: goto label_19022c;
        case 0x190230u: goto label_190230;
        case 0x190234u: goto label_190234;
        case 0x190238u: goto label_190238;
        case 0x19023cu: goto label_19023c;
        case 0x190240u: goto label_190240;
        case 0x190244u: goto label_190244;
        case 0x190248u: goto label_190248;
        case 0x19024cu: goto label_19024c;
        case 0x190250u: goto label_190250;
        case 0x190254u: goto label_190254;
        case 0x190258u: goto label_190258;
        case 0x19025cu: goto label_19025c;
        case 0x190260u: goto label_190260;
        case 0x190264u: goto label_190264;
        case 0x190268u: goto label_190268;
        case 0x19026cu: goto label_19026c;
        case 0x190270u: goto label_190270;
        case 0x190274u: goto label_190274;
        case 0x190278u: goto label_190278;
        case 0x19027cu: goto label_19027c;
        case 0x190280u: goto label_190280;
        case 0x190284u: goto label_190284;
        case 0x190288u: goto label_190288;
        case 0x19028cu: goto label_19028c;
        case 0x190290u: goto label_190290;
        case 0x190294u: goto label_190294;
        case 0x190298u: goto label_190298;
        case 0x19029cu: goto label_19029c;
        case 0x1902a0u: goto label_1902a0;
        case 0x1902a4u: goto label_1902a4;
        case 0x1902a8u: goto label_1902a8;
        case 0x1902acu: goto label_1902ac;
        case 0x1902b0u: goto label_1902b0;
        case 0x1902b4u: goto label_1902b4;
        case 0x1902b8u: goto label_1902b8;
        case 0x1902bcu: goto label_1902bc;
        case 0x1902c0u: goto label_1902c0;
        case 0x1902c4u: goto label_1902c4;
        case 0x1902c8u: goto label_1902c8;
        case 0x1902ccu: goto label_1902cc;
        case 0x1902d0u: goto label_1902d0;
        case 0x1902d4u: goto label_1902d4;
        case 0x1902d8u: goto label_1902d8;
        case 0x1902dcu: goto label_1902dc;
        case 0x1902e0u: goto label_1902e0;
        case 0x1902e4u: goto label_1902e4;
        case 0x1902e8u: goto label_1902e8;
        case 0x1902ecu: goto label_1902ec;
        case 0x1902f0u: goto label_1902f0;
        case 0x1902f4u: goto label_1902f4;
        case 0x1902f8u: goto label_1902f8;
        case 0x1902fcu: goto label_1902fc;
        case 0x190300u: goto label_190300;
        case 0x190304u: goto label_190304;
        case 0x190308u: goto label_190308;
        case 0x19030cu: goto label_19030c;
        case 0x190310u: goto label_190310;
        case 0x190314u: goto label_190314;
        case 0x190318u: goto label_190318;
        case 0x19031cu: goto label_19031c;
        case 0x190320u: goto label_190320;
        case 0x190324u: goto label_190324;
        case 0x190328u: goto label_190328;
        case 0x19032cu: goto label_19032c;
        case 0x190330u: goto label_190330;
        case 0x190334u: goto label_190334;
        case 0x190338u: goto label_190338;
        case 0x19033cu: goto label_19033c;
        case 0x190340u: goto label_190340;
        case 0x190344u: goto label_190344;
        case 0x190348u: goto label_190348;
        case 0x19034cu: goto label_19034c;
        case 0x190350u: goto label_190350;
        case 0x190354u: goto label_190354;
        case 0x190358u: goto label_190358;
        case 0x19035cu: goto label_19035c;
        case 0x190360u: goto label_190360;
        case 0x190364u: goto label_190364;
        case 0x190368u: goto label_190368;
        case 0x19036cu: goto label_19036c;
        case 0x190370u: goto label_190370;
        case 0x190374u: goto label_190374;
        case 0x190378u: goto label_190378;
        case 0x19037cu: goto label_19037c;
        case 0x190380u: goto label_190380;
        case 0x190384u: goto label_190384;
        case 0x190388u: goto label_190388;
        case 0x19038cu: goto label_19038c;
        case 0x190390u: goto label_190390;
        case 0x190394u: goto label_190394;
        case 0x190398u: goto label_190398;
        case 0x19039cu: goto label_19039c;
        case 0x1903a0u: goto label_1903a0;
        case 0x1903a4u: goto label_1903a4;
        case 0x1903a8u: goto label_1903a8;
        case 0x1903acu: goto label_1903ac;
        case 0x1903b0u: goto label_1903b0;
        case 0x1903b4u: goto label_1903b4;
        case 0x1903b8u: goto label_1903b8;
        case 0x1903bcu: goto label_1903bc;
        case 0x1903c0u: goto label_1903c0;
        case 0x1903c4u: goto label_1903c4;
        case 0x1903c8u: goto label_1903c8;
        case 0x1903ccu: goto label_1903cc;
        case 0x1903d0u: goto label_1903d0;
        case 0x1903d4u: goto label_1903d4;
        case 0x1903d8u: goto label_1903d8;
        case 0x1903dcu: goto label_1903dc;
        case 0x1903e0u: goto label_1903e0;
        case 0x1903e4u: goto label_1903e4;
        case 0x1903e8u: goto label_1903e8;
        case 0x1903ecu: goto label_1903ec;
        case 0x1903f0u: goto label_1903f0;
        case 0x1903f4u: goto label_1903f4;
        case 0x1903f8u: goto label_1903f8;
        case 0x1903fcu: goto label_1903fc;
        case 0x190400u: goto label_190400;
        case 0x190404u: goto label_190404;
        case 0x190408u: goto label_190408;
        case 0x19040cu: goto label_19040c;
        case 0x190410u: goto label_190410;
        case 0x190414u: goto label_190414;
        case 0x190418u: goto label_190418;
        case 0x19041cu: goto label_19041c;
        case 0x190420u: goto label_190420;
        case 0x190424u: goto label_190424;
        case 0x190428u: goto label_190428;
        case 0x19042cu: goto label_19042c;
        case 0x190430u: goto label_190430;
        case 0x190434u: goto label_190434;
        case 0x190438u: goto label_190438;
        case 0x19043cu: goto label_19043c;
        case 0x190440u: goto label_190440;
        case 0x190444u: goto label_190444;
        case 0x190448u: goto label_190448;
        case 0x19044cu: goto label_19044c;
        case 0x190450u: goto label_190450;
        case 0x190454u: goto label_190454;
        case 0x190458u: goto label_190458;
        case 0x19045cu: goto label_19045c;
        case 0x190460u: goto label_190460;
        case 0x190464u: goto label_190464;
        case 0x190468u: goto label_190468;
        case 0x19046cu: goto label_19046c;
        case 0x190470u: goto label_190470;
        case 0x190474u: goto label_190474;
        case 0x190478u: goto label_190478;
        case 0x19047cu: goto label_19047c;
        case 0x190480u: goto label_190480;
        case 0x190484u: goto label_190484;
        case 0x190488u: goto label_190488;
        case 0x19048cu: goto label_19048c;
        case 0x190490u: goto label_190490;
        case 0x190494u: goto label_190494;
        case 0x190498u: goto label_190498;
        case 0x19049cu: goto label_19049c;
        case 0x1904a0u: goto label_1904a0;
        case 0x1904a4u: goto label_1904a4;
        case 0x1904a8u: goto label_1904a8;
        case 0x1904acu: goto label_1904ac;
        case 0x1904b0u: goto label_1904b0;
        case 0x1904b4u: goto label_1904b4;
        case 0x1904b8u: goto label_1904b8;
        case 0x1904bcu: goto label_1904bc;
        case 0x1904c0u: goto label_1904c0;
        case 0x1904c4u: goto label_1904c4;
        case 0x1904c8u: goto label_1904c8;
        case 0x1904ccu: goto label_1904cc;
        case 0x1904d0u: goto label_1904d0;
        case 0x1904d4u: goto label_1904d4;
        case 0x1904d8u: goto label_1904d8;
        case 0x1904dcu: goto label_1904dc;
        case 0x1904e0u: goto label_1904e0;
        case 0x1904e4u: goto label_1904e4;
        case 0x1904e8u: goto label_1904e8;
        case 0x1904ecu: goto label_1904ec;
        case 0x1904f0u: goto label_1904f0;
        case 0x1904f4u: goto label_1904f4;
        case 0x1904f8u: goto label_1904f8;
        case 0x1904fcu: goto label_1904fc;
        case 0x190500u: goto label_190500;
        case 0x190504u: goto label_190504;
        case 0x190508u: goto label_190508;
        case 0x19050cu: goto label_19050c;
        case 0x190510u: goto label_190510;
        case 0x190514u: goto label_190514;
        case 0x190518u: goto label_190518;
        case 0x19051cu: goto label_19051c;
        case 0x190520u: goto label_190520;
        case 0x190524u: goto label_190524;
        case 0x190528u: goto label_190528;
        case 0x19052cu: goto label_19052c;
        case 0x190530u: goto label_190530;
        case 0x190534u: goto label_190534;
        default: break;
    }

    ctx->pc = 0x1901d0u;

label_1901d0:
    // 0x1901d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1901d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1901d4:
    // 0x1901d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1901d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1901d8:
    // 0x1901d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1901d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1901dc:
    // 0x1901dc: 0xc061a16  jal         func_186858
label_1901e0:
    if (ctx->pc == 0x1901E0u) {
        ctx->pc = 0x1901E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1901DCu;
        // 0x1901e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1901E4u;
        goto label_1901e4;
    }
    ctx->pc = 0x1901DCu;
    SET_GPR_U32(ctx, 31, 0x1901E4u);
    ctx->pc = 0x1901E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1901DCu;
    // 0x1901e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1901DCu, 0x1901E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1901E4u;
label_1901e4:
    // 0x1901e4: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x1901e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
label_1901e8:
    // 0x1901e8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1901e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1901ec:
    // 0x1901ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1901ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1901f0:
    // 0x1901f0: 0xc06ee70  jal         func_1BB9C0
label_1901f4:
    if (ctx->pc == 0x1901F4u) {
        ctx->pc = 0x1901F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1901F0u;
        // 0x1901f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1901F8u;
        goto label_1901f8;
    }
    ctx->pc = 0x1901F0u;
    SET_GPR_U32(ctx, 31, 0x1901F8u);
    ctx->pc = 0x1901F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1901F0u;
    // 0x1901f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9C0u, 0x1901F0u, 0x1901F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1901F8u;
label_1901f8:
    // 0x1901f8: 0xc061a16  jal         func_186858
label_1901fc:
    if (ctx->pc == 0x1901FCu) {
        ctx->pc = 0x1901FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1901F8u;
        // 0x1901fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190200u;
        goto label_190200;
    }
    ctx->pc = 0x1901F8u;
    SET_GPR_U32(ctx, 31, 0x190200u);
    ctx->pc = 0x1901FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1901F8u;
    // 0x1901fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1901F8u, 0x190200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190200u;
label_190200:
    // 0x190200: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x190200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_190204:
    // 0x190204: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x190204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190208:
    // 0x190208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19020c:
    // 0x19020c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19020cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_190210:
    // 0x190210: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x190210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190214:
    // 0x190214: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x190214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
label_190218:
    // 0x190218: 0xc061a16  jal         func_186858
label_19021c:
    if (ctx->pc == 0x19021Cu) {
        ctx->pc = 0x19021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190218u;
        // 0x19021c: 0xe441004c  swc1        $f1, 0x4C($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x190220u;
        goto label_190220;
    }
    ctx->pc = 0x190218u;
    SET_GPR_U32(ctx, 31, 0x190220u);
    ctx->pc = 0x19021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190218u;
    // 0x19021c: 0xe441004c  swc1        $f1, 0x4C($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x190218u, 0x190220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190220u;
label_190220:
    // 0x190220: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x190220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_190224:
    // 0x190224: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x190224u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_190228:
    // 0x190228: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x190228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19022c:
    // 0x19022c: 0x0  nop
    ctx->pc = 0x19022cu;
    // NOP
label_190230:
    // 0x190230: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x190230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
label_190234:
    // 0x190234: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x190234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_190238:
    // 0x190238: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_19023c:
    if (ctx->pc == 0x19023Cu) {
        ctx->pc = 0x19023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190238u;
        // 0x19023c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190240u;
        goto label_190240;
    }
    ctx->pc = 0x190238u;
    {
        const bool branch_taken_0x190238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190238u;
        // 0x19023c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190238) {
            ctx->pc = 0x190250u;
            goto label_190250;
        }
    }
    ctx->pc = 0x190240u;
label_190240:
    // 0x190240: 0x50620071  beql        $v1, $v0, . + 4 + (0x71 << 2)
label_190244:
    if (ctx->pc == 0x190244u) {
        ctx->pc = 0x190244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190240u;
        // 0x190244: 0xc600001c  lwc1        $f0, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x190248u;
        goto label_190248;
    }
    ctx->pc = 0x190240u;
    {
        const bool branch_taken_0x190240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x190240) {
            ctx->pc = 0x190244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190240u;
            // 0x190244: 0xc600001c  lwc1        $f0, 0x1C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x190408u;
            goto label_190408;
        }
    }
    ctx->pc = 0x190248u;
label_190248:
    // 0x190248: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_19024c:
    if (ctx->pc == 0x19024Cu) {
        ctx->pc = 0x19024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190248u;
        // 0x19024c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190250u;
        goto label_190250;
    }
    ctx->pc = 0x190248u;
    {
        const bool branch_taken_0x190248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190248u;
        // 0x19024c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190248) {
            ctx->pc = 0x190528u;
            goto label_190528;
        }
    }
    ctx->pc = 0x190250u;
label_190250:
    // 0x190250: 0xc061a12  jal         func_186848
label_190254:
    if (ctx->pc == 0x190254u) {
        ctx->pc = 0x190254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190250u;
        // 0x190254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190258u;
        goto label_190258;
    }
    ctx->pc = 0x190250u;
    SET_GPR_U32(ctx, 31, 0x190258u);
    ctx->pc = 0x190254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190250u;
    // 0x190254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x190250u, 0x190258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190258u;
label_190258:
    // 0x190258: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x190258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_19025c:
    // 0x19025c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19025cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190260:
    // 0x190260: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x190260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_190264:
    // 0x190264: 0x40f809  jalr        $v0
label_190268:
    if (ctx->pc == 0x190268u) {
        ctx->pc = 0x190268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190264u;
        // 0x190268: 0xc60c0018  lwc1        $f12, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19026Cu;
        goto label_19026c;
    }
    ctx->pc = 0x190264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19026Cu);
        ctx->pc = 0x190268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190264u;
        // 0x190268: 0xc60c0018  lwc1        $f12, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190264u, 0x19026Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19026Cu;
label_19026c:
    // 0x19026c: 0x504000ae  beql        $v0, $zero, . + 4 + (0xAE << 2)
label_190270:
    if (ctx->pc == 0x190270u) {
        ctx->pc = 0x190270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19026Cu;
        // 0x190270: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190274u;
        goto label_190274;
    }
    ctx->pc = 0x19026Cu;
    {
        const bool branch_taken_0x19026c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19026c) {
            ctx->pc = 0x190270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19026Cu;
            // 0x190270: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190528u;
            goto label_190528;
        }
    }
    ctx->pc = 0x190274u;
label_190274:
    // 0x190274: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x190274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_190278:
    // 0x190278: 0x10a00058  beqz        $a1, . + 4 + (0x58 << 2)
label_19027c:
    if (ctx->pc == 0x19027Cu) {
        ctx->pc = 0x190280u;
        goto label_190280;
    }
    ctx->pc = 0x190278u;
    {
        const bool branch_taken_0x190278 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x190278) {
            ctx->pc = 0x1903DCu;
            goto label_1903dc;
        }
    }
    ctx->pc = 0x190280u;
label_190280:
    // 0x190280: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x190280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_190284:
    // 0x190284: 0xc06419c  jal         func_190670
label_190288:
    if (ctx->pc == 0x190288u) {
        ctx->pc = 0x190288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190284u;
        // 0x190288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19028Cu;
        goto label_19028c;
    }
    ctx->pc = 0x190284u;
    SET_GPR_U32(ctx, 31, 0x19028Cu);
    ctx->pc = 0x190288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190284u;
    // 0x190288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190670u, 0x190284u, 0x19028Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19028Cu;
label_19028c:
    // 0x19028c: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_190290:
    if (ctx->pc == 0x190290u) {
        ctx->pc = 0x190290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19028Cu;
        // 0x190290: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190294u;
        goto label_190294;
    }
    ctx->pc = 0x19028Cu;
    {
        const bool branch_taken_0x19028c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19028Cu;
        // 0x190290: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19028c) {
            ctx->pc = 0x1903DCu;
            goto label_1903dc;
        }
    }
    ctx->pc = 0x190294u;
label_190294:
    // 0x190294: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x190294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_190298:
    // 0x190298: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x190298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_19029c:
    // 0x19029c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1902a0:
    if (ctx->pc == 0x1902A0u) {
        ctx->pc = 0x1902A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19029Cu;
        // 0x1902a0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1902A4u;
        goto label_1902a4;
    }
    ctx->pc = 0x19029Cu;
    {
        const bool branch_taken_0x19029c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1902A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19029Cu;
        // 0x1902a0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19029c) {
            ctx->pc = 0x1902B8u;
            goto label_1902b8;
        }
    }
    ctx->pc = 0x1902A4u;
label_1902a4:
    // 0x1902a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1902a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1902a8:
    // 0x1902a8: 0x0  nop
    ctx->pc = 0x1902a8u;
    // NOP
label_1902ac:
    // 0x1902ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1902acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1902b0:
    // 0x1902b0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1902b4:
    if (ctx->pc == 0x1902B4u) {
        ctx->pc = 0x1902B8u;
        goto label_1902b8;
    }
    ctx->pc = 0x1902B0u;
    {
        const bool branch_taken_0x1902b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1902b0) {
            ctx->pc = 0x1902D4u;
            goto label_1902d4;
        }
    }
    ctx->pc = 0x1902B8u;
label_1902b8:
    // 0x1902b8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1902b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1902bc:
    // 0x1902bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1902bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1902c0:
    // 0x1902c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1902c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1902c4:
    // 0x1902c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1902c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1902c8:
    // 0x1902c8: 0x0  nop
    ctx->pc = 0x1902c8u;
    // NOP
label_1902cc:
    // 0x1902cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1902ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1902d0:
    // 0x1902d0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1902d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1902d4:
    // 0x1902d4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1902d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1902d8:
    // 0x1902d8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1902d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1902dc:
    // 0x1902dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1902dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1902e0:
    // 0x1902e0: 0x0  nop
    ctx->pc = 0x1902e0u;
    // NOP
label_1902e4:
    // 0x1902e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1902e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1902e8:
    // 0x1902e8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1902e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_1902ec:
    // 0x1902ec: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1902ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1902f0:
    // 0x1902f0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1902f4:
    if (ctx->pc == 0x1902F4u) {
        ctx->pc = 0x1902F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1902F0u;
        // 0x1902f4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1902F8u;
        goto label_1902f8;
    }
    ctx->pc = 0x1902F0u;
    {
        const bool branch_taken_0x1902f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1902F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1902F0u;
        // 0x1902f4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1902f0) {
            ctx->pc = 0x19030Cu;
            goto label_19030c;
        }
    }
    ctx->pc = 0x1902F8u;
label_1902f8:
    // 0x1902f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1902f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1902fc:
    // 0x1902fc: 0x0  nop
    ctx->pc = 0x1902fcu;
    // NOP
label_190300:
    // 0x190300: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190300u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_190304:
    // 0x190304: 0x10000008  b           . + 4 + (0x8 << 2)
label_190308:
    if (ctx->pc == 0x190308u) {
        ctx->pc = 0x190308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190304u;
        // 0x190308: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19030Cu;
        goto label_19030c;
    }
    ctx->pc = 0x190304u;
    {
        const bool branch_taken_0x190304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190304u;
        // 0x190308: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x190304) {
            ctx->pc = 0x190328u;
            goto label_190328;
        }
    }
    ctx->pc = 0x19030Cu;
label_19030c:
    // 0x19030c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19030cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_190310:
    // 0x190310: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x190310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_190314:
    // 0x190314: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190318:
    // 0x190318: 0x0  nop
    ctx->pc = 0x190318u;
    // NOP
label_19031c:
    // 0x19031c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19031cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_190320:
    // 0x190320: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x190320u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_190324:
    // 0x190324: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x190324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_190328:
    // 0x190328: 0x3c014479  lui         $at, 0x4479
    ctx->pc = 0x190328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17529 << 16));
label_19032c:
    // 0x19032c: 0x3421ff5c  ori         $at, $at, 0xFF5C
    ctx->pc = 0x19032cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65372);
label_190330:
    // 0x190330: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x190330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190334:
    // 0x190334: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x190334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190338:
    // 0x190338: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x190338u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19033c:
    // 0x19033c: 0x0  nop
    ctx->pc = 0x19033cu;
    // NOP
label_190340:
    // 0x190340: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_190344:
    if (ctx->pc == 0x190344u) {
        ctx->pc = 0x190344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190340u;
        // 0x190344: 0x26030030  addiu       $v1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190348u;
        goto label_190348;
    }
    ctx->pc = 0x190340u;
    {
        const bool branch_taken_0x190340 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190340u;
        // 0x190344: 0x26030030  addiu       $v1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190340) {
            ctx->pc = 0x190354u;
            goto label_190354;
        }
    }
    ctx->pc = 0x190348u;
label_190348:
    // 0x190348: 0x7e000030  sq          $zero, 0x30($s0)
    ctx->pc = 0x190348u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 0));
label_19034c:
    // 0x19034c: 0x1000000d  b           . + 4 + (0xD << 2)
label_190350:
    if (ctx->pc == 0x190350u) {
        ctx->pc = 0x190350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19034Cu;
        // 0x190350: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190354u;
        goto label_190354;
    }
    ctx->pc = 0x19034Cu;
    {
        const bool branch_taken_0x19034c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19034Cu;
        // 0x190350: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19034c) {
            ctx->pc = 0x190384u;
            goto label_190384;
        }
    }
    ctx->pc = 0x190354u;
label_190354:
    // 0x190354: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x190354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_190358:
    // 0x190358: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x190358u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_19035c:
    // 0x19035c: 0xfa010030  sqc2        $vf1, 0x30($s0)
    ctx->pc = 0x19035cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_190360:
    // 0x190360: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x190360u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_190364:
    // 0x190364: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x190364u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_190368:
    // 0x190368: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x190368u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_19036c:
    // 0x19036c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x19036cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_190370:
    // 0x190370: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x190370u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_190374:
    // 0x190374: 0x4a0003bf  vwaitq
    ctx->pc = 0x190374u;
    // VWAITQ (Q already resolved in this runtime)
label_190378:
    // 0x190378: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x190378u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_19037c:
    // 0x19037c: 0xfa010030  sqc2        $vf1, 0x30($s0)
    ctx->pc = 0x19037cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_190380:
    // 0x190380: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x190380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_190384:
    // 0x190384: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x190384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_190388:
    // 0x190388: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_19038c:
    if (ctx->pc == 0x19038Cu) {
        ctx->pc = 0x19038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190388u;
        // 0x19038c: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190390u;
        goto label_190390;
    }
    ctx->pc = 0x190388u;
    {
        const bool branch_taken_0x190388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190388u;
        // 0x19038c: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190388) {
            ctx->pc = 0x19039Cu;
            goto label_19039c;
        }
    }
    ctx->pc = 0x190390u;
label_190390:
    // 0x190390: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x190390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_190394:
    // 0x190394: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x190394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_190398:
    // 0x190398: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x190398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
label_19039c:
    // 0x19039c: 0x8e06004c  lw          $a2, 0x4C($s0)
    ctx->pc = 0x19039cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_1903a0:
    // 0x1903a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1903a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1903a4:
    // 0x1903a4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1903a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1903a8:
    // 0x1903a8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1903a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1903ac:
    // 0x1903ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1903acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1903b0:
    // 0x1903b0: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
label_1903b4:
    if (ctx->pc == 0x1903B4u) {
        ctx->pc = 0x1903B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903B0u;
        // 0x1903b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1903B8u;
        goto label_1903b8;
    }
    ctx->pc = 0x1903B0u;
    {
        const bool branch_taken_0x1903b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1903B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903B0u;
        // 0x1903b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1903b0) {
            ctx->pc = 0x1903D4u;
            goto label_1903d4;
        }
    }
    ctx->pc = 0x1903B8u;
label_1903b8:
    // 0x1903b8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1903b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1903bc:
    // 0x1903bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1903c0:
    if (ctx->pc == 0x1903C0u) {
        ctx->pc = 0x1903C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903BCu;
        // 0x1903c0: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1903C4u;
        goto label_1903c4;
    }
    ctx->pc = 0x1903BCu;
    {
        const bool branch_taken_0x1903bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1903C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903BCu;
        // 0x1903c0: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1903bc) {
            ctx->pc = 0x1903D0u;
            goto label_1903d0;
        }
    }
    ctx->pc = 0x1903C4u;
label_1903c4:
    // 0x1903c4: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1903c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1903c8:
    // 0x1903c8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1903c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1903cc:
    // 0x1903cc: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x1903ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
label_1903d0:
    // 0x1903d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1903d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1903d4:
    // 0x1903d4: 0x10000053  b           . + 4 + (0x53 << 2)
label_1903d8:
    if (ctx->pc == 0x1903D8u) {
        ctx->pc = 0x1903D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903D4u;
        // 0x1903d8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1903DCu;
        goto label_1903dc;
    }
    ctx->pc = 0x1903D4u;
    {
        const bool branch_taken_0x1903d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1903D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903D4u;
        // 0x1903d8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1903d4) {
            ctx->pc = 0x190524u;
            goto label_190524;
        }
    }
    ctx->pc = 0x1903DCu;
label_1903dc:
    // 0x1903dc: 0xc06414e  jal         func_190538
label_1903e0:
    if (ctx->pc == 0x1903E0u) {
        ctx->pc = 0x1903E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903DCu;
        // 0x1903e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1903E4u;
        goto label_1903e4;
    }
    ctx->pc = 0x1903DCu;
    SET_GPR_U32(ctx, 31, 0x1903E4u);
    ctx->pc = 0x1903E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1903DCu;
    // 0x1903e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190538u, 0x1903DCu, 0x1903E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1903E4u;
label_1903e4:
    // 0x1903e4: 0xc061a12  jal         func_186848
label_1903e8:
    if (ctx->pc == 0x1903E8u) {
        ctx->pc = 0x1903E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903E4u;
        // 0x1903e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1903ECu;
        goto label_1903ec;
    }
    ctx->pc = 0x1903E4u;
    SET_GPR_U32(ctx, 31, 0x1903ECu);
    ctx->pc = 0x1903E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1903E4u;
    // 0x1903e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1903E4u, 0x1903ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1903ECu;
label_1903ec:
    // 0x1903ec: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1903ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1903f0:
    // 0x1903f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1903f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1903f4:
    // 0x1903f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1903f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1903f8:
    // 0x1903f8: 0xc07023a  jal         func_1C08E8
label_1903fc:
    if (ctx->pc == 0x1903FCu) {
        ctx->pc = 0x1903FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903F8u;
        // 0x1903fc: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190400u;
        goto label_190400;
    }
    ctx->pc = 0x1903F8u;
    SET_GPR_U32(ctx, 31, 0x190400u);
    ctx->pc = 0x1903FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1903F8u;
    // 0x1903fc: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C08E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C08E8u, 0x1903F8u, 0x190400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190400u;
label_190400:
    // 0x190400: 0x10000049  b           . + 4 + (0x49 << 2)
label_190404:
    if (ctx->pc == 0x190404u) {
        ctx->pc = 0x190404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190400u;
        // 0x190404: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190408u;
        goto label_190408;
    }
    ctx->pc = 0x190400u;
    {
        const bool branch_taken_0x190400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190400u;
        // 0x190404: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190400) {
            ctx->pc = 0x190528u;
            goto label_190528;
        }
    }
    ctx->pc = 0x190408u;
label_190408:
    // 0x190408: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x190408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_19040c:
    // 0x19040c: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x19040cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_190410:
    // 0x190410: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x190410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_190414:
    // 0x190414: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x190414u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_190418:
    // 0x190418: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19041c:
    if (ctx->pc == 0x19041Cu) {
        ctx->pc = 0x19041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190418u;
        // 0x19041c: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190420u;
        goto label_190420;
    }
    ctx->pc = 0x190418u;
    {
        const bool branch_taken_0x190418 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190418u;
        // 0x19041c: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190418) {
            ctx->pc = 0x190434u;
            goto label_190434;
        }
    }
    ctx->pc = 0x190420u;
label_190420:
    // 0x190420: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x190420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_190424:
    // 0x190424: 0x0  nop
    ctx->pc = 0x190424u;
    // NOP
label_190428:
    // 0x190428: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x190428u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19042c:
    // 0x19042c: 0x10000008  b           . + 4 + (0x8 << 2)
label_190430:
    if (ctx->pc == 0x190430u) {
        ctx->pc = 0x190434u;
        goto label_190434;
    }
    ctx->pc = 0x19042Cu;
    {
        const bool branch_taken_0x19042c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19042c) {
            ctx->pc = 0x190450u;
            goto label_190450;
        }
    }
    ctx->pc = 0x190434u;
label_190434:
    // 0x190434: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x190434u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_190438:
    // 0x190438: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x190438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19043c:
    // 0x19043c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19043cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_190440:
    // 0x190440: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x190440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_190444:
    // 0x190444: 0x0  nop
    ctx->pc = 0x190444u;
    // NOP
label_190448:
    // 0x190448: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x190448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19044c:
    // 0x19044c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19044cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_190450:
    // 0x190450: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x190450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_190454:
    // 0x190454: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x190454u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_190458:
    // 0x190458: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x190458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19045c:
    // 0x19045c: 0x0  nop
    ctx->pc = 0x19045cu;
    // NOP
label_190460:
    // 0x190460: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x190460u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_190464:
    // 0x190464: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x190464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190468:
    // 0x190468: 0x0  nop
    ctx->pc = 0x190468u;
    // NOP
label_19046c:
    // 0x19046c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_190470:
    if (ctx->pc == 0x190470u) {
        ctx->pc = 0x190474u;
        goto label_190474;
    }
    ctx->pc = 0x19046Cu;
    {
        const bool branch_taken_0x19046c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19046c) {
            ctx->pc = 0x1904A8u;
            goto label_1904a8;
        }
    }
    ctx->pc = 0x190474u;
label_190474:
    // 0x190474: 0xc06414e  jal         func_190538
label_190478:
    if (ctx->pc == 0x190478u) {
        ctx->pc = 0x190478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190474u;
        // 0x190478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19047Cu;
        goto label_19047c;
    }
    ctx->pc = 0x190474u;
    SET_GPR_U32(ctx, 31, 0x19047Cu);
    ctx->pc = 0x190478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190474u;
    // 0x190478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190538u, 0x190474u, 0x19047Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19047Cu;
label_19047c:
    // 0x19047c: 0xc061a12  jal         func_186848
label_190480:
    if (ctx->pc == 0x190480u) {
        ctx->pc = 0x190480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19047Cu;
        // 0x190480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190484u;
        goto label_190484;
    }
    ctx->pc = 0x19047Cu;
    SET_GPR_U32(ctx, 31, 0x190484u);
    ctx->pc = 0x190480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19047Cu;
    // 0x190480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19047Cu, 0x190484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190484u;
label_190484:
    // 0x190484: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x190484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_190488:
    // 0x190488: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x190488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19048c:
    // 0x19048c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19048cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190490:
    // 0x190490: 0xc07023a  jal         func_1C08E8
label_190494:
    if (ctx->pc == 0x190494u) {
        ctx->pc = 0x190494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190490u;
        // 0x190494: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190498u;
        goto label_190498;
    }
    ctx->pc = 0x190490u;
    SET_GPR_U32(ctx, 31, 0x190498u);
    ctx->pc = 0x190494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190490u;
    // 0x190494: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C08E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C08E8u, 0x190490u, 0x190498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190498u;
label_190498:
    // 0x190498: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x190498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_19049c:
    // 0x19049c: 0x7e000030  sq          $zero, 0x30($s0)
    ctx->pc = 0x19049cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 0));
label_1904a0:
    // 0x1904a0: 0x10000020  b           . + 4 + (0x20 << 2)
label_1904a4:
    if (ctx->pc == 0x1904A4u) {
        ctx->pc = 0x1904A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1904A0u;
        // 0x1904a4: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1904A8u;
        goto label_1904a8;
    }
    ctx->pc = 0x1904A0u;
    {
        const bool branch_taken_0x1904a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1904A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1904A0u;
        // 0x1904a4: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1904a0) {
            ctx->pc = 0x190524u;
            goto label_190524;
        }
    }
    ctx->pc = 0x1904A8u;
label_1904a8:
    // 0x1904a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1904a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1904ac:
    // 0x1904ac: 0x0  nop
    ctx->pc = 0x1904acu;
    // NOP
label_1904b0:
    // 0x1904b0: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1904b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1904b4:
    // 0x1904b4: 0x0  nop
    ctx->pc = 0x1904b4u;
    // NOP
label_1904b8:
    // 0x1904b8: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
label_1904bc:
    if (ctx->pc == 0x1904BCu) {
        ctx->pc = 0x1904BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1904B8u;
        // 0x1904bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1904C0u;
        goto label_1904c0;
    }
    ctx->pc = 0x1904B8u;
    {
        const bool branch_taken_0x1904b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1904b8) {
            ctx->pc = 0x1904BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1904B8u;
            // 0x1904bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190528u;
            goto label_190528;
        }
    }
    ctx->pc = 0x1904C0u;
label_1904c0:
    // 0x1904c0: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x1904c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1904c4:
    // 0x1904c4: 0x3c014479  lui         $at, 0x4479
    ctx->pc = 0x1904c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17529 << 16));
label_1904c8:
    // 0x1904c8: 0x3421ff5c  ori         $at, $at, 0xFF5C
    ctx->pc = 0x1904c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65372);
label_1904cc:
    // 0x1904cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1904ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1904d0:
    // 0x1904d0: 0x0  nop
    ctx->pc = 0x1904d0u;
    // NOP
label_1904d4:
    // 0x1904d4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1904d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1904d8:
    // 0x1904d8: 0x0  nop
    ctx->pc = 0x1904d8u;
    // NOP
label_1904dc:
    // 0x1904dc: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_1904e0:
    if (ctx->pc == 0x1904E0u) {
        ctx->pc = 0x1904E4u;
        goto label_1904e4;
    }
    ctx->pc = 0x1904DCu;
    {
        const bool branch_taken_0x1904dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1904dc) {
            ctx->pc = 0x190508u;
            goto label_190508;
        }
    }
    ctx->pc = 0x1904E4u;
label_1904e4:
    // 0x1904e4: 0xc061a12  jal         func_186848
label_1904e8:
    if (ctx->pc == 0x1904E8u) {
        ctx->pc = 0x1904E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1904E4u;
        // 0x1904e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1904ECu;
        goto label_1904ec;
    }
    ctx->pc = 0x1904E4u;
    SET_GPR_U32(ctx, 31, 0x1904ECu);
    ctx->pc = 0x1904E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1904E4u;
    // 0x1904e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1904E4u, 0x1904ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1904ECu;
label_1904ec:
    // 0x1904ec: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x1904ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_1904f0:
    // 0x1904f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1904f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1904f4:
    // 0x1904f4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1904f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1904f8:
    // 0x1904f8: 0x40f809  jalr        $v0
label_1904fc:
    if (ctx->pc == 0x1904FCu) {
        ctx->pc = 0x1904FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1904F8u;
        // 0x1904fc: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190500u;
        goto label_190500;
    }
    ctx->pc = 0x1904F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x190500u);
        ctx->pc = 0x1904FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1904F8u;
        // 0x1904fc: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1904F8u, 0x190500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x190500u;
label_190500:
    // 0x190500: 0x10000009  b           . + 4 + (0x9 << 2)
label_190504:
    if (ctx->pc == 0x190504u) {
        ctx->pc = 0x190504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190500u;
        // 0x190504: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190508u;
        goto label_190508;
    }
    ctx->pc = 0x190500u;
    {
        const bool branch_taken_0x190500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190500u;
        // 0x190504: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190500) {
            ctx->pc = 0x190528u;
            goto label_190528;
        }
    }
    ctx->pc = 0x190508u;
label_190508:
    // 0x190508: 0xc061a12  jal         func_186848
label_19050c:
    if (ctx->pc == 0x19050Cu) {
        ctx->pc = 0x19050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190508u;
        // 0x19050c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190510u;
        goto label_190510;
    }
    ctx->pc = 0x190508u;
    SET_GPR_U32(ctx, 31, 0x190510u);
    ctx->pc = 0x19050Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190508u;
    // 0x19050c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x190508u, 0x190510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190510u;
label_190510:
    // 0x190510: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x190510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_190514:
    // 0x190514: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x190514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190518:
    // 0x190518: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x190518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_19051c:
    // 0x19051c: 0x40f809  jalr        $v0
label_190520:
    if (ctx->pc == 0x190520u) {
        ctx->pc = 0x190520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19051Cu;
        // 0x190520: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190524u;
        goto label_190524;
    }
    ctx->pc = 0x19051Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x190524u);
        ctx->pc = 0x190520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19051Cu;
        // 0x190520: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19051Cu, 0x190524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x190524u;
label_190524:
    // 0x190524: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x190524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_190528:
    // 0x190528: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x190528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19052c:
    // 0x19052c: 0x3e00008  jr          $ra
label_190530:
    if (ctx->pc == 0x190530u) {
        ctx->pc = 0x190530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19052Cu;
        // 0x190530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190534u;
        goto label_190534;
    }
    ctx->pc = 0x19052Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19052Cu;
        // 0x190530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19052Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190534u;
label_190534:
    // 0x190534: 0x0  nop
    ctx->pc = 0x190534u;
    // NOP
    ctx->pc = 0x190538u;
}
