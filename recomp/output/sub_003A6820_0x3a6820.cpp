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

// Function: sub_003A6820
// Address: 0x3a6820 - 0x3a6a50
void sub_003A6820_0x3a6820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6820_0x3a6820");
#endif

    switch (ctx->pc) {
        case 0x3a6850u: goto label_3a6850;
        case 0x3a685cu: goto label_3a685c;
        case 0x3a6864u: goto label_3a6864;
        case 0x3a6870u: goto label_3a6870;
        case 0x3a687cu: goto label_3a687c;
        case 0x3a6890u: goto label_3a6890;
        case 0x3a68a0u: goto label_3a68a0;
        case 0x3a68acu: goto label_3a68ac;
        case 0x3a68c0u: goto label_3a68c0;
        case 0x3a68d0u: goto label_3a68d0;
        case 0x3a68e0u: goto label_3a68e0;
        case 0x3a6900u: goto label_3a6900;
        case 0x3a6914u: goto label_3a6914;
        case 0x3a6920u: goto label_3a6920;
        case 0x3a6930u: goto label_3a6930;
        case 0x3a6938u: goto label_3a6938;
        case 0x3a6940u: goto label_3a6940;
        case 0x3a6950u: goto label_3a6950;
        case 0x3a6958u: goto label_3a6958;
        case 0x3a6960u: goto label_3a6960;
        case 0x3a6980u: goto label_3a6980;
        case 0x3a69c8u: goto label_3a69c8;
        case 0x3a69f0u: goto label_3a69f0;
        default: break;
    }

    ctx->pc = 0x3a6820u;

    // 0x3a6820: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x3a6820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x3a6824: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x3a6824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3a6828: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x3a6828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x3a682c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a682cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6830: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x3a6830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x3a6834: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3a6834u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6838: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a6838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a683c: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x3a683cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x3a6840: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x3a6840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x3a6844: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x3a6844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x3a6848: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3A6848u;
    SET_GPR_U32(ctx, 31, 0x3A6850u);
    ctx->pc = 0x3A684Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6848u;
    // 0x3a684c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3A6848u, 0x3A6850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6850u;
label_3a6850:
    // 0x3a6850: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a6850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6854: 0xc0e997e  jal         func_3A65F8
    ctx->pc = 0x3A6854u;
    SET_GPR_U32(ctx, 31, 0x3A685Cu);
    ctx->pc = 0x3A6858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6854u;
    // 0x3a6858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65F8u, 0x3A6854u, 0x3A685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A685Cu;
label_3a685c:
    // 0x3a685c: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A685Cu;
    SET_GPR_U32(ctx, 31, 0x3A6864u);
    ctx->pc = 0x3A6860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A685Cu;
    // 0x3a6860: 0x24046000  addiu       $a0, $zero, 0x6000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A685Cu, 0x3A6864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6864u;
label_3a6864:
    // 0x3a6864: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a6864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a6868: 0xc0e8da8  jal         func_3A36A0
    ctx->pc = 0x3A6868u;
    SET_GPR_U32(ctx, 31, 0x3A6870u);
    ctx->pc = 0x3A686Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6868u;
    // 0x3a686c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A36A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A36A0u, 0x3A6868u, 0x3A6870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6870u;
label_3a6870:
    // 0x3a6870: 0x24046001  addiu       $a0, $zero, 0x6001
    ctx->pc = 0x3a6870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24577));
    // 0x3a6874: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A6874u;
    SET_GPR_U32(ctx, 31, 0x3A687Cu);
    ctx->pc = 0x3A6878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6874u;
    // 0x3a6878: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A6874u, 0x3A687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A687Cu;
label_3a687c:
    // 0x3a687c: 0x24046100  addiu       $a0, $zero, 0x6100
    ctx->pc = 0x3a687cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24832));
    // 0x3a6880: 0x6400038  bltz        $s2, . + 4 + (0x38 << 2)
    ctx->pc = 0x3A6880u;
    {
        const bool branch_taken_0x3a6880 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x3A6884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6880u;
        // 0x3a6884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6880) {
            ctx->pc = 0x3A6964u;
            goto label_3a6964;
        }
    }
    ctx->pc = 0x3A6888u;
    // 0x3a6888: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A6888u;
    SET_GPR_U32(ctx, 31, 0x3A6890u);
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A6888u, 0x3A6890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6890u;
label_3a6890:
    // 0x3a6890: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a6890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6894: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a6894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6898: 0xc0e8d5c  jal         func_3A3570
    ctx->pc = 0x3A6898u;
    SET_GPR_U32(ctx, 31, 0x3A68A0u);
    ctx->pc = 0x3A689Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6898u;
    // 0x3a689c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3570u, 0x3A6898u, 0x3A68A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A68A0u;
label_3a68a0:
    // 0x3a68a0: 0x24046101  addiu       $a0, $zero, 0x6101
    ctx->pc = 0x3a68a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24833));
    // 0x3a68a4: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A68A4u;
    SET_GPR_U32(ctx, 31, 0x3A68ACu);
    ctx->pc = 0x3A68A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A68A4u;
    // 0x3a68a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A68A4u, 0x3A68ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A68ACu;
label_3a68ac:
    // 0x3a68ac: 0x24046200  addiu       $a0, $zero, 0x6200
    ctx->pc = 0x3a68acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25088));
    // 0x3a68b0: 0x620002c  bltz        $s1, . + 4 + (0x2C << 2)
    ctx->pc = 0x3A68B0u;
    {
        const bool branch_taken_0x3a68b0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x3A68B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A68B0u;
        // 0x3a68b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a68b0) {
            ctx->pc = 0x3A6964u;
            goto label_3a6964;
        }
    }
    ctx->pc = 0x3A68B8u;
    // 0x3a68b8: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A68B8u;
    SET_GPR_U32(ctx, 31, 0x3A68C0u);
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A68B8u, 0x3A68C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A68C0u;
label_3a68c0:
    // 0x3a68c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a68c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a68c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a68c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a68c8: 0xc0e8d5c  jal         func_3A3570
    ctx->pc = 0x3A68C8u;
    SET_GPR_U32(ctx, 31, 0x3A68D0u);
    ctx->pc = 0x3A68CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A68C8u;
    // 0x3a68cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3570u, 0x3A68C8u, 0x3A68D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A68D0u;
label_3a68d0:
    // 0x3a68d0: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x3a68d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3a68d4: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x3a68d4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x3a68d8: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A68D8u;
    SET_GPR_U32(ctx, 31, 0x3A68E0u);
    ctx->pc = 0x3A68DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A68D8u;
    // 0x3a68dc: 0x24046201  addiu       $a0, $zero, 0x6201 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25089));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A68D8u, 0x3A68E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A68E0u;
label_3a68e0:
    // 0x3a68e0: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x3a68e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x3a68e4: 0x2a231001  slti        $v1, $s1, 0x1001
    ctx->pc = 0x3a68e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4097) ? 1 : 0);
    // 0x3a68e8: 0x43880a  movz        $s1, $v0, $v1
    ctx->pc = 0x3a68e8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x3a68ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a68ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a68f0: 0x600001c  bltz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3A68F0u;
    {
        const bool branch_taken_0x3a68f0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3A68F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A68F0u;
        // 0x3a68f4: 0x24046300  addiu       $a0, $zero, 0x6300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a68f0) {
            ctx->pc = 0x3A6964u;
            goto label_3a6964;
        }
    }
    ctx->pc = 0x3A68F8u;
    // 0x3a68f8: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A68F8u;
    SET_GPR_U32(ctx, 31, 0x3A6900u);
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A68F8u, 0x3A6900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6900u;
label_3a6900:
    // 0x3a6900: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a6900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6904: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x3a6904u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3a6908: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3a6908u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3a690c: 0xc0e8dd8  jal         func_3A3760
    ctx->pc = 0x3A690Cu;
    SET_GPR_U32(ctx, 31, 0x3A6914u);
    ctx->pc = 0x3A6910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A690Cu;
    // 0x3a6910: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3760u, 0x3A690Cu, 0x3A6914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6914u;
label_3a6914:
    // 0x3a6914: 0x24046301  addiu       $a0, $zero, 0x6301
    ctx->pc = 0x3a6914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25345));
    // 0x3a6918: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A6918u;
    SET_GPR_U32(ctx, 31, 0x3A6920u);
    ctx->pc = 0x3A691Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6918u;
    // 0x3a691c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A6918u, 0x3A6920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6920u;
label_3a6920:
    // 0x3a6920: 0x6010009  bgez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A6920u;
    {
        const bool branch_taken_0x3a6920 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3A6924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6920u;
        // 0x3a6924: 0x24046500  addiu       $a0, $zero, 0x6500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6920) {
            ctx->pc = 0x3A6948u;
            goto label_3a6948;
        }
    }
    ctx->pc = 0x3A6928u;
    // 0x3a6928: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A6928u;
    SET_GPR_U32(ctx, 31, 0x3A6930u);
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A6928u, 0x3A6930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6930u;
label_3a6930:
    // 0x3a6930: 0xc0e8dc2  jal         func_3A3708
    ctx->pc = 0x3A6930u;
    SET_GPR_U32(ctx, 31, 0x3A6938u);
    ctx->pc = 0x3A6934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6930u;
    // 0x3a6934: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3708u, 0x3A6930u, 0x3A6938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6938u;
label_3a6938:
    // 0x3a6938: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A6938u;
    SET_GPR_U32(ctx, 31, 0x3A6940u);
    ctx->pc = 0x3A693Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6938u;
    // 0x3a693c: 0x24046501  addiu       $a0, $zero, 0x6501 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25857));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A6938u, 0x3A6940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6940u;
label_3a6940:
    // 0x3a6940: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A6940u;
    {
        const bool branch_taken_0x3a6940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6940u;
        // 0x3a6944: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6940) {
            ctx->pc = 0x3A6964u;
            goto label_3a6964;
        }
    }
    ctx->pc = 0x3A6948u;
label_3a6948:
    // 0x3a6948: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A6948u;
    SET_GPR_U32(ctx, 31, 0x3A6950u);
    ctx->pc = 0x3A694Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6948u;
    // 0x3a694c: 0x24046400  addiu       $a0, $zero, 0x6400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A6948u, 0x3A6950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6950u;
label_3a6950:
    // 0x3a6950: 0xc0e8dc2  jal         func_3A3708
    ctx->pc = 0x3A6950u;
    SET_GPR_U32(ctx, 31, 0x3A6958u);
    ctx->pc = 0x3A6954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6950u;
    // 0x3a6954: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3708u, 0x3A6950u, 0x3A6958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6958u;
label_3a6958:
    // 0x3a6958: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A6958u;
    SET_GPR_U32(ctx, 31, 0x3A6960u);
    ctx->pc = 0x3A695Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6958u;
    // 0x3a695c: 0x24046401  addiu       $a0, $zero, 0x6401 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25601));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A6958u, 0x3A6960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6960u;
label_3a6960:
    // 0x3a6960: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a6960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a6964:
    // 0x3a6964: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x3a6964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3a6968: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x3a6968u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x3a696c: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x3a696cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3a6970: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x3a6970u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3a6974: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x3a6974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3a6978: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6978u;
        // 0x3a697c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6980u;
label_3a6980:
    // 0x3a6980: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a6980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3a6984: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3a6984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3a6988: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3a6988u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a698c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a698cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a6990: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a6990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6994: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a6994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a6998: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3a6998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a699c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a699cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a69a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3a69a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a69a4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3a69a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3a69a8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3a69a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a69ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a69acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a69b0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3a69b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3a69b4: 0x1a800018  blez        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x3A69B4u;
    {
        const bool branch_taken_0x3a69b4 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x3A69B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A69B4u;
        // 0x3a69b8: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a69b4) {
            ctx->pc = 0x3A6A18u;
            goto label_3a6a18;
        }
    }
    ctx->pc = 0x3A69BCu;
    // 0x3a69bc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a69bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a69c0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x3a69c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a69c4: 0x24553d40  addiu       $s5, $v0, 0x3D40
    ctx->pc = 0x3a69c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 15680));
label_3a69c8:
    // 0x3a69c8: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x3a69c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x3a69cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3a69ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a69d0: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x3a69d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3a69d4: 0x501818  mult        $v1, $v0, $s0
    ctx->pc = 0x3a69d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3a69d8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3a69d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3a69dc: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x3a69dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3a69e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3a69e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3a69e4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3a69e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3a69e8: 0xc0e99e0  jal         func_3A6780
    ctx->pc = 0x3A69E8u;
    SET_GPR_U32(ctx, 31, 0x3A69F0u);
    ctx->pc = 0x3A69ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A69E8u;
    // 0x3a69ec: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6780u, 0x3A69E8u, 0x3A69F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A69F0u;
label_3a69f0:
    // 0x3a69f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A69F0u;
    {
        const bool branch_taken_0x3a69f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A69F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A69F0u;
        // 0x3a69f4: 0x214182a  slt         $v1, $s0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a69f0) {
            ctx->pc = 0x3A6A10u;
            goto label_3a6a10;
        }
    }
    ctx->pc = 0x3A69F8u;
    // 0x3a69f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3a69f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a69fc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3a69fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x3a6a00: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3a6a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3a6a04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3A6A04u;
    {
        const bool branch_taken_0x3a6a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6A04u;
        // 0x3a6a08: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6a04) {
            ctx->pc = 0x3A6A20u;
            goto label_3a6a20;
        }
    }
    ctx->pc = 0x3A6A0Cu;
    // 0x3a6a0c: 0x0  nop
    ctx->pc = 0x3a6a0cu;
    // NOP
label_3a6a10:
    // 0x3a6a10: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3A6A10u;
    {
        const bool branch_taken_0x3a6a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6A10u;
        // 0x3a6a14: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6a10) {
            ctx->pc = 0x3A69C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a69c8;
        }
    }
    ctx->pc = 0x3A6A18u;
label_3a6a18:
    // 0x3a6a18: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x3a6a18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x3a6a1c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3a6a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3a6a20:
    // 0x3a6a20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a6a20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6a24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a6a24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a6a28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a6a28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a6a2c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a6a2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a6a30: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3a6a30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a6a34: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3a6a34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3a6a38: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3a6a38u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a6a3c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3a6a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3a6a40: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6A40u;
        // 0x3a6a44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6A48u;
    // 0x3a6a48: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a6a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a6a4c: 0x0  nop
    ctx->pc = 0x3a6a4cu;
    // NOP
    ctx->pc = 0x3a6a50u;
}
