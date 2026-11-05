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

// Function: sub_00133F30
// Address: 0x133f30 - 0x133f78
void sub_00133F30_0x133f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133F30_0x133f30");
#endif

    switch (ctx->pc) {
        case 0x133f48u: goto label_133f48;
        case 0x133f58u: goto label_133f58;
        default: break;
    }

    ctx->pc = 0x133f30u;

    // 0x133f30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x133f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x133f34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x133f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x133f38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x133f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x133f3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x133f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133f40: 0xc04bb42  jal         func_12ED08
    ctx->pc = 0x133F40u;
    SET_GPR_U32(ctx, 31, 0x133F48u);
    ctx->pc = 0x133F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133F40u;
    // 0x133f44: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12ED08u, 0x133F40u, 0x133F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F48u;
label_133f48:
    // 0x133f48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x133F48u;
    {
        const bool branch_taken_0x133f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x133F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133F48u;
        // 0x133f4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133f48) {
            ctx->pc = 0x133F60u;
            goto label_133f60;
        }
    }
    ctx->pc = 0x133F50u;
    // 0x133f50: 0xc04b3f8  jal         func_12CFE0
    ctx->pc = 0x133F50u;
    SET_GPR_U32(ctx, 31, 0x133F58u);
    ctx->pc = 0x133F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133F50u;
    // 0x133f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CFE0u, 0x133F50u, 0x133F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F58u;
label_133f58:
    // 0x133f58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x133F58u;
    {
        const bool branch_taken_0x133f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133F58u;
        // 0x133f5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133f58) {
            ctx->pc = 0x133F68u;
            goto label_133f68;
        }
    }
    ctx->pc = 0x133F60u;
label_133f60:
    // 0x133f60: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x133f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x133f64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x133f64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_133f68:
    // 0x133f68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x133f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x133f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x133F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133F6Cu;
        // 0x133f70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133F74u;
    // 0x133f74: 0x0  nop
    ctx->pc = 0x133f74u;
    // NOP
    ctx->pc = 0x133f78u;
}
