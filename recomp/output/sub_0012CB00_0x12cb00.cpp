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

// Function: sub_0012CB00
// Address: 0x12cb00 - 0x12cb40
void sub_0012CB00_0x12cb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012CB00_0x12cb00");
#endif

    switch (ctx->pc) {
        case 0x12cb14u: goto label_12cb14;
        case 0x12cb2cu: goto label_12cb2c;
        default: break;
    }

    ctx->pc = 0x12cb00u;

    // 0x12cb00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12cb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12cb04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12cb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12cb08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12cb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12cb0c: 0xc04b324  jal         func_12CC90
    ctx->pc = 0x12CB0Cu;
    SET_GPR_U32(ctx, 31, 0x12CB14u);
    ctx->pc = 0x12CB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CB0Cu;
    // 0x12cb10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CC90u, 0x12CB0Cu, 0x12CB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB14u;
label_12cb14:
    // 0x12cb14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12cb14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb18: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x12cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x12cb1c: 0x50a20004  beql        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CB1Cu;
    {
        const bool branch_taken_0x12cb1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x12cb1c) {
            ctx->pc = 0x12CB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CB1Cu;
            // 0x12cb20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CB30u;
            goto label_12cb30;
        }
    }
    ctx->pc = 0x12CB24u;
    // 0x12cb24: 0xc04b316  jal         func_12CC58
    ctx->pc = 0x12CB24u;
    SET_GPR_U32(ctx, 31, 0x12CB2Cu);
    ctx->pc = 0x12CB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CB24u;
    // 0x12cb28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CC58u, 0x12CB24u, 0x12CB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB2Cu;
label_12cb2c:
    // 0x12cb2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12cb2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12cb30:
    // 0x12cb30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12cb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12cb34: 0x3e00008  jr          $ra
    ctx->pc = 0x12CB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB34u;
        // 0x12cb38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CB3Cu;
    // 0x12cb3c: 0x0  nop
    ctx->pc = 0x12cb3cu;
    // NOP
    ctx->pc = 0x12cb40u;
}
