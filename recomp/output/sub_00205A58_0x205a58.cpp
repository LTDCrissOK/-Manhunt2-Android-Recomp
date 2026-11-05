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

// Function: sub_00205A58
// Address: 0x205a58 - 0x205a88
void sub_00205A58_0x205a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205A58_0x205a58");
#endif

    switch (ctx->pc) {
        case 0x205a74u: goto label_205a74;
        default: break;
    }

    ctx->pc = 0x205a58u;

    // 0x205a58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205a5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x205a60: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x205a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x205a64: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x205A64u;
    {
        const bool branch_taken_0x205a64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x205a64) {
            ctx->pc = 0x205A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205A64u;
            // 0x205a68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205A7Cu;
            goto label_205a7c;
        }
    }
    ctx->pc = 0x205A6Cu;
    // 0x205a6c: 0xc0e7dbe  jal         func_39F6F8
    ctx->pc = 0x205A6Cu;
    SET_GPR_U32(ctx, 31, 0x205A74u);
    ctx->pc = 0x39F6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F6F8u, 0x205A6Cu, 0x205A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205A74u;
label_205a74:
    // 0x205a74: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x205a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x205a78: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x205a78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_205a7c:
    // 0x205a7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205a80: 0x3e00008  jr          $ra
    ctx->pc = 0x205A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A80u;
        // 0x205a84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205A88u;
}
