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

// Function: sub_0025CC70
// Address: 0x25cc70 - 0x25ccc0
void sub_0025CC70_0x25cc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CC70_0x25cc70");
#endif

    switch (ctx->pc) {
        case 0x25cca0u: goto label_25cca0;
        case 0x25cca8u: goto label_25cca8;
        default: break;
    }

    ctx->pc = 0x25cc70u;

    // 0x25cc70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25cc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25cc74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25cc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25cc78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x25cc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x25cc7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25cc7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cc80: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x25cc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25cc84: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x25CC84u;
    {
        const bool branch_taken_0x25cc84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cc84) {
            ctx->pc = 0x25CC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CC84u;
            // 0x25cc88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CCB4u;
            goto label_25ccb4;
        }
    }
    ctx->pc = 0x25CC8Cu;
    // 0x25cc8c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x25cc8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25cc90: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x25CC90u;
    {
        const bool branch_taken_0x25cc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cc90) {
            ctx->pc = 0x25CC94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CC90u;
            // 0x25cc94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CCB4u;
            goto label_25ccb4;
        }
    }
    ctx->pc = 0x25CC98u;
    // 0x25cc98: 0xc0d27ca  jal         func_349F28
    ctx->pc = 0x25CC98u;
    SET_GPR_U32(ctx, 31, 0x25CCA0u);
    ctx->pc = 0x25CC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CC98u;
    // 0x25cc9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349F28u, 0x25CC98u, 0x25CCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CCA0u;
label_25cca0:
    // 0x25cca0: 0xc0d438a  jal         func_350E28
    ctx->pc = 0x25CCA0u;
    SET_GPR_U32(ctx, 31, 0x25CCA8u);
    ctx->pc = 0x25CCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CCA0u;
    // 0x25cca4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350E28u, 0x25CCA0u, 0x25CCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CCA8u;
label_25cca8:
    // 0x25cca8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25CCA8u;
    {
        const bool branch_taken_0x25cca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25cca8) {
            ctx->pc = 0x25CCACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CCA8u;
            // 0x25ccac: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CCB0u;
            goto label_25ccb0;
        }
    }
    ctx->pc = 0x25CCB0u;
label_25ccb0:
    // 0x25ccb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25ccb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25ccb4:
    // 0x25ccb4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x25ccb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25ccb8: 0x3e00008  jr          $ra
    ctx->pc = 0x25CCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CCB8u;
        // 0x25ccbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CCC0u;
}
