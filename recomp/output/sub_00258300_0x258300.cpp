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

// Function: sub_00258300
// Address: 0x258300 - 0x2583c0
void sub_00258300_0x258300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258300_0x258300");
#endif

    switch (ctx->pc) {
        case 0x258338u: goto label_258338;
        case 0x258340u: goto label_258340;
        case 0x258354u: goto label_258354;
        case 0x258360u: goto label_258360;
        case 0x258388u: goto label_258388;
        case 0x258390u: goto label_258390;
        default: break;
    }

    ctx->pc = 0x258300u;

    // 0x258300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258304: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x258304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x258308: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x258308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x25830c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25830cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258310: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x258310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x258314: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x258314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258318: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x258318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25831c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25831cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x258320: 0x924210c5  lbu         $v0, 0x10C5($s2)
    ctx->pc = 0x258320u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4293)));
    // 0x258324: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x258324u;
    {
        const bool branch_taken_0x258324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258324u;
        // 0x258328: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258324) {
            ctx->pc = 0x258388u;
            goto label_258388;
        }
    }
    ctx->pc = 0x25832Cu;
    // 0x25832c: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x25832cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x258330: 0xc087276  jal         func_21C9D8
    ctx->pc = 0x258330u;
    SET_GPR_U32(ctx, 31, 0x258338u);
    ctx->pc = 0x258334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258330u;
    // 0x258334: 0x261054a0  addiu       $s0, $s0, 0x54A0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C9D8u, 0x258330u, 0x258338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258338u;
label_258338:
    // 0x258338: 0xc0c7c38  jal         func_31F0E0
    ctx->pc = 0x258338u;
    SET_GPR_U32(ctx, 31, 0x258340u);
    ctx->pc = 0x25833Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258338u;
    // 0x25833c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F0E0u, 0x258338u, 0x258340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258340u;
label_258340:
    // 0x258340: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x258340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258344: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x258344u;
    {
        const bool branch_taken_0x258344 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x258344) {
            ctx->pc = 0x258380u;
            goto label_258380;
        }
    }
    ctx->pc = 0x25834Cu;
    // 0x25834c: 0xc0c3158  jal         func_30C560
    ctx->pc = 0x25834Cu;
    SET_GPR_U32(ctx, 31, 0x258354u);
    ctx->pc = 0x258350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25834Cu;
    // 0x258350: 0x8e440104  lw          $a0, 0x104($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C560u, 0x25834Cu, 0x258354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258354u;
label_258354:
    // 0x258354: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x258354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x258358: 0xc0c49d2  jal         func_312748
    ctx->pc = 0x258358u;
    SET_GPR_U32(ctx, 31, 0x258360u);
    ctx->pc = 0x25835Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258358u;
    // 0x25835c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312748u, 0x258358u, 0x258360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258360u;
label_258360:
    // 0x258360: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x258360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258364: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x258364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x258368: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x258368u;
    {
        const bool branch_taken_0x258368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258368u;
        // 0x25836c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258368) {
            ctx->pc = 0x258374u;
            goto label_258374;
        }
    }
    ctx->pc = 0x258370u;
    // 0x258370: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x258370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_258374:
    // 0x258374: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x258374u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258378: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x258378u;
    {
        const bool branch_taken_0x258378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258378u;
        // 0x25837c: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258378) {
            ctx->pc = 0x258388u;
            goto label_258388;
        }
    }
    ctx->pc = 0x258380u;
label_258380:
    // 0x258380: 0xc0dbe86  jal         func_36FA18
    ctx->pc = 0x258380u;
    SET_GPR_U32(ctx, 31, 0x258388u);
    ctx->pc = 0x258384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258380u;
    // 0x258384: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x258380u, 0x258388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258388u;
label_258388:
    // 0x258388: 0xc08d1f6  jal         func_2347D8
    ctx->pc = 0x258388u;
    SET_GPR_U32(ctx, 31, 0x258390u);
    ctx->pc = 0x25838Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258388u;
    // 0x25838c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2347D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2347D8u, 0x258388u, 0x258390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258390u;
label_258390:
    // 0x258390: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x258390u;
    {
        const bool branch_taken_0x258390 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x258394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258390u;
        // 0x258394: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258390) {
            ctx->pc = 0x2583A4u;
            goto label_2583a4;
        }
    }
    ctx->pc = 0x258398u;
    // 0x258398: 0x56200002  bnel        $s1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x258398u;
    {
        const bool branch_taken_0x258398 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x258398) {
            ctx->pc = 0x25839Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258398u;
            // 0x25839c: 0xae330000  sw          $s3, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2583A4u;
            goto label_2583a4;
        }
    }
    ctx->pc = 0x2583A0u;
    // 0x2583a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2583a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2583a4:
    // 0x2583a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2583a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2583a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2583a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2583ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2583acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2583b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2583b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2583b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2583B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2583B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2583B4u;
        // 0x2583b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2583B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2583BCu;
    // 0x2583bc: 0x0  nop
    ctx->pc = 0x2583bcu;
    // NOP
    ctx->pc = 0x2583c0u;
}
