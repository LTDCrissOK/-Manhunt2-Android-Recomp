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

// Function: sub_001B2058
// Address: 0x1b2058 - 0x1b2090
void sub_001B2058_0x1b2058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2058_0x1b2058");
#endif

    switch (ctx->pc) {
        case 0x1b2074u: goto label_1b2074;
        case 0x1b207cu: goto label_1b207c;
        default: break;
    }

    ctx->pc = 0x1b2058u;

    // 0x1b2058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b205c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b205cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2060: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2064: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b2064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2068: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b2068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b206c: 0xc06c6c8  jal         func_1B1B20
    ctx->pc = 0x1B206Cu;
    SET_GPR_U32(ctx, 31, 0x1B2074u);
    ctx->pc = 0x1B2070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B206Cu;
    // 0x1b2070: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1B20u, 0x1B206Cu, 0x1B2074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2074u;
label_1b2074:
    // 0x1b2074: 0xc06c2da  jal         func_1B0B68
    ctx->pc = 0x1B2074u;
    SET_GPR_U32(ctx, 31, 0x1B207Cu);
    ctx->pc = 0x1B2078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2074u;
    // 0x1b2078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0B68u, 0x1B2074u, 0x1B207Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B207Cu;
label_1b207c:
    // 0x1b207c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b207cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2080: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b2080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2084: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2084u;
        // 0x1b2088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B208Cu;
    // 0x1b208c: 0x0  nop
    ctx->pc = 0x1b208cu;
    // NOP
    ctx->pc = 0x1b2090u;
}
