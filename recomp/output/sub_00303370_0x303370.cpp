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

// Function: sub_00303370
// Address: 0x303370 - 0x304370
void sub_00303370_0x303370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303370_0x303370");
#endif

    switch (ctx->pc) {
        case 0x3033bcu: goto label_3033bc;
        case 0x3033c4u: goto label_3033c4;
        case 0x3033d4u: goto label_3033d4;
        case 0x3033fcu: goto label_3033fc;
        case 0x30340cu: goto label_30340c;
        case 0x303414u: goto label_303414;
        case 0x30341cu: goto label_30341c;
        case 0x30346cu: goto label_30346c;
        case 0x3034b4u: goto label_3034b4;
        case 0x30353cu: goto label_30353c;
        case 0x303548u: goto label_303548;
        case 0x303630u: goto label_303630;
        case 0x3036ccu: goto label_3036cc;
        case 0x3036e4u: goto label_3036e4;
        case 0x30378cu: goto label_30378c;
        case 0x3037c0u: goto label_3037c0;
        case 0x303840u: goto label_303840;
        case 0x303850u: goto label_303850;
        case 0x30385cu: goto label_30385c;
        case 0x303880u: goto label_303880;
        case 0x30388cu: goto label_30388c;
        case 0x3038a0u: goto label_3038a0;
        case 0x3038b0u: goto label_3038b0;
        case 0x30390cu: goto label_30390c;
        case 0x30392cu: goto label_30392c;
        case 0x30393cu: goto label_30393c;
        case 0x303944u: goto label_303944;
        case 0x303960u: goto label_303960;
        case 0x3039f0u: goto label_3039f0;
        case 0x303a18u: goto label_303a18;
        case 0x303a94u: goto label_303a94;
        case 0x303a9cu: goto label_303a9c;
        case 0x303ab8u: goto label_303ab8;
        case 0x303ad0u: goto label_303ad0;
        case 0x303b24u: goto label_303b24;
        case 0x303b3cu: goto label_303b3c;
        case 0x303b44u: goto label_303b44;
        case 0x303b60u: goto label_303b60;
        case 0x303b68u: goto label_303b68;
        case 0x303b78u: goto label_303b78;
        case 0x303bb8u: goto label_303bb8;
        case 0x303bc8u: goto label_303bc8;
        case 0x303be8u: goto label_303be8;
        case 0x303bfcu: goto label_303bfc;
        case 0x303c5cu: goto label_303c5c;
        case 0x303cacu: goto label_303cac;
        case 0x303cc0u: goto label_303cc0;
        case 0x303d8cu: goto label_303d8c;
        case 0x303e30u: goto label_303e30;
        case 0x303e70u: goto label_303e70;
        case 0x303e78u: goto label_303e78;
        case 0x303e9cu: goto label_303e9c;
        case 0x303ed8u: goto label_303ed8;
        case 0x303ee0u: goto label_303ee0;
        case 0x303ef8u: goto label_303ef8;
        case 0x303f00u: goto label_303f00;
        case 0x303f18u: goto label_303f18;
        case 0x303f28u: goto label_303f28;
        case 0x303f50u: goto label_303f50;
        case 0x303f70u: goto label_303f70;
        case 0x303f88u: goto label_303f88;
        case 0x303fb0u: goto label_303fb0;
        case 0x30401cu: goto label_30401c;
        case 0x304064u: goto label_304064;
        case 0x304090u: goto label_304090;
        case 0x3040acu: goto label_3040ac;
        case 0x3040bcu: goto label_3040bc;
        case 0x3040c4u: goto label_3040c4;
        case 0x3040d8u: goto label_3040d8;
        case 0x3040ecu: goto label_3040ec;
        case 0x30410cu: goto label_30410c;
        case 0x304120u: goto label_304120;
        case 0x3041d0u: goto label_3041d0;
        case 0x304318u: goto label_304318;
        case 0x304320u: goto label_304320;
        default: break;
    }

    ctx->pc = 0x303370u;

    // 0x303370: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x303370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x303374: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x303374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x303378: 0xffb10128  sd          $s1, 0x128($sp)
    ctx->pc = 0x303378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 17));
    // 0x30337c: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x30337cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x303380: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x303380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303384: 0x24525870  addiu       $s2, $v0, 0x5870
    ctx->pc = 0x303384u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x303388: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x303388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30338c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30338cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303390: 0xffb00120  sd          $s0, 0x120($sp)
    ctx->pc = 0x303390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 16));
    // 0x303394: 0xffb30138  sd          $s3, 0x138($sp)
    ctx->pc = 0x303394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 19));
    // 0x303398: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x303398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x30339c: 0xffb50148  sd          $s5, 0x148($sp)
    ctx->pc = 0x30339cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 21));
    // 0x3033a0: 0xffb60150  sd          $s6, 0x150($sp)
    ctx->pc = 0x3033a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 22));
    // 0x3033a4: 0xffb70158  sd          $s7, 0x158($sp)
    ctx->pc = 0x3033a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 23));
    // 0x3033a8: 0xffbe0160  sd          $fp, 0x160($sp)
    ctx->pc = 0x3033a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 30));
    // 0x3033ac: 0xffbf0168  sd          $ra, 0x168($sp)
    ctx->pc = 0x3033acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 31));
    // 0x3033b0: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x3033b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x3033b4: 0xc0b8e0a  jal         func_2E3828
    ctx->pc = 0x3033B4u;
    SET_GPR_U32(ctx, 31, 0x3033BCu);
    ctx->pc = 0x3033B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3033B4u;
    // 0x3033b8: 0xe7b40170  swc1        $f20, 0x170($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3828u, 0x3033B4u, 0x3033BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3033BCu;
label_3033bc:
    // 0x3033bc: 0xc0894f6  jal         func_2253D8
    ctx->pc = 0x3033BCu;
    SET_GPR_U32(ctx, 31, 0x3033C4u);
    ctx->pc = 0x3033C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3033BCu;
    // 0x3033c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2253D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2253D8u, 0x3033BCu, 0x3033C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3033C4u;
label_3033c4:
    // 0x3033c4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3033C4u;
    {
        const bool branch_taken_0x3033c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3033c4) {
            ctx->pc = 0x3033C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3033C4u;
            // 0x3033c8: 0x8e230418  lw          $v1, 0x418($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3033DCu;
            goto label_3033dc;
        }
    }
    ctx->pc = 0x3033CCu;
    // 0x3033cc: 0xc091e08  jal         func_247820
    ctx->pc = 0x3033CCu;
    SET_GPR_U32(ctx, 31, 0x3033D4u);
    ctx->pc = 0x3033D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3033CCu;
    // 0x3033d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247820u, 0x3033CCu, 0x3033D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3033D4u;
label_3033d4:
    // 0x3033d4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3033D4u;
    {
        const bool branch_taken_0x3033d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3033d4) {
            ctx->pc = 0x30340Cu;
            goto label_30340c;
        }
    }
    ctx->pc = 0x3033DCu;
label_3033dc:
    // 0x3033dc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3033dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3033e0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3033E0u;
    {
        const bool branch_taken_0x3033e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3033E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3033E0u;
        // 0x3033e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3033e0) {
            ctx->pc = 0x303404u;
            goto label_303404;
        }
    }
    ctx->pc = 0x3033E8u;
    // 0x3033e8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3033e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x3033ec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3033ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3033f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3033f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3033f4: 0xc0b8dfa  jal         func_2E37E8
    ctx->pc = 0x3033F4u;
    SET_GPR_U32(ctx, 31, 0x3033FCu);
    ctx->pc = 0x3033F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3033F4u;
    // 0x3033f8: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E37E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E37E8u, 0x3033F4u, 0x3033FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3033FCu;
label_3033fc:
    // 0x3033fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3033FCu;
    {
        const bool branch_taken_0x3033fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3033fc) {
            ctx->pc = 0x30340Cu;
            goto label_30340c;
        }
    }
    ctx->pc = 0x303404u;
label_303404:
    // 0x303404: 0xc0b8dea  jal         func_2E37A8
    ctx->pc = 0x303404u;
    SET_GPR_U32(ctx, 31, 0x30340Cu);
    ctx->pc = 0x303408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303404u;
    // 0x303408: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E37A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E37A8u, 0x303404u, 0x30340Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30340Cu;
label_30340c:
    // 0x30340c: 0xc0c092e  jal         func_3024B8
    ctx->pc = 0x30340Cu;
    SET_GPR_U32(ctx, 31, 0x303414u);
    ctx->pc = 0x303410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30340Cu;
    // 0x303410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3024B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3024B8u, 0x30340Cu, 0x303414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303414u;
label_303414:
    // 0x303414: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x303414u;
    SET_GPR_U32(ctx, 31, 0x30341Cu);
    ctx->pc = 0x303418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303414u;
    // 0x303418: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x303414u, 0x30341Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30341Cu;
label_30341c:
    // 0x30341c: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x30341cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x303420: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x303420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x303424: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x303424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x303428: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x303428u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30342c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x30342cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x303430: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x303430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x303434: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x303434u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x303438: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x303438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30343c: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x30343cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x303440: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x303440u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x303444: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x303444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x303448: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x303448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30344c: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x30344cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x303450: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x303450u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x303454: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x303454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x303458: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x303458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x30345c: 0xc62c03a0  lwc1        $f12, 0x3A0($s1)
    ctx->pc = 0x30345cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x303460: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x303460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303464: 0xc0b15d0  jal         func_2C5740
    ctx->pc = 0x303464u;
    SET_GPR_U32(ctx, 31, 0x30346Cu);
    ctx->pc = 0x303468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303464u;
    // 0x303468: 0x24a55b40  addiu       $a1, $a1, 0x5B40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5740u, 0x303464u, 0x30346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30346Cu;
label_30346c:
    // 0x30346c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x30346cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303470: 0x24050481  addiu       $a1, $zero, 0x481
    ctx->pc = 0x303470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1153));
    // 0x303474: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x303474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x303478: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x303478u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x30347c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x30347cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303480: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x303480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x303484: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x303484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303488: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x303488u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x30348c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x30348cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303490: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x303490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x303494: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x303494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x303498: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x303498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30349c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x30349cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3034a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3034a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3034a4: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3034A4u;
    {
        const bool branch_taken_0x3034a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3034A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3034A4u;
        // 0x3034a8: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3034a4) {
            ctx->pc = 0x3034C0u;
            goto label_3034c0;
        }
    }
    ctx->pc = 0x3034ACu;
    // 0x3034ac: 0xc091e20  jal         func_247880
    ctx->pc = 0x3034ACu;
    SET_GPR_U32(ctx, 31, 0x3034B4u);
    ctx->pc = 0x247880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247880u, 0x3034ACu, 0x3034B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3034B4u;
label_3034b4:
    // 0x3034b4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x3034b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3034b8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3034b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3034bc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3034bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3034c0:
    // 0x3034c0: 0xc6410074  lwc1        $f1, 0x74($s2)
    ctx->pc = 0x3034c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3034c4: 0xc6400430  lwc1        $f0, 0x430($s2)
    ctx->pc = 0x3034c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3034c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3034c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3034cc: 0x0  nop
    ctx->pc = 0x3034ccu;
    // NOP
    // 0x3034d0: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x3034D0u;
    {
        const bool branch_taken_0x3034d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3034D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3034D0u;
        // 0x3034d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3034d0) {
            ctx->pc = 0x30350Cu;
            goto label_30350c;
        }
    }
    ctx->pc = 0x3034D8u;
    // 0x3034d8: 0x922211c1  lbu         $v0, 0x11C1($s1)
    ctx->pc = 0x3034d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4545)));
    // 0x3034dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3034dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3034e0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3034E0u;
    {
        const bool branch_taken_0x3034e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3034e0) {
            ctx->pc = 0x3034E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3034E0u;
            // 0x3034e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303510u;
            goto label_303510;
        }
    }
    ctx->pc = 0x3034E8u;
    // 0x3034e8: 0x9242045d  lbu         $v0, 0x45D($s2)
    ctx->pc = 0x3034e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1117)));
    // 0x3034ec: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3034ECu;
    {
        const bool branch_taken_0x3034ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3034ec) {
            ctx->pc = 0x3034F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3034ECu;
            // 0x3034f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303510u;
            goto label_303510;
        }
    }
    ctx->pc = 0x3034F4u;
    // 0x3034f4: 0x9242045e  lbu         $v0, 0x45E($s2)
    ctx->pc = 0x3034f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1118)));
    // 0x3034f8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3034F8u;
    {
        const bool branch_taken_0x3034f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3034f8) {
            ctx->pc = 0x3034FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3034F8u;
            // 0x3034fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303510u;
            goto label_303510;
        }
    }
    ctx->pc = 0x303500u;
    // 0x303500: 0x9242027c  lbu         $v0, 0x27C($s2)
    ctx->pc = 0x303500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 636)));
    // 0x303504: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x303504u;
    {
        const bool branch_taken_0x303504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303504) {
            ctx->pc = 0x303510u;
            goto label_303510;
        }
    }
    ctx->pc = 0x30350Cu;
label_30350c:
    // 0x30350c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30350cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_303510:
    // 0x303510: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x303510u;
    {
        const bool branch_taken_0x303510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x303510) {
            ctx->pc = 0x303514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303510u;
            // 0x303514: 0xa22011be  sb          $zero, 0x11BE($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 4542), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303518u;
            goto label_303518;
        }
    }
    ctx->pc = 0x303518u;
label_303518:
    // 0x303518: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x303518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x30351c: 0x9062bb00  lbu         $v0, -0x4500($v1)
    ctx->pc = 0x30351cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FBB00u));
    // 0x303520: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x303520u;
    {
        const bool branch_taken_0x303520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303520u;
        // 0x303524: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303520) {
            ctx->pc = 0x303530u;
            goto label_303530;
        }
    }
    ctx->pc = 0x303528u;
    // 0x303528: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x303528u;
    {
        const bool branch_taken_0x303528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x303528) {
            ctx->pc = 0x303534u;
            goto label_303534;
        }
    }
    ctx->pc = 0x303530u;
label_303530:
    // 0x303530: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x303530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_303534:
    // 0x303534: 0xc0c0974  jal         func_3025D0
    ctx->pc = 0x303534u;
    SET_GPR_U32(ctx, 31, 0x30353Cu);
    ctx->pc = 0x303538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303534u;
    // 0x303538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3025D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3025D0u, 0x303534u, 0x30353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30353Cu;
label_30353c:
    // 0x30353c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30353cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303540: 0xc0c0ab0  jal         func_302AC0
    ctx->pc = 0x303540u;
    SET_GPR_U32(ctx, 31, 0x303548u);
    ctx->pc = 0x303544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303540u;
    // 0x303544: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AC0u, 0x303540u, 0x303548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303548u;
label_303548:
    // 0x303548: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x303548u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30354c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x30354cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x303550: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x303550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x303554: 0x8e231390  lw          $v1, 0x1390($s1)
    ctx->pc = 0x303554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5008)));
    // 0x303558: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x303558u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30355c: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x30355cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x303560: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x303560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x303564: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x303564u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x303568: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x303568u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30356c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30356cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x303570: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x303570u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x303574: 0xf8610020  sqc2        $vf1, 0x20($v1)
    ctx->pc = 0x303574u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x303578: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x303578u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x30357c: 0xf8610030  sqc2        $vf1, 0x30($v1)
    ctx->pc = 0x30357cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x303580: 0x8e2211d0  lw          $v0, 0x11D0($s1)
    ctx->pc = 0x303580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4560)));
    // 0x303584: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x303584u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303588: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x303588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x30358c: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x30358cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303590: 0x24750040  addiu       $s5, $v1, 0x40
    ctx->pc = 0x303590u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x303594: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x303594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x303598: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x303598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x30359c: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x30359cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3035a0: 0x24740070  addiu       $s4, $v1, 0x70
    ctx->pc = 0x3035a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x3035a4: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x3035a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3035a8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3035a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3035ac: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x3035acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3035b0: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x3035b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x3035b4: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x3035b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3035b8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x3035b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x3035bc: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x3035bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3035c0: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x3035c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3035c4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3035c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3035c8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x3035c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x3035cc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3035ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3035d0: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x3035d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3035d4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3035d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3035d8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x3035d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x3035dc: 0xc4610060  lwc1        $f1, 0x60($v1)
    ctx->pc = 0x3035dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3035e0: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x3035e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3035e4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x3035e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3035e8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x3035e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x3035ec: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3035ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3035f0: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x3035f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x3035f4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3035f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3035f8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x3035f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x3035fc: 0xc4610070  lwc1        $f1, 0x70($v1)
    ctx->pc = 0x3035fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303600: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x303600u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x303604: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x303604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303608: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x303608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x30360c: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x30360cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303610: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x303610u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x303614: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x303614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303618: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x303618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x30361c: 0x8e22053c  lw          $v0, 0x53C($s1)
    ctx->pc = 0x30361cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1340)));
    // 0x303620: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x303620u;
    {
        const bool branch_taken_0x303620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303620u;
        // 0x303624: 0x27b00090  addiu       $s0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303620) {
            ctx->pc = 0x3036ECu;
            goto label_3036ec;
        }
    }
    ctx->pc = 0x303628u;
    // 0x303628: 0xc0c0af4  jal         func_302BD0
    ctx->pc = 0x303628u;
    SET_GPR_U32(ctx, 31, 0x303630u);
    ctx->pc = 0x30362Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303628u;
    // 0x30362c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302BD0u, 0x303628u, 0x303630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303630u;
label_303630:
    // 0x303630: 0xc6460464  lwc1        $f6, 0x464($s2)
    ctx->pc = 0x303630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x303634: 0xc6540460  lwc1        $f20, 0x460($s2)
    ctx->pc = 0x303634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x303638: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x303638u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x30363c: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x30363cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x303640: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x303640u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x303644: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x303644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x303648: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x303648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30364c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x30364cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303650: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x303650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303654: 0xc7a500ac  lwc1        $f5, 0xAC($sp)
    ctx->pc = 0x303654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x303658: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x303658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x30365c: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x30365cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x303660: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x303660u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x303664: 0xe7a5009c  swc1        $f5, 0x9C($sp)
    ctx->pc = 0x303664u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x303668: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x303668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30366c: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x30366cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x303670: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x303670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x303674: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x303674u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x303678: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x303678u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x30367c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x30367cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x303680: 0x46010044  c1          0x10044
    ctx->pc = 0x303680u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x303684: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x303684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x303688: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x303688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30368c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30368cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x303690: 0xc440bb3c  lwc1        $f0, -0x44C4($v0)
    ctx->pc = 0x303690u;
    { uint32_t bits = FAST_READ32(0x3FBB3Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303694: 0x0  nop
    ctx->pc = 0x303694u;
    // NOP
    // 0x303698: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x303698u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x30369c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x30369cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3036a0: 0x0  nop
    ctx->pc = 0x3036a0u;
    // NOP
    // 0x3036a4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3036A4u;
    {
        const bool branch_taken_0x3036a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3036a4) {
            ctx->pc = 0x3036A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3036A4u;
            // 0x3036a8: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3036ACu;
            goto label_3036ac;
        }
    }
    ctx->pc = 0x3036ACu;
label_3036ac:
    // 0x3036ac: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x3036acu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x3036b0: 0xc62c1178  lwc1        $f12, 0x1178($s1)
    ctx->pc = 0x3036b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3036b4: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x3036b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x3036b8: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x3036b8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x3036bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3036bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3036c0: 0x24a55b30  addiu       $a1, $a1, 0x5B30
    ctx->pc = 0x3036c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23344));
    // 0x3036c4: 0xc0b15d0  jal         func_2C5740
    ctx->pc = 0x3036C4u;
    SET_GPR_U32(ctx, 31, 0x3036CCu);
    ctx->pc = 0x3036C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3036C4u;
    // 0x3036c8: 0x46066302  mul.s       $f12, $f12, $f6 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5740u, 0x3036C4u, 0x3036CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3036CCu;
label_3036cc:
    // 0x3036cc: 0xc62c1174  lwc1        $f12, 0x1174($s1)
    ctx->pc = 0x3036ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3036d0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x3036d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x3036d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3036d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3036d8: 0x24455b40  addiu       $a1, $v0, 0x5B40
    ctx->pc = 0x3036d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x3036dc: 0xc0b15d0  jal         func_2C5740
    ctx->pc = 0x3036DCu;
    SET_GPR_U32(ctx, 31, 0x3036E4u);
    ctx->pc = 0x3036E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3036DCu;
    // 0x3036e0: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5740u, 0x3036DCu, 0x3036E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3036E4u;
label_3036e4:
    // 0x3036e4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x3036e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3036e8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x3036e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_3036ec:
    // 0x3036ec: 0x26420420  addiu       $v0, $s2, 0x420
    ctx->pc = 0x3036ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1056));
    // 0x3036f0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3036f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3036f4: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x3036f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3036f8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3036f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3036fc: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x3036fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x303700: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x303700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303704: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x303704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303708: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x303708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30370c: 0xc7a500ac  lwc1        $f5, 0xAC($sp)
    ctx->pc = 0x30370cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x303710: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x303710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x303714: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x303714u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x303718: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x303718u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x30371c: 0xe7a5009c  swc1        $f5, 0x9C($sp)
    ctx->pc = 0x30371cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x303720: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x303720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303724: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x303724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x303728: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x303728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30372c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x30372cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x303730: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x303730u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x303734: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x303734u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x303738: 0x46000004  c1          0x4
    ctx->pc = 0x303738u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x30373c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30373cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x303740: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x303740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x303744: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x303744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x303748: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x303748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30374c: 0x0  nop
    ctx->pc = 0x30374cu;
    // NOP
    // 0x303750: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x303750u;
    {
        const bool branch_taken_0x303750 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x303754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303750u;
        // 0x303754: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303750) {
            ctx->pc = 0x30375Cu;
            goto label_30375c;
        }
    }
    ctx->pc = 0x303758u;
    // 0x303758: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x303758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30375c:
    // 0x30375c: 0xc6400074  lwc1        $f0, 0x74($s2)
    ctx->pc = 0x30375cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303760: 0xc6420430  lwc1        $f2, 0x430($s2)
    ctx->pc = 0x303760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303764: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x303764u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x303768: 0xa242045c  sb          $v0, 0x45C($s2)
    ctx->pc = 0x303768u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1116), (uint8_t)GPR_U32(ctx, 2));
    // 0x30376c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x30376cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x303770: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x303770u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303774: 0x0  nop
    ctx->pc = 0x303774u;
    // NOP
    // 0x303778: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
    ctx->pc = 0x303778u;
    {
        const bool branch_taken_0x303778 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303778u;
        // 0x30377c: 0xe6400074  swc1        $f0, 0x74($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x303778) {
            ctx->pc = 0x303864u;
            goto label_303864;
        }
    }
    ctx->pc = 0x303780u;
    // 0x303780: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x303780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303784: 0xc0b8c5c  jal         func_2E3170
    ctx->pc = 0x303784u;
    SET_GPR_U32(ctx, 31, 0x30378Cu);
    ctx->pc = 0x303788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303784u;
    // 0x303788: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3170u, 0x303784u, 0x30378Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30378Cu;
label_30378c:
    // 0x30378c: 0x2413001d  addiu       $s3, $zero, 0x1D
    ctx->pc = 0x30378cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x303790: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x303790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x303794: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x303794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x303798: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x303798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x30379c: 0xe4542c48  swc1        $f20, 0x2C48($v0)
    ctx->pc = 0x30379cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x482C48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482C48u, _value); } while (0); }
    // 0x3037a0: 0xaca0bb44  sw          $zero, -0x44BC($a1)
    ctx->pc = 0x3037a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBB44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBB44u, _value); } while (0);
    // 0x3037a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3037a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3037a8: 0xac60aa88  sw          $zero, -0x5578($v1)
    ctx->pc = 0x3037a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FAA88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FAA88u, _value); } while (0);
    // 0x3037ac: 0x27b700b0  addiu       $s7, $sp, 0xB0
    ctx->pc = 0x3037acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3037b0: 0xae440438  sw          $a0, 0x438($s2)
    ctx->pc = 0x3037b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1080), GPR_U32(ctx, 4));
    // 0x3037b4: 0x27b600a0  addiu       $s6, $sp, 0xA0
    ctx->pc = 0x3037b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3037b8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3037b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x3037bc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x3037bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3037c0:
    // 0x3037c0: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x3037c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3037c4: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x3037c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3037c8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3037c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x3037cc: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x3037ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3037d0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3037d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x3037d4: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3037d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x3037d8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3037d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3037dc: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x3037dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x3037e0: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x3037e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x3037e4: 0xe7a300bc  swc1        $f3, 0xBC($sp)
    ctx->pc = 0x3037e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x3037e8: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x3037e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x3037ec: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x3037ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3037f0: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x3037f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3037f4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3037f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3037f8: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x3037f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3037fc: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x3037fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303800: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x303800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303804: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x303804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303808: 0xc7a300cc  lwc1        $f3, 0xCC($sp)
    ctx->pc = 0x303808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30380c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x30380cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x303810: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x303810u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x303814: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x303814u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x303818: 0xe7a300ac  swc1        $f3, 0xAC($sp)
    ctx->pc = 0x303818u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x30381c: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x30381cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x303820: 0xfa810000  sqc2        $vf1, 0x0($s4)
    ctx->pc = 0x303820u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x303824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x303824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303828: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x303828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30382c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x30382cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303830: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x303830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303834: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x303834u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303838: 0xc0c05e4  jal         func_301790
    ctx->pc = 0x303838u;
    SET_GPR_U32(ctx, 31, 0x303840u);
    ctx->pc = 0x30383Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303838u;
    // 0x30383c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301790u, 0x303838u, 0x303840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303840u;
label_303840:
    // 0x303840: 0x663ffdf  bgezl       $s3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x303840u;
    {
        const bool branch_taken_0x303840 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x303840) {
            ctx->pc = 0x303844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303840u;
            // 0x303844: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3037C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3037c0;
        }
    }
    ctx->pc = 0x303848u;
    // 0x303848: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x303848u;
    SET_GPR_U32(ctx, 31, 0x303850u);
    ctx->pc = 0x30384Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303848u;
    // 0x30384c: 0xa2400434  sb          $zero, 0x434($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 1076), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x303848u, 0x303850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303850u;
label_303850:
    // 0x303850: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x303850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x303854: 0xc0c1134  jal         func_3044D0
    ctx->pc = 0x303854u;
    SET_GPR_U32(ctx, 31, 0x30385Cu);
    ctx->pc = 0x303858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303854u;
    // 0x303858: 0x2444000e  addiu       $a0, $v0, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3044D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3044D0u, 0x303854u, 0x30385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30385Cu;
label_30385c:
    // 0x30385c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30385cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303860: 0xa242045c  sb          $v0, 0x45C($s2)
    ctx->pc = 0x303860u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1116), (uint8_t)GPR_U32(ctx, 2));
label_303864:
    // 0x303864: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x303864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x303868: 0x8c438ec8  lw          $v1, -0x7138($v0)
    ctx->pc = 0x303868u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F8EC8u));
    // 0x30386c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30386cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x303870: 0x14620172  bne         $v1, $v0, . + 4 + (0x172 << 2)
    ctx->pc = 0x303870u;
    {
        const bool branch_taken_0x303870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x303874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303870u;
        // 0x303874: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303870) {
            ctx->pc = 0x303E3Cu;
            goto label_303e3c;
        }
    }
    ctx->pc = 0x303878u;
    // 0x303878: 0xc0c7ca6  jal         func_31F298
    ctx->pc = 0x303878u;
    SET_GPR_U32(ctx, 31, 0x303880u);
    ctx->pc = 0x30387Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303878u;
    // 0x30387c: 0x8e2411d0  lw          $a0, 0x11D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4560)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F298u, 0x303878u, 0x303880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303880u;
label_303880:
    // 0x303880: 0x8e2411d0  lw          $a0, 0x11D0($s1)
    ctx->pc = 0x303880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4560)));
    // 0x303884: 0xc0c29aa  jal         func_30A6A8
    ctx->pc = 0x303884u;
    SET_GPR_U32(ctx, 31, 0x30388Cu);
    ctx->pc = 0x303888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303884u;
    // 0x303888: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A6A8u, 0x303884u, 0x30388Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30388Cu;
label_30388c:
    // 0x30388c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x30388cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x303890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303894: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x303894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x303898: 0xc0b9400  jal         func_2E5000
    ctx->pc = 0x303898u;
    SET_GPR_U32(ctx, 31, 0x3038A0u);
    ctx->pc = 0x30389Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303898u;
    // 0x30389c: 0x9053bb84  lbu         $s3, -0x447C($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294949764)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5000u, 0x303898u, 0x3038A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3038A0u;
label_3038a0:
    // 0x3038a0: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x3038a0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3038a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3038a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3038a8: 0xc0bb79e  jal         func_2EDE78
    ctx->pc = 0x3038A8u;
    SET_GPR_U32(ctx, 31, 0x3038B0u);
    ctx->pc = 0x3038ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3038A8u;
    // 0x3038ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDE78u, 0x3038A8u, 0x3038B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3038B0u;
label_3038b0:
    // 0x3038b0: 0x56e0000a  bnel        $s7, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3038B0u;
    {
        const bool branch_taken_0x3038b0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x3038b0) {
            ctx->pc = 0x3038B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3038B0u;
            // 0x3038b4: 0xc62100d0  lwc1        $f1, 0xD0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3038DCu;
            goto label_3038dc;
        }
    }
    ctx->pc = 0x3038B8u;
    // 0x3038b8: 0x56000008  bnel        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3038B8u;
    {
        const bool branch_taken_0x3038b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3038b8) {
            ctx->pc = 0x3038BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3038B8u;
            // 0x3038bc: 0xc62100d0  lwc1        $f1, 0xD0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3038DCu;
            goto label_3038dc;
        }
    }
    ctx->pc = 0x3038C0u;
    // 0x3038c0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3038C0u;
    {
        const bool branch_taken_0x3038c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3038c0) {
            ctx->pc = 0x3038C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3038C0u;
            // 0x3038c4: 0xc62100d0  lwc1        $f1, 0xD0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3038DCu;
            goto label_3038dc;
        }
    }
    ctx->pc = 0x3038C8u;
    // 0x3038c8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3038c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3038cc: 0x9043bdfc  lbu         $v1, -0x4204($v0)
    ctx->pc = 0x3038ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FBDFCu));
    // 0x3038d0: 0x1060007b  beqz        $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x3038D0u;
    {
        const bool branch_taken_0x3038d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3038d0) {
            ctx->pc = 0x303AC0u;
            goto label_303ac0;
        }
    }
    ctx->pc = 0x3038D8u;
    // 0x3038d8: 0xc62100d0  lwc1        $f1, 0xD0($s1)
    ctx->pc = 0x3038d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3038dc:
    // 0x3038dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3038dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3038e0: 0x0  nop
    ctx->pc = 0x3038e0u;
    // NOP
    // 0x3038e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3038e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3038e8: 0x0  nop
    ctx->pc = 0x3038e8u;
    // NOP
    // 0x3038ec: 0x45000074  bc1f        . + 4 + (0x74 << 2)
    ctx->pc = 0x3038ECu;
    {
        const bool branch_taken_0x3038ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3038F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3038ECu;
        // 0x3038f0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3038ec) {
            ctx->pc = 0x303AC0u;
            goto label_303ac0;
        }
    }
    ctx->pc = 0x3038F4u;
    // 0x3038f4: 0xac40aa88  sw          $zero, -0x5578($v0)
    ctx->pc = 0x3038f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945416), GPR_U32(ctx, 0));
    // 0x3038f8: 0x9223047d  lbu         $v1, 0x47D($s1)
    ctx->pc = 0x3038f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
    // 0x3038fc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3038FCu;
    {
        const bool branch_taken_0x3038fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3038fc) {
            ctx->pc = 0x303900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3038FCu;
            // 0x303900: 0x9242027c  lbu         $v0, 0x27C($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303910u;
            goto label_303910;
        }
    }
    ctx->pc = 0x303904u;
    // 0x303904: 0xc08f956  jal         func_23E558
    ctx->pc = 0x303904u;
    SET_GPR_U32(ctx, 31, 0x30390Cu);
    ctx->pc = 0x303908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303904u;
    // 0x303908: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E558u, 0x303904u, 0x30390Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30390Cu;
label_30390c:
    // 0x30390c: 0x9242027c  lbu         $v0, 0x27C($s2)
    ctx->pc = 0x30390cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 636)));
label_303910:
    // 0x303910: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x303910u;
    {
        const bool branch_taken_0x303910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303910u;
        // 0x303914: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303910) {
            ctx->pc = 0x3039B8u;
            goto label_3039b8;
        }
    }
    ctx->pc = 0x303918u;
    // 0x303918: 0x1660000a  bnez        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x303918u;
    {
        const bool branch_taken_0x303918 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x30391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303918u;
        // 0x30391c: 0xac40462c  sw          $zero, 0x462C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17964), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303918) {
            ctx->pc = 0x303944u;
            goto label_303944;
        }
    }
    ctx->pc = 0x303920u;
    // 0x303920: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x303920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x303924: 0xc0c259a  jal         func_309668
    ctx->pc = 0x303924u;
    SET_GPR_U32(ctx, 31, 0x30392Cu);
    ctx->pc = 0x303928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303924u;
    // 0x303928: 0x24846920  addiu       $a0, $a0, 0x6920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309668u, 0x303924u, 0x30392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30392Cu;
label_30392c:
    // 0x30392c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30392cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303930: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x303930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x303934: 0xc0c1134  jal         func_3044D0
    ctx->pc = 0x303934u;
    SET_GPR_U32(ctx, 31, 0x30393Cu);
    ctx->pc = 0x303938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303934u;
    // 0x303938: 0xa2420434  sb          $v0, 0x434($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 1076), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3044D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3044D0u, 0x303934u, 0x30393Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30393Cu;
label_30393c:
    // 0x30393c: 0xc0c0954  jal         func_302550
    ctx->pc = 0x30393Cu;
    SET_GPR_U32(ctx, 31, 0x303944u);
    ctx->pc = 0x303940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30393Cu;
    // 0x303940: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302550u, 0x30393Cu, 0x303944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303944u;
label_303944:
    // 0x303944: 0x924203d8  lbu         $v0, 0x3D8($s2)
    ctx->pc = 0x303944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 984)));
    // 0x303948: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x303948u;
    {
        const bool branch_taken_0x303948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303948u;
        // 0x30394c: 0xa240027c  sb          $zero, 0x27C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 636), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303948) {
            ctx->pc = 0x303960u;
            goto label_303960;
        }
    }
    ctx->pc = 0x303950u;
    // 0x303950: 0x56600004  bnel        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x303950u;
    {
        const bool branch_taken_0x303950 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x303950) {
            ctx->pc = 0x303954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303950u;
            // 0x303954: 0x8e2211d0  lw          $v0, 0x11D0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303964u;
            goto label_303964;
        }
    }
    ctx->pc = 0x303958u;
    // 0x303958: 0xc0c095e  jal         func_302578
    ctx->pc = 0x303958u;
    SET_GPR_U32(ctx, 31, 0x303960u);
    ctx->pc = 0x302578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302578u, 0x303958u, 0x303960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303960u;
label_303960:
    // 0x303960: 0x8e2211d0  lw          $v0, 0x11D0($s1)
    ctx->pc = 0x303960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4560)));
label_303964:
    // 0x303964: 0x8c440100  lw          $a0, 0x100($v0)
    ctx->pc = 0x303964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x303968: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x303968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x30396c: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x30396cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x303970: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x303970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
    // 0x303974: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x303974u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x303978: 0xf84119d0  sqc2        $vf1, 0x19D0($v0)
    ctx->pc = 0x303978u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5B4210u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5B4210u, _value); } while (0);
    // 0x30397c: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x30397cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x303980: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x303980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x303984: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x303984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
    // 0x303988: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x303988u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30398c: 0xf86119e0  sqc2        $vf1, 0x19E0($v1)
    ctx->pc = 0x30398cu;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5B4220u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5B4220u, _value); } while (0);
    // 0x303990: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x303990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x303994: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x303994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x303998: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x303998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
    // 0x30399c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x30399cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3039a0: 0xf84119f0  sqc2        $vf1, 0x19F0($v0)
    ctx->pc = 0x3039a0u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5B4230u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5B4230u, _value); } while (0);
    // 0x3039a4: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x3039a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x3039a8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x3039a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3039ac: 0xf8411a00  sqc2        $vf1, 0x1A00($v0)
    ctx->pc = 0x3039acu;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5B4240u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5B4240u, _value); } while (0);
    // 0x3039b0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3039B0u;
    {
        const bool branch_taken_0x3039b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3039B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3039B0u;
        // 0x3039b4: 0x3c03005b  lui         $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3039b0) {
            ctx->pc = 0x3039F4u;
            goto label_3039f4;
        }
    }
    ctx->pc = 0x3039B8u;
label_3039b8:
    // 0x3039b8: 0x92420620  lbu         $v0, 0x620($s2)
    ctx->pc = 0x3039b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1568)));
    // 0x3039bc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3039BCu;
    {
        const bool branch_taken_0x3039bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3039C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3039BCu;
        // 0x3039c0: 0x3c03005b  lui         $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3039bc) {
            ctx->pc = 0x3039F4u;
            goto label_3039f4;
        }
    }
    ctx->pc = 0x3039C4u;
    // 0x3039c4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3039c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3039c8: 0x9043bdfc  lbu         $v1, -0x4204($v0)
    ctx->pc = 0x3039c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FBDFCu));
    // 0x3039cc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3039CCu;
    {
        const bool branch_taken_0x3039cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3039D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3039CCu;
        // 0x3039d0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3039cc) {
            ctx->pc = 0x3039F0u;
            goto label_3039f0;
        }
    }
    ctx->pc = 0x3039D4u;
    // 0x3039d4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3039d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3039d8: 0x3c05005b  lui         $a1, 0x5B
    ctx->pc = 0x3039d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)91 << 16));
    // 0x3039dc: 0x8c44bd48  lw          $a0, -0x42B8($v0)
    ctx->pc = 0x3039dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
    // 0x3039e0: 0xc46cbdf8  lwc1        $f12, -0x4208($v1)
    ctx->pc = 0x3039e0u;
    { uint32_t bits = FAST_READ32(0x3FBDF8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3039e4: 0x24a549a0  addiu       $a1, $a1, 0x49A0
    ctx->pc = 0x3039e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18848));
    // 0x3039e8: 0xc0c7f22  jal         func_31FC88
    ctx->pc = 0x3039E8u;
    SET_GPR_U32(ctx, 31, 0x3039F0u);
    ctx->pc = 0x3039ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3039E8u;
    // 0x3039ec: 0x3a660001  xori        $a2, $s3, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FC88u, 0x3039E8u, 0x3039F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3039F0u;
label_3039f0:
    // 0x3039f0: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x3039f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
label_3039f4:
    // 0x3039f4: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x3039f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
    // 0x3039f8: 0x90620011  lbu         $v0, 0x11($v1)
    ctx->pc = 0x3039f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
    // 0x3039fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3039FCu;
    {
        const bool branch_taken_0x3039fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3039FCu;
        // 0x303a00: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3039fc) {
            ctx->pc = 0x303A18u;
            goto label_303a18;
        }
    }
    ctx->pc = 0x303A04u;
    // 0x303a04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x303a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303a08: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x303a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303a0c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x303a0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303a10: 0xc0c05e4  jal         func_301790
    ctx->pc = 0x303A10u;
    SET_GPR_U32(ctx, 31, 0x303A18u);
    ctx->pc = 0x303A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303A10u;
    // 0x303a14: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301790u, 0x303A10u, 0x303A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303A18u;
label_303a18:
    // 0x303a18: 0x56e00007  bnel        $s7, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x303A18u;
    {
        const bool branch_taken_0x303a18 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x303a18) {
            ctx->pc = 0x303A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303A18u;
            // 0x303a1c: 0x8e2211d0  lw          $v0, 0x11D0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303A38u;
            goto label_303a38;
        }
    }
    ctx->pc = 0x303A20u;
    // 0x303a20: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x303a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x303a24: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x303a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
    // 0x303a28: 0x90620011  lbu         $v0, 0x11($v1)
    ctx->pc = 0x303a28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5B2851u));
    // 0x303a2c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x303A2Cu;
    {
        const bool branch_taken_0x303a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303A2Cu;
        // 0x303a30: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303a2c) {
            ctx->pc = 0x303A88u;
            goto label_303a88;
        }
    }
    ctx->pc = 0x303A34u;
    // 0x303a34: 0x8e2211d0  lw          $v0, 0x11D0($s1)
    ctx->pc = 0x303a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4560)));
label_303a38:
    // 0x303a38: 0x8c440100  lw          $a0, 0x100($v0)
    ctx->pc = 0x303a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x303a3c: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x303a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x303a40: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x303a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x303a44: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x303a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
    // 0x303a48: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x303a48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x303a4c: 0xf84119d0  sqc2        $vf1, 0x19D0($v0)
    ctx->pc = 0x303a4cu;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5B4210u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5B4210u, _value); } while (0);
    // 0x303a50: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x303a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x303a54: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x303a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x303a58: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x303a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
    // 0x303a5c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x303a5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x303a60: 0xf86119e0  sqc2        $vf1, 0x19E0($v1)
    ctx->pc = 0x303a60u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5B4220u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5B4220u, _value); } while (0);
    // 0x303a64: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x303a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x303a68: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x303a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x303a6c: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x303a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
    // 0x303a70: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x303a70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x303a74: 0xf84119f0  sqc2        $vf1, 0x19F0($v0)
    ctx->pc = 0x303a74u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5B4230u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5B4230u, _value); } while (0);
    // 0x303a78: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x303a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x303a7c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x303a7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x303a80: 0xf8411a00  sqc2        $vf1, 0x1A00($v0)
    ctx->pc = 0x303a80u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5B4240u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5B4240u, _value); } while (0);
    // 0x303a84: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x303a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_303a88:
    // 0x303a88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x303a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303a8c: 0xc0c10dc  jal         func_304370
    ctx->pc = 0x303A8Cu;
    SET_GPR_U32(ctx, 31, 0x303A94u);
    ctx->pc = 0x303A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303A8Cu;
    // 0x303a90: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304370u, 0x303A8Cu, 0x303A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303A94u;
label_303a94:
    // 0x303a94: 0xc0c0922  jal         func_302488
    ctx->pc = 0x303A94u;
    SET_GPR_U32(ctx, 31, 0x303A9Cu);
    ctx->pc = 0x303A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303A94u;
    // 0x303a98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302488u, 0x303A94u, 0x303A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303A9Cu;
label_303a9c:
    // 0x303a9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x303a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303aa0: 0xa242045e  sb          $v0, 0x45E($s2)
    ctx->pc = 0x303aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1118), (uint8_t)GPR_U32(ctx, 2));
    // 0x303aa4: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x303aa4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x303aa8: 0xfa410420  sqc2        $vf1, 0x420($s2)
    ctx->pc = 0x303aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1056), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x303aac: 0x8e2211d0  lw          $v0, 0x11D0($s1)
    ctx->pc = 0x303aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4560)));
    // 0x303ab0: 0xc0c48da  jal         func_312368
    ctx->pc = 0x303AB0u;
    SET_GPR_U32(ctx, 31, 0x303AB8u);
    ctx->pc = 0x303AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303AB0u;
    // 0x303ab4: 0x8c440100  lw          $a0, 0x100($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x303AB0u, 0x303AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303AB8u;
label_303ab8:
    // 0x303ab8: 0x10000220  b           . + 4 + (0x220 << 2)
    ctx->pc = 0x303AB8u;
    {
        const bool branch_taken_0x303ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303AB8u;
        // 0x303abc: 0xdfb00120  ld          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ab8) {
            ctx->pc = 0x30433Cu;
            goto label_30433c;
        }
    }
    ctx->pc = 0x303AC0u;
label_303ac0:
    // 0x303ac0: 0x56c00014  bnel        $s6, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x303AC0u;
    {
        const bool branch_taken_0x303ac0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x303ac0) {
            ctx->pc = 0x303AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303AC0u;
            // 0x303ac4: 0x9222047d  lbu         $v0, 0x47D($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303B14u;
            goto label_303b14;
        }
    }
    ctx->pc = 0x303AC8u;
    // 0x303ac8: 0xc0c7950  jal         func_31E540
    ctx->pc = 0x303AC8u;
    SET_GPR_U32(ctx, 31, 0x303AD0u);
    ctx->pc = 0x303ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303AC8u;
    // 0x303acc: 0x8e2411d0  lw          $a0, 0x11D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4560)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E540u, 0x303AC8u, 0x303AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303AD0u;
label_303ad0:
    // 0x303ad0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x303AD0u;
    {
        const bool branch_taken_0x303ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303ad0) {
            ctx->pc = 0x303AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303AD0u;
            // 0x303ad4: 0xc62100d0  lwc1        $f1, 0xD0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x303AECu;
            goto label_303aec;
        }
    }
    ctx->pc = 0x303AD8u;
    // 0x303ad8: 0x922211c1  lbu         $v0, 0x11C1($s1)
    ctx->pc = 0x303ad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4545)));
    // 0x303adc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x303adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x303ae0: 0x104000d6  beqz        $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x303AE0u;
    {
        const bool branch_taken_0x303ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303AE0u;
        // 0x303ae4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ae0) {
            ctx->pc = 0x303E3Cu;
            goto label_303e3c;
        }
    }
    ctx->pc = 0x303AE8u;
    // 0x303ae8: 0xc62100d0  lwc1        $f1, 0xD0($s1)
    ctx->pc = 0x303ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_303aec:
    // 0x303aec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x303aecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303af0: 0x0  nop
    ctx->pc = 0x303af0u;
    // NOP
    // 0x303af4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x303af4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303af8: 0x0  nop
    ctx->pc = 0x303af8u;
    // NOP
    // 0x303afc: 0x450000ce  bc1f        . + 4 + (0xCE << 2)
    ctx->pc = 0x303AFCu;
    {
        const bool branch_taken_0x303afc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x303B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303AFCu;
        // 0x303b00: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303afc) {
            ctx->pc = 0x303E38u;
            goto label_303e38;
        }
    }
    ctx->pc = 0x303B04u;
    // 0x303b04: 0x90625870  lbu         $v0, 0x5870($v1)
    ctx->pc = 0x303b04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22640)));
    // 0x303b08: 0x144000cc  bnez        $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x303B08u;
    {
        const bool branch_taken_0x303b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303B08u;
        // 0x303b0c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303b08) {
            ctx->pc = 0x303E3Cu;
            goto label_303e3c;
        }
    }
    ctx->pc = 0x303B10u;
    // 0x303b10: 0x9222047d  lbu         $v0, 0x47D($s1)
    ctx->pc = 0x303b10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
label_303b14:
    // 0x303b14: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x303B14u;
    {
        const bool branch_taken_0x303b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303b14) {
            ctx->pc = 0x303B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303B14u;
            // 0x303b18: 0x9242027c  lbu         $v0, 0x27C($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303B28u;
            goto label_303b28;
        }
    }
    ctx->pc = 0x303B1Cu;
    // 0x303b1c: 0xc08f956  jal         func_23E558
    ctx->pc = 0x303B1Cu;
    SET_GPR_U32(ctx, 31, 0x303B24u);
    ctx->pc = 0x303B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303B1Cu;
    // 0x303b20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E558u, 0x303B1Cu, 0x303B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303B24u;
label_303b24:
    // 0x303b24: 0x9242027c  lbu         $v0, 0x27C($s2)
    ctx->pc = 0x303b24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 636)));
label_303b28:
    // 0x303b28: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x303B28u;
    {
        const bool branch_taken_0x303b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303B28u;
        // 0x303b2c: 0x3c130048  lui         $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303b28) {
            ctx->pc = 0x303BA0u;
            goto label_303ba0;
        }
    }
    ctx->pc = 0x303B30u;
    // 0x303b30: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x303b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x303b34: 0xc0c259a  jal         func_309668
    ctx->pc = 0x303B34u;
    SET_GPR_U32(ctx, 31, 0x303B3Cu);
    ctx->pc = 0x303B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303B34u;
    // 0x303b38: 0x24846920  addiu       $a0, $a0, 0x6920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309668u, 0x303B34u, 0x303B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303B3Cu;
label_303b3c:
    // 0x303b3c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x303B3Cu;
    SET_GPR_U32(ctx, 31, 0x303B44u);
    ctx->pc = 0x303B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303B3Cu;
    // 0x303b40: 0xa2400434  sb          $zero, 0x434($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 1076), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x303B3Cu, 0x303B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303B44u;
label_303b44:
    // 0x303b44: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x303b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x303b48: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x303b48u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x303b4c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x303B4Cu;
    {
        const bool branch_taken_0x303b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x303b4c) {
            ctx->pc = 0x303B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303B4Cu;
            // 0x303b50: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x303B54u;
            goto label_303b54;
        }
    }
    ctx->pc = 0x303B54u;
label_303b54:
    // 0x303b54: 0x2010  mfhi        $a0
    ctx->pc = 0x303b54u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x303b58: 0xc0c1134  jal         func_3044D0
    ctx->pc = 0x303B58u;
    SET_GPR_U32(ctx, 31, 0x303B60u);
    ctx->pc = 0x303B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303B58u;
    // 0x303b5c: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3044D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3044D0u, 0x303B58u, 0x303B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303B60u;
label_303b60:
    // 0x303b60: 0xc0a03d8  jal         func_280F60
    ctx->pc = 0x303B60u;
    SET_GPR_U32(ctx, 31, 0x303B68u);
    ctx->pc = 0x303B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303B60u;
    // 0x303b64: 0xa240027c  sb          $zero, 0x27C($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 636), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F60u, 0x303B60u, 0x303B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303B68u;
label_303b68:
    // 0x303b68: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x303B68u;
    {
        const bool branch_taken_0x303b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303b68) {
            ctx->pc = 0x303B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303B68u;
            // 0x303b6c: 0xc6400074  lwc1        $f0, 0x74($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x303B8Cu;
            goto label_303b8c;
        }
    }
    ctx->pc = 0x303B70u;
    // 0x303b70: 0xc0a03d4  jal         func_280F50
    ctx->pc = 0x303B70u;
    SET_GPR_U32(ctx, 31, 0x303B78u);
    ctx->pc = 0x280F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F50u, 0x303B70u, 0x303B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303B78u;
label_303b78:
    // 0x303b78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x303b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x303b7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x303b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303b80: 0x0  nop
    ctx->pc = 0x303b80u;
    // NOP
    // 0x303b84: 0xe6602c48  swc1        $f0, 0x2C48($s3)
    ctx->pc = 0x303b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 11336), bits); }
    // 0x303b88: 0xc6400074  lwc1        $f0, 0x74($s2)
    ctx->pc = 0x303b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_303b8c:
    // 0x303b8c: 0xc6410430  lwc1        $f1, 0x430($s2)
    ctx->pc = 0x303b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303b90: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x303b90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303b94: 0x0  nop
    ctx->pc = 0x303b94u;
    // NOP
    // 0x303b98: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x303B98u;
    {
        const bool branch_taken_0x303b98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x303b98) {
            ctx->pc = 0x303B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303B98u;
            // 0x303b9c: 0xe6410074  swc1        $f1, 0x74($s2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x303BA0u;
            goto label_303ba0;
        }
    }
    ctx->pc = 0x303BA0u;
label_303ba0:
    // 0x303ba0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x303ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x303ba4: 0x924303d8  lbu         $v1, 0x3D8($s2)
    ctx->pc = 0x303ba4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 984)));
    // 0x303ba8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x303BA8u;
    {
        const bool branch_taken_0x303ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x303BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303BA8u;
        // 0x303bac: 0xac40aa88  sw          $zero, -0x5578($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ba8) {
            ctx->pc = 0x303BB8u;
            goto label_303bb8;
        }
    }
    ctx->pc = 0x303BB0u;
    // 0x303bb0: 0xc0c095e  jal         func_302578
    ctx->pc = 0x303BB0u;
    SET_GPR_U32(ctx, 31, 0x303BB8u);
    ctx->pc = 0x302578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302578u, 0x303BB0u, 0x303BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303BB8u;
label_303bb8:
    // 0x303bb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x303bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303bbc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x303bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303bc0: 0xc0c10dc  jal         func_304370
    ctx->pc = 0x303BC0u;
    SET_GPR_U32(ctx, 31, 0x303BC8u);
    ctx->pc = 0x303BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303BC0u;
    // 0x303bc4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304370u, 0x303BC0u, 0x303BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303BC8u;
label_303bc8:
    // 0x303bc8: 0xc64002e4  lwc1        $f0, 0x2E4($s2)
    ctx->pc = 0x303bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303bcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x303bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303bd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x303bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x303bd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x303bd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x303bd8: 0x0  nop
    ctx->pc = 0x303bd8u;
    // NOP
    // 0x303bdc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x303bdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x303be0: 0xc0c0922  jal         func_302488
    ctx->pc = 0x303BE0u;
    SET_GPR_U32(ctx, 31, 0x303BE8u);
    ctx->pc = 0x303BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303BE0u;
    // 0x303be4: 0xe64002e4  swc1        $f0, 0x2E4($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 740), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x302488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302488u, 0x303BE0u, 0x303BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303BE8u;
label_303be8:
    // 0x303be8: 0x924202f2  lbu         $v0, 0x2F2($s2)
    ctx->pc = 0x303be8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 754)));
    // 0x303bec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x303BECu;
    {
        const bool branch_taken_0x303bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303BECu;
        // 0x303bf0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303bec) {
            ctx->pc = 0x303C00u;
            goto label_303c00;
        }
    }
    ctx->pc = 0x303BF4u;
    // 0x303bf4: 0xc0c07e4  jal         func_301F90
    ctx->pc = 0x303BF4u;
    SET_GPR_U32(ctx, 31, 0x303BFCu);
    ctx->pc = 0x303BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303BF4u;
    // 0x303bf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301F90u, 0x303BF4u, 0x303BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303BFCu;
label_303bfc:
    // 0x303bfc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x303bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_303c00:
    // 0x303c00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x303c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303c04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x303c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303c08: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x303c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x303c0c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x303C0Cu;
    {
        const bool branch_taken_0x303c0c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x303C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303C0Cu;
        // 0x303c10: 0xa243045d  sb          $v1, 0x45D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1117), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303c0c) {
            ctx->pc = 0x303C28u;
            goto label_303c28;
        }
    }
    ctx->pc = 0x303C14u;
    // 0x303c14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x303c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303c18: 0x0  nop
    ctx->pc = 0x303c18u;
    // NOP
    // 0x303c1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x303c1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x303c20: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x303C20u;
    {
        const bool branch_taken_0x303c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x303c20) {
            ctx->pc = 0x303C44u;
            goto label_303c44;
        }
    }
    ctx->pc = 0x303C28u;
label_303c28:
    // 0x303c28: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x303c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x303c2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x303c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x303c30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x303c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x303c34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x303c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303c38: 0x0  nop
    ctx->pc = 0x303c38u;
    // NOP
    // 0x303c3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x303c3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x303c40: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x303c40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_303c44:
    // 0x303c44: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x303c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x303c48: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x303c48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x303c4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x303c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x303c50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x303c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303c54: 0xc0bfe9e  jal         func_2FFA78
    ctx->pc = 0x303C54u;
    SET_GPR_U32(ctx, 31, 0x303C5Cu);
    ctx->pc = 0x303C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303C54u;
    // 0x303c58: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFA78u, 0x303C54u, 0x303C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303C5Cu;
label_303c5c:
    // 0x303c5c: 0x8e022b00  lw          $v0, 0x2B00($s0)
    ctx->pc = 0x303c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11008)));
    // 0x303c60: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x303C60u;
    {
        const bool branch_taken_0x303c60 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x303C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303C60u;
        // 0x303c64: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303c60) {
            ctx->pc = 0x303C7Cu;
            goto label_303c7c;
        }
    }
    ctx->pc = 0x303C68u;
    // 0x303c68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x303c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303c6c: 0x0  nop
    ctx->pc = 0x303c6cu;
    // NOP
    // 0x303c70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x303c70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x303c74: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x303C74u;
    {
        const bool branch_taken_0x303c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x303c74) {
            ctx->pc = 0x303C94u;
            goto label_303c94;
        }
    }
    ctx->pc = 0x303C7Cu;
label_303c7c:
    // 0x303c7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x303c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x303c80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x303c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x303c84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x303c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303c88: 0x0  nop
    ctx->pc = 0x303c88u;
    // NOP
    // 0x303c8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x303c8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x303c90: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x303c90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_303c94:
    // 0x303c94: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x303c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x303c98: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x303c98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x303c9c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x303c9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x303ca0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x303ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303ca4: 0xc0bfea6  jal         func_2FFA98
    ctx->pc = 0x303CA4u;
    SET_GPR_U32(ctx, 31, 0x303CACu);
    ctx->pc = 0x303CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303CA4u;
    // 0x303ca8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFA98u, 0x303CA4u, 0x303CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303CACu;
label_303cac:
    // 0x303cac: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x303cacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x303cb0: 0xc64c0050  lwc1        $f12, 0x50($s2)
    ctx->pc = 0x303cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x303cb4: 0x24a55b50  addiu       $a1, $a1, 0x5B50
    ctx->pc = 0x303cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23376));
    // 0x303cb8: 0xc0b15d0  jal         func_2C5740
    ctx->pc = 0x303CB8u;
    SET_GPR_U32(ctx, 31, 0x303CC0u);
    ctx->pc = 0x303CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303CB8u;
    // 0x303cbc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5740u, 0x303CB8u, 0x303CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303CC0u;
label_303cc0:
    // 0x303cc0: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x303cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303cc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x303cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x303cc8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x303cc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x303ccc: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x303cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x303cd0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x303cd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x303cd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x303cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x303cd8: 0x0  nop
    ctx->pc = 0x303cd8u;
    // NOP
    // 0x303cdc: 0x0  nop
    ctx->pc = 0x303cdcu;
    // NOP
    // 0x303ce0: 0x46003003  div.s       $f0, $f6, $f0
    ctx->pc = 0x303ce0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[6], ctx->f[0]); }
    // 0x303ce4: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x303ce4u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x303ce8: 0xe6602c48  swc1        $f0, 0x2C48($s3)
    ctx->pc = 0x303ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 11336), bits); }
    // 0x303cec: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x303cecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x303cf0: 0xfa410420  sqc2        $vf1, 0x420($s2)
    ctx->pc = 0x303cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1056), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x303cf4: 0x922211be  lbu         $v0, 0x11BE($s1)
    ctx->pc = 0x303cf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4542)));
    // 0x303cf8: 0x1040018f  beqz        $v0, . + 4 + (0x18F << 2)
    ctx->pc = 0x303CF8u;
    {
        const bool branch_taken_0x303cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303CF8u;
        // 0x303cfc: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303cf8) {
            ctx->pc = 0x304338u;
            goto label_304338;
        }
    }
    ctx->pc = 0x303D00u;
    // 0x303d00: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x303d00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x303d04: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x303d04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x303d08: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x303d08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x303d0c: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x303d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x303d10: 0xc645000c  lwc1        $f5, 0xC($s2)
    ctx->pc = 0x303d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x303d14: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x303d14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x303d18: 0xc6440010  lwc1        $f4, 0x10($s2)
    ctx->pc = 0x303d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x303d1c: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x303d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303d20: 0xc7a300b4  lwc1        $f3, 0xB4($sp)
    ctx->pc = 0x303d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x303d24: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x303d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303d28: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x303d28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303d2c: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x303d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303d30: 0xc655001c  lwc1        $f21, 0x1C($s2)
    ctx->pc = 0x303d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x303d34: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x303d34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x303d38: 0xe7a300a4  swc1        $f3, 0xA4($sp)
    ctx->pc = 0x303d38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x303d3c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x303d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x303d40: 0xe7a100ac  swc1        $f1, 0xAC($sp)
    ctx->pc = 0x303d40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x303d44: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x303D44u;
    {
        const bool branch_taken_0x303d44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x303D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303D44u;
        // 0x303d48: 0xc6540014  lwc1        $f20, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x303d44) {
            ctx->pc = 0x303D78u;
            goto label_303d78;
        }
    }
    ctx->pc = 0x303D4Cu;
    // 0x303d4c: 0x0  nop
    ctx->pc = 0x303d4cu;
    // NOP
    // 0x303d50: 0x0  nop
    ctx->pc = 0x303d50u;
    // NOP
    // 0x303d54: 0x46042803  div.s       $f0, $f5, $f4
    ctx->pc = 0x303d54u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[5], ctx->f[4]); }
    // 0x303d58: 0x4600a046  mov.s       $f1, $f20
    ctx->pc = 0x303d58u;
    ctx->f[1] = FPU_MOV_S(ctx->f[20]);
    // 0x303d5c: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x303d5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x303d60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x303d60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303d64: 0x0  nop
    ctx->pc = 0x303d64u;
    // NOP
    // 0x303d68: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x303D68u;
    {
        const bool branch_taken_0x303d68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x303D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303D68u;
        // 0x303d6c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x303d68) {
            ctx->pc = 0x303D74u;
            goto label_303d74;
        }
    }
    ctx->pc = 0x303D70u;
    // 0x303d70: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x303d70u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_303d74:
    // 0x303d74: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x303d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_303d78:
    // 0x303d78: 0xc64c0018  lwc1        $f12, 0x18($s2)
    ctx->pc = 0x303d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x303d7c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x303d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303d80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x303d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303d84: 0xc0c08ac  jal         func_3022B0
    ctx->pc = 0x303D84u;
    SET_GPR_U32(ctx, 31, 0x303D8Cu);
    ctx->pc = 0x303D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303D84u;
    // 0x303d88: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022B0u, 0x303D84u, 0x303D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303D8Cu;
label_303d8c:
    // 0x303d8c: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x303d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x303d90: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x303d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x303d94: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x303d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303d98: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x303d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303d9c: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x303d9cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x303da0: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x303da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303da4: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x303da4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x303da8: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x303da8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x303dac: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x303dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x303db0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x303db0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x303db4: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x303db4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x303db8: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x303db8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x303dbc: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x303dbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x303dc0: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x303dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x303dc4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x303dc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x303dc8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x303dc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x303dcc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x303dccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x303dd0: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x303dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x303dd4: 0xc7a300d0  lwc1        $f3, 0xD0($sp)
    ctx->pc = 0x303dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x303dd8: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x303dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x303ddc: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x303ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303de0: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x303de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303de4: 0xc7a200dc  lwc1        $f2, 0xDC($sp)
    ctx->pc = 0x303de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303de8: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x303de8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x303dec: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x303decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x303df0: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x303df0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x303df4: 0xe7a200bc  swc1        $f2, 0xBC($sp)
    ctx->pc = 0x303df4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x303df8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x303df8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x303dfc: 0xfa810000  sqc2        $vf1, 0x0($s4)
    ctx->pc = 0x303dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x303e00: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x303e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303e04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x303e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x303e08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x303e08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x303e0c: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x303e0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x303e10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x303e10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303e14: 0x0  nop
    ctx->pc = 0x303e14u;
    // NOP
    // 0x303e18: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x303E18u;
    {
        const bool branch_taken_0x303e18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x303E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E18u;
        // 0x303e1c: 0xe6400018  swc1        $f0, 0x18($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x303e18) {
            ctx->pc = 0x303E24u;
            goto label_303e24;
        }
    }
    ctx->pc = 0x303E20u;
    // 0x303e20: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x303e20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_303e24:
    // 0x303e24: 0x8e2211d0  lw          $v0, 0x11D0($s1)
    ctx->pc = 0x303e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4560)));
    // 0x303e28: 0xc0c48da  jal         func_312368
    ctx->pc = 0x303E28u;
    SET_GPR_U32(ctx, 31, 0x303E30u);
    ctx->pc = 0x303E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303E28u;
    // 0x303e2c: 0x8c440100  lw          $a0, 0x100($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x303E28u, 0x303E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303E30u;
label_303e30:
    // 0x303e30: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x303E30u;
    {
        const bool branch_taken_0x303e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E30u;
        // 0x303e34: 0xdfb00120  ld          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303e30) {
            ctx->pc = 0x30433Cu;
            goto label_30433c;
        }
    }
    ctx->pc = 0x303E38u;
label_303e38:
    // 0x303e38: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x303e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_303e3c:
    // 0x303e3c: 0x9243045d  lbu         $v1, 0x45D($s2)
    ctx->pc = 0x303e3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1117)));
    // 0x303e40: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x303E40u;
    {
        const bool branch_taken_0x303e40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x303E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E40u;
        // 0x303e44: 0xa040bdfc  sb          $zero, -0x4204($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950396), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303e40) {
            ctx->pc = 0x303E54u;
            goto label_303e54;
        }
    }
    ctx->pc = 0x303E48u;
    // 0x303e48: 0x9242045e  lbu         $v0, 0x45E($s2)
    ctx->pc = 0x303e48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1118)));
    // 0x303e4c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x303E4Cu;
    {
        const bool branch_taken_0x303e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303e4c) {
            ctx->pc = 0x303E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303E4Cu;
            // 0x303e50: 0xc6410074  lwc1        $f1, 0x74($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x303E80u;
            goto label_303e80;
        }
    }
    ctx->pc = 0x303E54u;
label_303e54:
    // 0x303e54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x303e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303e58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x303e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303e5c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x303e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303e60: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x303e60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303e64: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x303e64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303e68: 0xc0c0c40  jal         func_303100
    ctx->pc = 0x303E68u;
    SET_GPR_U32(ctx, 31, 0x303E70u);
    ctx->pc = 0x303E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303E68u;
    // 0x303e6c: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303100u, 0x303E68u, 0x303E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303E70u;
label_303e70:
    // 0x303e70: 0xc0c0922  jal         func_302488
    ctx->pc = 0x303E70u;
    SET_GPR_U32(ctx, 31, 0x303E78u);
    ctx->pc = 0x303E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303E70u;
    // 0x303e74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302488u, 0x303E70u, 0x303E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303E78u;
label_303e78:
    // 0x303e78: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x303E78u;
    {
        const bool branch_taken_0x303e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E78u;
        // 0x303e7c: 0xdfb00120  ld          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303e78) {
            ctx->pc = 0x30433Cu;
            goto label_30433c;
        }
    }
    ctx->pc = 0x303E80u;
label_303e80:
    // 0x303e80: 0xc6400430  lwc1        $f0, 0x430($s2)
    ctx->pc = 0x303e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303e84: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x303e84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303e88: 0x0  nop
    ctx->pc = 0x303e88u;
    // NOP
    // 0x303e8c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x303E8Cu;
    {
        const bool branch_taken_0x303e8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x303e8c) {
            ctx->pc = 0x303E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303E8Cu;
            // 0x303e90: 0x8e420438  lw          $v0, 0x438($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303EA4u;
            goto label_303ea4;
        }
    }
    ctx->pc = 0x303E94u;
    // 0x303e94: 0xc0c0922  jal         func_302488
    ctx->pc = 0x303E94u;
    SET_GPR_U32(ctx, 31, 0x303E9Cu);
    ctx->pc = 0x303E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303E94u;
    // 0x303e98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302488u, 0x303E94u, 0x303E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303E9Cu;
label_303e9c:
    // 0x303e9c: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x303E9Cu;
    {
        const bool branch_taken_0x303e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x303e9c) {
            ctx->pc = 0x304330u;
            goto label_304330;
        }
    }
    ctx->pc = 0x303EA4u;
label_303ea4:
    // 0x303ea4: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x303EA4u;
    {
        const bool branch_taken_0x303ea4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x303EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303EA4u;
        // 0x303ea8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ea4) {
            ctx->pc = 0x303EC0u;
            goto label_303ec0;
        }
    }
    ctx->pc = 0x303EACu;
    // 0x303eac: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x303EACu;
    {
        const bool branch_taken_0x303eac = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x303EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303EACu;
        // 0x303eb0: 0xae420438  sw          $v0, 0x438($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1080), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303eac) {
            ctx->pc = 0x303EC0u;
            goto label_303ec0;
        }
    }
    ctx->pc = 0x303EB4u;
    // 0x303eb4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x303eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x303eb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x303eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303ebc: 0xac62aa88  sw          $v0, -0x5578($v1)
    ctx->pc = 0x303ebcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FAA88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FAA88u, _value); } while (0);
label_303ec0:
    // 0x303ec0: 0x9242027c  lbu         $v0, 0x27C($s2)
    ctx->pc = 0x303ec0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 636)));
    // 0x303ec4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x303EC4u;
    {
        const bool branch_taken_0x303ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303ec4) {
            ctx->pc = 0x303EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303EC4u;
            // 0x303ec8: 0xa240045d  sb          $zero, 0x45D($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1117), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303F08u;
            goto label_303f08;
        }
    }
    ctx->pc = 0x303ECCu;
    // 0x303ecc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x303eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303ed0: 0xc0d0578  jal         func_3415E0
    ctx->pc = 0x303ED0u;
    SET_GPR_U32(ctx, 31, 0x303ED8u);
    ctx->pc = 0x303ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303ED0u;
    // 0x303ed4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3415E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3415E0u, 0x303ED0u, 0x303ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303ED8u;
label_303ed8:
    // 0x303ed8: 0xc0d0566  jal         func_341598
    ctx->pc = 0x303ED8u;
    SET_GPR_U32(ctx, 31, 0x303EE0u);
    ctx->pc = 0x303EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303ED8u;
    // 0x303edc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341598u, 0x303ED8u, 0x303EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303EE0u;
label_303ee0:
    // 0x303ee0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x303ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x303ee4: 0x9043971c  lbu         $v1, -0x68E4($v0)
    ctx->pc = 0x303ee4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F971Cu));
    // 0x303ee8: 0x14700003  bne         $v1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x303EE8u;
    {
        const bool branch_taken_0x303ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x303ee8) {
            ctx->pc = 0x303EF8u;
            goto label_303ef8;
        }
    }
    ctx->pc = 0x303EF0u;
    // 0x303ef0: 0xc089f68  jal         func_227DA0
    ctx->pc = 0x303EF0u;
    SET_GPR_U32(ctx, 31, 0x303EF8u);
    ctx->pc = 0x227DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DA0u, 0x303EF0u, 0x303EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303EF8u;
label_303ef8:
    // 0x303ef8: 0xc0c0954  jal         func_302550
    ctx->pc = 0x303EF8u;
    SET_GPR_U32(ctx, 31, 0x303F00u);
    ctx->pc = 0x303EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303EF8u;
    // 0x303efc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302550u, 0x303EF8u, 0x303F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F00u;
label_303f00:
    // 0x303f00: 0xa250027c  sb          $s0, 0x27C($s2)
    ctx->pc = 0x303f00u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 636), (uint8_t)GPR_U32(ctx, 16));
    // 0x303f04: 0xa240045d  sb          $zero, 0x45D($s2)
    ctx->pc = 0x303f04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1117), (uint8_t)GPR_U32(ctx, 0));
label_303f08:
    // 0x303f08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x303f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303f0c: 0xa240045e  sb          $zero, 0x45E($s2)
    ctx->pc = 0x303f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1118), (uint8_t)GPR_U32(ctx, 0));
    // 0x303f10: 0xc0b93e0  jal         func_2E4F80
    ctx->pc = 0x303F10u;
    SET_GPR_U32(ctx, 31, 0x303F18u);
    ctx->pc = 0x303F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303F10u;
    // 0x303f14: 0xae4002e4  sw          $zero, 0x2E4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 740), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x303F10u, 0x303F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F18u;
label_303f18:
    // 0x303f18: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x303F18u;
    {
        const bool branch_taken_0x303f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303f18) {
            ctx->pc = 0x303F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303F18u;
            // 0x303f1c: 0xc7c30000  lwc1        $f3, 0x0($fp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x303F2Cu;
            goto label_303f2c;
        }
    }
    ctx->pc = 0x303F20u;
    // 0x303f20: 0xc0bfe58  jal         func_2FF960
    ctx->pc = 0x303F20u;
    SET_GPR_U32(ctx, 31, 0x303F28u);
    ctx->pc = 0x2FF960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF960u, 0x303F20u, 0x303F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F28u;
label_303f28:
    // 0x303f28: 0xc7c30000  lwc1        $f3, 0x0($fp)
    ctx->pc = 0x303f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_303f2c:
    // 0x303f2c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x303f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x303f30: 0xc7c00004  lwc1        $f0, 0x4($fp)
    ctx->pc = 0x303f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303f34: 0xc7c10008  lwc1        $f1, 0x8($fp)
    ctx->pc = 0x303f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303f38: 0xc7c2000c  lwc1        $f2, 0xC($fp)
    ctx->pc = 0x303f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303f3c: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x303f3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x303f40: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x303f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x303f44: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x303f44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x303f48: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x303F48u;
    SET_GPR_U32(ctx, 31, 0x303F50u);
    ctx->pc = 0x303F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303F48u;
    // 0x303f4c: 0xe7a200ac  swc1        $f2, 0xAC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x303F48u, 0x303F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F50u;
label_303f50:
    // 0x303f50: 0x27b000b0  addiu       $s0, $sp, 0xB0
    ctx->pc = 0x303f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x303f54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x303f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303f58: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x303f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303f5c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x303f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x303f60: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x303f60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303f64: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x303f64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303f68: 0xc0c029c  jal         func_300A70
    ctx->pc = 0x303F68u;
    SET_GPR_U32(ctx, 31, 0x303F70u);
    ctx->pc = 0x303F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303F68u;
    // 0x303f6c: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300A70u, 0x303F68u, 0x303F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F70u;
label_303f70:
    // 0x303f70: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x303f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x303f74: 0x90625870  lbu         $v0, 0x5870($v1)
    ctx->pc = 0x303f74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x595870u));
    // 0x303f78: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x303F78u;
    {
        const bool branch_taken_0x303f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303F78u;
        // 0x303f7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303f78) {
            ctx->pc = 0x303F9Cu;
            goto label_303f9c;
        }
    }
    ctx->pc = 0x303F80u;
    // 0x303f80: 0xc092432  jal         func_2490C8
    ctx->pc = 0x303F80u;
    SET_GPR_U32(ctx, 31, 0x303F88u);
    ctx->pc = 0x303F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303F80u;
    // 0x303f84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2490C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2490C8u, 0x303F80u, 0x303F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F88u;
label_303f88:
    // 0x303f88: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x303F88u;
    {
        const bool branch_taken_0x303f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303F88u;
        // 0x303f8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303f88) {
            ctx->pc = 0x303F9Cu;
            goto label_303f9c;
        }
    }
    ctx->pc = 0x303F90u;
    // 0x303f90: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x303f90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x303f94: 0xfa810000  sqc2        $vf1, 0x0($s4)
    ctx->pc = 0x303f94u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x303f98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x303f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_303f9c:
    // 0x303f9c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x303f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303fa0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x303fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303fa4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x303fa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303fa8: 0xc0c0700  jal         func_301C00
    ctx->pc = 0x303FA8u;
    SET_GPR_U32(ctx, 31, 0x303FB0u);
    ctx->pc = 0x303FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303FA8u;
    // 0x303fac: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301C00u, 0x303FA8u, 0x303FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303FB0u;
label_303fb0:
    // 0x303fb0: 0xc64300a0  lwc1        $f3, 0xA0($s2)
    ctx->pc = 0x303fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x303fb4: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x303fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303fb8: 0xc6410444  lwc1        $f1, 0x444($s2)
    ctx->pc = 0x303fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303fbc: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x303fbcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x303fc0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x303fc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303fc4: 0x0  nop
    ctx->pc = 0x303fc4u;
    // NOP
    // 0x303fc8: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x303FC8u;
    {
        const bool branch_taken_0x303fc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x303fc8) {
            ctx->pc = 0x303FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303FC8u;
            // 0x303fcc: 0xc64000a0  lwc1        $f0, 0xA0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x303FE4u;
            goto label_303fe4;
        }
    }
    ctx->pc = 0x303FD0u;
    // 0x303fd0: 0xc6400448  lwc1        $f0, 0x448($s2)
    ctx->pc = 0x303fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303fd4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x303fd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x303fd8: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x303fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x303fdc: 0xe64000a0  swc1        $f0, 0xA0($s2)
    ctx->pc = 0x303fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 160), bits); }
    // 0x303fe0: 0xc64000a0  lwc1        $f0, 0xA0($s2)
    ctx->pc = 0x303fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_303fe4:
    // 0x303fe4: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x303fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x303fe8: 0x92221170  lbu         $v0, 0x1170($s1)
    ctx->pc = 0x303fe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4464)));
    // 0x303fec: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x303FECu;
    {
        const bool branch_taken_0x303fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303fec) {
            ctx->pc = 0x303FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303FECu;
            // 0x303ff0: 0x8e230418  lw          $v1, 0x418($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304008u;
            goto label_304008;
        }
    }
    ctx->pc = 0x303FF4u;
    // 0x303ff4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x303ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x303ff8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x303ff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303ffc: 0x0  nop
    ctx->pc = 0x303ffcu;
    // NOP
    // 0x304000: 0xe640043c  swc1        $f0, 0x43C($s2)
    ctx->pc = 0x304000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1084), bits); }
    // 0x304004: 0x8e230418  lw          $v1, 0x418($s1)
    ctx->pc = 0x304004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_304008:
    // 0x304008: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x304008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30400c: 0x50620016  beql        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x30400Cu;
    {
        const bool branch_taken_0x30400c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30400c) {
            ctx->pc = 0x304010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30400Cu;
            // 0x304010: 0x92420038  lbu         $v0, 0x38($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304068u;
            goto label_304068;
        }
    }
    ctx->pc = 0x304014u;
    // 0x304014: 0xc092432  jal         func_2490C8
    ctx->pc = 0x304014u;
    SET_GPR_U32(ctx, 31, 0x30401Cu);
    ctx->pc = 0x304018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304014u;
    // 0x304018: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2490C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2490C8u, 0x304014u, 0x30401Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30401Cu;
label_30401c:
    // 0x30401c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x30401Cu;
    {
        const bool branch_taken_0x30401c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30401c) {
            ctx->pc = 0x304020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30401Cu;
            // 0x304020: 0x92420038  lbu         $v0, 0x38($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304068u;
            goto label_304068;
        }
    }
    ctx->pc = 0x304024u;
    // 0x304024: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x304024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x304028: 0x8c62bd64  lw          $v0, -0x429C($v1)
    ctx->pc = 0x304028u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD64u));
    // 0x30402c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30402Cu;
    {
        const bool branch_taken_0x30402c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30402Cu;
        // 0x304030: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30402c) {
            ctx->pc = 0x304040u;
            goto label_304040;
        }
    }
    ctx->pc = 0x304034u;
    // 0x304034: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x304034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x304038: 0x8c43bd68  lw          $v1, -0x4298($v0)
    ctx->pc = 0x304038u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD68u));
    // 0x30403c: 0x3202b  sltu        $a0, $zero, $v1
    ctx->pc = 0x30403cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_304040:
    // 0x304040: 0x54800009  bnel        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x304040u;
    {
        const bool branch_taken_0x304040 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x304040) {
            ctx->pc = 0x304044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304040u;
            // 0x304044: 0x92420038  lbu         $v0, 0x38($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304068u;
            goto label_304068;
        }
    }
    ctx->pc = 0x304048u;
    // 0x304048: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x304048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
    // 0x30404c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x30404cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x304050: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x304050u;
    {
        const bool branch_taken_0x304050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304050u;
        // 0x304054: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304050) {
            ctx->pc = 0x304064u;
            goto label_304064;
        }
    }
    ctx->pc = 0x304058u;
    // 0x304058: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x304058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30405c: 0xc0c0b7a  jal         func_302DE8
    ctx->pc = 0x30405Cu;
    SET_GPR_U32(ctx, 31, 0x304064u);
    ctx->pc = 0x304060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30405Cu;
    // 0x304060: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302DE8u, 0x30405Cu, 0x304064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304064u;
label_304064:
    // 0x304064: 0x92420038  lbu         $v0, 0x38($s2)
    ctx->pc = 0x304064u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 56)));
label_304068:
    // 0x304068: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x304068u;
    {
        const bool branch_taken_0x304068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304068u;
        // 0x30406c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304068) {
            ctx->pc = 0x304080u;
            goto label_304080;
        }
    }
    ctx->pc = 0x304070u;
    // 0x304070: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x304070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x304074: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x304074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304078: 0x0  nop
    ctx->pc = 0x304078u;
    // NOP
    // 0x30407c: 0xe64000a0  swc1        $f0, 0xA0($s2)
    ctx->pc = 0x30407cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 160), bits); }
label_304080:
    // 0x304080: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x304080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304084: 0x24505870  addiu       $s0, $v0, 0x5870
    ctx->pc = 0x304084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x304088: 0xc0b93e0  jal         func_2E4F80
    ctx->pc = 0x304088u;
    SET_GPR_U32(ctx, 31, 0x304090u);
    ctx->pc = 0x30408Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304088u;
    // 0x30408c: 0xc6140484  lwc1        $f20, 0x484($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x304088u, 0x304090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304090u;
label_304090:
    // 0x304090: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x304090u;
    {
        const bool branch_taken_0x304090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304090) {
            ctx->pc = 0x304094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304090u;
            // 0x304094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3040B0u;
            goto label_3040b0;
        }
    }
    ctx->pc = 0x304098u;
    // 0x304098: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x304098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30409c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30409cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3040a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3040a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3040a4: 0xc0b8f68  jal         func_2E3DA0
    ctx->pc = 0x3040A4u;
    SET_GPR_U32(ctx, 31, 0x3040ACu);
    ctx->pc = 0x3040A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3040A4u;
    // 0x3040a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3DA0u, 0x3040A4u, 0x3040ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3040ACu;
label_3040ac:
    // 0x3040ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3040acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3040b0:
    // 0x3040b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3040b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3040b4: 0xc0c10dc  jal         func_304370
    ctx->pc = 0x3040B4u;
    SET_GPR_U32(ctx, 31, 0x3040BCu);
    ctx->pc = 0x3040B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3040B4u;
    // 0x3040b8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304370u, 0x3040B4u, 0x3040BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3040BCu;
label_3040bc:
    // 0x3040bc: 0xc0b93e0  jal         func_2E4F80
    ctx->pc = 0x3040BCu;
    SET_GPR_U32(ctx, 31, 0x3040C4u);
    ctx->pc = 0x3040C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3040BCu;
    // 0x3040c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x3040BCu, 0x3040C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3040C4u;
label_3040c4:
    // 0x3040c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3040C4u;
    {
        const bool branch_taken_0x3040c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3040C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3040C4u;
        // 0x3040c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3040c4) {
            ctx->pc = 0x3040D8u;
            goto label_3040d8;
        }
    }
    ctx->pc = 0x3040CCu;
    // 0x3040cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3040ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3040d0: 0xc0b8f68  jal         func_2E3DA0
    ctx->pc = 0x3040D0u;
    SET_GPR_U32(ctx, 31, 0x3040D8u);
    ctx->pc = 0x3040D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3040D0u;
    // 0x3040d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3DA0u, 0x3040D0u, 0x3040D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3040D8u;
label_3040d8:
    // 0x3040d8: 0x924202f2  lbu         $v0, 0x2F2($s2)
    ctx->pc = 0x3040d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 754)));
    // 0x3040dc: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3040DCu;
    {
        const bool branch_taken_0x3040dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3040dc) {
            ctx->pc = 0x3040E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3040DCu;
            // 0x3040e0: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304124u;
            goto label_304124;
        }
    }
    ctx->pc = 0x3040E4u;
    // 0x3040e4: 0xc0c07e4  jal         func_301F90
    ctx->pc = 0x3040E4u;
    SET_GPR_U32(ctx, 31, 0x3040ECu);
    ctx->pc = 0x3040E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3040E4u;
    // 0x3040e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301F90u, 0x3040E4u, 0x3040ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3040ECu;
label_3040ec:
    // 0x3040ec: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x3040ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x3040f0: 0x90625870  lbu         $v0, 0x5870($v1)
    ctx->pc = 0x3040f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x595870u));
    // 0x3040f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3040F4u;
    {
        const bool branch_taken_0x3040f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3040F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3040F4u;
        // 0x3040f8: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3040f4) {
            ctx->pc = 0x304120u;
            goto label_304120;
        }
    }
    ctx->pc = 0x3040FCu;
    // 0x3040fc: 0xc62c11d4  lwc1        $f12, 0x11D4($s1)
    ctx->pc = 0x3040fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x304100: 0x24a55b30  addiu       $a1, $a1, 0x5B30
    ctx->pc = 0x304100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23344));
    // 0x304104: 0xc0b15e8  jal         func_2C57A0
    ctx->pc = 0x304104u;
    SET_GPR_U32(ctx, 31, 0x30410Cu);
    ctx->pc = 0x304108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304104u;
    // 0x304108: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C57A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C57A0u, 0x304104u, 0x30410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30410Cu;
label_30410c:
    // 0x30410c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x30410cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x304110: 0xc62c0374  lwc1        $f12, 0x374($s1)
    ctx->pc = 0x304110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x304114: 0x24455b40  addiu       $a1, $v0, 0x5B40
    ctx->pc = 0x304114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x304118: 0xc0b15e8  jal         func_2C57A0
    ctx->pc = 0x304118u;
    SET_GPR_U32(ctx, 31, 0x304120u);
    ctx->pc = 0x30411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304118u;
    // 0x30411c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C57A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C57A0u, 0x304118u, 0x304120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304120u;
label_304120:
    // 0x304120: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x304120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_304124:
    // 0x304124: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x304124u;
    {
        const bool branch_taken_0x304124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304124u;
        // 0x304128: 0x8fa30110  lw          $v1, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304124) {
            ctx->pc = 0x30430Cu;
            goto label_30430c;
        }
    }
    ctx->pc = 0x30412Cu;
    // 0x30412c: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x30412cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x304130: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x304130u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x304134: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x304134u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x304138: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x304138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30413c: 0xc645000c  lwc1        $f5, 0xC($s2)
    ctx->pc = 0x30413cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x304140: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x304140u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x304144: 0xc6440010  lwc1        $f4, 0x10($s2)
    ctx->pc = 0x304144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x304148: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x304148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30414c: 0xc7a300d4  lwc1        $f3, 0xD4($sp)
    ctx->pc = 0x30414cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304150: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x304150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304154: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x304154u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304158: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x304158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30415c: 0xc655001c  lwc1        $f21, 0x1C($s2)
    ctx->pc = 0x30415cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x304160: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x304160u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x304164: 0xe7a300c4  swc1        $f3, 0xC4($sp)
    ctx->pc = 0x304164u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x304168: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x304168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x30416c: 0xe7a100cc  swc1        $f1, 0xCC($sp)
    ctx->pc = 0x30416cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x304170: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x304170u;
    {
        const bool branch_taken_0x304170 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x304174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304170u;
        // 0x304174: 0xc6540014  lwc1        $f20, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304170) {
            ctx->pc = 0x3041ACu;
            goto label_3041ac;
        }
    }
    ctx->pc = 0x304178u;
    // 0x304178: 0x0  nop
    ctx->pc = 0x304178u;
    // NOP
    // 0x30417c: 0x0  nop
    ctx->pc = 0x30417cu;
    // NOP
    // 0x304180: 0x46042843  div.s       $f1, $f5, $f4
    ctx->pc = 0x304180u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[5], ctx->f[4]); }
    // 0x304184: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x304184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x304188: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x304188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30418c: 0x4600a086  mov.s       $f2, $f20
    ctx->pc = 0x30418cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[20]);
    // 0x304190: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x304190u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x304194: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x304194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304198: 0x0  nop
    ctx->pc = 0x304198u;
    // NOP
    // 0x30419c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x30419Cu;
    {
        const bool branch_taken_0x30419c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3041A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30419Cu;
        // 0x3041a0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30419c) {
            ctx->pc = 0x3041A8u;
            goto label_3041a8;
        }
    }
    ctx->pc = 0x3041A4u;
    // 0x3041a4: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x3041a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
label_3041a8:
    // 0x3041a8: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x3041a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_3041ac:
    // 0x3041ac: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3041acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3041b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3041b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3041b4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3041B4u;
    {
        const bool branch_taken_0x3041b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3041B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3041B4u;
        // 0x3041b8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3041b4) {
            ctx->pc = 0x3041DCu;
            goto label_3041dc;
        }
    }
    ctx->pc = 0x3041BCu;
    // 0x3041bc: 0xc64c0018  lwc1        $f12, 0x18($s2)
    ctx->pc = 0x3041bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3041c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3041c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3041c4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3041c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3041c8: 0xc0c08ac  jal         func_3022B0
    ctx->pc = 0x3041C8u;
    SET_GPR_U32(ctx, 31, 0x3041D0u);
    ctx->pc = 0x3041CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3041C8u;
    // 0x3041cc: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022B0u, 0x3041C8u, 0x3041D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3041D0u;
label_3041d0:
    // 0x3041d0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3041d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3041d4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x3041D4u;
    {
        const bool branch_taken_0x3041d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3041D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3041D4u;
        // 0x3041d8: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3041d4) {
            ctx->pc = 0x30427Cu;
            goto label_30427c;
        }
    }
    ctx->pc = 0x3041DCu;
label_3041dc:
    // 0x3041dc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3041dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3041e0: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3041E0u;
    {
        const bool branch_taken_0x3041e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3041E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3041E0u;
        // 0x3041e4: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3041e0) {
            ctx->pc = 0x30427Cu;
            goto label_30427c;
        }
    }
    ctx->pc = 0x3041E8u;
    // 0x3041e8: 0x26a20030  addiu       $v0, $s5, 0x30
    ctx->pc = 0x3041e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x3041ec: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x3041ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3041f0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3041f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3041f4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x3041f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3041f8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3041f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3041fc: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x3041fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x304200: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x304200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304204: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x304204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304208: 0xc7a60104  lwc1        $f6, 0x104($sp)
    ctx->pc = 0x304208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30420c: 0xc7a70108  lwc1        $f7, 0x108($sp)
    ctx->pc = 0x30420cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x304210: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x304210u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x304214: 0xc7a5010c  lwc1        $f5, 0x10C($sp)
    ctx->pc = 0x304214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x304218: 0x46060082  mul.s       $f2, $f0, $f6
    ctx->pc = 0x304218u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x30421c: 0x460700c2  mul.s       $f3, $f0, $f7
    ctx->pc = 0x30421cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x304220: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x304220u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x304224: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x304224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x304228: 0xe7a400e0  swc1        $f4, 0xE0($sp)
    ctx->pc = 0x304228u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x30422c: 0xe7a200e4  swc1        $f2, 0xE4($sp)
    ctx->pc = 0x30422cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x304230: 0xe7a300e8  swc1        $f3, 0xE8($sp)
    ctx->pc = 0x304230u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x304234: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x304234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x304238: 0xe7a600f4  swc1        $f6, 0xF4($sp)
    ctx->pc = 0x304238u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x30423c: 0xe7a700f8  swc1        $f7, 0xF8($sp)
    ctx->pc = 0x30423cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x304240: 0xe7a500fc  swc1        $f5, 0xFC($sp)
    ctx->pc = 0x304240u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x304244: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x304244u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x304248: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x304248u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30424c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x30424cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x304250: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x304250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x304254: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x304254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304258: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x304258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30425c: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x30425cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304260: 0xc7a3010c  lwc1        $f3, 0x10C($sp)
    ctx->pc = 0x304260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304264: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x304264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x304268: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x304268u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x30426c: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x30426cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x304270: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x304270u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x304274: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x304274u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x304278: 0xfaa10030  sqc2        $vf1, 0x30($s5)
    ctx->pc = 0x304278u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_30427c:
    // 0x30427c: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x30427cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304280: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x304280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304284: 0xc7a300c8  lwc1        $f3, 0xC8($sp)
    ctx->pc = 0x304284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304288: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x304288u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x30428c: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x30428cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304290: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x304290u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x304294: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x304294u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x304298: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x304298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x30429c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x30429cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3042a0: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x3042a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x3042a4: 0xe7a200e4  swc1        $f2, 0xE4($sp)
    ctx->pc = 0x3042a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x3042a8: 0xe7a300e8  swc1        $f3, 0xE8($sp)
    ctx->pc = 0x3042a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x3042ac: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x3042acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x3042b0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3042b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3042b4: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x3042b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3042b8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3042b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3042bc: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x3042bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3042c0: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x3042c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3042c4: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x3042c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3042c8: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x3042c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3042cc: 0xc7a300fc  lwc1        $f3, 0xFC($sp)
    ctx->pc = 0x3042ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3042d0: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x3042d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x3042d4: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x3042d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x3042d8: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x3042d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x3042dc: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x3042dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x3042e0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x3042e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3042e4: 0xfa810000  sqc2        $vf1, 0x0($s4)
    ctx->pc = 0x3042e4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3042e8: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x3042e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3042ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3042ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3042f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3042f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3042f4: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x3042f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x3042f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3042f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3042fc: 0x0  nop
    ctx->pc = 0x3042fcu;
    // NOP
    // 0x304300: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x304300u;
    {
        const bool branch_taken_0x304300 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x304304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304300u;
        // 0x304304: 0xe6400018  swc1        $f0, 0x18($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304300) {
            ctx->pc = 0x30430Cu;
            goto label_30430c;
        }
    }
    ctx->pc = 0x304308u;
    // 0x304308: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x304308u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_30430c:
    // 0x30430c: 0x8e2211d0  lw          $v0, 0x11D0($s1)
    ctx->pc = 0x30430cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4560)));
    // 0x304310: 0xc0c48da  jal         func_312368
    ctx->pc = 0x304310u;
    SET_GPR_U32(ctx, 31, 0x304318u);
    ctx->pc = 0x304314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304310u;
    // 0x304314: 0x8c440100  lw          $a0, 0x100($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x304310u, 0x304318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304318u;
label_304318:
    // 0x304318: 0xc0c0922  jal         func_302488
    ctx->pc = 0x304318u;
    SET_GPR_U32(ctx, 31, 0x304320u);
    ctx->pc = 0x30431Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304318u;
    // 0x30431c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302488u, 0x304318u, 0x304320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304320u;
label_304320:
    // 0x304320: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x304320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x304324: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x304324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304328: 0x0  nop
    ctx->pc = 0x304328u;
    // NOP
    // 0x30432c: 0xe64000a0  swc1        $f0, 0xA0($s2)
    ctx->pc = 0x30432cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 160), bits); }
label_304330:
    // 0x304330: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x304330u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x304334: 0xfa410420  sqc2        $vf1, 0x420($s2)
    ctx->pc = 0x304334u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1056), _mm_castps_si128(ctx->vu0_vf[1]));
label_304338:
    // 0x304338: 0xdfb00120  ld          $s0, 0x120($sp)
    ctx->pc = 0x304338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_30433c:
    // 0x30433c: 0xdfb10128  ld          $s1, 0x128($sp)
    ctx->pc = 0x30433cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x304340: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x304340u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x304344: 0xdfb30138  ld          $s3, 0x138($sp)
    ctx->pc = 0x304344u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x304348: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x304348u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x30434c: 0xdfb50148  ld          $s5, 0x148($sp)
    ctx->pc = 0x30434cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x304350: 0xdfb60150  ld          $s6, 0x150($sp)
    ctx->pc = 0x304350u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x304354: 0xdfb70158  ld          $s7, 0x158($sp)
    ctx->pc = 0x304354u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x304358: 0xdfbe0160  ld          $fp, 0x160($sp)
    ctx->pc = 0x304358u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x30435c: 0xdfbf0168  ld          $ra, 0x168($sp)
    ctx->pc = 0x30435cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x304360: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x304360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x304364: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x304364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x304368: 0x3e00008  jr          $ra
    ctx->pc = 0x304368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304368u;
        // 0x30436c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304370u;
}
