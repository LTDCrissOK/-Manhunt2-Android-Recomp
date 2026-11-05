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

// Function: sub_00200E58
// Address: 0x200e58 - 0x200e88
void sub_00200E58_0x200e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200E58_0x200e58");
#endif

    switch (ctx->pc) {
        case 0x200e70u: goto label_200e70;
        case 0x200e78u: goto label_200e78;
        default: break;
    }

    ctx->pc = 0x200e58u;

    // 0x200e58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200e5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200e60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x200e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x200e64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x200e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e68: 0xc081a60  jal         func_206980
    ctx->pc = 0x200E68u;
    SET_GPR_U32(ctx, 31, 0x200E70u);
    ctx->pc = 0x200E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200E68u;
    // 0x200e6c: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x200E68u, 0x200E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E70u;
label_200e70:
    // 0x200e70: 0xc081a60  jal         func_206980
    ctx->pc = 0x200E70u;
    SET_GPR_U32(ctx, 31, 0x200E78u);
    ctx->pc = 0x200E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200E70u;
    // 0x200e74: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x200E70u, 0x200E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E78u;
label_200e78:
    // 0x200e78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200e78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200e7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x200e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200e80: 0x3e00008  jr          $ra
    ctx->pc = 0x200E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E80u;
        // 0x200e84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200E88u;
}
