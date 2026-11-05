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

// Function: sub_002D4C80
// Address: 0x2d4c80 - 0x2d4cc8
void sub_002D4C80_0x2d4c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4C80_0x2d4c80");
#endif

    switch (ctx->pc) {
        case 0x2d4c9cu: goto label_2d4c9c;
        case 0x2d4cb4u: goto label_2d4cb4;
        default: break;
    }

    ctx->pc = 0x2d4c80u;

    // 0x2d4c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d4c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d4c84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d4c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d4c88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d4c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d4c8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d4c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4c90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d4c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d4c94: 0xc0b52c8  jal         func_2D4B20
    ctx->pc = 0x2D4C94u;
    SET_GPR_U32(ctx, 31, 0x2D4C9Cu);
    ctx->pc = 0x2D4C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4C94u;
    // 0x2d4c98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4B20u, 0x2D4C94u, 0x2D4C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4C9Cu;
label_2d4c9c:
    // 0x2d4c9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4C9Cu;
    {
        const bool branch_taken_0x2d4c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4C9Cu;
        // 0x2d4ca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4c9c) {
            ctx->pc = 0x2D4CACu;
            goto label_2d4cac;
        }
    }
    ctx->pc = 0x2D4CA4u;
    // 0x2d4ca4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4CA4u;
    {
        const bool branch_taken_0x2d4ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4CA4u;
        // 0x2d4ca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4ca4) {
            ctx->pc = 0x2D4CB4u;
            goto label_2d4cb4;
        }
    }
    ctx->pc = 0x2D4CACu;
label_2d4cac:
    // 0x2d4cac: 0xc0b52ce  jal         func_2D4B38
    ctx->pc = 0x2D4CACu;
    SET_GPR_U32(ctx, 31, 0x2D4CB4u);
    ctx->pc = 0x2D4CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4CACu;
    // 0x2d4cb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4B38u, 0x2D4CACu, 0x2D4CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4CB4u;
label_2d4cb4:
    // 0x2d4cb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d4cb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4cb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d4cb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d4cbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d4cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4CC0u;
        // 0x2d4cc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4CC8u;
}
