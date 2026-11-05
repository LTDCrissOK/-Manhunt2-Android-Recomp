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

// Function: sub_0029BB00
// Address: 0x29bb00 - 0x29bb98
void sub_0029BB00_0x29bb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BB00_0x29bb00");
#endif

    switch (ctx->pc) {
        case 0x29bb30u: goto label_29bb30;
        case 0x29bb44u: goto label_29bb44;
        case 0x29bb54u: goto label_29bb54;
        case 0x29bb60u: goto label_29bb60;
        case 0x29bb6cu: goto label_29bb6c;
        case 0x29bb78u: goto label_29bb78;
        default: break;
    }

    ctx->pc = 0x29bb00u;

    // 0x29bb00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29bb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29bb04: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29bb04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29bb08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29bb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29bb0c: 0x24a5bee8  addiu       $a1, $a1, -0x4118
    ctx->pc = 0x29bb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950632));
    // 0x29bb10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29bb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29bb14: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x29bb14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x29bb18: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29bb18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bb1c: 0x2610f250  addiu       $s0, $s0, -0xDB0
    ctx->pc = 0x29bb1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963792));
    // 0x29bb20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29bb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29bb24: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x29bb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x29bb28: 0xc0a8e12  jal         func_2A3848
    ctx->pc = 0x29BB28u;
    SET_GPR_U32(ctx, 31, 0x29BB30u);
    ctx->pc = 0x29BB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BB28u;
    // 0x29bb2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3848u, 0x29BB28u, 0x29BB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BB30u;
label_29bb30:
    // 0x29bb30: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29bb30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29bb34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29bb34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bb38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29bb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bb3c: 0xc0a8e12  jal         func_2A3848
    ctx->pc = 0x29BB3Cu;
    SET_GPR_U32(ctx, 31, 0x29BB44u);
    ctx->pc = 0x29BB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BB3Cu;
    // 0x29bb40: 0x24a5bf00  addiu       $a1, $a1, -0x4100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3848u, 0x29BB3Cu, 0x29BB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BB44u;
label_29bb44:
    // 0x29bb44: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x29bb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x29bb48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29bb48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bb4c: 0xc0aa0b0  jal         func_2A82C0
    ctx->pc = 0x29BB4Cu;
    SET_GPR_U32(ctx, 31, 0x29BB54u);
    ctx->pc = 0x29BB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BB4Cu;
    // 0x29bb50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A82C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A82C0u, 0x29BB4Cu, 0x29BB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BB54u;
label_29bb54:
    // 0x29bb54: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x29bb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x29bb58: 0xc0aa0b0  jal         func_2A82C0
    ctx->pc = 0x29BB58u;
    SET_GPR_U32(ctx, 31, 0x29BB60u);
    ctx->pc = 0x29BB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BB58u;
    // 0x29bb5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A82C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A82C0u, 0x29BB58u, 0x29BB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BB60u;
label_29bb60:
    // 0x29bb60: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x29bb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x29bb64: 0xc0aa0b0  jal         func_2A82C0
    ctx->pc = 0x29BB64u;
    SET_GPR_U32(ctx, 31, 0x29BB6Cu);
    ctx->pc = 0x29BB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BB64u;
    // 0x29bb68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A82C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A82C0u, 0x29BB64u, 0x29BB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BB6Cu;
label_29bb6c:
    // 0x29bb6c: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x29bb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x29bb70: 0xc0aa0b0  jal         func_2A82C0
    ctx->pc = 0x29BB70u;
    SET_GPR_U32(ctx, 31, 0x29BB78u);
    ctx->pc = 0x29BB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BB70u;
    // 0x29bb74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A82C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A82C0u, 0x29BB70u, 0x29BB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BB78u;
label_29bb78:
    // 0x29bb78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29bb78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29bb7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29bb7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29bb80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29bb80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29bb84: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x29bb84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29bb88: 0x3e00008  jr          $ra
    ctx->pc = 0x29BB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BB88u;
        // 0x29bb8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BB90u;
    // 0x29bb90: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29bb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29bb94: 0x0  nop
    ctx->pc = 0x29bb94u;
    // NOP
    ctx->pc = 0x29bb98u;
}
