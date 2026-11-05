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

// Function: sub_00287E48
// Address: 0x287e48 - 0x287ea8
void sub_00287E48_0x287e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287E48_0x287e48");
#endif

    switch (ctx->pc) {
        case 0x287e58u: goto label_287e58;
        default: break;
    }

    ctx->pc = 0x287e48u;

    // 0x287e48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x287e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x287e4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x287e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x287e50: 0xc0a1faa  jal         func_287EA8
    ctx->pc = 0x287E50u;
    SET_GPR_U32(ctx, 31, 0x287E58u);
    ctx->pc = 0x287EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287EA8u, 0x287E50u, 0x287E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E58u;
label_287e58:
    // 0x287e58: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x287E58u;
    {
        const bool branch_taken_0x287e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E58u;
        // 0x287e5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e58) {
            ctx->pc = 0x287E98u;
            goto label_287e98;
        }
    }
    ctx->pc = 0x287E60u;
    // 0x287e60: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x287e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x287e64: 0x8c43aa88  lw          $v1, -0x5578($v0)
    ctx->pc = 0x287e64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x287e68: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x287E68u;
    {
        const bool branch_taken_0x287e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x287E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E68u;
        // 0x287e6c: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e68) {
            ctx->pc = 0x287E90u;
            goto label_287e90;
        }
    }
    ctx->pc = 0x287E70u;
    // 0x287e70: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x287e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x287e74: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x287e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x287e78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x287e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x287e7c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x287E7Cu;
    {
        const bool branch_taken_0x287e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E7Cu;
        // 0x287e80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e7c) {
            ctx->pc = 0x287E94u;
            goto label_287e94;
        }
    }
    ctx->pc = 0x287E84u;
    // 0x287e84: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x287e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x287e88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x287E88u;
    {
        const bool branch_taken_0x287e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E88u;
        // 0x287e8c: 0x30440001  andi        $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e88) {
            ctx->pc = 0x287E94u;
            goto label_287e94;
        }
    }
    ctx->pc = 0x287E90u;
label_287e90:
    // 0x287e90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x287e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287e94:
    // 0x287e94: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x287e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_287e98:
    // 0x287e98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x287e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x287E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E9Cu;
        // 0x287ea0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287EA4u;
    // 0x287ea4: 0x0  nop
    ctx->pc = 0x287ea4u;
    // NOP
    ctx->pc = 0x287ea8u;
}
