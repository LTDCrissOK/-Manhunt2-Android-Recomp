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

// Function: sub_001DA2F8
// Address: 0x1da2f8 - 0x1da4d0
void sub_001DA2F8_0x1da2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA2F8_0x1da2f8");
#endif

    switch (ctx->pc) {
        case 0x1da340u: goto label_1da340;
        case 0x1da360u: goto label_1da360;
        case 0x1da370u: goto label_1da370;
        case 0x1da380u: goto label_1da380;
        case 0x1da39cu: goto label_1da39c;
        case 0x1da3b8u: goto label_1da3b8;
        case 0x1da3d4u: goto label_1da3d4;
        case 0x1da414u: goto label_1da414;
        case 0x1da430u: goto label_1da430;
        case 0x1da490u: goto label_1da490;
        case 0x1da498u: goto label_1da498;
        default: break;
    }

    ctx->pc = 0x1da2f8u;

    // 0x1da2f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1da2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1da2fc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1da2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1da300: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1da300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1da304: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da308: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1da308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1da30c: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x1da30cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x1da310: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1da310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1da314: 0x3631fdef  ori         $s1, $s1, 0xFDEF
    ctx->pc = 0x1da314u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65007);
    // 0x1da318: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1da318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1da31c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1da31cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da320: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1da320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1da324: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1da324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da328: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1da328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1da32c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1da32cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da330: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1da330u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da334: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1da334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1da338: 0xc076424  jal         func_1D9090
    ctx->pc = 0x1DA338u;
    SET_GPR_U32(ctx, 31, 0x1DA340u);
    ctx->pc = 0x1DA33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA338u;
    // 0x1da33c: 0xc2880a  movz        $s1, $a2, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9090u, 0x1DA338u, 0x1DA340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA340u;
label_1da340:
    // 0x1da340: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1da340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1da344: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1da344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1da348: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1DA348u;
    {
        const bool branch_taken_0x1da348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da348) {
            ctx->pc = 0x1DA34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA348u;
            // 0x1da34c: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA384u;
            goto label_1da384;
        }
    }
    ctx->pc = 0x1DA350u;
    // 0x1da350: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x1DA350u;
    {
        const bool branch_taken_0x1da350 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA350u;
        // 0x1da354: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da350) {
            ctx->pc = 0x1DA380u;
            goto label_1da380;
        }
    }
    ctx->pc = 0x1DA358u;
    // 0x1da358: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x1DA358u;
    SET_GPR_U32(ctx, 31, 0x1DA360u);
    ctx->pc = 0x1DA35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA358u;
    // 0x1da35c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x1DA358u, 0x1DA360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA360u;
label_1da360:
    // 0x1da360: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1da360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1da364: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1da364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da368: 0xc0794de  jal         func_1E5378
    ctx->pc = 0x1DA368u;
    SET_GPR_U32(ctx, 31, 0x1DA370u);
    ctx->pc = 0x1DA36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA368u;
    // 0x1da36c: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5378u, 0x1DA368u, 0x1DA370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA370u;
label_1da370:
    // 0x1da370: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1da370u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da374: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1da374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da378: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x1DA378u;
    SET_GPR_U32(ctx, 31, 0x1DA380u);
    ctx->pc = 0x1DA37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA378u;
    // 0x1da37c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x1DA378u, 0x1DA380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA380u;
label_1da380:
    // 0x1da380: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1da380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1da384:
    // 0x1da384: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1da384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1da388: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DA388u;
    {
        const bool branch_taken_0x1da388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da388) {
            ctx->pc = 0x1DA38Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA388u;
            // 0x1da38c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA3A4u;
            goto label_1da3a4;
        }
    }
    ctx->pc = 0x1DA390u;
    // 0x1da390: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1da390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1da394: 0xc079830  jal         func_1E60C0
    ctx->pc = 0x1DA394u;
    SET_GPR_U32(ctx, 31, 0x1DA39Cu);
    ctx->pc = 0x1DA398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA394u;
    // 0x1da398: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E60C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E60C0u, 0x1DA394u, 0x1DA39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA39Cu;
label_1da39c:
    // 0x1da39c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1DA39Cu;
    {
        const bool branch_taken_0x1da39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA39Cu;
        // 0x1da3a0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da39c) {
            ctx->pc = 0x1DA490u;
            goto label_1da490;
        }
    }
    ctx->pc = 0x1DA3A4u;
label_1da3a4:
    // 0x1da3a4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1da3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1da3a8: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1DA3A8u;
    {
        const bool branch_taken_0x1da3a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3A8u;
        // 0x1da3ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da3a8) {
            ctx->pc = 0x1DA490u;
            goto label_1da490;
        }
    }
    ctx->pc = 0x1DA3B0u;
    // 0x1da3b0: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x1DA3B0u;
    SET_GPR_U32(ctx, 31, 0x1DA3B8u);
    ctx->pc = 0x1DA3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA3B0u;
    // 0x1da3b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x1DA3B0u, 0x1DA3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA3B8u;
label_1da3b8:
    // 0x1da3b8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1da3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1da3bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1da3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da3c0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1da3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1da3c4: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1da3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1da3c8: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x1da3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1da3cc: 0xc079f50  jal         func_1E7D40
    ctx->pc = 0x1DA3CCu;
    SET_GPR_U32(ctx, 31, 0x1DA3D4u);
    ctx->pc = 0x1DA3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA3CCu;
    // 0x1da3d0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7D40u, 0x1DA3CCu, 0x1DA3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA3D4u;
label_1da3d4:
    // 0x1da3d4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1da3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1da3d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1da3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da3dc: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1da3dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da3e0: 0x8c6391f0  lw          $v1, -0x6E10($v1)
    ctx->pc = 0x1da3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91F0u));
    // 0x1da3e4: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DA3E4u;
    {
        const bool branch_taken_0x1da3e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1da3e4) {
            ctx->pc = 0x1DA3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA3E4u;
            // 0x1da3e8: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA404u;
            goto label_1da404;
        }
    }
    ctx->pc = 0x1DA3ECu;
    // 0x1da3ec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1da3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1da3f0: 0x8c4391ec  lw          $v1, -0x6E14($v0)
    ctx->pc = 0x1da3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91ECu));
    // 0x1da3f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1da3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1da3f8: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1da3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1da3fc: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x1da3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
    // 0x1da400: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1da400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1da404:
    // 0x1da404: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1DA404u;
    {
        const bool branch_taken_0x1da404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA404u;
        // 0x1da408: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da404) {
            ctx->pc = 0x1DA488u;
            goto label_1da488;
        }
    }
    ctx->pc = 0x1DA40Cu;
    // 0x1da40c: 0xc079e08  jal         func_1E7820
    ctx->pc = 0x1DA40Cu;
    SET_GPR_U32(ctx, 31, 0x1DA414u);
    ctx->pc = 0x1E7820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7820u, 0x1DA40Cu, 0x1DA414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA414u;
label_1da414:
    // 0x1da414: 0x8e0291f0  lw          $v0, -0x6E10($s0)
    ctx->pc = 0x1da414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939120)));
    // 0x1da418: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DA418u;
    {
        const bool branch_taken_0x1da418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA418u;
        // 0x1da41c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da418) {
            ctx->pc = 0x1DA484u;
            goto label_1da484;
        }
    }
    ctx->pc = 0x1DA420u;
    // 0x1da420: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1da420u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da424: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x1da424u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x1da428: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1da428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1da42c: 0x8ce391ec  lw          $v1, -0x6E14($a3)
    ctx->pc = 0x1da42cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91ECu));
label_1da430:
    // 0x1da430: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1da430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1da434: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da438: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1da438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da43c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1da43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1da440: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x1da440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da444: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1da444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da448: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1da448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da44c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1da44cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1da450: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1da450u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1da454: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1da454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1da458: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1da458u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1da45c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1da45cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1da460: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1da460u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1da464: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x1da464u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1da468: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1da468u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1da46c: 0xf8810010  sqc2        $vf1, 0x10($a0)
    ctx->pc = 0x1da46cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1da470: 0x8d0291f0  lw          $v0, -0x6E10($t0)
    ctx->pc = 0x1da470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294939120)));
    // 0x1da474: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1da474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1da478: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1da478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1da47c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1DA47Cu;
    {
        const bool branch_taken_0x1da47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA47Cu;
        // 0x1da480: 0x8ce391ec  lw          $v1, -0x6E14($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294939116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da47c) {
            ctx->pc = 0x1DA430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da430;
        }
    }
    ctx->pc = 0x1DA484u;
label_1da484:
    // 0x1da484: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1da484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1da488:
    // 0x1da488: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x1DA488u;
    SET_GPR_U32(ctx, 31, 0x1DA490u);
    ctx->pc = 0x1DA48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA488u;
    // 0x1da48c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x1DA488u, 0x1DA490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA490u;
label_1da490:
    // 0x1da490: 0xc07641a  jal         func_1D9068
    ctx->pc = 0x1DA490u;
    SET_GPR_U32(ctx, 31, 0x1DA498u);
    ctx->pc = 0x1D9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9068u, 0x1DA490u, 0x1DA498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA498u;
label_1da498:
    // 0x1da498: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA498u;
    {
        const bool branch_taken_0x1da498 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA498u;
        // 0x1da49c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da498) {
            ctx->pc = 0x1DA4A8u;
            goto label_1da4a8;
        }
    }
    ctx->pc = 0x1DA4A0u;
    // 0x1da4a0: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA4A0u;
    {
        const bool branch_taken_0x1da4a0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA4A0u;
        // 0x1da4a4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da4a0) {
            ctx->pc = 0x1DA4B0u;
            goto label_1da4b0;
        }
    }
    ctx->pc = 0x1DA4A8u;
label_1da4a8:
    // 0x1da4a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1da4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da4ac: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1da4acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1da4b0:
    // 0x1da4b0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1da4b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1da4b4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1da4b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da4b8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1da4b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da4bc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1da4bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1da4c0: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1da4c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1da4c4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1da4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1da4c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA4C8u;
        // 0x1da4cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA4C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA4D0u;
}
