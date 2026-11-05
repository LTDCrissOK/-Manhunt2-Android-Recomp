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

// Function: sub_00264D30
// Address: 0x264d30 - 0x264d60
void sub_00264D30_0x264d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264D30_0x264d30");
#endif

    switch (ctx->pc) {
        case 0x264d44u: goto label_264d44;
        case 0x264d4cu: goto label_264d4c;
        default: break;
    }

    ctx->pc = 0x264d30u;

    // 0x264d30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x264d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x264d34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x264d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x264d38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x264d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x264d3c: 0xc083bc0  jal         func_20EF00
    ctx->pc = 0x264D3Cu;
    SET_GPR_U32(ctx, 31, 0x264D44u);
    ctx->pc = 0x264D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264D3Cu;
    // 0x264d40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x264D3Cu, 0x264D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264D44u;
label_264d44:
    // 0x264d44: 0xc084048  jal         func_210120
    ctx->pc = 0x264D44u;
    SET_GPR_U32(ctx, 31, 0x264D4Cu);
    ctx->pc = 0x264D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264D44u;
    // 0x264d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210120u, 0x264D44u, 0x264D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264D4Cu;
label_264d4c:
    // 0x264d4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x264d4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264d50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x264d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x264d54: 0x3e00008  jr          $ra
    ctx->pc = 0x264D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264D54u;
        // 0x264d58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264D5Cu;
    // 0x264d5c: 0x0  nop
    ctx->pc = 0x264d5cu;
    // NOP
    ctx->pc = 0x264d60u;
}
