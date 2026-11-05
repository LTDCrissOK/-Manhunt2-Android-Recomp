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

// Function: sub_002C4820
// Address: 0x2c4820 - 0x2c4850
void sub_002C4820_0x2c4820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4820_0x2c4820");
#endif

    switch (ctx->pc) {
        case 0x2c4844u: goto label_2c4844;
        default: break;
    }

    ctx->pc = 0x2c4820u;

    // 0x2c4820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c4820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c4824: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c4824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c4828: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4828u;
    {
        const bool branch_taken_0x2c4828 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4828u;
        // 0x2c482c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4828) {
            ctx->pc = 0x2C4844u;
            goto label_2c4844;
        }
    }
    ctx->pc = 0x2C4830u;
    // 0x2c4830: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4830u;
    {
        const bool branch_taken_0x2c4830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4830u;
        // 0x2c4834: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4830) {
            ctx->pc = 0x2C4848u;
            goto label_2c4848;
        }
    }
    ctx->pc = 0x2C4838u;
    // 0x2c4838: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2c4838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2c483c: 0xc0c333e  jal         func_30CCF8
    ctx->pc = 0x2C483Cu;
    SET_GPR_U32(ctx, 31, 0x2C4844u);
    ctx->pc = 0x2C4840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C483Cu;
    // 0x2c4840: 0x24845ac0  addiu       $a0, $a0, 0x5AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CCF8u, 0x2C483Cu, 0x2C4844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4844u;
label_2c4844:
    // 0x2c4844: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c4844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c4848:
    // 0x2c4848: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4848u;
        // 0x2c484c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4850u;
}
