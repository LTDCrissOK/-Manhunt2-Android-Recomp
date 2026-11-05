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

// Function: sub_00254978
// Address: 0x254978 - 0x2549b0
void sub_00254978_0x254978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254978_0x254978");
#endif

    switch (ctx->pc) {
        case 0x254998u: goto label_254998;
        default: break;
    }

    ctx->pc = 0x254978u;

    // 0x254978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25497c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25497cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254980: 0x8c821060  lw          $v0, 0x1060($a0)
    ctx->pc = 0x254980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4192)));
    // 0x254984: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x254984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
    // 0x254988: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x254988u;
    {
        const bool branch_taken_0x254988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254988u;
        // 0x25498c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254988) {
            ctx->pc = 0x2549A4u;
            goto label_2549a4;
        }
    }
    ctx->pc = 0x254990u;
    // 0x254990: 0xc09530a  jal         func_254C28
    ctx->pc = 0x254990u;
    SET_GPR_U32(ctx, 31, 0x254998u);
    ctx->pc = 0x254C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C28u, 0x254990u, 0x254998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254998u;
label_254998:
    // 0x254998: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x254998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x25499c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x25499cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2549a0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2549a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2549a4:
    // 0x2549a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2549a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2549a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2549A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2549ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2549A8u;
        // 0x2549ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2549A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2549B0u;
}
