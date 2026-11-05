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

// Function: sub_00396E20
// Address: 0x396e20 - 0x396e88
void sub_00396E20_0x396e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396E20_0x396e20");
#endif

    switch (ctx->pc) {
        case 0x396e44u: goto label_396e44;
        case 0x396e68u: goto label_396e68;
        default: break;
    }

    ctx->pc = 0x396e20u;

    // 0x396e20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x396e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x396e24: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x396e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x396e28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x396e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396e2c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x396e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x396e30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x396e30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396e34: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x396E34u;
    {
        const bool branch_taken_0x396e34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x396E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396E34u;
        // 0x396e38: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396e34) {
            ctx->pc = 0x396E6Cu;
            goto label_396e6c;
        }
    }
    ctx->pc = 0x396E3Cu;
    // 0x396e3c: 0xc0f2628  jal         func_3C98A0
    ctx->pc = 0x396E3Cu;
    SET_GPR_U32(ctx, 31, 0x396E44u);
    ctx->pc = 0x396E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396E3Cu;
    // 0x396e40: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C98A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C98A0u, 0x396E3Cu, 0x396E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396E44u;
label_396e44:
    // 0x396e44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x396e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396e48: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x396e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396e4c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x396e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x396e50: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x396E50u;
    {
        const bool branch_taken_0x396e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x396E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396E50u;
        // 0x396e54: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396e50) {
            ctx->pc = 0x396E60u;
            goto label_396e60;
        }
    }
    ctx->pc = 0x396E58u;
    // 0x396e58: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x396E58u;
    {
        const bool branch_taken_0x396e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x396E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396E58u;
        // 0x396e5c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396e58) {
            ctx->pc = 0x396E70u;
            goto label_396e70;
        }
    }
    ctx->pc = 0x396E60u;
label_396e60:
    // 0x396e60: 0xc0f264c  jal         func_3C9930
    ctx->pc = 0x396E60u;
    SET_GPR_U32(ctx, 31, 0x396E68u);
    ctx->pc = 0x3C9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9930u, 0x396E60u, 0x396E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396E68u;
label_396e68:
    // 0x396e68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x396e68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_396e6c:
    // 0x396e6c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x396e6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_396e70:
    // 0x396e70: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x396e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x396e74: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x396e74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x396e78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x396e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x396e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x396E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396E7Cu;
        // 0x396e80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396E84u;
    // 0x396e84: 0x0  nop
    ctx->pc = 0x396e84u;
    // NOP
    ctx->pc = 0x396e88u;
}
