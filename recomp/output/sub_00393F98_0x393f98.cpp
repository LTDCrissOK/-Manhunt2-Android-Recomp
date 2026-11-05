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

// Function: sub_00393F98
// Address: 0x393f98 - 0x393ff0
void sub_00393F98_0x393f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00393F98_0x393f98");
#endif

    switch (ctx->pc) {
        case 0x393fd0u: goto label_393fd0;
        default: break;
    }

    ctx->pc = 0x393f98u;

    // 0x393f98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x393f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x393f9c: 0x2c840100  sltiu       $a0, $a0, 0x100
    ctx->pc = 0x393f9cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x393fa0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x393FA0u;
    {
        const bool branch_taken_0x393fa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x393FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393FA0u;
        // 0x393fa4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393fa0) {
            ctx->pc = 0x393FB8u;
            goto label_393fb8;
        }
    }
    ctx->pc = 0x393FA8u;
    // 0x393fa8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x393fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x393fac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x393FACu;
    {
        const bool branch_taken_0x393fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393FACu;
        // 0x393fb0: 0x2484a510  addiu       $a0, $a0, -0x5AF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393fac) {
            ctx->pc = 0x393FC8u;
            goto label_393fc8;
        }
    }
    ctx->pc = 0x393FB4u;
    // 0x393fb4: 0x0  nop
    ctx->pc = 0x393fb4u;
    // NOP
label_393fb8:
    // 0x393fb8: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x393FB8u;
    {
        const bool branch_taken_0x393fb8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x393FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393FB8u;
        // 0x393fbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393fb8) {
            ctx->pc = 0x393FD4u;
            goto label_393fd4;
        }
    }
    ctx->pc = 0x393FC0u;
    // 0x393fc0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x393fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x393fc4: 0x2484a548  addiu       $a0, $a0, -0x5AB8
    ctx->pc = 0x393fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944072));
label_393fc8:
    // 0x393fc8: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x393FC8u;
    SET_GPR_U32(ctx, 31, 0x393FD0u);
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x393FC8u, 0x393FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393FD0u;
label_393fd0:
    // 0x393fd0: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x393fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_393fd4:
    // 0x393fd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x393fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x393fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x393FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393FD8u;
        // 0x393fdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x393FE0u;
    // 0x393fe0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x393fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x393fe4: 0x0  nop
    ctx->pc = 0x393fe4u;
    // NOP
    // 0x393fe8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x393fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x393fec: 0x0  nop
    ctx->pc = 0x393fecu;
    // NOP
    ctx->pc = 0x393ff0u;
}
