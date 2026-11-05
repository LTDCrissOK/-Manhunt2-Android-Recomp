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

// Function: sub_002489C0
// Address: 0x2489c0 - 0x248a00
void sub_002489C0_0x2489c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002489C0_0x2489c0");
#endif

    switch (ctx->pc) {
        case 0x2489e4u: goto label_2489e4;
        case 0x2489f0u: goto label_2489f0;
        default: break;
    }

    ctx->pc = 0x2489c0u;

    // 0x2489c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2489c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2489c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2489c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2489c8: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2489C8u;
    {
        const bool branch_taken_0x2489c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2489CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2489C8u;
        // 0x2489cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2489c8) {
            ctx->pc = 0x2489F0u;
            goto label_2489f0;
        }
    }
    ctx->pc = 0x2489D0u;
    // 0x2489d0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2489D0u;
    {
        const bool branch_taken_0x2489d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2489D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2489D0u;
        // 0x2489d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2489d0) {
            ctx->pc = 0x2489F4u;
            goto label_2489f4;
        }
    }
    ctx->pc = 0x2489D8u;
    // 0x2489d8: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x2489d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x2489dc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2489DCu;
    SET_GPR_U32(ctx, 31, 0x2489E4u);
    ctx->pc = 0x2489E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2489DCu;
    // 0x2489e0: 0x24843cc0  addiu       $a0, $a0, 0x3CC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2489DCu, 0x2489E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2489E4u;
label_2489e4:
    // 0x2489e4: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x2489e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x2489e8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2489E8u;
    SET_GPR_U32(ctx, 31, 0x2489F0u);
    ctx->pc = 0x2489ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2489E8u;
    // 0x2489ec: 0x24843cd0  addiu       $a0, $a0, 0x3CD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2489E8u, 0x2489F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2489F0u;
label_2489f0:
    // 0x2489f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2489f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2489f4:
    // 0x2489f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2489F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2489F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2489F4u;
        // 0x2489f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2489F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2489FCu;
    // 0x2489fc: 0x0  nop
    ctx->pc = 0x2489fcu;
    // NOP
    ctx->pc = 0x248a00u;
}
