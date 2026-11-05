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

// Function: sub_00110D30
// Address: 0x110d30 - 0x110d60
void sub_00110D30_0x110d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110D30_0x110d30");
#endif

    switch (ctx->pc) {
        case 0x110d4cu: goto label_110d4c;
        default: break;
    }

    ctx->pc = 0x110d30u;

    // 0x110d30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110d38: 0x8c8400b4  lw          $a0, 0xB4($a0)
    ctx->pc = 0x110d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x110d3c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110D3Cu;
    {
        const bool branch_taken_0x110d3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x110D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D3Cu;
        // 0x110d40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d3c) {
            ctx->pc = 0x110D54u;
            goto label_110d54;
        }
    }
    ctx->pc = 0x110D44u;
    // 0x110d44: 0xc05a998  jal         func_16A660
    ctx->pc = 0x110D44u;
    SET_GPR_U32(ctx, 31, 0x110D4Cu);
    ctx->pc = 0x16A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A660u, 0x110D44u, 0x110D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110D4Cu;
label_110d4c:
    // 0x110d4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x110D4Cu;
    {
        const bool branch_taken_0x110d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D4Cu;
        // 0x110d50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d4c) {
            ctx->pc = 0x110D58u;
            goto label_110d58;
        }
    }
    ctx->pc = 0x110D54u;
label_110d54:
    // 0x110d54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_110d58:
    // 0x110d58: 0x3e00008  jr          $ra
    ctx->pc = 0x110D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D58u;
        // 0x110d5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110D60u;
}
