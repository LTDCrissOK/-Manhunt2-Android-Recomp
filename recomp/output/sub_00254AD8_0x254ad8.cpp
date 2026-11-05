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

// Function: sub_00254AD8
// Address: 0x254ad8 - 0x254b20
void sub_00254AD8_0x254ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254AD8_0x254ad8");
#endif

    switch (ctx->pc) {
        case 0x254af8u: goto label_254af8;
        case 0x254b10u: goto label_254b10;
        default: break;
    }

    ctx->pc = 0x254ad8u;

    // 0x254ad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254adc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254ae0: 0x8c831060  lw          $v1, 0x1060($a0)
    ctx->pc = 0x254ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4192)));
    // 0x254ae4: 0x38620011  xori        $v0, $v1, 0x11
    ctx->pc = 0x254ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)17);
    // 0x254ae8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x254AE8u;
    {
        const bool branch_taken_0x254ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254ae8) {
            ctx->pc = 0x254AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254AE8u;
            // 0x254aec: 0x38620015  xori        $v0, $v1, 0x15 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)21);
            ctx->in_delay_slot = false;
            ctx->pc = 0x254B00u;
            goto label_254b00;
        }
    }
    ctx->pc = 0x254AF0u;
    // 0x254af0: 0xc095326  jal         func_254C98
    ctx->pc = 0x254AF0u;
    SET_GPR_U32(ctx, 31, 0x254AF8u);
    ctx->pc = 0x254C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C98u, 0x254AF0u, 0x254AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254AF8u;
label_254af8:
    // 0x254af8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x254AF8u;
    {
        const bool branch_taken_0x254af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254AF8u;
        // 0x254afc: 0x8c420060  lw          $v0, 0x60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254af8) {
            ctx->pc = 0x254B14u;
            goto label_254b14;
        }
    }
    ctx->pc = 0x254B00u;
label_254b00:
    // 0x254b00: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x254B00u;
    {
        const bool branch_taken_0x254b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B00u;
        // 0x254b04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b00) {
            ctx->pc = 0x254B14u;
            goto label_254b14;
        }
    }
    ctx->pc = 0x254B08u;
    // 0x254b08: 0xc095336  jal         func_254CD8
    ctx->pc = 0x254B08u;
    SET_GPR_U32(ctx, 31, 0x254B10u);
    ctx->pc = 0x254CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254CD8u, 0x254B08u, 0x254B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254B10u;
label_254b10:
    // 0x254b10: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x254b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_254b14:
    // 0x254b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254b18: 0x3e00008  jr          $ra
    ctx->pc = 0x254B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B18u;
        // 0x254b1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254B20u;
}
