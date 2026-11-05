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

// Function: sub_00133E30
// Address: 0x133e30 - 0x133e60
void sub_00133E30_0x133e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133E30_0x133e30");
#endif

    switch (ctx->pc) {
        case 0x133e4cu: goto label_133e4c;
        default: break;
    }

    ctx->pc = 0x133e30u;

    // 0x133e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x133e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x133e34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x133e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x133e38: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x133e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x133e3c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x133E3Cu;
    {
        const bool branch_taken_0x133e3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x133E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E3Cu;
        // 0x133e40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133e3c) {
            ctx->pc = 0x133E54u;
            goto label_133e54;
        }
    }
    ctx->pc = 0x133E44u;
    // 0x133e44: 0xc04bc5c  jal         func_12F170
    ctx->pc = 0x133E44u;
    SET_GPR_U32(ctx, 31, 0x133E4Cu);
    ctx->pc = 0x12F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F170u, 0x133E44u, 0x133E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E4Cu;
label_133e4c:
    // 0x133e4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x133E4Cu;
    {
        const bool branch_taken_0x133e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E4Cu;
        // 0x133e50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133e4c) {
            ctx->pc = 0x133E58u;
            goto label_133e58;
        }
    }
    ctx->pc = 0x133E54u;
label_133e54:
    // 0x133e54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x133e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_133e58:
    // 0x133e58: 0x3e00008  jr          $ra
    ctx->pc = 0x133E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E58u;
        // 0x133e5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133E60u;
}
