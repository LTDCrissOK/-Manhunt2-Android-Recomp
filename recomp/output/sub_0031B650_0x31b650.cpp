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

// Function: sub_0031B650
// Address: 0x31b650 - 0x31bbf0
void sub_0031B650_0x31b650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B650_0x31b650");
#endif

    switch (ctx->pc) {
        case 0x31b698u: goto label_31b698;
        case 0x31b6b0u: goto label_31b6b0;
        case 0x31b6bcu: goto label_31b6bc;
        case 0x31b6dcu: goto label_31b6dc;
        case 0x31b6f4u: goto label_31b6f4;
        case 0x31b708u: goto label_31b708;
        case 0x31b720u: goto label_31b720;
        case 0x31b734u: goto label_31b734;
        case 0x31b74cu: goto label_31b74c;
        case 0x31b760u: goto label_31b760;
        case 0x31b778u: goto label_31b778;
        case 0x31b78cu: goto label_31b78c;
        case 0x31b7a4u: goto label_31b7a4;
        case 0x31b7b8u: goto label_31b7b8;
        case 0x31b7d0u: goto label_31b7d0;
        case 0x31b7e4u: goto label_31b7e4;
        case 0x31b7fcu: goto label_31b7fc;
        case 0x31b81cu: goto label_31b81c;
        case 0x31b890u: goto label_31b890;
        case 0x31b8a4u: goto label_31b8a4;
        case 0x31b8b0u: goto label_31b8b0;
        case 0x31b8b8u: goto label_31b8b8;
        case 0x31b8e0u: goto label_31b8e0;
        case 0x31b8f8u: goto label_31b8f8;
        case 0x31b910u: goto label_31b910;
        case 0x31b928u: goto label_31b928;
        case 0x31b948u: goto label_31b948;
        case 0x31b960u: goto label_31b960;
        case 0x31b980u: goto label_31b980;
        case 0x31b998u: goto label_31b998;
        case 0x31b9b0u: goto label_31b9b0;
        case 0x31b9c8u: goto label_31b9c8;
        case 0x31b9e8u: goto label_31b9e8;
        case 0x31ba00u: goto label_31ba00;
        case 0x31ba18u: goto label_31ba18;
        case 0x31ba30u: goto label_31ba30;
        case 0x31ba44u: goto label_31ba44;
        case 0x31ba5cu: goto label_31ba5c;
        case 0x31ba70u: goto label_31ba70;
        case 0x31ba88u: goto label_31ba88;
        case 0x31ba9cu: goto label_31ba9c;
        case 0x31bab4u: goto label_31bab4;
        case 0x31bac8u: goto label_31bac8;
        case 0x31bae0u: goto label_31bae0;
        case 0x31baf4u: goto label_31baf4;
        case 0x31bb0cu: goto label_31bb0c;
        case 0x31bb20u: goto label_31bb20;
        case 0x31bb38u: goto label_31bb38;
        case 0x31bb4cu: goto label_31bb4c;
        case 0x31bb64u: goto label_31bb64;
        case 0x31bb78u: goto label_31bb78;
        case 0x31bb90u: goto label_31bb90;
        case 0x31bba4u: goto label_31bba4;
        case 0x31bbb0u: goto label_31bbb0;
        case 0x31bbc4u: goto label_31bbc4;
        default: break;
    }

    ctx->pc = 0x31b650u;

    // 0x31b650: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x31b650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x31b654: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x31b654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x31b658: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x31b658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x31b65c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31b65cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b660: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31b660u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b664: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x31b664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x31b668: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x31b668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x31b66c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b670: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x31b670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x31b674: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x31b674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x31b678: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x31b678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x31b67c: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x31b67cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x31b680: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x31b680u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x31b684: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x31b684u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x31b688: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x31b688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x31b68c: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x31b68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x31b690: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x31B690u;
    SET_GPR_U32(ctx, 31, 0x31B698u);
    ctx->pc = 0x31B694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B690u;
    // 0x31b694: 0x3c160040  lui         $s6, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x31B690u, 0x31B698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B698u;
label_31b698:
    // 0x31b698: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x31b698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x31b69c: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x31b69cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x31b6a0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x31b6a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x31b6a4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31b6a8: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x31B6A8u;
    {
        const bool branch_taken_0x31b6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B6A8u;
        // 0x31b6ac: 0x2453b5e8  addiu       $s3, $v0, -0x4A18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b6a8) {
            ctx->pc = 0x31BBA4u;
            goto label_31bba4;
        }
    }
    ctx->pc = 0x31B6B0u;
label_31b6b0:
    // 0x31b6b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b6b4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B6B4u;
    SET_GPR_U32(ctx, 31, 0x31B6BCu);
    ctx->pc = 0x31B6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B6B4u;
    // 0x31b6b8: 0x24a53a38  addiu       $a1, $a1, 0x3A38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B6B4u, 0x31B6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B6BCu;
label_31b6bc:
    // 0x31b6bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b6c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31B6C0u;
    {
        const bool branch_taken_0x31b6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B6C0u;
        // 0x31b6c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b6c0) {
            ctx->pc = 0x31B6E4u;
            goto label_31b6e4;
        }
    }
    ctx->pc = 0x31B6C8u;
    // 0x31b6c8: 0x26450024  addiu       $a1, $s2, 0x24
    ctx->pc = 0x31b6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x31b6cc: 0x26460025  addiu       $a2, $s2, 0x25
    ctx->pc = 0x31b6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 37));
    // 0x31b6d0: 0x26470026  addiu       $a3, $s2, 0x26
    ctx->pc = 0x31b6d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 38));
    // 0x31b6d4: 0xc09dfb2  jal         func_277EC8
    ctx->pc = 0x31B6D4u;
    SET_GPR_U32(ctx, 31, 0x31B6DCu);
    ctx->pc = 0x31B6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B6D4u;
    // 0x31b6d8: 0x26480027  addiu       $t0, $s2, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277EC8u, 0x31B6D4u, 0x31B6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B6DCu;
label_31b6dc:
    // 0x31b6dc: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x31B6DCu;
    {
        const bool branch_taken_0x31b6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B6DCu;
        // 0x31b6e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b6dc) {
            ctx->pc = 0x31BBA8u;
            goto label_31bba8;
        }
    }
    ctx->pc = 0x31B6E4u;
label_31b6e4:
    // 0x31b6e4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31b6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31b6e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b6ec: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B6ECu;
    SET_GPR_U32(ctx, 31, 0x31B6F4u);
    ctx->pc = 0x31B6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B6ECu;
    // 0x31b6f0: 0x24a53a48  addiu       $a1, $a1, 0x3A48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B6ECu, 0x31B6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B6F4u;
label_31b6f4:
    // 0x31b6f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b6f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B6F8u;
    {
        const bool branch_taken_0x31b6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B6F8u;
        // 0x31b6fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b6f8) {
            ctx->pc = 0x31B710u;
            goto label_31b710;
        }
    }
    ctx->pc = 0x31B700u;
    // 0x31b700: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x31B700u;
    SET_GPR_U32(ctx, 31, 0x31B708u);
    ctx->pc = 0x31B704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B700u;
    // 0x31b704: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x31B700u, 0x31B708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B708u;
label_31b708:
    // 0x31b708: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x31B708u;
    {
        const bool branch_taken_0x31b708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B708u;
        // 0x31b70c: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b708) {
            ctx->pc = 0x31BBA4u;
            goto label_31bba4;
        }
    }
    ctx->pc = 0x31B710u;
label_31b710:
    // 0x31b710: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31b710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31b714: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b718: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B718u;
    SET_GPR_U32(ctx, 31, 0x31B720u);
    ctx->pc = 0x31B71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B718u;
    // 0x31b71c: 0x24a53a58  addiu       $a1, $a1, 0x3A58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B718u, 0x31B720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B720u;
label_31b720:
    // 0x31b720: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b724: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B724u;
    {
        const bool branch_taken_0x31b724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B724u;
        // 0x31b728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b724) {
            ctx->pc = 0x31B73Cu;
            goto label_31b73c;
        }
    }
    ctx->pc = 0x31B72Cu;
    // 0x31b72c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31B72Cu;
    SET_GPR_U32(ctx, 31, 0x31B734u);
    ctx->pc = 0x31B730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B72Cu;
    // 0x31b730: 0x2645002c  addiu       $a1, $s2, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31B72Cu, 0x31B734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B734u;
label_31b734:
    // 0x31b734: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x31B734u;
    {
        const bool branch_taken_0x31b734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B734u;
        // 0x31b738: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b734) {
            ctx->pc = 0x31BBA8u;
            goto label_31bba8;
        }
    }
    ctx->pc = 0x31B73Cu;
label_31b73c:
    // 0x31b73c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31b73cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31b740: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b744: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B744u;
    SET_GPR_U32(ctx, 31, 0x31B74Cu);
    ctx->pc = 0x31B748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B744u;
    // 0x31b748: 0x24a53a68  addiu       $a1, $a1, 0x3A68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B744u, 0x31B74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B74Cu;
label_31b74c:
    // 0x31b74c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b750: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B750u;
    {
        const bool branch_taken_0x31b750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B750u;
        // 0x31b754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b750) {
            ctx->pc = 0x31B768u;
            goto label_31b768;
        }
    }
    ctx->pc = 0x31B758u;
    // 0x31b758: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31B758u;
    SET_GPR_U32(ctx, 31, 0x31B760u);
    ctx->pc = 0x31B75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B758u;
    // 0x31b75c: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31B758u, 0x31B760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B760u;
label_31b760:
    // 0x31b760: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x31B760u;
    {
        const bool branch_taken_0x31b760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B760u;
        // 0x31b764: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b760) {
            ctx->pc = 0x31BBA8u;
            goto label_31bba8;
        }
    }
    ctx->pc = 0x31B768u;
label_31b768:
    // 0x31b768: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31b768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31b76c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b770: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B770u;
    SET_GPR_U32(ctx, 31, 0x31B778u);
    ctx->pc = 0x31B774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B770u;
    // 0x31b774: 0x24a53a78  addiu       $a1, $a1, 0x3A78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B770u, 0x31B778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B778u;
label_31b778:
    // 0x31b778: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b77c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B77Cu;
    {
        const bool branch_taken_0x31b77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B77Cu;
        // 0x31b780: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b77c) {
            ctx->pc = 0x31B794u;
            goto label_31b794;
        }
    }
    ctx->pc = 0x31B784u;
    // 0x31b784: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31B784u;
    SET_GPR_U32(ctx, 31, 0x31B78Cu);
    ctx->pc = 0x31B788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B784u;
    // 0x31b788: 0x26450034  addiu       $a1, $s2, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31B784u, 0x31B78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B78Cu;
label_31b78c:
    // 0x31b78c: 0x10000106  b           . + 4 + (0x106 << 2)
    ctx->pc = 0x31B78Cu;
    {
        const bool branch_taken_0x31b78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B78Cu;
        // 0x31b790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b78c) {
            ctx->pc = 0x31BBA8u;
            goto label_31bba8;
        }
    }
    ctx->pc = 0x31B794u;
label_31b794:
    // 0x31b794: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31b794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31b798: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b79c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B79Cu;
    SET_GPR_U32(ctx, 31, 0x31B7A4u);
    ctx->pc = 0x31B7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B79Cu;
    // 0x31b7a0: 0x24a53a88  addiu       $a1, $a1, 0x3A88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B79Cu, 0x31B7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B7A4u;
label_31b7a4:
    // 0x31b7a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b7a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B7A8u;
    {
        const bool branch_taken_0x31b7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7A8u;
        // 0x31b7ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b7a8) {
            ctx->pc = 0x31B7C0u;
            goto label_31b7c0;
        }
    }
    ctx->pc = 0x31B7B0u;
    // 0x31b7b0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31B7B0u;
    SET_GPR_U32(ctx, 31, 0x31B7B8u);
    ctx->pc = 0x31B7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B7B0u;
    // 0x31b7b4: 0x26450038  addiu       $a1, $s2, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31B7B0u, 0x31B7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B7B8u;
label_31b7b8:
    // 0x31b7b8: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x31B7B8u;
    {
        const bool branch_taken_0x31b7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7B8u;
        // 0x31b7bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b7b8) {
            ctx->pc = 0x31BBA8u;
            goto label_31bba8;
        }
    }
    ctx->pc = 0x31B7C0u;
label_31b7c0:
    // 0x31b7c0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31b7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31b7c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b7c8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B7C8u;
    SET_GPR_U32(ctx, 31, 0x31B7D0u);
    ctx->pc = 0x31B7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B7C8u;
    // 0x31b7cc: 0x24a53a98  addiu       $a1, $a1, 0x3A98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B7C8u, 0x31B7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B7D0u;
label_31b7d0:
    // 0x31b7d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b7d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B7D4u;
    {
        const bool branch_taken_0x31b7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7D4u;
        // 0x31b7d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b7d4) {
            ctx->pc = 0x31B7ECu;
            goto label_31b7ec;
        }
    }
    ctx->pc = 0x31B7DCu;
    // 0x31b7dc: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31B7DCu;
    SET_GPR_U32(ctx, 31, 0x31B7E4u);
    ctx->pc = 0x31B7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B7DCu;
    // 0x31b7e0: 0x2645003c  addiu       $a1, $s2, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31B7DCu, 0x31B7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B7E4u;
label_31b7e4:
    // 0x31b7e4: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x31B7E4u;
    {
        const bool branch_taken_0x31b7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7E4u;
        // 0x31b7e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b7e4) {
            ctx->pc = 0x31BBA8u;
            goto label_31bba8;
        }
    }
    ctx->pc = 0x31B7ECu;
label_31b7ec:
    // 0x31b7ec: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31b7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31b7f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b7f4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B7F4u;
    SET_GPR_U32(ctx, 31, 0x31B7FCu);
    ctx->pc = 0x31B7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B7F4u;
    // 0x31b7f8: 0x24a53ab0  addiu       $a1, $a1, 0x3AB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B7F4u, 0x31B7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B7FCu;
label_31b7fc:
    // 0x31b7fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b800: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x31B800u;
    {
        const bool branch_taken_0x31b800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B800u;
        // 0x31b804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b800) {
            ctx->pc = 0x31B880u;
            goto label_31b880;
        }
    }
    ctx->pc = 0x31B808u;
    // 0x31b808: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x31b808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31b80c: 0x27a60011  addiu       $a2, $sp, 0x11
    ctx->pc = 0x31b80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 17));
    // 0x31b810: 0x27a70012  addiu       $a3, $sp, 0x12
    ctx->pc = 0x31b810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 18));
    // 0x31b814: 0xc09dfb2  jal         func_277EC8
    ctx->pc = 0x31B814u;
    SET_GPR_U32(ctx, 31, 0x31B81Cu);
    ctx->pc = 0x31B818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B814u;
    // 0x31b818: 0x27a80013  addiu       $t0, $sp, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277EC8u, 0x31B814u, 0x31B81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B81Cu;
label_31b81c:
    // 0x31b81c: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x31b81cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b820: 0x93a40011  lbu         $a0, 0x11($sp)
    ctx->pc = 0x31b820u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x31b824: 0x93a50012  lbu         $a1, 0x12($sp)
    ctx->pc = 0x31b824u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x31b828: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x31b828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x31b82c: 0x0  nop
    ctx->pc = 0x31b82cu;
    // NOP
    // 0x31b830: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x31b830u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x31b834: 0x93a30013  lbu         $v1, 0x13($sp)
    ctx->pc = 0x31b834u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 19)));
    // 0x31b838: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31b838u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b83c: 0x0  nop
    ctx->pc = 0x31b83cu;
    // NOP
    // 0x31b840: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31b840u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31b844: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x31b844u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31b848: 0x0  nop
    ctx->pc = 0x31b848u;
    // NOP
    // 0x31b84c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31b84cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31b850: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x31b850u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31b854: 0x0  nop
    ctx->pc = 0x31b854u;
    // NOP
    // 0x31b858: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x31b858u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x31b85c: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x31b85cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x31b860: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x31b860u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x31b864: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x31b864u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x31b868: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x31b868u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x31b86c: 0xe6430040  swc1        $f3, 0x40($s2)
    ctx->pc = 0x31b86cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x31b870: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x31b870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x31b874: 0xe6410048  swc1        $f1, 0x48($s2)
    ctx->pc = 0x31b874u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
    // 0x31b878: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x31B878u;
    {
        const bool branch_taken_0x31b878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B878u;
        // 0x31b87c: 0xe642004c  swc1        $f2, 0x4C($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b878) {
            ctx->pc = 0x31BBA4u;
            goto label_31bba4;
        }
    }
    ctx->pc = 0x31B880u;
label_31b880:
    // 0x31b880: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31b880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31b884: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b888: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B888u;
    SET_GPR_U32(ctx, 31, 0x31B890u);
    ctx->pc = 0x31B88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B888u;
    // 0x31b88c: 0x24a53ab8  addiu       $a1, $a1, 0x3AB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B888u, 0x31B890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B890u;
label_31b890:
    // 0x31b890: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b894: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x31B894u;
    {
        const bool branch_taken_0x31b894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B894u;
        // 0x31b898: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b894) {
            ctx->pc = 0x31B8E8u;
            goto label_31b8e8;
        }
    }
    ctx->pc = 0x31B89Cu;
    // 0x31b89c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x31B89Cu;
    SET_GPR_U32(ctx, 31, 0x31B8A4u);
    ctx->pc = 0x31B8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B89Cu;
    // 0x31b8a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x31B89Cu, 0x31B8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B8A4u;
label_31b8a4:
    // 0x31b8a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31b8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b8a8: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x31B8A8u;
    SET_GPR_U32(ctx, 31, 0x31B8B0u);
    ctx->pc = 0x31B8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B8A8u;
    // 0x31b8ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x31B8A8u, 0x31B8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B8B0u;
label_31b8b0:
    // 0x31b8b0: 0xc0d570e  jal         func_355C38
    ctx->pc = 0x31B8B0u;
    SET_GPR_U32(ctx, 31, 0x31B8B8u);
    ctx->pc = 0x31B8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B8B0u;
    // 0x31b8b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355C38u, 0x31B8B0u, 0x31B8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B8B8u;
label_31b8b8:
    // 0x31b8b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31b8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b8bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31b8c0: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B8C0u;
    {
        const bool branch_taken_0x31b8c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x31B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B8C0u;
        // 0x31b8c4: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b8c0) {
            ctx->pc = 0x31B8D4u;
            goto label_31b8d4;
        }
    }
    ctx->pc = 0x31B8C8u;
    // 0x31b8c8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x31b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x31b8cc: 0xa4442c54  sh          $a0, 0x2C54($v0)
    ctx->pc = 0x31b8ccu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x482C54u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x482C54u, _value); } while (0);
    // 0x31b8d0: 0xa4642c56  sh          $a0, 0x2C56($v1)
    ctx->pc = 0x31b8d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 11350), (uint16_t)GPR_U32(ctx, 4));
label_31b8d4:
    // 0x31b8d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b8d8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x31B8D8u;
    SET_GPR_U32(ctx, 31, 0x31B8E0u);
    ctx->pc = 0x31B8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B8D8u;
    // 0x31b8dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x31B8D8u, 0x31B8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B8E0u;
label_31b8e0:
    // 0x31b8e0: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x31B8E0u;
    {
        const bool branch_taken_0x31b8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B8E0u;
        // 0x31b8e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b8e0) {
            ctx->pc = 0x31BBA8u;
            goto label_31bba8;
        }
    }
    ctx->pc = 0x31B8E8u;
label_31b8e8:
    // 0x31b8e8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31b8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31b8ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b8f0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B8F0u;
    SET_GPR_U32(ctx, 31, 0x31B8F8u);
    ctx->pc = 0x31B8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B8F0u;
    // 0x31b8f4: 0x24a53ac8  addiu       $a1, $a1, 0x3AC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B8F0u, 0x31B8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B8F8u;
label_31b8f8:
    // 0x31b8f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b8fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31B8FCu;
    {
        const bool branch_taken_0x31b8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B8FCu;
        // 0x31b900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b8fc) {
            ctx->pc = 0x31B918u;
            goto label_31b918;
        }
    }
    ctx->pc = 0x31B904u;
    // 0x31b904: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31b904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31b908: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31B908u;
    SET_GPR_U32(ctx, 31, 0x31B910u);
    ctx->pc = 0x31B90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B908u;
    // 0x31b90c: 0x24a5c8d4  addiu       $a1, $a1, -0x372C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31B908u, 0x31B910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B910u;
label_31b910:
    // 0x31b910: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x31B910u;
    {
        const bool branch_taken_0x31b910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B910u;
        // 0x31b914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b910) {
            ctx->pc = 0x31BBA8u;
            goto label_31bba8;
        }
    }
    ctx->pc = 0x31B918u;
label_31b918:
    // 0x31b918: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31b918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31b91c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b920: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B920u;
    SET_GPR_U32(ctx, 31, 0x31B928u);
    ctx->pc = 0x31B924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B920u;
    // 0x31b924: 0x24a53ad8  addiu       $a1, $a1, 0x3AD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B920u, 0x31B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B928u;
label_31b928:
    // 0x31b928: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b92c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31B92Cu;
    {
        const bool branch_taken_0x31b92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B92Cu;
        // 0x31b930: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b92c) {
            ctx->pc = 0x31B950u;
            goto label_31b950;
        }
    }
    ctx->pc = 0x31B934u;
    // 0x31b934: 0x2685c8fc  addiu       $a1, $s4, -0x3704
    ctx->pc = 0x31b934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294953212));
    // 0x31b938: 0x26a6c8fd  addiu       $a2, $s5, -0x3703
    ctx->pc = 0x31b938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294953213));
    // 0x31b93c: 0x26c7c8fe  addiu       $a3, $s6, -0x3702
    ctx->pc = 0x31b93cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953214));
    // 0x31b940: 0xc09dfb2  jal         func_277EC8
    ctx->pc = 0x31B940u;
    SET_GPR_U32(ctx, 31, 0x31B948u);
    ctx->pc = 0x31B944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B940u;
    // 0x31b944: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277EC8u, 0x31B940u, 0x31B948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B948u;
label_31b948:
    // 0x31b948: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x31B948u;
    {
        const bool branch_taken_0x31b948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B948u;
        // 0x31b94c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b948) {
            ctx->pc = 0x31BBA8u;
            goto label_31bba8;
        }
    }
    ctx->pc = 0x31B950u;
label_31b950:
    // 0x31b950: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31b950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31b954: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b958: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B958u;
    SET_GPR_U32(ctx, 31, 0x31B960u);
    ctx->pc = 0x31B95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B958u;
    // 0x31b95c: 0x24a53ae8  addiu       $a1, $a1, 0x3AE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B958u, 0x31B960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B960u;
label_31b960:
    // 0x31b960: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b964: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31B964u;
    {
        const bool branch_taken_0x31b964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B964u;
        // 0x31b968: 0x3c060040  lui         $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b964) {
            ctx->pc = 0x31B988u;
            goto label_31b988;
        }
    }
    ctx->pc = 0x31B96Cu;
    // 0x31b96c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31b96cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31b970: 0x24a5c900  addiu       $a1, $a1, -0x3700
    ctx->pc = 0x31b970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953216));
    // 0x31b974: 0x24c6c904  addiu       $a2, $a2, -0x36FC
    ctx->pc = 0x31b974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953220));
    // 0x31b978: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x31B978u;
    SET_GPR_U32(ctx, 31, 0x31B980u);
    ctx->pc = 0x31B97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B978u;
    // 0x31b97c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x31B978u, 0x31B980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B980u;
label_31b980:
    // 0x31b980: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x31B980u;
    {
        const bool branch_taken_0x31b980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B980u;
        // 0x31b984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b980) {
            ctx->pc = 0x31BBA8u;
            goto label_31bba8;
        }
    }
    ctx->pc = 0x31B988u;
label_31b988:
    // 0x31b988: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31b988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31b98c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b990: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B990u;
    SET_GPR_U32(ctx, 31, 0x31B998u);
    ctx->pc = 0x31B994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B990u;
    // 0x31b994: 0x24a53af8  addiu       $a1, $a1, 0x3AF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B990u, 0x31B998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B998u;
label_31b998:
    // 0x31b998: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b99c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31B99Cu;
    {
        const bool branch_taken_0x31b99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B99Cu;
        // 0x31b9a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b99c) {
            ctx->pc = 0x31B9B8u;
            goto label_31b9b8;
        }
    }
    ctx->pc = 0x31B9A4u;
    // 0x31b9a4: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x31b9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x31b9a8: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x31B9A8u;
    SET_GPR_U32(ctx, 31, 0x31B9B0u);
    ctx->pc = 0x31B9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B9A8u;
    // 0x31b9ac: 0x24a5bec8  addiu       $a1, $a1, -0x4138 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x31B9A8u, 0x31B9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B9B0u;
label_31b9b0:
    // 0x31b9b0: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x31B9B0u;
    {
        const bool branch_taken_0x31b9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B9B0u;
        // 0x31b9b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b9b0) {
            ctx->pc = 0x31BBA8u;
            goto label_31bba8;
        }
    }
    ctx->pc = 0x31B9B8u;
label_31b9b8:
    // 0x31b9b8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31b9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31b9bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b9c0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B9C0u;
    SET_GPR_U32(ctx, 31, 0x31B9C8u);
    ctx->pc = 0x31B9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B9C0u;
    // 0x31b9c4: 0x24a53b00  addiu       $a1, $a1, 0x3B00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B9C0u, 0x31B9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B9C8u;
label_31b9c8:
    // 0x31b9c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b9cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31B9CCu;
    {
        const bool branch_taken_0x31b9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B9CCu;
        // 0x31b9d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b9cc) {
            ctx->pc = 0x31B9F0u;
            goto label_31b9f0;
        }
    }
    ctx->pc = 0x31B9D4u;
    // 0x31b9d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31b9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b9d8: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x31b9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x31b9dc: 0x26670002  addiu       $a3, $s3, 0x2
    ctx->pc = 0x31b9dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x31b9e0: 0xc09dfb2  jal         func_277EC8
    ctx->pc = 0x31B9E0u;
    SET_GPR_U32(ctx, 31, 0x31B9E8u);
    ctx->pc = 0x31B9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B9E0u;
    // 0x31b9e4: 0x27a80031  addiu       $t0, $sp, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277EC8u, 0x31B9E0u, 0x31B9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B9E8u;
label_31b9e8:
    // 0x31b9e8: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x31B9E8u;
    {
        const bool branch_taken_0x31b9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B9E8u;
        // 0x31b9ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b9e8) {
            ctx->pc = 0x31BBA8u;
            goto label_31bba8;
        }
    }
    ctx->pc = 0x31B9F0u;
label_31b9f0:
    // 0x31b9f0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31b9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31b9f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b9f8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31B9F8u;
    SET_GPR_U32(ctx, 31, 0x31BA00u);
    ctx->pc = 0x31B9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B9F8u;
    // 0x31b9fc: 0x24a53b10  addiu       $a1, $a1, 0x3B10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31B9F8u, 0x31BA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BA00u;
label_31ba00:
    // 0x31ba00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31ba00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31ba04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31BA04u;
    {
        const bool branch_taken_0x31ba04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA04u;
        // 0x31ba08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba04) {
            ctx->pc = 0x31BA20u;
            goto label_31ba20;
        }
    }
    ctx->pc = 0x31BA0Cu;
    // 0x31ba0c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31ba0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31ba10: 0xc09e056  jal         func_278158
    ctx->pc = 0x31BA10u;
    SET_GPR_U32(ctx, 31, 0x31BA18u);
    ctx->pc = 0x31BA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BA10u;
    // 0x31ba14: 0x24a5b5ec  addiu       $a1, $a1, -0x4A14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948332));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x31BA10u, 0x31BA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BA18u;
label_31ba18:
    // 0x31ba18: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x31BA18u;
    {
        const bool branch_taken_0x31ba18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA18u;
        // 0x31ba1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba18) {
            ctx->pc = 0x31BBA8u;
            goto label_31bba8;
        }
    }
    ctx->pc = 0x31BA20u;
label_31ba20:
    // 0x31ba20: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31ba20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31ba24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31ba24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ba28: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31BA28u;
    SET_GPR_U32(ctx, 31, 0x31BA30u);
    ctx->pc = 0x31BA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BA28u;
    // 0x31ba2c: 0x24a53b20  addiu       $a1, $a1, 0x3B20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31BA28u, 0x31BA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BA30u;
label_31ba30:
    // 0x31ba30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31ba30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31ba34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31BA34u;
    {
        const bool branch_taken_0x31ba34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA34u;
        // 0x31ba38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba34) {
            ctx->pc = 0x31BA4Cu;
            goto label_31ba4c;
        }
    }
    ctx->pc = 0x31BA3Cu;
    // 0x31ba3c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31BA3Cu;
    SET_GPR_U32(ctx, 31, 0x31BA44u);
    ctx->pc = 0x31BA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BA3Cu;
    // 0x31ba40: 0x26450050  addiu       $a1, $s2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31BA3Cu, 0x31BA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BA44u;
label_31ba44:
    // 0x31ba44: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x31BA44u;
    {
        const bool branch_taken_0x31ba44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA44u;
        // 0x31ba48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba44) {
            ctx->pc = 0x31BBA8u;
            goto label_31bba8;
        }
    }
    ctx->pc = 0x31BA4Cu;
label_31ba4c:
    // 0x31ba4c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31ba4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31ba50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31ba50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ba54: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31BA54u;
    SET_GPR_U32(ctx, 31, 0x31BA5Cu);
    ctx->pc = 0x31BA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BA54u;
    // 0x31ba58: 0x24a53b30  addiu       $a1, $a1, 0x3B30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31BA54u, 0x31BA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BA5Cu;
label_31ba5c:
    // 0x31ba5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31ba5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31ba60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31BA60u;
    {
        const bool branch_taken_0x31ba60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA60u;
        // 0x31ba64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba60) {
            ctx->pc = 0x31BA78u;
            goto label_31ba78;
        }
    }
    ctx->pc = 0x31BA68u;
    // 0x31ba68: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x31BA68u;
    SET_GPR_U32(ctx, 31, 0x31BA70u);
    ctx->pc = 0x31BA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BA68u;
    // 0x31ba6c: 0x26450054  addiu       $a1, $s2, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x31BA68u, 0x31BA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BA70u;
label_31ba70:
    // 0x31ba70: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x31BA70u;
    {
        const bool branch_taken_0x31ba70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA70u;
        // 0x31ba74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba70) {
            ctx->pc = 0x31BBA8u;
            goto label_31bba8;
        }
    }
    ctx->pc = 0x31BA78u;
label_31ba78:
    // 0x31ba78: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31ba78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31ba7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31ba7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ba80: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31BA80u;
    SET_GPR_U32(ctx, 31, 0x31BA88u);
    ctx->pc = 0x31BA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BA80u;
    // 0x31ba84: 0x24a53b48  addiu       $a1, $a1, 0x3B48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31BA80u, 0x31BA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BA88u;
label_31ba88:
    // 0x31ba88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31ba88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31ba8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31BA8Cu;
    {
        const bool branch_taken_0x31ba8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA8Cu;
        // 0x31ba90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba8c) {
            ctx->pc = 0x31BAA4u;
            goto label_31baa4;
        }
    }
    ctx->pc = 0x31BA94u;
    // 0x31ba94: 0xc09e056  jal         func_278158
    ctx->pc = 0x31BA94u;
    SET_GPR_U32(ctx, 31, 0x31BA9Cu);
    ctx->pc = 0x31BA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BA94u;
    // 0x31ba98: 0x2645005c  addiu       $a1, $s2, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x31BA94u, 0x31BA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BA9Cu;
label_31ba9c:
    // 0x31ba9c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x31BA9Cu;
    {
        const bool branch_taken_0x31ba9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA9Cu;
        // 0x31baa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba9c) {
            ctx->pc = 0x31BBA8u;
            goto label_31bba8;
        }
    }
    ctx->pc = 0x31BAA4u;
label_31baa4:
    // 0x31baa4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31baa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31baa8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31baa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31baac: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31BAACu;
    SET_GPR_U32(ctx, 31, 0x31BAB4u);
    ctx->pc = 0x31BAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BAACu;
    // 0x31bab0: 0x24a53b58  addiu       $a1, $a1, 0x3B58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31BAACu, 0x31BAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BAB4u;
label_31bab4:
    // 0x31bab4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31bab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31bab8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31BAB8u;
    {
        const bool branch_taken_0x31bab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BAB8u;
        // 0x31babc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bab8) {
            ctx->pc = 0x31BAD0u;
            goto label_31bad0;
        }
    }
    ctx->pc = 0x31BAC0u;
    // 0x31bac0: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x31BAC0u;
    SET_GPR_U32(ctx, 31, 0x31BAC8u);
    ctx->pc = 0x31BAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BAC0u;
    // 0x31bac4: 0x26450060  addiu       $a1, $s2, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x31BAC0u, 0x31BAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BAC8u;
label_31bac8:
    // 0x31bac8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x31BAC8u;
    {
        const bool branch_taken_0x31bac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BAC8u;
        // 0x31bacc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bac8) {
            ctx->pc = 0x31BBA8u;
            goto label_31bba8;
        }
    }
    ctx->pc = 0x31BAD0u;
label_31bad0:
    // 0x31bad0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31bad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31bad4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31bad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bad8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31BAD8u;
    SET_GPR_U32(ctx, 31, 0x31BAE0u);
    ctx->pc = 0x31BADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BAD8u;
    // 0x31badc: 0x24a53b70  addiu       $a1, $a1, 0x3B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31BAD8u, 0x31BAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BAE0u;
label_31bae0:
    // 0x31bae0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31bae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31bae4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31BAE4u;
    {
        const bool branch_taken_0x31bae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BAE4u;
        // 0x31bae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bae4) {
            ctx->pc = 0x31BAFCu;
            goto label_31bafc;
        }
    }
    ctx->pc = 0x31BAECu;
    // 0x31baec: 0xc09e056  jal         func_278158
    ctx->pc = 0x31BAECu;
    SET_GPR_U32(ctx, 31, 0x31BAF4u);
    ctx->pc = 0x31BAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BAECu;
    // 0x31baf0: 0x26450068  addiu       $a1, $s2, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x31BAECu, 0x31BAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BAF4u;
label_31baf4:
    // 0x31baf4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x31BAF4u;
    {
        const bool branch_taken_0x31baf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BAF4u;
        // 0x31baf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31baf4) {
            ctx->pc = 0x31BBA8u;
            goto label_31bba8;
        }
    }
    ctx->pc = 0x31BAFCu;
label_31bafc:
    // 0x31bafc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31bafcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31bb00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31bb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bb04: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31BB04u;
    SET_GPR_U32(ctx, 31, 0x31BB0Cu);
    ctx->pc = 0x31BB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BB04u;
    // 0x31bb08: 0x24a53b88  addiu       $a1, $a1, 0x3B88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31BB04u, 0x31BB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BB0Cu;
label_31bb0c:
    // 0x31bb0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31bb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31bb10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31BB10u;
    {
        const bool branch_taken_0x31bb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB10u;
        // 0x31bb14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb10) {
            ctx->pc = 0x31BB28u;
            goto label_31bb28;
        }
    }
    ctx->pc = 0x31BB18u;
    // 0x31bb18: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x31BB18u;
    SET_GPR_U32(ctx, 31, 0x31BB20u);
    ctx->pc = 0x31BB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BB18u;
    // 0x31bb1c: 0x2645006c  addiu       $a1, $s2, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x31BB18u, 0x31BB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BB20u;
label_31bb20:
    // 0x31bb20: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x31BB20u;
    {
        const bool branch_taken_0x31bb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB20u;
        // 0x31bb24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb20) {
            ctx->pc = 0x31BBA8u;
            goto label_31bba8;
        }
    }
    ctx->pc = 0x31BB28u;
label_31bb28:
    // 0x31bb28: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31bb28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31bb2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31bb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bb30: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31BB30u;
    SET_GPR_U32(ctx, 31, 0x31BB38u);
    ctx->pc = 0x31BB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BB30u;
    // 0x31bb34: 0x24a53ba0  addiu       $a1, $a1, 0x3BA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31BB30u, 0x31BB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BB38u;
label_31bb38:
    // 0x31bb38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31bb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31bb3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31BB3Cu;
    {
        const bool branch_taken_0x31bb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB3Cu;
        // 0x31bb40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb3c) {
            ctx->pc = 0x31BB54u;
            goto label_31bb54;
        }
    }
    ctx->pc = 0x31BB44u;
    // 0x31bb44: 0xc09e056  jal         func_278158
    ctx->pc = 0x31BB44u;
    SET_GPR_U32(ctx, 31, 0x31BB4Cu);
    ctx->pc = 0x31BB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BB44u;
    // 0x31bb48: 0x26450074  addiu       $a1, $s2, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x31BB44u, 0x31BB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BB4Cu;
label_31bb4c:
    // 0x31bb4c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x31BB4Cu;
    {
        const bool branch_taken_0x31bb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB4Cu;
        // 0x31bb50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb4c) {
            ctx->pc = 0x31BBA8u;
            goto label_31bba8;
        }
    }
    ctx->pc = 0x31BB54u;
label_31bb54:
    // 0x31bb54: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31bb54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31bb58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31bb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bb5c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31BB5Cu;
    SET_GPR_U32(ctx, 31, 0x31BB64u);
    ctx->pc = 0x31BB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BB5Cu;
    // 0x31bb60: 0x24a53bb0  addiu       $a1, $a1, 0x3BB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31BB5Cu, 0x31BB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BB64u;
label_31bb64:
    // 0x31bb64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31bb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31bb68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31BB68u;
    {
        const bool branch_taken_0x31bb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB68u;
        // 0x31bb6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb68) {
            ctx->pc = 0x31BB80u;
            goto label_31bb80;
        }
    }
    ctx->pc = 0x31BB70u;
    // 0x31bb70: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31BB70u;
    SET_GPR_U32(ctx, 31, 0x31BB78u);
    ctx->pc = 0x31BB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BB70u;
    // 0x31bb74: 0x26450078  addiu       $a1, $s2, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31BB70u, 0x31BB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BB78u;
label_31bb78:
    // 0x31bb78: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x31BB78u;
    {
        const bool branch_taken_0x31bb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB78u;
        // 0x31bb7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb78) {
            ctx->pc = 0x31BBA8u;
            goto label_31bba8;
        }
    }
    ctx->pc = 0x31BB80u;
label_31bb80:
    // 0x31bb80: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31bb80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31bb84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31bb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bb88: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31BB88u;
    SET_GPR_U32(ctx, 31, 0x31BB90u);
    ctx->pc = 0x31BB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BB88u;
    // 0x31bb8c: 0x24a53bc8  addiu       $a1, $a1, 0x3BC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31BB88u, 0x31BB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BB90u;
label_31bb90:
    // 0x31bb90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31bb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31bb94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BB94u;
    {
        const bool branch_taken_0x31bb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB94u;
        // 0x31bb98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb94) {
            ctx->pc = 0x31BBA4u;
            goto label_31bba4;
        }
    }
    ctx->pc = 0x31BB9Cu;
    // 0x31bb9c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31BB9Cu;
    SET_GPR_U32(ctx, 31, 0x31BBA4u);
    ctx->pc = 0x31BBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BB9Cu;
    // 0x31bba0: 0x2645007c  addiu       $a1, $s2, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31BB9Cu, 0x31BBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BBA4u;
label_31bba4:
    // 0x31bba4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31bba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31bba8:
    // 0x31bba8: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x31BBA8u;
    SET_GPR_U32(ctx, 31, 0x31BBB0u);
    ctx->pc = 0x31BBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BBA8u;
    // 0x31bbac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x31BBA8u, 0x31BBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BBB0u;
label_31bbb0:
    // 0x31bbb0: 0x1440febf  bnez        $v0, . + 4 + (-0x141 << 2)
    ctx->pc = 0x31BBB0u;
    {
        const bool branch_taken_0x31bbb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BBB0u;
        // 0x31bbb4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bbb0) {
            ctx->pc = 0x31B6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b6b0;
        }
    }
    ctx->pc = 0x31BBB8u;
    // 0x31bbb8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31bbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bbbc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x31BBBCu;
    SET_GPR_U32(ctx, 31, 0x31BBC4u);
    ctx->pc = 0x31BBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BBBCu;
    // 0x31bbc0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x31BBBCu, 0x31BBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BBC4u;
label_31bbc4:
    // 0x31bbc4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x31bbc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31bbc8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x31bbc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31bbcc: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x31bbccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31bbd0: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x31bbd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31bbd4: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x31bbd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31bbd8: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x31bbd8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x31bbdc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x31bbdcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31bbe0: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x31bbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x31bbe4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x31bbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31bbe8: 0x3e00008  jr          $ra
    ctx->pc = 0x31BBE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BBE8u;
        // 0x31bbec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BBE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BBF0u;
}
