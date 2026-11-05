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

// Function: sub_00285CA8
// Address: 0x285ca8 - 0x285cf8
void sub_00285CA8_0x285ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285CA8_0x285ca8");
#endif

    switch (ctx->pc) {
        case 0x285cccu: goto label_285ccc;
        case 0x285ce4u: goto label_285ce4;
        case 0x285cecu: goto label_285cec;
        default: break;
    }

    ctx->pc = 0x285ca8u;

    // 0x285ca8: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x285ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x285cac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x285cacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x285cb0: 0x8c4325d8  lw          $v1, 0x25D8($v0)
    ctx->pc = 0x285cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C25D8u));
    // 0x285cb4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x285CB4u;
    {
        const bool branch_taken_0x285cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x285CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CB4u;
        // 0x285cb8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285cb4) {
            ctx->pc = 0x285CD4u;
            goto label_285cd4;
        }
    }
    ctx->pc = 0x285CBCu;
    // 0x285cbc: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x285cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x285cc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x285cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285cc4: 0xc0ac862  jal         func_2B2188
    ctx->pc = 0x285CC4u;
    SET_GPR_U32(ctx, 31, 0x285CCCu);
    ctx->pc = 0x285CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285CC4u;
    // 0x285cc8: 0x24844dd0  addiu       $a0, $a0, 0x4DD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2188u, 0x285CC4u, 0x285CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285CCCu;
label_285ccc:
    // 0x285ccc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x285CCCu;
    {
        const bool branch_taken_0x285ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285ccc) {
            ctx->pc = 0x285CE4u;
            goto label_285ce4;
        }
    }
    ctx->pc = 0x285CD4u;
label_285cd4:
    // 0x285cd4: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x285cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x285cd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x285cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285cdc: 0xc0ac862  jal         func_2B2188
    ctx->pc = 0x285CDCu;
    SET_GPR_U32(ctx, 31, 0x285CE4u);
    ctx->pc = 0x285CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285CDCu;
    // 0x285ce0: 0x24844dd0  addiu       $a0, $a0, 0x4DD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2188u, 0x285CDCu, 0x285CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285CE4u;
label_285ce4:
    // 0x285ce4: 0xc0a2240  jal         func_288900
    ctx->pc = 0x285CE4u;
    SET_GPR_U32(ctx, 31, 0x285CECu);
    ctx->pc = 0x288900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288900u, 0x285CE4u, 0x285CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285CECu;
label_285cec:
    // 0x285cec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x285cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x285CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CF0u;
        // 0x285cf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285CF8u;
}
