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

// Function: sub_00146E00
// Address: 0x146e00 - 0x146e50
void sub_00146E00_0x146e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146E00_0x146e00");
#endif

    switch (ctx->pc) {
        case 0x146e14u: goto label_146e14;
        case 0x146e24u: goto label_146e24;
        case 0x146e34u: goto label_146e34;
        default: break;
    }

    ctx->pc = 0x146e00u;

    // 0x146e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x146e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x146e04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x146e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x146e08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x146e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x146e0c: 0xc051b94  jal         func_146E50
    ctx->pc = 0x146E0Cu;
    SET_GPR_U32(ctx, 31, 0x146E14u);
    ctx->pc = 0x146E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146E0Cu;
    // 0x146e10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146E50u, 0x146E0Cu, 0x146E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146E14u;
label_146e14:
    // 0x146e14: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x146E14u;
    {
        const bool branch_taken_0x146e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146e14) {
            ctx->pc = 0x146E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146E14u;
            // 0x146e18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146E40u;
            goto label_146e40;
        }
    }
    ctx->pc = 0x146E1Cu;
    // 0x146e1c: 0xc051bc4  jal         func_146F10
    ctx->pc = 0x146E1Cu;
    SET_GPR_U32(ctx, 31, 0x146E24u);
    ctx->pc = 0x146E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146E1Cu;
    // 0x146e20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146F10u, 0x146E1Cu, 0x146E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146E24u;
label_146e24:
    // 0x146e24: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x146E24u;
    {
        const bool branch_taken_0x146e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146e24) {
            ctx->pc = 0x146E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146E24u;
            // 0x146e28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146E40u;
            goto label_146e40;
        }
    }
    ctx->pc = 0x146E2Cu;
    // 0x146e2c: 0xc051bf0  jal         func_146FC0
    ctx->pc = 0x146E2Cu;
    SET_GPR_U32(ctx, 31, 0x146E34u);
    ctx->pc = 0x146E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146E2Cu;
    // 0x146e30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146FC0u, 0x146E2Cu, 0x146E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146E34u;
label_146e34:
    // 0x146e34: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x146E34u;
    {
        const bool branch_taken_0x146e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146e34) {
            ctx->pc = 0x146E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146E34u;
            // 0x146e38: 0x8e020564  lw          $v0, 0x564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146E3Cu;
            goto label_146e3c;
        }
    }
    ctx->pc = 0x146E3Cu;
label_146e3c:
    // 0x146e3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x146e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_146e40:
    // 0x146e40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x146e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x146e44: 0x3e00008  jr          $ra
    ctx->pc = 0x146E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146E44u;
        // 0x146e48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146E4Cu;
    // 0x146e4c: 0x0  nop
    ctx->pc = 0x146e4cu;
    // NOP
    ctx->pc = 0x146e50u;
}
