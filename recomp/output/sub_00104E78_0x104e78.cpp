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

// Function: sub_00104E78
// Address: 0x104e78 - 0x104eb8
void sub_00104E78_0x104e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104E78_0x104e78");
#endif

    switch (ctx->pc) {
        case 0x104e9cu: goto label_104e9c;
        default: break;
    }

    ctx->pc = 0x104e78u;

    // 0x104e78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x104e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x104e7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104e80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x104e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x104e84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x104e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e88: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x104e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x104e8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x104E8Cu;
    {
        const bool branch_taken_0x104e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E8Cu;
        // 0x104e90: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e8c) {
            ctx->pc = 0x104EA8u;
            goto label_104ea8;
        }
    }
    ctx->pc = 0x104E94u;
    // 0x104e94: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x104E94u;
    SET_GPR_U32(ctx, 31, 0x104E9Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x104E94u, 0x104E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104E9Cu;
label_104e9c:
    // 0x104e9c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x104e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x104ea0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x104ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x104ea4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x104ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_104ea8:
    // 0x104ea8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104ea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104eac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x104eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x104EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EB0u;
        // 0x104eb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104EB8u;
}
