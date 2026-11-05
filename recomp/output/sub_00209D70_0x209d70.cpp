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

// Function: sub_00209D70
// Address: 0x209d70 - 0x209db0
void sub_00209D70_0x209d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209D70_0x209d70");
#endif

    switch (ctx->pc) {
        case 0x209d9cu: goto label_209d9c;
        default: break;
    }

    ctx->pc = 0x209d70u;

    // 0x209d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209d74: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x209D74u;
    {
        const bool branch_taken_0x209d74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x209D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D74u;
        // 0x209d78: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d74) {
            ctx->pc = 0x209D88u;
            goto label_209d88;
        }
    }
    ctx->pc = 0x209D7Cu;
    // 0x209d7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209d80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x209D80u;
    {
        const bool branch_taken_0x209d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D80u;
        // 0x209d84: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d80) {
            ctx->pc = 0x209D8Cu;
            goto label_209d8c;
        }
    }
    ctx->pc = 0x209D88u;
label_209d88:
    // 0x209d88: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x209d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_209d8c:
    // 0x209d8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x209d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209d90: 0x24051015  addiu       $a1, $zero, 0x1015
    ctx->pc = 0x209d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4117));
    // 0x209d94: 0xc082700  jal         func_209C00
    ctx->pc = 0x209D94u;
    SET_GPR_U32(ctx, 31, 0x209D9Cu);
    ctx->pc = 0x209D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209D94u;
    // 0x209d98: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209C00u, 0x209D94u, 0x209D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209D9Cu;
label_209d9c:
    // 0x209d9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209da0: 0x3e00008  jr          $ra
    ctx->pc = 0x209DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DA0u;
        // 0x209da4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209DA8u;
    // 0x209da8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x209da8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x209dac: 0x0  nop
    ctx->pc = 0x209dacu;
    // NOP
    ctx->pc = 0x209db0u;
}
