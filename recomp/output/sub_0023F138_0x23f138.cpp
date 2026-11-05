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

// Function: sub_0023F138
// Address: 0x23f138 - 0x23f1f0
void sub_0023F138_0x23f138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F138_0x23f138");
#endif

    switch (ctx->pc) {
        case 0x23f190u: goto label_23f190;
        case 0x23f1bcu: goto label_23f1bc;
        case 0x23f1ccu: goto label_23f1cc;
        case 0x23f1d4u: goto label_23f1d4;
        case 0x23f1dcu: goto label_23f1dc;
        default: break;
    }

    ctx->pc = 0x23f138u;

    // 0x23f138: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23f13c: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x23f13cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x23f140: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23f144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23f148: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23f148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f14c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23f14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23f150: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23F150u;
    {
        const bool branch_taken_0x23f150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F150u;
        // 0x23f154: 0x8e1100c4  lw          $s1, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f150) {
            ctx->pc = 0x23F170u;
            goto label_23f170;
        }
    }
    ctx->pc = 0x23F158u;
    // 0x23f158: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x23f158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23f15c: 0xae05074c  sw          $a1, 0x74C($s0)
    ctx->pc = 0x23f15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1868), GPR_U32(ctx, 5));
    // 0x23f160: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x23f160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x23f164: 0x8c430734  lw          $v1, 0x734($v0)
    ctx->pc = 0x23f164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1844)));
    // 0x23f168: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23F168u;
    {
        const bool branch_taken_0x23f168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F168u;
        // 0x23f16c: 0xae0300c4  sw          $v1, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f168) {
            ctx->pc = 0x23F17Cu;
            goto label_23f17c;
        }
    }
    ctx->pc = 0x23F170u;
label_23f170:
    // 0x23f170: 0x8e020734  lw          $v0, 0x734($s0)
    ctx->pc = 0x23f170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1844)));
    // 0x23f174: 0xae00074c  sw          $zero, 0x74C($s0)
    ctx->pc = 0x23f174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1868), GPR_U32(ctx, 0));
    // 0x23f178: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x23f178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_23f17c:
    // 0x23f17c: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x23f17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x23f180: 0x5224000a  beql        $s1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x23F180u;
    {
        const bool branch_taken_0x23f180 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        if (branch_taken_0x23f180) {
            ctx->pc = 0x23F184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F180u;
            // 0x23f184: 0x8e020fd0  lw          $v0, 0xFD0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F1ACu;
            goto label_23f1ac;
        }
    }
    ctx->pc = 0x23F188u;
    // 0x23f188: 0xc0763f2  jal         func_1D8FC8
    ctx->pc = 0x23F188u;
    SET_GPR_U32(ctx, 31, 0x23F190u);
    ctx->pc = 0x23F18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F188u;
    // 0x23f18c: 0x8e250018  lw          $a1, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8FC8u, 0x23F188u, 0x23F190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F190u;
label_23f190:
    // 0x23f190: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x23f190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x23f194: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x23f194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x23f198: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x23f198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x23f19c: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x23f19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x23f1a0: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x23f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x23f1a4: 0xac44002c  sw          $a0, 0x2C($v0)
    ctx->pc = 0x23f1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 4));
    // 0x23f1a8: 0x8e020fd0  lw          $v0, 0xFD0($s0)
    ctx->pc = 0x23f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4048)));
label_23f1ac:
    // 0x23f1ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F1ACu;
    {
        const bool branch_taken_0x23f1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f1ac) {
            ctx->pc = 0x23F1C4u;
            goto label_23f1c4;
        }
    }
    ctx->pc = 0x23F1B4u;
    // 0x23f1b4: 0xc076826  jal         func_1DA098
    ctx->pc = 0x23F1B4u;
    SET_GPR_U32(ctx, 31, 0x23F1BCu);
    ctx->pc = 0x23F1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F1B4u;
    // 0x23f1b8: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA098u, 0x23F1B4u, 0x23F1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F1BCu;
label_23f1bc:
    // 0x23f1bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23F1BCu;
    {
        const bool branch_taken_0x23f1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f1bc) {
            ctx->pc = 0x23F1CCu;
            goto label_23f1cc;
        }
    }
    ctx->pc = 0x23F1C4u;
label_23f1c4:
    // 0x23f1c4: 0xc07682a  jal         func_1DA0A8
    ctx->pc = 0x23F1C4u;
    SET_GPR_U32(ctx, 31, 0x23F1CCu);
    ctx->pc = 0x23F1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F1C4u;
    // 0x23f1c8: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA0A8u, 0x23F1C4u, 0x23F1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F1CCu;
label_23f1cc:
    // 0x23f1cc: 0xc0767f2  jal         func_1D9FC8
    ctx->pc = 0x23F1CCu;
    SET_GPR_U32(ctx, 31, 0x23F1D4u);
    ctx->pc = 0x23F1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F1CCu;
    // 0x23f1d0: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x23F1CCu, 0x23F1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F1D4u;
label_23f1d4:
    // 0x23f1d4: 0xc076de4  jal         func_1DB790
    ctx->pc = 0x23F1D4u;
    SET_GPR_U32(ctx, 31, 0x23F1DCu);
    ctx->pc = 0x23F1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F1D4u;
    // 0x23f1d8: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB790u, 0x23F1D4u, 0x23F1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F1DCu;
label_23f1dc:
    // 0x23f1dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f1dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f1e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23f1e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23f1e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23f1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x23F1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F1E8u;
        // 0x23f1ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F1F0u;
}
