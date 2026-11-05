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

// Function: sub_001EF2A0
// Address: 0x1ef2a0 - 0x1ef2f8
void sub_001EF2A0_0x1ef2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF2A0_0x1ef2a0");
#endif

    switch (ctx->pc) {
        case 0x1ef2ccu: goto label_1ef2cc;
        case 0x1ef2dcu: goto label_1ef2dc;
        case 0x1ef2e4u: goto label_1ef2e4;
        default: break;
    }

    ctx->pc = 0x1ef2a0u;

    // 0x1ef2a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ef2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ef2a4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1ef2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ef2a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ef2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ef2ac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ef2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ef2b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ef2b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef2b4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ef2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ef2b8: 0x8c4315e8  lw          $v1, 0x15E8($v0)
    ctx->pc = 0x1ef2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5608)));
    // 0x1ef2bc: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1EF2BCu;
    {
        const bool branch_taken_0x1ef2bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef2bc) {
            ctx->pc = 0x1EF2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF2BCu;
            // 0x1ef2c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF2E8u;
            goto label_1ef2e8;
        }
    }
    ctx->pc = 0x1EF2C4u;
    // 0x1ef2c4: 0xc07bcbe  jal         func_1EF2F8
    ctx->pc = 0x1EF2C4u;
    SET_GPR_U32(ctx, 31, 0x1EF2CCu);
    ctx->pc = 0x1EF2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF2F8u, 0x1EF2C4u, 0x1EF2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF2CCu;
label_1ef2cc:
    // 0x1ef2cc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EF2CCu;
    {
        const bool branch_taken_0x1ef2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef2cc) {
            ctx->pc = 0x1EF2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF2CCu;
            // 0x1ef2d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF2E8u;
            goto label_1ef2e8;
        }
    }
    ctx->pc = 0x1EF2D4u;
    // 0x1ef2d4: 0xc07c108  jal         func_1F0420
    ctx->pc = 0x1EF2D4u;
    SET_GPR_U32(ctx, 31, 0x1EF2DCu);
    ctx->pc = 0x1EF2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF2D4u;
    // 0x1ef2d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0420u, 0x1EF2D4u, 0x1EF2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF2DCu;
label_1ef2dc:
    // 0x1ef2dc: 0xc07c1a0  jal         func_1F0680
    ctx->pc = 0x1EF2DCu;
    SET_GPR_U32(ctx, 31, 0x1EF2E4u);
    ctx->pc = 0x1EF2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF2DCu;
    // 0x1ef2e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0680u, 0x1EF2DCu, 0x1EF2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF2E4u;
label_1ef2e4:
    // 0x1ef2e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ef2e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ef2e8:
    // 0x1ef2e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ef2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ef2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF2ECu;
        // 0x1ef2f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF2F4u;
    // 0x1ef2f4: 0x0  nop
    ctx->pc = 0x1ef2f4u;
    // NOP
    ctx->pc = 0x1ef2f8u;
}
