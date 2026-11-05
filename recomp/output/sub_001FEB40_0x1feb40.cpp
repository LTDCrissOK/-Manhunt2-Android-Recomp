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

// Function: sub_001FEB40
// Address: 0x1feb40 - 0x1feb98
void sub_001FEB40_0x1feb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEB40_0x1feb40");
#endif

    switch (ctx->pc) {
        case 0x1feb64u: goto label_1feb64;
        case 0x1feb78u: goto label_1feb78;
        default: break;
    }

    ctx->pc = 0x1feb40u;

    // 0x1feb40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1feb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1feb44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1feb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1feb48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1feb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1feb4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1feb4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feb50: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x1feb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1feb54: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEB54u;
    {
        const bool branch_taken_0x1feb54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feb54) {
            ctx->pc = 0x1FEB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEB54u;
            // 0x1feb58: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEB68u;
            goto label_1feb68;
        }
    }
    ctx->pc = 0x1FEB5Cu;
    // 0x1feb5c: 0xc0819e8  jal         func_2067A0
    ctx->pc = 0x1FEB5Cu;
    SET_GPR_U32(ctx, 31, 0x1FEB64u);
    ctx->pc = 0x2067A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2067A0u, 0x1FEB5Cu, 0x1FEB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEB64u;
label_1feb64:
    // 0x1feb64: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x1feb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1feb68:
    // 0x1feb68: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEB68u;
    {
        const bool branch_taken_0x1feb68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feb68) {
            ctx->pc = 0x1FEB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEB68u;
            // 0x1feb6c: 0xae000088  sw          $zero, 0x88($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEB7Cu;
            goto label_1feb7c;
        }
    }
    ctx->pc = 0x1FEB70u;
    // 0x1feb70: 0xc0819e8  jal         func_2067A0
    ctx->pc = 0x1FEB70u;
    SET_GPR_U32(ctx, 31, 0x1FEB78u);
    ctx->pc = 0x2067A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2067A0u, 0x1FEB70u, 0x1FEB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEB78u;
label_1feb78:
    // 0x1feb78: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x1feb78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_1feb7c:
    // 0x1feb7c: 0xa200004b  sb          $zero, 0x4B($s0)
    ctx->pc = 0x1feb7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 75), (uint8_t)GPR_U32(ctx, 0));
    // 0x1feb80: 0xa200004c  sb          $zero, 0x4C($s0)
    ctx->pc = 0x1feb80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x1feb84: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x1feb84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x1feb88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1feb88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1feb8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1feb8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1feb90: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB90u;
        // 0x1feb94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEB98u;
}
