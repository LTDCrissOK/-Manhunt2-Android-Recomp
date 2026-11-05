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

// Function: sub_0018C9C8
// Address: 0x18c9c8 - 0x18ca40
void sub_0018C9C8_0x18c9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C9C8_0x18c9c8");
#endif

    switch (ctx->pc) {
        case 0x18ca10u: goto label_18ca10;
        case 0x18ca20u: goto label_18ca20;
        case 0x18ca30u: goto label_18ca30;
        default: break;
    }

    ctx->pc = 0x18c9c8u;

    // 0x18c9c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18c9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18c9cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18c9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c9d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c9d4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x18c9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x18c9d8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18C9D8u;
    {
        const bool branch_taken_0x18c9d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C9D8u;
        // 0x18c9dc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c9d8) {
            ctx->pc = 0x18CA18u;
            goto label_18ca18;
        }
    }
    ctx->pc = 0x18C9E0u;
    // 0x18c9e0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18C9E0u;
    {
        const bool branch_taken_0x18c9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c9e0) {
            ctx->pc = 0x18C9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C9E0u;
            // 0x18c9e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C9F8u;
            goto label_18c9f8;
        }
    }
    ctx->pc = 0x18C9E8u;
    // 0x18c9e8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x18C9E8u;
    {
        const bool branch_taken_0x18c9e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C9E8u;
        // 0x18c9ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c9e8) {
            ctx->pc = 0x18CA08u;
            goto label_18ca08;
        }
    }
    ctx->pc = 0x18C9F0u;
    // 0x18c9f0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x18C9F0u;
    {
        const bool branch_taken_0x18c9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c9f0) {
            ctx->pc = 0x18CA34u;
            goto label_18ca34;
        }
    }
    ctx->pc = 0x18C9F8u;
label_18c9f8:
    // 0x18c9f8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18C9F8u;
    {
        const bool branch_taken_0x18c9f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C9F8u;
        // 0x18c9fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c9f8) {
            ctx->pc = 0x18CA28u;
            goto label_18ca28;
        }
    }
    ctx->pc = 0x18CA00u;
    // 0x18ca00: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18CA00u;
    {
        const bool branch_taken_0x18ca00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ca00) {
            ctx->pc = 0x18CA34u;
            goto label_18ca34;
        }
    }
    ctx->pc = 0x18CA08u;
label_18ca08:
    // 0x18ca08: 0xc0632b6  jal         func_18CAD8
    ctx->pc = 0x18CA08u;
    SET_GPR_U32(ctx, 31, 0x18CA10u);
    ctx->pc = 0x18CAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CAD8u, 0x18CA08u, 0x18CA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA10u;
label_18ca10:
    // 0x18ca10: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18CA10u;
    {
        const bool branch_taken_0x18ca10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA10u;
        // 0x18ca14: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca10) {
            ctx->pc = 0x18CA34u;
            goto label_18ca34;
        }
    }
    ctx->pc = 0x18CA18u;
label_18ca18:
    // 0x18ca18: 0xc0633e0  jal         func_18CF80
    ctx->pc = 0x18CA18u;
    SET_GPR_U32(ctx, 31, 0x18CA20u);
    ctx->pc = 0x18CF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CF80u, 0x18CA18u, 0x18CA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA20u;
label_18ca20:
    // 0x18ca20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18CA20u;
    {
        const bool branch_taken_0x18ca20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA20u;
        // 0x18ca24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca20) {
            ctx->pc = 0x18CA34u;
            goto label_18ca34;
        }
    }
    ctx->pc = 0x18CA28u;
label_18ca28:
    // 0x18ca28: 0xc0632f8  jal         func_18CBE0
    ctx->pc = 0x18CA28u;
    SET_GPR_U32(ctx, 31, 0x18CA30u);
    ctx->pc = 0x18CBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CBE0u, 0x18CA28u, 0x18CA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA30u;
label_18ca30:
    // 0x18ca30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ca30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18ca34:
    // 0x18ca34: 0x3e00008  jr          $ra
    ctx->pc = 0x18CA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA34u;
        // 0x18ca38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CA3Cu;
    // 0x18ca3c: 0x0  nop
    ctx->pc = 0x18ca3cu;
    // NOP
    ctx->pc = 0x18ca40u;
}
