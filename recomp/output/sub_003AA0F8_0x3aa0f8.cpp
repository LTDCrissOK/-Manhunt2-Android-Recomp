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

// Function: sub_003AA0F8
// Address: 0x3aa0f8 - 0x3aa140
void sub_003AA0F8_0x3aa0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA0F8_0x3aa0f8");
#endif

    switch (ctx->pc) {
        case 0x3aa114u: goto label_3aa114;
        case 0x3aa120u: goto label_3aa120;
        case 0x3aa128u: goto label_3aa128;
        default: break;
    }

    ctx->pc = 0x3aa0f8u;

    // 0x3aa0f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3aa0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3aa0fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3aa0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3aa100: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3aa100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa104: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3aa104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3aa108: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3aa108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3aa10c: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3AA10Cu;
    SET_GPR_U32(ctx, 31, 0x3AA114u);
    ctx->pc = 0x3AA110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA10Cu;
    // 0x3aa110: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3AA10Cu, 0x3AA114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA114u;
label_3aa114:
    // 0x3aa114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aa114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa118: 0xc0ea850  jal         func_3AA140
    ctx->pc = 0x3AA118u;
    SET_GPR_U32(ctx, 31, 0x3AA120u);
    ctx->pc = 0x3AA11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA118u;
    // 0x3aa11c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA140u, 0x3AA118u, 0x3AA120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA120u;
label_3aa120:
    // 0x3aa120: 0xc0ea7de  jal         func_3A9F78
    ctx->pc = 0x3AA120u;
    SET_GPR_U32(ctx, 31, 0x3AA128u);
    ctx->pc = 0x3AA124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA120u;
    // 0x3aa124: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F78u, 0x3AA120u, 0x3AA128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA128u;
label_3aa128:
    // 0x3aa128: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3aa128u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3aa12c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3aa12cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa130: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3aa130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3aa134: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3aa134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aa138: 0x3e00008  jr          $ra
    ctx->pc = 0x3AA138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA138u;
        // 0x3aa13c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AA140u;
}
