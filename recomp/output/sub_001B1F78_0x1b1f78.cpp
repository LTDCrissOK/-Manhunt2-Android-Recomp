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

// Function: sub_001B1F78
// Address: 0x1b1f78 - 0x1b1fd0
void sub_001B1F78_0x1b1f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1F78_0x1b1f78");
#endif

    switch (ctx->pc) {
        case 0x1b1f8cu: goto label_1b1f8c;
        case 0x1b1f9cu: goto label_1b1f9c;
        default: break;
    }

    ctx->pc = 0x1b1f78u;

    // 0x1b1f78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1f7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1f80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b1f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b1f84: 0xc06c2da  jal         func_1B0B68
    ctx->pc = 0x1B1F84u;
    SET_GPR_U32(ctx, 31, 0x1B1F8Cu);
    ctx->pc = 0x1B1F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F84u;
    // 0x1b1f88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0B68u, 0x1B1F84u, 0x1B1F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F8Cu;
label_1b1f8c:
    // 0x1b1f8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b1f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1f94: 0xc06c6c8  jal         func_1B1B20
    ctx->pc = 0x1B1F94u;
    SET_GPR_U32(ctx, 31, 0x1B1F9Cu);
    ctx->pc = 0x1B1F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F94u;
    // 0x1b1f98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1B20u, 0x1B1F94u, 0x1B1F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F9Cu;
label_1b1f9c:
    // 0x1b1f9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1f9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1fa0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b1fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FA4u;
        // 0x1b1fa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1FACu;
    // 0x1b1fac: 0x0  nop
    ctx->pc = 0x1b1facu;
    // NOP
    // 0x1b1fb0: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x1b1fb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1b1fb4: 0x0  nop
    ctx->pc = 0x1b1fb4u;
    // NOP
    // 0x1b1fb8: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x1b1fb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1b1fbc: 0x0  nop
    ctx->pc = 0x1b1fbcu;
    // NOP
    // 0x1b1fc0: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x1b1fc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1b1fc4: 0x0  nop
    ctx->pc = 0x1b1fc4u;
    // NOP
    // 0x1b1fc8: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x1b1fc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1b1fcc: 0x0  nop
    ctx->pc = 0x1b1fccu;
    // NOP
    ctx->pc = 0x1b1fd0u;
}
