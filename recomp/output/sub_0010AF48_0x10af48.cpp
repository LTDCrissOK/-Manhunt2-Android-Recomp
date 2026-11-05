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

// Function: sub_0010AF48
// Address: 0x10af48 - 0x10afb0
void sub_0010AF48_0x10af48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AF48_0x10af48");
#endif

    switch (ctx->pc) {
        case 0x10af6cu: goto label_10af6c;
        case 0x10af88u: goto label_10af88;
        default: break;
    }

    ctx->pc = 0x10af48u;

    // 0x10af48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10af48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10af4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10af4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10af50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10af50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10af54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10af54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10af58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10af5c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10af5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af60: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10af60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10af64: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10AF64u;
    SET_GPR_U32(ctx, 31, 0x10AF6Cu);
    ctx->pc = 0x10AF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF64u;
    // 0x10af68: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10AF64u, 0x10AF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF6Cu;
label_10af6c:
    // 0x10af6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10af70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10af70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af74: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x10af74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10af78: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x10af78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af7c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10af80: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x10AF80u;
    SET_GPR_U32(ctx, 31, 0x10AF88u);
    ctx->pc = 0x10AF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF80u;
    // 0x10af84: 0x8c44001c  lw          $a0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x10AF80u, 0x10AF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF88u;
label_10af88:
    // 0x10af88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10af88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10af8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10af8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10af90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10af90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10af94: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10af94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10af98: 0x3e00008  jr          $ra
    ctx->pc = 0x10AF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AF98u;
        // 0x10af9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AFA0u;
    // 0x10afa0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10afa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10afa4: 0x0  nop
    ctx->pc = 0x10afa4u;
    // NOP
    // 0x10afa8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10afa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10afac: 0x0  nop
    ctx->pc = 0x10afacu;
    // NOP
    ctx->pc = 0x10afb0u;
}
