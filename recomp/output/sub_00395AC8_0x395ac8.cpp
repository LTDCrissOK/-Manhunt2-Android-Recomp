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

// Function: sub_00395AC8
// Address: 0x395ac8 - 0x395af8
void sub_00395AC8_0x395ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395AC8_0x395ac8");
#endif

    switch (ctx->pc) {
        case 0x395ae0u: goto label_395ae0;
        default: break;
    }

    ctx->pc = 0x395ac8u;

    // 0x395ac8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x395ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x395acc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x395ACCu;
    {
        const bool branch_taken_0x395acc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x395AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395ACCu;
        // 0x395ad0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395acc) {
            ctx->pc = 0x395AE8u;
            goto label_395ae8;
        }
    }
    ctx->pc = 0x395AD4u;
    // 0x395ad4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x395ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x395ad8: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x395AD8u;
    SET_GPR_U32(ctx, 31, 0x395AE0u);
    ctx->pc = 0x395ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395AD8u;
    // 0x395adc: 0x2484ac40  addiu       $a0, $a0, -0x53C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x395AD8u, 0x395AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395AE0u;
label_395ae0:
    // 0x395ae0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x395AE0u;
    {
        const bool branch_taken_0x395ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395AE0u;
        // 0x395ae4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395ae0) {
            ctx->pc = 0x395AECu;
            goto label_395aec;
        }
    }
    ctx->pc = 0x395AE8u;
label_395ae8:
    // 0x395ae8: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x395ae8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_395aec:
    // 0x395aec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x395aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395af0: 0x3e00008  jr          $ra
    ctx->pc = 0x395AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395AF0u;
        // 0x395af4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395AF8u;
}
