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

// Function: sub_00251288
// Address: 0x251288 - 0x2512b8
void sub_00251288_0x251288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251288_0x251288");
#endif

    switch (ctx->pc) {
        case 0x2512a8u: goto label_2512a8;
        default: break;
    }

    ctx->pc = 0x251288u;

    // 0x251288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x251288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25128c: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x25128cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x251290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x251290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x251294: 0x8c821060  lw          $v0, 0x1060($a0)
    ctx->pc = 0x251294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4192)));
    // 0x251298: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x251298u;
    {
        const bool branch_taken_0x251298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x25129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251298u;
        // 0x25129c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251298) {
            ctx->pc = 0x2512ACu;
            goto label_2512ac;
        }
    }
    ctx->pc = 0x2512A0u;
    // 0x2512a0: 0xc094ed4  jal         func_253B50
    ctx->pc = 0x2512A0u;
    SET_GPR_U32(ctx, 31, 0x2512A8u);
    ctx->pc = 0x253B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B50u, 0x2512A0u, 0x2512A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2512A8u;
label_2512a8:
    // 0x2512a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2512a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2512ac:
    // 0x2512ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2512ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2512B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2512ACu;
        // 0x2512b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2512ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2512B4u;
    // 0x2512b4: 0x0  nop
    ctx->pc = 0x2512b4u;
    // NOP
    ctx->pc = 0x2512b8u;
}
