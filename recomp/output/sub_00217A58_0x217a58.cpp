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

// Function: sub_00217A58
// Address: 0x217a58 - 0x217a88
void sub_00217A58_0x217a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217A58_0x217a58");
#endif

    switch (ctx->pc) {
        case 0x217a78u: goto label_217a78;
        default: break;
    }

    ctx->pc = 0x217a58u;

    // 0x217a58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x217a5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217a60: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x217a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x217a64: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x217a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x217a68: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x217A68u;
    {
        const bool branch_taken_0x217a68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x217a68) {
            ctx->pc = 0x217A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217A68u;
            // 0x217a6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217A7Cu;
            goto label_217a7c;
        }
    }
    ctx->pc = 0x217A70u;
    // 0x217a70: 0xc085e3e  jal         func_2178F8
    ctx->pc = 0x217A70u;
    SET_GPR_U32(ctx, 31, 0x217A78u);
    ctx->pc = 0x2178F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2178F8u, 0x217A70u, 0x217A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217A78u;
label_217a78:
    // 0x217a78: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x217a78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_217a7c:
    // 0x217a7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217a80: 0x3e00008  jr          $ra
    ctx->pc = 0x217A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A80u;
        // 0x217a84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217A88u;
}
