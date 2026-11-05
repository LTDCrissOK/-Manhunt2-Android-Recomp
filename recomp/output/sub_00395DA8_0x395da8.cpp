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

// Function: sub_00395DA8
// Address: 0x395da8 - 0x395de0
void sub_00395DA8_0x395da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395DA8_0x395da8");
#endif

    switch (ctx->pc) {
        case 0x395dbcu: goto label_395dbc;
        case 0x395dc4u: goto label_395dc4;
        case 0x395dccu: goto label_395dcc;
        default: break;
    }

    ctx->pc = 0x395da8u;

    // 0x395da8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x395da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x395dac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x395dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x395db0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x395db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x395db4: 0xc0e5796  jal         func_395E58
    ctx->pc = 0x395DB4u;
    SET_GPR_U32(ctx, 31, 0x395DBCu);
    ctx->pc = 0x395DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395DB4u;
    // 0x395db8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E58u, 0x395DB4u, 0x395DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395DBCu;
label_395dbc:
    // 0x395dbc: 0xc0e5778  jal         func_395DE0
    ctx->pc = 0x395DBCu;
    SET_GPR_U32(ctx, 31, 0x395DC4u);
    ctx->pc = 0x395DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395DBCu;
    // 0x395dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395DE0u, 0x395DBCu, 0x395DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395DC4u;
label_395dc4:
    // 0x395dc4: 0xc0e579c  jal         func_395E70
    ctx->pc = 0x395DC4u;
    SET_GPR_U32(ctx, 31, 0x395DCCu);
    ctx->pc = 0x395DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395DC4u;
    // 0x395dc8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E70u, 0x395DC4u, 0x395DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395DCCu;
label_395dcc:
    // 0x395dcc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x395dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x395dd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x395dd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395dd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x395dd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x395DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395DD8u;
        // 0x395ddc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395DE0u;
}
