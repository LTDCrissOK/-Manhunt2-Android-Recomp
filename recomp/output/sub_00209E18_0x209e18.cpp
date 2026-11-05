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

// Function: sub_00209E18
// Address: 0x209e18 - 0x209e50
void sub_00209E18_0x209e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209E18_0x209e18");
#endif

    switch (ctx->pc) {
        case 0x209e44u: goto label_209e44;
        default: break;
    }

    ctx->pc = 0x209e18u;

    // 0x209e18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209e1c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x209e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x209e20: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x209e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x209e24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x209e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209e28: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x209e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x209e2c: 0x2405100c  addiu       $a1, $zero, 0x100C
    ctx->pc = 0x209e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4108));
    // 0x209e30: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x209e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x209e34: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x209e34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x209e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x209e3c: 0xc08271e  jal         func_209C78
    ctx->pc = 0x209E3Cu;
    SET_GPR_U32(ctx, 31, 0x209E44u);
    ctx->pc = 0x209E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209E3Cu;
    // 0x209e40: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209C78u, 0x209E3Cu, 0x209E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209E44u;
label_209e44:
    // 0x209e44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209e48: 0x3e00008  jr          $ra
    ctx->pc = 0x209E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E48u;
        // 0x209e4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209E50u;
}
