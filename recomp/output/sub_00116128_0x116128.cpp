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

// Function: sub_00116128
// Address: 0x116128 - 0x116178
void sub_00116128_0x116128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116128_0x116128");
#endif

    switch (ctx->pc) {
        case 0x116144u: goto label_116144;
        case 0x116168u: goto label_116168;
        default: break;
    }

    ctx->pc = 0x116128u;

    // 0x116128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x116128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11612c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11612cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x116130: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x116130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x116134: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x116134u;
    {
        const bool branch_taken_0x116134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x116138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116134u;
        // 0x116138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116134) {
            ctx->pc = 0x116168u;
            goto label_116168;
        }
    }
    ctx->pc = 0x11613Cu;
    // 0x11613c: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x11613Cu;
    SET_GPR_U32(ctx, 31, 0x116144u);
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x11613Cu, 0x116144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116144u;
label_116144:
    // 0x116144: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x116144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116148: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x116148u;
    {
        const bool branch_taken_0x116148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116148u;
        // 0x11614c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116148) {
            ctx->pc = 0x116168u;
            goto label_116168;
        }
    }
    ctx->pc = 0x116150u;
    // 0x116150: 0x8c8200b8  lw          $v0, 0xB8($a0)
    ctx->pc = 0x116150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x116154: 0x8c4302e0  lw          $v1, 0x2E0($v0)
    ctx->pc = 0x116154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 736)));
    // 0x116158: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x116158u;
    {
        const bool branch_taken_0x116158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116158u;
        // 0x11615c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116158) {
            ctx->pc = 0x116168u;
            goto label_116168;
        }
    }
    ctx->pc = 0x116160u;
    // 0x116160: 0xc09855c  jal         func_261570
    ctx->pc = 0x116160u;
    SET_GPR_U32(ctx, 31, 0x116168u);
    ctx->pc = 0x261570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261570u, 0x116160u, 0x116168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116168u;
label_116168:
    // 0x116168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x116168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11616c: 0x3e00008  jr          $ra
    ctx->pc = 0x11616Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11616Cu;
        // 0x116170: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11616Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116174u;
    // 0x116174: 0x0  nop
    ctx->pc = 0x116174u;
    // NOP
    ctx->pc = 0x116178u;
}
