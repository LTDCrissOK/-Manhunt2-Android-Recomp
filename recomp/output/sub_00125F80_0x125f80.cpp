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

// Function: sub_00125F80
// Address: 0x125f80 - 0x125fc8
void sub_00125F80_0x125f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125F80_0x125f80");
#endif

    switch (ctx->pc) {
        case 0x125f94u: goto label_125f94;
        default: break;
    }

    ctx->pc = 0x125f80u;

    // 0x125f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x125f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x125f84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x125f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x125f88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x125f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x125f8c: 0xc049f1a  jal         func_127C68
    ctx->pc = 0x125F8Cu;
    SET_GPR_U32(ctx, 31, 0x125F94u);
    ctx->pc = 0x125F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125F8Cu;
    // 0x125f90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C68u, 0x125F8Cu, 0x125F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125F94u;
label_125f94:
    // 0x125f94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x125f94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f98: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x125f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x125f9c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x125F9Cu;
    {
        const bool branch_taken_0x125f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x125FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F9Cu;
        // 0x125fa0: 0x31980  sll         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f9c) {
            ctx->pc = 0x125FB0u;
            goto label_125fb0;
        }
    }
    ctx->pc = 0x125FA4u;
    // 0x125fa4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x125fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x125fa8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x125FA8u;
    {
        const bool branch_taken_0x125fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FA8u;
        // 0x125fac: 0x8c620890  lw          $v0, 0x890($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125fa8) {
            ctx->pc = 0x125FB4u;
            goto label_125fb4;
        }
    }
    ctx->pc = 0x125FB0u;
label_125fb0:
    // 0x125fb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x125fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125fb4:
    // 0x125fb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x125fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125fb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x125fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x125fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x125FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FBCu;
        // 0x125fc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125FC4u;
    // 0x125fc4: 0x0  nop
    ctx->pc = 0x125fc4u;
    // NOP
    ctx->pc = 0x125fc8u;
}
