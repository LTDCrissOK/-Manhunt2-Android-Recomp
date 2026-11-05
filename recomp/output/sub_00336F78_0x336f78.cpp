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

// Function: sub_00336F78
// Address: 0x336f78 - 0x336fa8
void sub_00336F78_0x336f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336F78_0x336f78");
#endif

    switch (ctx->pc) {
        case 0x336f94u: goto label_336f94;
        default: break;
    }

    ctx->pc = 0x336f78u;

    // 0x336f78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x336f7c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x336F7Cu;
    {
        const bool branch_taken_0x336f7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x336F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336F7Cu;
        // 0x336f80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336f7c) {
            ctx->pc = 0x336F8Cu;
            goto label_336f8c;
        }
    }
    ctx->pc = 0x336F84u;
    // 0x336f84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x336F84u;
    {
        const bool branch_taken_0x336f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336F84u;
        // 0x336f88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336f84) {
            ctx->pc = 0x336F98u;
            goto label_336f98;
        }
    }
    ctx->pc = 0x336F8Cu;
label_336f8c:
    // 0x336f8c: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x336F8Cu;
    SET_GPR_U32(ctx, 31, 0x336F94u);
    ctx->pc = 0x336F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336F8Cu;
    // 0x336f90: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x336F8Cu, 0x336F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336F94u;
label_336f94:
    // 0x336f94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x336f94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_336f98:
    // 0x336f98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x336f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x336F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336F9Cu;
        // 0x336fa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336FA4u;
    // 0x336fa4: 0x0  nop
    ctx->pc = 0x336fa4u;
    // NOP
    ctx->pc = 0x336fa8u;
}
