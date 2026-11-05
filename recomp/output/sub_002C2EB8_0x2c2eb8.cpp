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

// Function: sub_002C2EB8
// Address: 0x2c2eb8 - 0x2c2ee8
void sub_002C2EB8_0x2c2eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2EB8_0x2c2eb8");
#endif

    switch (ctx->pc) {
        case 0x2c2edcu: goto label_2c2edc;
        default: break;
    }

    ctx->pc = 0x2c2eb8u;

    // 0x2c2eb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c2eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c2ebc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c2ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c2ec0: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C2EC0u;
    {
        const bool branch_taken_0x2c2ec0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C2EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EC0u;
        // 0x2c2ec4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ec0) {
            ctx->pc = 0x2C2EDCu;
            goto label_2c2edc;
        }
    }
    ctx->pc = 0x2C2EC8u;
    // 0x2c2ec8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C2EC8u;
    {
        const bool branch_taken_0x2c2ec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EC8u;
        // 0x2c2ecc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ec8) {
            ctx->pc = 0x2C2EE0u;
            goto label_2c2ee0;
        }
    }
    ctx->pc = 0x2C2ED0u;
    // 0x2c2ed0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2c2ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2c2ed4: 0xc0b05de  jal         func_2C1778
    ctx->pc = 0x2C2ED4u;
    SET_GPR_U32(ctx, 31, 0x2C2EDCu);
    ctx->pc = 0x2C2ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2ED4u;
    // 0x2c2ed8: 0x24844f20  addiu       $a0, $a0, 0x4F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1778u, 0x2C2ED4u, 0x2C2EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2EDCu;
label_2c2edc:
    // 0x2c2edc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c2edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c2ee0:
    // 0x2c2ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EE0u;
        // 0x2c2ee4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2EE8u;
}
