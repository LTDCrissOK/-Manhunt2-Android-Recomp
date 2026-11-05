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

// Function: sub_00275950
// Address: 0x275950 - 0x275990
void sub_00275950_0x275950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275950_0x275950");
#endif

    switch (ctx->pc) {
        case 0x27597cu: goto label_27597c;
        default: break;
    }

    ctx->pc = 0x275950u;

    // 0x275950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x275954: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x275954u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275958: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27595c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27595cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275960: 0x8c641e78  lw          $a0, 0x1E78($v1)
    ctx->pc = 0x275960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7800)));
    // 0x275964: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x275964u;
    {
        const bool branch_taken_0x275964 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x275968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275964u;
        // 0x275968: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275964) {
            ctx->pc = 0x275980u;
            goto label_275980;
        }
    }
    ctx->pc = 0x27596Cu;
    // 0x27596c: 0xac641e7c  sw          $a0, 0x1E7C($v1)
    ctx->pc = 0x27596cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7804), GPR_U32(ctx, 4));
    // 0x275970: 0x24641e80  addiu       $a0, $v1, 0x1E80
    ctx->pc = 0x275970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7808));
    // 0x275974: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x275974u;
    SET_GPR_U32(ctx, 31, 0x27597Cu);
    ctx->pc = 0x275978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275974u;
    // 0x275978: 0xac601e78  sw          $zero, 0x1E78($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 7800), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x275974u, 0x27597Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27597Cu;
label_27597c:
    // 0x27597c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27597cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275980:
    // 0x275980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275984: 0x3e00008  jr          $ra
    ctx->pc = 0x275984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275984u;
        // 0x275988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27598Cu;
    // 0x27598c: 0x0  nop
    ctx->pc = 0x27598cu;
    // NOP
    ctx->pc = 0x275990u;
}
