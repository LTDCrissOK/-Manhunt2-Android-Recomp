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

// Function: sub_001EA010
// Address: 0x1ea010 - 0x1ea050
void sub_001EA010_0x1ea010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA010_0x1ea010");
#endif

    switch (ctx->pc) {
        case 0x1ea038u: goto label_1ea038;
        default: break;
    }

    ctx->pc = 0x1ea010u;

    // 0x1ea010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ea010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ea014: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ea014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ea018: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ea018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ea01c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ea01cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea020: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1ea020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1ea024: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1ea024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1ea028: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1ea028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1ea02c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1ea02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1ea030: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1EA030u;
    SET_GPR_U32(ctx, 31, 0x1EA038u);
    ctx->pc = 0x1EA034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA030u;
    // 0x1ea034: 0xa2000010  sb          $zero, 0x10($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1EA030u, 0x1EA038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA038u;
label_1ea038:
    // 0x1ea038: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ea038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea03c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ea03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ea040: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ea040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea044: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA044u;
        // 0x1ea048: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA04Cu;
    // 0x1ea04c: 0x0  nop
    ctx->pc = 0x1ea04cu;
    // NOP
    ctx->pc = 0x1ea050u;
}
