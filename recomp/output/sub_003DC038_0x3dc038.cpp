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

// Function: sub_003DC038
// Address: 0x3dc038 - 0x3dc068
void sub_003DC038_0x3dc038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC038_0x3dc038");
#endif

    switch (ctx->pc) {
        case 0x3dc050u: goto label_3dc050;
        default: break;
    }

    ctx->pc = 0x3dc038u;

    // 0x3dc038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dc038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dc03c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dc03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dc040: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3dc040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3dc044: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dc044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc048: 0xc0f7008  jal         func_3DC020
    ctx->pc = 0x3DC048u;
    SET_GPR_U32(ctx, 31, 0x3DC050u);
    ctx->pc = 0x3DC04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC048u;
    // 0x3dc04c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC020u, 0x3DC048u, 0x3DC050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC050u;
label_3dc050:
    // 0x3dc050: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3dc050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc054: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3dc054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dc058: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dc058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dc05c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC05Cu;
        // 0x3dc060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC064u;
    // 0x3dc064: 0x0  nop
    ctx->pc = 0x3dc064u;
    // NOP
    ctx->pc = 0x3dc068u;
}
