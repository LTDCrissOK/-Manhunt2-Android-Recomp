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

// Function: sub_0013CD58
// Address: 0x13cd58 - 0x13cdc8
void sub_0013CD58_0x13cd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CD58_0x13cd58");
#endif

    switch (ctx->pc) {
        case 0x13cd80u: goto label_13cd80;
        case 0x13cd9cu: goto label_13cd9c;
        default: break;
    }

    ctx->pc = 0x13cd58u;

    // 0x13cd58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13cd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13cd5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13cd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13cd60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13cd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13cd64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13cd64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13cd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13cd6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13cd6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd70: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13cd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x13cd74: 0x26320228  addiu       $s2, $s1, 0x228
    ctx->pc = 0x13cd74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 552));
    // 0x13cd78: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x13cd78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x13cd7c: 0x0  nop
    ctx->pc = 0x13cd7cu;
    // NOP
label_13cd80:
    // 0x13cd80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13cd80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd84: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x13cd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x13cd88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13cd8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13CD8Cu;
    {
        const bool branch_taken_0x13cd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD8Cu;
        // 0x13cd90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cd8c) {
            ctx->pc = 0x13CD9Cu;
            goto label_13cd9c;
        }
    }
    ctx->pc = 0x13CD94u;
    // 0x13cd94: 0xc04f372  jal         func_13CDC8
    ctx->pc = 0x13CD94u;
    SET_GPR_U32(ctx, 31, 0x13CD9Cu);
    ctx->pc = 0x13CDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CDC8u, 0x13CD94u, 0x13CD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CD9Cu;
label_13cd9c:
    // 0x13cd9c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x13cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13cda0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13cda0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13cda4: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x13cda4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x13cda8: 0x5460fff5  bnel        $v1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x13CDA8u;
    {
        const bool branch_taken_0x13cda8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13cda8) {
            ctx->pc = 0x13CDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CDA8u;
            // 0x13cdac: 0x1018c0  sll         $v1, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CD80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13cd80;
        }
    }
    ctx->pc = 0x13CDB0u;
    // 0x13cdb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13cdb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cdb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13cdb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13cdb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13cdb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13cdbc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x13cdbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13cdc0: 0x3e00008  jr          $ra
    ctx->pc = 0x13CDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CDC0u;
        // 0x13cdc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CDC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CDC8u;
}
