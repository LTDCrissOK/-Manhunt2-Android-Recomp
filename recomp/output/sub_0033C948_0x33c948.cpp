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

// Function: sub_0033C948
// Address: 0x33c948 - 0x33c990
void sub_0033C948_0x33c948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C948_0x33c948");
#endif

    switch (ctx->pc) {
        case 0x33c980u: goto label_33c980;
        default: break;
    }

    ctx->pc = 0x33c948u;

    // 0x33c948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33c948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33c94c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x33c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33c950: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x33C950u;
    {
        const bool branch_taken_0x33c950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C950u;
        // 0x33c954: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c950) {
            ctx->pc = 0x33C980u;
            goto label_33c980;
        }
    }
    ctx->pc = 0x33C958u;
    // 0x33c958: 0x8c42032c  lw          $v0, 0x32C($v0)
    ctx->pc = 0x33c958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 812)));
    // 0x33c95c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33C95Cu;
    {
        const bool branch_taken_0x33c95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C95Cu;
        // 0x33c960: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c95c) {
            ctx->pc = 0x33C984u;
            goto label_33c984;
        }
    }
    ctx->pc = 0x33C964u;
    // 0x33c964: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x33c964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33c968: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33C968u;
    {
        const bool branch_taken_0x33c968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C968u;
        // 0x33c96c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c968) {
            ctx->pc = 0x33C988u;
            goto label_33c988;
        }
    }
    ctx->pc = 0x33C970u;
    // 0x33c970: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x33c970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x33c974: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33c974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c978: 0xc0cf264  jal         func_33C990
    ctx->pc = 0x33C978u;
    SET_GPR_U32(ctx, 31, 0x33C980u);
    ctx->pc = 0x33C97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C978u;
    // 0x33c97c: 0x24a55fd0  addiu       $a1, $a1, 0x5FD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C990u, 0x33C978u, 0x33C980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C980u;
label_33c980:
    // 0x33c980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33c980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33c984:
    // 0x33c984: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33c988:
    // 0x33c988: 0x3e00008  jr          $ra
    ctx->pc = 0x33C988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C988u;
        // 0x33c98c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C990u;
}
