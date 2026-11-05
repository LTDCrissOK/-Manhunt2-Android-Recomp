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

// Function: sub_001D5F00
// Address: 0x1d5f00 - 0x1d5f48
void sub_001D5F00_0x1d5f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5F00_0x1d5f00");
#endif

    switch (ctx->pc) {
        case 0x1d5f24u: goto label_1d5f24;
        case 0x1d5f34u: goto label_1d5f34;
        default: break;
    }

    ctx->pc = 0x1d5f00u;

    // 0x1d5f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5f04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5f08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5f0c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d5f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d5f10: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d5f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f14: 0xac900034  sw          $s0, 0x34($a0)
    ctx->pc = 0x1d5f14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 16));
    // 0x1d5f18: 0xa0820031  sb          $v0, 0x31($a0)
    ctx->pc = 0x1d5f18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d5f1c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x1D5F1Cu;
    SET_GPR_U32(ctx, 31, 0x1D5F24u);
    ctx->pc = 0x1D5F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F1Cu;
    // 0x1d5f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x1D5F1Cu, 0x1D5F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F24u;
label_1d5f24:
    // 0x1d5f24: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5F24u;
    {
        const bool branch_taken_0x1d5f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5f24) {
            ctx->pc = 0x1D5F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5F24u;
            // 0x1d5f28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5F38u;
            goto label_1d5f38;
        }
    }
    ctx->pc = 0x1D5F2Cu;
    // 0x1d5f2c: 0xc0c4900  jal         func_312400
    ctx->pc = 0x1D5F2Cu;
    SET_GPR_U32(ctx, 31, 0x1D5F34u);
    ctx->pc = 0x1D5F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F2Cu;
    // 0x1d5f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x1D5F2Cu, 0x1D5F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F34u;
label_1d5f34:
    // 0x1d5f34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5f34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5f38:
    // 0x1d5f38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F3Cu;
        // 0x1d5f40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5F44u;
    // 0x1d5f44: 0x0  nop
    ctx->pc = 0x1d5f44u;
    // NOP
    ctx->pc = 0x1d5f48u;
}
