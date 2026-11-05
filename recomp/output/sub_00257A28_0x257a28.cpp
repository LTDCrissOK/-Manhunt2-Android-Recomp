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

// Function: sub_00257A28
// Address: 0x257a28 - 0x257a70
void sub_00257A28_0x257a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257A28_0x257a28");
#endif

    switch (ctx->pc) {
        case 0x257a40u: goto label_257a40;
        case 0x257a54u: goto label_257a54;
        default: break;
    }

    ctx->pc = 0x257a28u;

    // 0x257a28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x257a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x257a2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x257a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x257a30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x257a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x257a34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x257a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x257a38: 0xc0951ec  jal         func_2547B0
    ctx->pc = 0x257A38u;
    SET_GPR_U32(ctx, 31, 0x257A40u);
    ctx->pc = 0x257A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257A38u;
    // 0x257a3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2547B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2547B0u, 0x257A38u, 0x257A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257A40u;
label_257a40:
    // 0x257a40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x257a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257a44: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x257A44u;
    {
        const bool branch_taken_0x257a44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x257A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A44u;
        // 0x257a48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257a44) {
            ctx->pc = 0x257A54u;
            goto label_257a54;
        }
    }
    ctx->pc = 0x257A4Cu;
    // 0x257a4c: 0xc0cda26  jal         func_336898
    ctx->pc = 0x257A4Cu;
    SET_GPR_U32(ctx, 31, 0x257A54u);
    ctx->pc = 0x257A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257A4Cu;
    // 0x257a50: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x257A4Cu, 0x257A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257A54u;
label_257a54:
    // 0x257a54: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x257a54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257a58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x257a58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257a5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x257a5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x257a60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x257a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257a64: 0x3e00008  jr          $ra
    ctx->pc = 0x257A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A64u;
        // 0x257a68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257A6Cu;
    // 0x257a6c: 0x0  nop
    ctx->pc = 0x257a6cu;
    // NOP
    ctx->pc = 0x257a70u;
}
