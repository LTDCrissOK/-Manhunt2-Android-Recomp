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

// Function: sub_002CA9E0
// Address: 0x2ca9e0 - 0x2caa18
void sub_002CA9E0_0x2ca9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA9E0_0x2ca9e0");
#endif

    switch (ctx->pc) {
        case 0x2ca9f0u: goto label_2ca9f0;
        case 0x2ca9f8u: goto label_2ca9f8;
        default: break;
    }

    ctx->pc = 0x2ca9e0u;

    // 0x2ca9e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ca9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ca9e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca9e8: 0xc0b28aa  jal         func_2CA2A8
    ctx->pc = 0x2CA9E8u;
    SET_GPR_U32(ctx, 31, 0x2CA9F0u);
    ctx->pc = 0x2CA2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA2A8u, 0x2CA9E8u, 0x2CA9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA9F0u;
label_2ca9f0:
    // 0x2ca9f0: 0xc0b29d0  jal         func_2CA740
    ctx->pc = 0x2CA9F0u;
    SET_GPR_U32(ctx, 31, 0x2CA9F8u);
    ctx->pc = 0x2CA9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA9F0u;
    // 0x2ca9f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA740u, 0x2CA9F0u, 0x2CA9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA9F8u;
label_2ca9f8:
    // 0x2ca9f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca9fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA9FCu;
        // 0x2caa00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA9FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAA04u;
    // 0x2caa04: 0x0  nop
    ctx->pc = 0x2caa04u;
    // NOP
    // 0x2caa08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2caa08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2caa0c: 0x0  nop
    ctx->pc = 0x2caa0cu;
    // NOP
    // 0x2caa10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2caa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2caa14: 0x0  nop
    ctx->pc = 0x2caa14u;
    // NOP
    ctx->pc = 0x2caa18u;
}
