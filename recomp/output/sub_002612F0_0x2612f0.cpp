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

// Function: sub_002612F0
// Address: 0x2612f0 - 0x261450
void sub_002612F0_0x2612f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002612F0_0x2612f0");
#endif

    switch (ctx->pc) {
        case 0x261350u: goto label_261350;
        case 0x26136cu: goto label_26136c;
        case 0x26137cu: goto label_26137c;
        case 0x2613acu: goto label_2613ac;
        case 0x2613d8u: goto label_2613d8;
        case 0x2613ecu: goto label_2613ec;
        case 0x261410u: goto label_261410;
        default: break;
    }

    ctx->pc = 0x2612f0u;

    // 0x2612f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2612f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2612f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2612f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2612f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2612f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2612fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2612fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261300: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x261300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x261304: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x261304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261308: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x261308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x26130c: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x26130cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x261310: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x261310u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x261314: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x261314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x261318: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x261318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x26131c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26131Cu;
    {
        const bool branch_taken_0x26131c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26131Cu;
        // 0x261320: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26131c) {
            ctx->pc = 0x26132Cu;
            goto label_26132c;
        }
    }
    ctx->pc = 0x261324u;
    // 0x261324: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x261324u;
    {
        const bool branch_taken_0x261324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261324u;
        // 0x261328: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261324) {
            ctx->pc = 0x26142Cu;
            goto label_26142c;
        }
    }
    ctx->pc = 0x26132Cu;
label_26132c:
    // 0x26132c: 0x1220003f  beqz        $s1, . + 4 + (0x3F << 2)
    ctx->pc = 0x26132Cu;
    {
        const bool branch_taken_0x26132c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x261330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26132Cu;
        // 0x261330: 0x8e02025c  lw          $v0, 0x25C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26132c) {
            ctx->pc = 0x26142Cu;
            goto label_26142c;
        }
    }
    ctx->pc = 0x261334u;
    // 0x261334: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x261334u;
    {
        const bool branch_taken_0x261334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261334u;
        // 0x261338: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261334) {
            ctx->pc = 0x261360u;
            goto label_261360;
        }
    }
    ctx->pc = 0x26133Cu;
    // 0x26133c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x26133cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x261340: 0x52220004  beql        $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x261340u;
    {
        const bool branch_taken_0x261340 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x261340) {
            ctx->pc = 0x261344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261340u;
            // 0x261344: 0x8e02025c  lw          $v0, 0x25C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261354u;
            goto label_261354;
        }
    }
    ctx->pc = 0x261348u;
    // 0x261348: 0xc098514  jal         func_261450
    ctx->pc = 0x261348u;
    SET_GPR_U32(ctx, 31, 0x261350u);
    ctx->pc = 0x26134Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261348u;
    // 0x26134c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261450u, 0x261348u, 0x261350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261350u;
label_261350:
    // 0x261350: 0x8e02025c  lw          $v0, 0x25C($s0)
    ctx->pc = 0x261350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
label_261354:
    // 0x261354: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x261354u;
    {
        const bool branch_taken_0x261354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x261354) {
            ctx->pc = 0x261358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261354u;
            // 0x261358: 0x8e03025c  lw          $v1, 0x25C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261384u;
            goto label_261384;
        }
    }
    ctx->pc = 0x26135Cu;
    // 0x26135c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x26135cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_261360:
    // 0x261360: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x261360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x261364: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x261364u;
    SET_GPR_U32(ctx, 31, 0x26136Cu);
    ctx->pc = 0x261368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261364u;
    // 0x261368: 0x2484f1b0  addiu       $a0, $a0, -0xE50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x261364u, 0x26136Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26136Cu;
label_26136c:
    // 0x26136c: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x26136cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x261370: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x261370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261374: 0xc073dee  jal         func_1CF7B8
    ctx->pc = 0x261374u;
    SET_GPR_U32(ctx, 31, 0x26137Cu);
    ctx->pc = 0x261378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261374u;
    // 0x261378: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF7B8u, 0x261374u, 0x26137Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26137Cu;
label_26137c:
    // 0x26137c: 0xae02025c  sw          $v0, 0x25C($s0)
    ctx->pc = 0x26137cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 2));
    // 0x261380: 0x8e03025c  lw          $v1, 0x25C($s0)
    ctx->pc = 0x261380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
label_261384:
    // 0x261384: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x261384u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x261388: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x261388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26138c: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x26138Cu;
    {
        const bool branch_taken_0x26138c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26138c) {
            ctx->pc = 0x261390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26138Cu;
            // 0x261390: 0x8e02025c  lw          $v0, 0x25C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26142Cu;
            goto label_26142c;
        }
    }
    ctx->pc = 0x261394u;
    // 0x261394: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x261394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x261398: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x261398u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26139c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26139cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2613a0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2613a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2613a4: 0xc074256  jal         func_1D0958
    ctx->pc = 0x2613A4u;
    SET_GPR_U32(ctx, 31, 0x2613ACu);
    ctx->pc = 0x2613A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2613A4u;
    // 0x2613a8: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0958u, 0x2613A4u, 0x2613ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2613ACu;
label_2613ac:
    // 0x2613ac: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x2613acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2613b0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2613b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2613b4: 0x8e020268  lw          $v0, 0x268($s0)
    ctx->pc = 0x2613b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x2613b8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2613b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2613bc: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x2613bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2613c0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2613c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2613c4: 0x2221026  xor         $v0, $s1, $v0
    ctx->pc = 0x2613c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
    // 0x2613c8: 0x8e05025c  lw          $a1, 0x25C($s0)
    ctx->pc = 0x2613c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x2613cc: 0xe2300b  movn        $a2, $a3, $v0
    ctx->pc = 0x2613ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    // 0x2613d0: 0xc07421a  jal         func_1D0868
    ctx->pc = 0x2613D0u;
    SET_GPR_U32(ctx, 31, 0x2613D8u);
    ctx->pc = 0x2613D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2613D0u;
    // 0x2613d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0868u, 0x2613D0u, 0x2613D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2613D8u;
label_2613d8:
    // 0x2613d8: 0x8e03025c  lw          $v1, 0x25C($s0)
    ctx->pc = 0x2613d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x2613dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2613dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2613e0: 0xe4740018  swc1        $f20, 0x18($v1)
    ctx->pc = 0x2613e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x2613e4: 0xc073ef8  jal         func_1CFBE0
    ctx->pc = 0x2613E4u;
    SET_GPR_U32(ctx, 31, 0x2613ECu);
    ctx->pc = 0x2613E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2613E4u;
    // 0x2613e8: 0x8e04025c  lw          $a0, 0x25C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFBE0u, 0x2613E4u, 0x2613ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2613ECu;
label_2613ec:
    // 0x2613ec: 0x8e03025c  lw          $v1, 0x25C($s0)
    ctx->pc = 0x2613ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x2613f0: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x2613f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x2613f4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2613f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2613f8: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2613F8u;
    {
        const bool branch_taken_0x2613f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2613FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2613F8u;
        // 0x2613fc: 0xa462002a  sh          $v0, 0x2A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2613f8) {
            ctx->pc = 0x261418u;
            goto label_261418;
        }
    }
    ctx->pc = 0x261400u;
    // 0x261400: 0x8e04025c  lw          $a0, 0x25C($s0)
    ctx->pc = 0x261400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x261404: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x261404u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x261408: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x261408u;
    SET_GPR_U32(ctx, 31, 0x261410u);
    ctx->pc = 0x26140Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261408u;
    // 0x26140c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x261408u, 0x261410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261410u;
label_261410:
    // 0x261410: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x261410u;
    {
        const bool branch_taken_0x261410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261410u;
        // 0x261414: 0x8e02025c  lw          $v0, 0x25C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261410) {
            ctx->pc = 0x26142Cu;
            goto label_26142c;
        }
    }
    ctx->pc = 0x261418u;
label_261418:
    // 0x261418: 0x8e03025c  lw          $v1, 0x25C($s0)
    ctx->pc = 0x261418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x26141c: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x26141cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x261420: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x261420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x261424: 0xa462002a  sh          $v0, 0x2A($v1)
    ctx->pc = 0x261424u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x261428: 0x8e02025c  lw          $v0, 0x25C($s0)
    ctx->pc = 0x261428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
label_26142c:
    // 0x26142c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26142cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261430: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x261430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x261434: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x261434u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261438: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x261438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26143c: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x26143cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x261440: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x261440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x261444: 0x3e00008  jr          $ra
    ctx->pc = 0x261444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261444u;
        // 0x261448: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26144Cu;
    // 0x26144c: 0x0  nop
    ctx->pc = 0x26144cu;
    // NOP
    ctx->pc = 0x261450u;
}
