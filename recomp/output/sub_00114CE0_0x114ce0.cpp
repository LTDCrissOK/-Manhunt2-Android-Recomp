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

// Function: sub_00114CE0
// Address: 0x114ce0 - 0x114d50
void sub_00114CE0_0x114ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114CE0_0x114ce0");
#endif

    switch (ctx->pc) {
        case 0x114d30u: goto label_114d30;
        default: break;
    }

    ctx->pc = 0x114ce0u;

    // 0x114ce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x114ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x114ce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x114ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x114ce8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x114ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x114cec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x114cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114cf0: 0x8e020284  lw          $v0, 0x284($s0)
    ctx->pc = 0x114cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
    // 0x114cf4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x114CF4u;
    {
        const bool branch_taken_0x114cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114cf4) {
            ctx->pc = 0x114CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114CF4u;
            // 0x114cf8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114D40u;
            goto label_114d40;
        }
    }
    ctx->pc = 0x114CFCu;
    // 0x114cfc: 0x8e02028c  lw          $v0, 0x28C($s0)
    ctx->pc = 0x114cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
    // 0x114d00: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x114D00u;
    {
        const bool branch_taken_0x114d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114d00) {
            ctx->pc = 0x114D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114D00u;
            // 0x114d04: 0xae00028c  sw          $zero, 0x28C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114D34u;
            goto label_114d34;
        }
    }
    ctx->pc = 0x114D08u;
    // 0x114d08: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x114d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x114d0c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x114d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x114d10: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x114d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x114d14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x114d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x114d18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x114d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x114d1c: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x114d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x114d20: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x114D20u;
    {
        const bool branch_taken_0x114d20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x114d20) {
            ctx->pc = 0x114D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114D20u;
            // 0x114d24: 0xae00028c  sw          $zero, 0x28C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114D34u;
            goto label_114d34;
        }
    }
    ctx->pc = 0x114D28u;
    // 0x114d28: 0xc0951d8  jal         func_254760
    ctx->pc = 0x114D28u;
    SET_GPR_U32(ctx, 31, 0x114D30u);
    ctx->pc = 0x114D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114D28u;
    // 0x114d2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254760u, 0x114D28u, 0x114D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114D30u;
label_114d30:
    // 0x114d30: 0xae00028c  sw          $zero, 0x28C($s0)
    ctx->pc = 0x114d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
label_114d34:
    // 0x114d34: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x114d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
    // 0x114d38: 0xae000288  sw          $zero, 0x288($s0)
    ctx->pc = 0x114d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
    // 0x114d3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x114d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_114d40:
    // 0x114d40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x114d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x114d44: 0x3e00008  jr          $ra
    ctx->pc = 0x114D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D44u;
        // 0x114d48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114D4Cu;
    // 0x114d4c: 0x0  nop
    ctx->pc = 0x114d4cu;
    // NOP
    ctx->pc = 0x114d50u;
}
