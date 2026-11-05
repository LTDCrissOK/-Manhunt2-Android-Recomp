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

// Function: sub_003A7F88
// Address: 0x3a7f88 - 0x3a7fc0
void sub_003A7F88_0x3a7f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7F88_0x3a7f88");
#endif

    switch (ctx->pc) {
        case 0x3a7fa4u: goto label_3a7fa4;
        default: break;
    }

    ctx->pc = 0x3a7f88u;

    // 0x3a7f88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a7f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a7f8c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3a7f8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7f90: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A7F90u;
    {
        const bool branch_taken_0x3a7f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F90u;
        // 0x3a7f94: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7f90) {
            ctx->pc = 0x3A7FB0u;
            goto label_3a7fb0;
        }
    }
    ctx->pc = 0x3A7F98u;
    // 0x3a7f98: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a7f98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a7f9c: 0xc0e9ebe  jal         func_3A7AF8
    ctx->pc = 0x3A7F9Cu;
    SET_GPR_U32(ctx, 31, 0x3A7FA4u);
    ctx->pc = 0x3A7FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7F9Cu;
    // 0x3a7fa0: 0x24a5e5a0  addiu       $a1, $a1, -0x1A60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7AF8u, 0x3A7F9Cu, 0x3A7FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7FA4u;
label_3a7fa4:
    // 0x3a7fa4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A7FA4u;
    {
        const bool branch_taken_0x3a7fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7FA4u;
        // 0x3a7fa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7fa4) {
            ctx->pc = 0x3A7FB4u;
            goto label_3a7fb4;
        }
    }
    ctx->pc = 0x3A7FACu;
    // 0x3a7fac: 0x0  nop
    ctx->pc = 0x3a7facu;
    // NOP
label_3a7fb0:
    // 0x3a7fb0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3a7fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3a7fb4:
    // 0x3a7fb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a7fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7FB8u;
        // 0x3a7fbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7FC0u;
}
