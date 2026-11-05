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

// Function: sub_00280D88
// Address: 0x280d88 - 0x280dd0
void sub_00280D88_0x280d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280D88_0x280d88");
#endif

    switch (ctx->pc) {
        case 0x280da4u: goto label_280da4;
        case 0x280db8u: goto label_280db8;
        default: break;
    }

    ctx->pc = 0x280d88u;

    // 0x280d88: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x280d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x280d8c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x280d8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x280d90: 0x8c44f008  lw          $a0, -0xFF8($v0)
    ctx->pc = 0x280d90u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BF008u));
    // 0x280d94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x280d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280d98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280d9c: 0xc0a0352  jal         func_280D48
    ctx->pc = 0x280D9Cu;
    SET_GPR_U32(ctx, 31, 0x280DA4u);
    ctx->pc = 0x280DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280D9Cu;
    // 0x280da0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D48u, 0x280D9Cu, 0x280DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280DA4u;
label_280da4:
    // 0x280da4: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x280da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x280da8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x280DA8u;
    {
        const bool branch_taken_0x280da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280DA8u;
        // 0x280dac: 0xac62f250  sw          $v0, -0xDB0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280da8) {
            ctx->pc = 0x280DC0u;
            goto label_280dc0;
        }
    }
    ctx->pc = 0x280DB0u;
    // 0x280db0: 0xc0a035a  jal         func_280D68
    ctx->pc = 0x280DB0u;
    SET_GPR_U32(ctx, 31, 0x280DB8u);
    ctx->pc = 0x280D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D68u, 0x280DB0u, 0x280DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280DB8u;
label_280db8:
    // 0x280db8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x280DB8u;
    {
        const bool branch_taken_0x280db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280DB8u;
        // 0x280dbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280db8) {
            ctx->pc = 0x280DC4u;
            goto label_280dc4;
        }
    }
    ctx->pc = 0x280DC0u;
label_280dc0:
    // 0x280dc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x280dc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280dc4:
    // 0x280dc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x280DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280DC8u;
        // 0x280dcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280DD0u;
}
