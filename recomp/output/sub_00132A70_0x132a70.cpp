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

// Function: sub_00132A70
// Address: 0x132a70 - 0x132ad8
void sub_00132A70_0x132a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132A70_0x132a70");
#endif

    switch (ctx->pc) {
        case 0x132a98u: goto label_132a98;
        case 0x132ac4u: goto label_132ac4;
        default: break;
    }

    ctx->pc = 0x132a70u;

    // 0x132a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x132a74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x132a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x132a78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x132a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x132a7c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x132a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x132a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x132a84: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x132a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x132a88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x132A88u;
    {
        const bool branch_taken_0x132a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A88u;
        // 0x132a8c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a88) {
            ctx->pc = 0x132AA0u;
            goto label_132aa0;
        }
    }
    ctx->pc = 0x132A90u;
    // 0x132a90: 0xc04b4b4  jal         func_12D2D0
    ctx->pc = 0x132A90u;
    SET_GPR_U32(ctx, 31, 0x132A98u);
    ctx->pc = 0x132A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132A90u;
    // 0x132a94: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D2D0u, 0x132A90u, 0x132A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A98u;
label_132a98:
    // 0x132a98: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x132A98u;
    {
        const bool branch_taken_0x132a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132a98) {
            ctx->pc = 0x132A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132A98u;
            // 0x132a9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132AC8u;
            goto label_132ac8;
        }
    }
    ctx->pc = 0x132AA0u;
label_132aa0:
    // 0x132aa0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x132aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x132aa4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x132aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x132aa8: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x132aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x132aac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x132aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x132ab0: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x132ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x132ab4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x132AB4u;
    {
        const bool branch_taken_0x132ab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x132AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132AB4u;
        // 0x132ab8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132ab4) {
            ctx->pc = 0x132AC8u;
            goto label_132ac8;
        }
    }
    ctx->pc = 0x132ABCu;
    // 0x132abc: 0xc043b8a  jal         func_10EE28
    ctx->pc = 0x132ABCu;
    SET_GPR_U32(ctx, 31, 0x132AC4u);
    ctx->pc = 0x132AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132ABCu;
    // 0x132ac0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EE28u, 0x132ABCu, 0x132AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132AC4u;
label_132ac4:
    // 0x132ac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x132ac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_132ac8:
    // 0x132ac8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x132ac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132acc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x132accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x132AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132AD0u;
        // 0x132ad4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132AD8u;
}
