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

// Function: sub_0017D018
// Address: 0x17d018 - 0x17d058
void sub_0017D018_0x17d018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D018_0x17d018");
#endif

    switch (ctx->pc) {
        case 0x17d040u: goto label_17d040;
        case 0x17d048u: goto label_17d048;
        default: break;
    }

    ctx->pc = 0x17d018u;

    // 0x17d018: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17d018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d01c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x17d01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17d020: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17d020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d024: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17D024u;
    {
        const bool branch_taken_0x17d024 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x17D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D024u;
        // 0x17d028: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d024) {
            ctx->pc = 0x17D048u;
            goto label_17d048;
        }
    }
    ctx->pc = 0x17D02Cu;
    // 0x17d02c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D02Cu;
    {
        const bool branch_taken_0x17d02c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D02Cu;
        // 0x17d030: 0x3c100049  lui         $s0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d02c) {
            ctx->pc = 0x17D048u;
            goto label_17d048;
        }
    }
    ctx->pc = 0x17D034u;
    // 0x17d034: 0x2610bd80  addiu       $s0, $s0, -0x4280
    ctx->pc = 0x17d034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950272));
    // 0x17d038: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x17D038u;
    SET_GPR_U32(ctx, 31, 0x17D040u);
    ctx->pc = 0x17D03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D038u;
    // 0x17d03c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x17D038u, 0x17D040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D040u;
label_17d040:
    // 0x17d040: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x17D040u;
    SET_GPR_U32(ctx, 31, 0x17D048u);
    ctx->pc = 0x17D044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D040u;
    // 0x17d044: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x17D040u, 0x17D048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D048u;
label_17d048:
    // 0x17d048: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17d048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d04c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17d04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17d050: 0x3e00008  jr          $ra
    ctx->pc = 0x17D050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D050u;
        // 0x17d054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D058u;
}
