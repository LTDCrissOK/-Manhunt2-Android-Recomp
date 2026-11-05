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

// Function: sub_002C2D98
// Address: 0x2c2d98 - 0x2c2e08
void sub_002C2D98_0x2c2d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2D98_0x2c2d98");
#endif

    switch (ctx->pc) {
        case 0x2c2dc8u: goto label_2c2dc8;
        case 0x2c2de0u: goto label_2c2de0;
        case 0x2c2decu: goto label_2c2dec;
        default: break;
    }

    ctx->pc = 0x2c2d98u;

    // 0x2c2d98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c2d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c2d9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c2d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2c2da0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c2da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c2da4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c2da4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2da8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c2da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c2dac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c2dacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2db0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2c2db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2c2db4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2c2db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2c2db8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2c2db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2dbc: 0x2484526c  addiu       $a0, $a0, 0x526C
    ctx->pc = 0x2c2dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21100));
    // 0x2c2dc0: 0xc0fb234  jal         func_3EC8D0
    ctx->pc = 0x2C2DC0u;
    SET_GPR_U32(ctx, 31, 0x2C2DC8u);
    ctx->pc = 0x2C2DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2DC0u;
    // 0x2c2dc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC8D0u, 0x2C2DC0u, 0x2C2DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2DC8u;
label_2c2dc8:
    // 0x2c2dc8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c2dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2dcc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c2dccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2dd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c2dd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2dd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c2dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2dd8: 0xc0b0dbc  jal         func_2C36F0
    ctx->pc = 0x2C2DD8u;
    SET_GPR_U32(ctx, 31, 0x2C2DE0u);
    ctx->pc = 0x2C2DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2DD8u;
    // 0x2c2ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C36F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C36F0u, 0x2C2DD8u, 0x2C2DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2DE0u;
label_2c2de0:
    // 0x2c2de0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c2de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2de4: 0xc0b0596  jal         func_2C1658
    ctx->pc = 0x2C2DE4u;
    SET_GPR_U32(ctx, 31, 0x2C2DECu);
    ctx->pc = 0x2C2DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2DE4u;
    // 0x2c2de8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1658u, 0x2C2DE4u, 0x2C2DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2DECu;
label_2c2dec:
    // 0x2c2dec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c2decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2df0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c2df0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c2df4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c2df4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2df8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c2df8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2dfc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2c2dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2e00: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E00u;
        // 0x2c2e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2E08u;
}
