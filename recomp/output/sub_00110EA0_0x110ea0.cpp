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

// Function: sub_00110EA0
// Address: 0x110ea0 - 0x110ed0
void sub_00110EA0_0x110ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110EA0_0x110ea0");
#endif

    switch (ctx->pc) {
        case 0x110ebcu: goto label_110ebc;
        default: break;
    }

    ctx->pc = 0x110ea0u;

    // 0x110ea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110ea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110ea8: 0x8c8400b4  lw          $a0, 0xB4($a0)
    ctx->pc = 0x110ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x110eac: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110EACu;
    {
        const bool branch_taken_0x110eac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x110EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EACu;
        // 0x110eb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110eac) {
            ctx->pc = 0x110EC4u;
            goto label_110ec4;
        }
    }
    ctx->pc = 0x110EB4u;
    // 0x110eb4: 0xc05aa12  jal         func_16A848
    ctx->pc = 0x110EB4u;
    SET_GPR_U32(ctx, 31, 0x110EBCu);
    ctx->pc = 0x16A848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A848u, 0x110EB4u, 0x110EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110EBCu;
label_110ebc:
    // 0x110ebc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x110EBCu;
    {
        const bool branch_taken_0x110ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EBCu;
        // 0x110ec0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ebc) {
            ctx->pc = 0x110EC8u;
            goto label_110ec8;
        }
    }
    ctx->pc = 0x110EC4u;
label_110ec4:
    // 0x110ec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_110ec8:
    // 0x110ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x110EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EC8u;
        // 0x110ecc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110ED0u;
}
