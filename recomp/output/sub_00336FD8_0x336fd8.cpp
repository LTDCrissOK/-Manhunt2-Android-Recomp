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

// Function: sub_00336FD8
// Address: 0x336fd8 - 0x337008
void sub_00336FD8_0x336fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336FD8_0x336fd8");
#endif

    switch (ctx->pc) {
        case 0x336ff4u: goto label_336ff4;
        default: break;
    }

    ctx->pc = 0x336fd8u;

    // 0x336fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x336fdc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x336FDCu;
    {
        const bool branch_taken_0x336fdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x336FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336FDCu;
        // 0x336fe0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336fdc) {
            ctx->pc = 0x336FECu;
            goto label_336fec;
        }
    }
    ctx->pc = 0x336FE4u;
    // 0x336fe4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x336FE4u;
    {
        const bool branch_taken_0x336fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336FE4u;
        // 0x336fe8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336fe4) {
            ctx->pc = 0x336FF8u;
            goto label_336ff8;
        }
    }
    ctx->pc = 0x336FECu;
label_336fec:
    // 0x336fec: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x336FECu;
    SET_GPR_U32(ctx, 31, 0x336FF4u);
    ctx->pc = 0x336FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336FECu;
    // 0x336ff0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x336FECu, 0x336FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336FF4u;
label_336ff4:
    // 0x336ff4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x336ff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_336ff8:
    // 0x336ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x336ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x336FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336FFCu;
        // 0x337000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337004u;
    // 0x337004: 0x0  nop
    ctx->pc = 0x337004u;
    // NOP
    ctx->pc = 0x337008u;
}
