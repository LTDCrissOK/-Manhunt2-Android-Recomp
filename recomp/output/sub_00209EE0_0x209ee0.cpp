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

// Function: sub_00209EE0
// Address: 0x209ee0 - 0x209f08
void sub_00209EE0_0x209ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209EE0_0x209ee0");
#endif

    switch (ctx->pc) {
        case 0x209efcu: goto label_209efc;
        default: break;
    }

    ctx->pc = 0x209ee0u;

    // 0x209ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209ee4: 0x24051008  addiu       $a1, $zero, 0x1008
    ctx->pc = 0x209ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4104));
    // 0x209ee8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x209ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x209eec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x209eecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209ef0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x209ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x209ef4: 0xc082700  jal         func_209C00
    ctx->pc = 0x209EF4u;
    SET_GPR_U32(ctx, 31, 0x209EFCu);
    ctx->pc = 0x209EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209EF4u;
    // 0x209ef8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209C00u, 0x209EF4u, 0x209EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209EFCu;
label_209efc:
    // 0x209efc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209f00: 0x3e00008  jr          $ra
    ctx->pc = 0x209F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F00u;
        // 0x209f04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209F08u;
}
