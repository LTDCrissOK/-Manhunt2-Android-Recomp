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

// Function: sub_001AF598
// Address: 0x1af598 - 0x1af670
void sub_001AF598_0x1af598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF598_0x1af598");
#endif

    switch (ctx->pc) {
        case 0x1af5b8u: goto label_1af5b8;
        case 0x1af5c8u: goto label_1af5c8;
        case 0x1af5e0u: goto label_1af5e0;
        case 0x1af5fcu: goto label_1af5fc;
        case 0x1af644u: goto label_1af644;
        case 0x1af65cu: goto label_1af65c;
        default: break;
    }

    ctx->pc = 0x1af598u;

    // 0x1af598: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1af598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1af59c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af5a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1af5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1af5a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1af5a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af5a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1af5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1af5ac: 0x241101ba  addiu       $s1, $zero, 0x1BA
    ctx->pc = 0x1af5acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    // 0x1af5b0: 0xc08da92  jal         func_236A48
    ctx->pc = 0x1AF5B0u;
    SET_GPR_U32(ctx, 31, 0x1AF5B8u);
    ctx->pc = 0x1AF5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF5B0u;
    // 0x1af5b4: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x1AF5B0u, 0x1AF5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF5B8u;
label_1af5b8:
    // 0x1af5b8: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1AF5B8u;
    {
        const bool branch_taken_0x1af5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af5b8) {
            ctx->pc = 0x1AF5BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF5B8u;
            // 0x1af5bc: 0x24110126  addiu       $s1, $zero, 0x126 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF618u;
            goto label_1af618;
        }
    }
    ctx->pc = 0x1AF5C0u;
    // 0x1af5c0: 0xc08dada  jal         func_236B68
    ctx->pc = 0x1AF5C0u;
    SET_GPR_U32(ctx, 31, 0x1AF5C8u);
    ctx->pc = 0x1AF5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF5C0u;
    // 0x1af5c4: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B68u, 0x1AF5C0u, 0x1AF5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF5C8u;
label_1af5c8:
    // 0x1af5c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF5C8u;
    {
        const bool branch_taken_0x1af5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af5c8) {
            ctx->pc = 0x1AF5D8u;
            goto label_1af5d8;
        }
    }
    ctx->pc = 0x1AF5D0u;
    // 0x1af5d0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1AF5D0u;
    {
        const bool branch_taken_0x1af5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5D0u;
        // 0x1af5d4: 0x24110126  addiu       $s1, $zero, 0x126 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af5d0) {
            ctx->pc = 0x1AF618u;
            goto label_1af618;
        }
    }
    ctx->pc = 0x1AF5D8u;
label_1af5d8:
    // 0x1af5d8: 0xc08dacc  jal         func_236B30
    ctx->pc = 0x1AF5D8u;
    SET_GPR_U32(ctx, 31, 0x1AF5E0u);
    ctx->pc = 0x1AF5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF5D8u;
    // 0x1af5dc: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B30u, 0x1AF5D8u, 0x1AF5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF5E0u;
label_1af5e0:
    // 0x1af5e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF5E0u;
    {
        const bool branch_taken_0x1af5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5E0u;
        // 0x1af5e4: 0x2404012a  addiu       $a0, $zero, 0x12A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af5e0) {
            ctx->pc = 0x1AF5F4u;
            goto label_1af5f4;
        }
    }
    ctx->pc = 0x1AF5E8u;
    // 0x1af5e8: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1af5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1af5ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AF5ECu;
    {
        const bool branch_taken_0x1af5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5ECu;
        // 0x1af5f0: 0x24110129  addiu       $s1, $zero, 0x129 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 297));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af5ec) {
            ctx->pc = 0x1AF60Cu;
            goto label_1af60c;
        }
    }
    ctx->pc = 0x1AF5F4u;
label_1af5f4:
    // 0x1af5f4: 0xc08dab6  jal         func_236AD8
    ctx->pc = 0x1AF5F4u;
    SET_GPR_U32(ctx, 31, 0x1AF5FCu);
    ctx->pc = 0x1AF5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF5F4u;
    // 0x1af5f8: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x1AF5F4u, 0x1AF5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF5FCu;
label_1af5fc:
    // 0x1af5fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF5FCu;
    {
        const bool branch_taken_0x1af5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5FCu;
        // 0x1af600: 0x24040128  addiu       $a0, $zero, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af5fc) {
            ctx->pc = 0x1AF618u;
            goto label_1af618;
        }
    }
    ctx->pc = 0x1AF604u;
    // 0x1af604: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1af604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1af608: 0x24110127  addiu       $s1, $zero, 0x127
    ctx->pc = 0x1af608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 295));
label_1af60c:
    // 0x1af60c: 0x8c43036c  lw          $v1, 0x36C($v0)
    ctx->pc = 0x1af60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x1af610: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x1af610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1af614: 0x83880b  movn        $s1, $a0, $v1
    ctx->pc = 0x1af614u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
label_1af618:
    // 0x1af618: 0x240201ba  addiu       $v0, $zero, 0x1BA
    ctx->pc = 0x1af618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    // 0x1af61c: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF61Cu;
    {
        const bool branch_taken_0x1af61c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AF620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF61Cu;
        // 0x1af620: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af61c) {
            ctx->pc = 0x1AF638u;
            goto label_1af638;
        }
    }
    ctx->pc = 0x1AF624u;
    // 0x1af624: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1af624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1af628: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1af628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1af62c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1af62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1af630: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF630u;
    {
        const bool branch_taken_0x1af630 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF630u;
        // 0x1af634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af630) {
            ctx->pc = 0x1AF64Cu;
            goto label_1af64c;
        }
    }
    ctx->pc = 0x1AF638u;
label_1af638:
    // 0x1af638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af63c: 0xc06b85c  jal         func_1AE170
    ctx->pc = 0x1AF63Cu;
    SET_GPR_U32(ctx, 31, 0x1AF644u);
    ctx->pc = 0x1AF640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF63Cu;
    // 0x1af640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x1AF63Cu, 0x1AF644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF644u;
label_1af644:
    // 0x1af644: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF644u;
    {
        const bool branch_taken_0x1af644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF644u;
        // 0x1af648: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af644) {
            ctx->pc = 0x1AF660u;
            goto label_1af660;
        }
    }
    ctx->pc = 0x1AF64Cu;
label_1af64c:
    // 0x1af64c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1af64cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af650: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1af650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1af654: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AF654u;
    SET_GPR_U32(ctx, 31, 0x1AF65Cu);
    ctx->pc = 0x1AF658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF654u;
    // 0x1af658: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AF654u, 0x1AF65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF65Cu;
label_1af65c:
    // 0x1af65c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af65cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af660:
    // 0x1af660: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1af660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af664: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1af664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af668: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF668u;
        // 0x1af66c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF670u;
}
