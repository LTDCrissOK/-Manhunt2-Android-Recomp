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

// Function: sub_00280E98
// Address: 0x280e98 - 0x280ef0
void sub_00280E98_0x280e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280E98_0x280e98");
#endif

    switch (ctx->pc) {
        case 0x280eb4u: goto label_280eb4;
        case 0x280ec8u: goto label_280ec8;
        case 0x280ed0u: goto label_280ed0;
        default: break;
    }

    ctx->pc = 0x280e98u;

    // 0x280e98: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x280e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x280e9c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x280e9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x280ea0: 0x8c44f000  lw          $a0, -0x1000($v0)
    ctx->pc = 0x280ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BF000u));
    // 0x280ea4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x280ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280ea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280eac: 0xc0a0352  jal         func_280D48
    ctx->pc = 0x280EACu;
    SET_GPR_U32(ctx, 31, 0x280EB4u);
    ctx->pc = 0x280EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280EACu;
    // 0x280eb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D48u, 0x280EACu, 0x280EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280EB4u;
label_280eb4:
    // 0x280eb4: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x280eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x280eb8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x280EB8u;
    {
        const bool branch_taken_0x280eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280EB8u;
        // 0x280ebc: 0xac62f258  sw          $v0, -0xDA8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963800), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280eb8) {
            ctx->pc = 0x280ED8u;
            goto label_280ed8;
        }
    }
    ctx->pc = 0x280EC0u;
    // 0x280ec0: 0xc0a035a  jal         func_280D68
    ctx->pc = 0x280EC0u;
    SET_GPR_U32(ctx, 31, 0x280EC8u);
    ctx->pc = 0x280D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D68u, 0x280EC0u, 0x280EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280EC8u;
label_280ec8:
    // 0x280ec8: 0xc0cf1f8  jal         func_33C7E0
    ctx->pc = 0x280EC8u;
    SET_GPR_U32(ctx, 31, 0x280ED0u);
    ctx->pc = 0x33C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C7E0u, 0x280EC8u, 0x280ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280ED0u;
label_280ed0:
    // 0x280ed0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x280ED0u;
    {
        const bool branch_taken_0x280ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280ED0u;
        // 0x280ed4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ed0) {
            ctx->pc = 0x280EDCu;
            goto label_280edc;
        }
    }
    ctx->pc = 0x280ED8u;
label_280ed8:
    // 0x280ed8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x280ed8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280edc:
    // 0x280edc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x280EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280EE0u;
        // 0x280ee4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280EE8u;
    // 0x280ee8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x280ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280eec: 0x0  nop
    ctx->pc = 0x280eecu;
    // NOP
    ctx->pc = 0x280ef0u;
}
