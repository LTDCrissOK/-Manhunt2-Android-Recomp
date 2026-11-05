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

// Function: sub_0025FDD8
// Address: 0x25fdd8 - 0x25fe40
void sub_0025FDD8_0x25fdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FDD8_0x25fdd8");
#endif

    switch (ctx->pc) {
        case 0x25fde8u: goto label_25fde8;
        default: break;
    }

    ctx->pc = 0x25fdd8u;

    // 0x25fdd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25fdd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25fddc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25fddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25fde0: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x25FDE0u;
    SET_GPR_U32(ctx, 31, 0x25FDE8u);
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x25FDE0u, 0x25FDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FDE8u;
label_25fde8:
    // 0x25fde8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x25fde8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fdec: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x25fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x25fdf0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25FDF0u;
    {
        const bool branch_taken_0x25fdf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25FDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDF0u;
        // 0x25fdf4: 0x28620060  slti        $v0, $v1, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)96) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fdf0) {
            ctx->pc = 0x25FE24u;
            goto label_25fe24;
        }
    }
    ctx->pc = 0x25FDF8u;
    // 0x25fdf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25FDF8u;
    {
        const bool branch_taken_0x25fdf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDF8u;
        // 0x25fdfc: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fdf8) {
            ctx->pc = 0x25FE10u;
            goto label_25fe10;
        }
    }
    ctx->pc = 0x25FE00u;
    // 0x25fe00: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25FE00u;
    {
        const bool branch_taken_0x25fe00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE00u;
        // 0x25fe04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe00) {
            ctx->pc = 0x25FE24u;
            goto label_25fe24;
        }
    }
    ctx->pc = 0x25FE08u;
    // 0x25fe08: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25FE08u;
    {
        const bool branch_taken_0x25fe08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE08u;
        // 0x25fe0c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe08) {
            ctx->pc = 0x25FE34u;
            goto label_25fe34;
        }
    }
    ctx->pc = 0x25FE10u;
label_25fe10:
    // 0x25fe10: 0x28620084  slti        $v0, $v1, 0x84
    ctx->pc = 0x25fe10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)132) ? 1 : 0);
    // 0x25fe14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25FE14u;
    {
        const bool branch_taken_0x25fe14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE14u;
        // 0x25fe18: 0x28620082  slti        $v0, $v1, 0x82 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)130) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe14) {
            ctx->pc = 0x25FE2Cu;
            goto label_25fe2c;
        }
    }
    ctx->pc = 0x25FE1Cu;
    // 0x25fe1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25FE1Cu;
    {
        const bool branch_taken_0x25fe1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE1Cu;
        // 0x25fe20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe1c) {
            ctx->pc = 0x25FE30u;
            goto label_25fe30;
        }
    }
    ctx->pc = 0x25FE24u;
label_25fe24:
    // 0x25fe24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25FE24u;
    {
        const bool branch_taken_0x25fe24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE24u;
        // 0x25fe28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe24) {
            ctx->pc = 0x25FE30u;
            goto label_25fe30;
        }
    }
    ctx->pc = 0x25FE2Cu;
label_25fe2c:
    // 0x25fe2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25fe2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25fe30:
    // 0x25fe30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25fe30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25fe34:
    // 0x25fe34: 0x3e00008  jr          $ra
    ctx->pc = 0x25FE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE34u;
        // 0x25fe38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FE34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FE3Cu;
    // 0x25fe3c: 0x0  nop
    ctx->pc = 0x25fe3cu;
    // NOP
    ctx->pc = 0x25fe40u;
}
