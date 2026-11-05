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

// Function: sub_0012D358
// Address: 0x12d358 - 0x12d390
void sub_0012D358_0x12d358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D358_0x12d358");
#endif

    switch (ctx->pc) {
        case 0x12d370u: goto label_12d370;
        default: break;
    }

    ctx->pc = 0x12d358u;

    // 0x12d358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12d358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d35c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12d35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12d360: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12d360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12d364: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12d364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d368: 0xc04cb88  jal         func_132E20
    ctx->pc = 0x12D368u;
    SET_GPR_U32(ctx, 31, 0x12D370u);
    ctx->pc = 0x12D36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D368u;
    // 0x12d36c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132E20u, 0x12D368u, 0x12D370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D370u;
label_12d370:
    // 0x12d370: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x12d370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x12d374: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x12d374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x12d378: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x12d378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x12d37c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12d37cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d380: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12d380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12d384: 0x3e00008  jr          $ra
    ctx->pc = 0x12D384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D384u;
        // 0x12d388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D38Cu;
    // 0x12d38c: 0x0  nop
    ctx->pc = 0x12d38cu;
    // NOP
    ctx->pc = 0x12d390u;
}
