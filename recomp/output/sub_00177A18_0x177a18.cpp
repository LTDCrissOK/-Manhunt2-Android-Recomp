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

// Function: sub_00177A18
// Address: 0x177a18 - 0x177a68
void sub_00177A18_0x177a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177A18_0x177a18");
#endif

    switch (ctx->pc) {
        case 0x177a2cu: goto label_177a2c;
        case 0x177a38u: goto label_177a38;
        default: break;
    }

    ctx->pc = 0x177a18u;

    // 0x177a18: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x177a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x177a1c: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x177a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x177a20: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x177a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x177a24: 0xc05e128  jal         func_1784A0
    ctx->pc = 0x177A24u;
    SET_GPR_U32(ctx, 31, 0x177A2Cu);
    ctx->pc = 0x177A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A24u;
    // 0x177a28: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1784A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1784A0u, 0x177A24u, 0x177A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A2Cu;
label_177a2c:
    // 0x177a2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a30: 0xc05e5bc  jal         func_1796F0
    ctx->pc = 0x177A30u;
    SET_GPR_U32(ctx, 31, 0x177A38u);
    ctx->pc = 0x177A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A30u;
    // 0x177a34: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1796F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1796F0u, 0x177A30u, 0x177A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A38u;
label_177a38:
    // 0x177a38: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x177a38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x177a3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x177A3Cu;
    {
        const bool branch_taken_0x177a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A3Cu;
        // 0x177a40: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177a3c) {
            ctx->pc = 0x177A50u;
            goto label_177a50;
        }
    }
    ctx->pc = 0x177A44u;
    // 0x177a44: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x177a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x177a48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x177A48u;
    {
        const bool branch_taken_0x177a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A48u;
        // 0x177a4c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177a48) {
            ctx->pc = 0x177A54u;
            goto label_177a54;
        }
    }
    ctx->pc = 0x177A50u;
label_177a50:
    // 0x177a50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x177a50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177a54:
    // 0x177a54: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x177a54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x177a58: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x177a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x177a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x177A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A5Cu;
        // 0x177a60: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177A64u;
    // 0x177a64: 0x0  nop
    ctx->pc = 0x177a64u;
    // NOP
    ctx->pc = 0x177a68u;
}
