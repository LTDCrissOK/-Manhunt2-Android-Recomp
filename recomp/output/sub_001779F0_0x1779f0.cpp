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

// Function: sub_001779F0
// Address: 0x1779f0 - 0x177a18
void sub_001779F0_0x1779f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001779F0_0x1779f0");
#endif

    switch (ctx->pc) {
        case 0x177a00u: goto label_177a00;
        case 0x177a08u: goto label_177a08;
        default: break;
    }

    ctx->pc = 0x1779f0u;

    // 0x1779f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1779f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1779f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1779f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1779f8: 0xc05e128  jal         func_1784A0
    ctx->pc = 0x1779F8u;
    SET_GPR_U32(ctx, 31, 0x177A00u);
    ctx->pc = 0x1784A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1784A0u, 0x1779F8u, 0x177A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A00u;
label_177a00:
    // 0x177a00: 0xc05e402  jal         func_179008
    ctx->pc = 0x177A00u;
    SET_GPR_U32(ctx, 31, 0x177A08u);
    ctx->pc = 0x177A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A00u;
    // 0x177a04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179008u, 0x177A00u, 0x177A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A08u;
label_177a08:
    // 0x177a08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x177A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A0Cu;
        // 0x177a10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177A14u;
    // 0x177a14: 0x0  nop
    ctx->pc = 0x177a14u;
    // NOP
    ctx->pc = 0x177a18u;
}
