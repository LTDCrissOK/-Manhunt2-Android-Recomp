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

// Function: sub_0025CC38
// Address: 0x25cc38 - 0x25cc70
void sub_0025CC38_0x25cc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CC38_0x25cc38");
#endif

    switch (ctx->pc) {
        case 0x25cc60u: goto label_25cc60;
        default: break;
    }

    ctx->pc = 0x25cc38u;

    // 0x25cc38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25cc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25cc3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25cc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25cc40: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x25cc40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25cc44: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25CC44u;
    {
        const bool branch_taken_0x25cc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC44u;
        // 0x25cc48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cc44) {
            ctx->pc = 0x25CC64u;
            goto label_25cc64;
        }
    }
    ctx->pc = 0x25CC4Cu;
    // 0x25cc4c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x25cc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25cc50: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25CC50u;
    {
        const bool branch_taken_0x25cc50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cc50) {
            ctx->pc = 0x25CC64u;
            goto label_25cc64;
        }
    }
    ctx->pc = 0x25CC58u;
    // 0x25cc58: 0xc0d22ac  jal         func_348AB0
    ctx->pc = 0x25CC58u;
    SET_GPR_U32(ctx, 31, 0x25CC60u);
    ctx->pc = 0x348AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348AB0u, 0x25CC58u, 0x25CC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CC60u;
label_25cc60:
    // 0x25cc60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25cc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25cc64:
    // 0x25cc64: 0x3e00008  jr          $ra
    ctx->pc = 0x25CC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC64u;
        // 0x25cc68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CC6Cu;
    // 0x25cc6c: 0x0  nop
    ctx->pc = 0x25cc6cu;
    // NOP
    ctx->pc = 0x25cc70u;
}
