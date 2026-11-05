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

// Function: sub_0038F0B8
// Address: 0x38f0b8 - 0x38f150
void sub_0038F0B8_0x38f0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F0B8_0x38f0b8");
#endif

    switch (ctx->pc) {
        case 0x38f0d0u: goto label_38f0d0;
        case 0x38f0dcu: goto label_38f0dc;
        case 0x38f0e8u: goto label_38f0e8;
        case 0x38f0f4u: goto label_38f0f4;
        case 0x38f100u: goto label_38f100;
        case 0x38f10cu: goto label_38f10c;
        case 0x38f118u: goto label_38f118;
        case 0x38f124u: goto label_38f124;
        case 0x38f130u: goto label_38f130;
        case 0x38f13cu: goto label_38f13c;
        default: break;
    }

    ctx->pc = 0x38f0b8u;

    // 0x38f0b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38f0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38f0bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38f0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38f0c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38f0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38f0c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38f0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38f0c8: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38F0C8u;
    SET_GPR_U32(ctx, 31, 0x38F0D0u);
    ctx->pc = 0x38F0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F0C8u;
    // 0x38f0cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38F0C8u, 0x38F0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F0D0u;
label_38f0d0:
    // 0x38f0d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f0d4: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38F0D4u;
    SET_GPR_U32(ctx, 31, 0x38F0DCu);
    ctx->pc = 0x38F0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F0D4u;
    // 0x38f0d8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38F0D4u, 0x38F0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F0DCu;
label_38f0dc:
    // 0x38f0dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f0e0: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38F0E0u;
    SET_GPR_U32(ctx, 31, 0x38F0E8u);
    ctx->pc = 0x38F0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F0E0u;
    // 0x38f0e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38F0E0u, 0x38F0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F0E8u;
label_38f0e8:
    // 0x38f0e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f0ec: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38F0ECu;
    SET_GPR_U32(ctx, 31, 0x38F0F4u);
    ctx->pc = 0x38F0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F0ECu;
    // 0x38f0f0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38F0ECu, 0x38F0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F0F4u;
label_38f0f4:
    // 0x38f0f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f0f8: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38F0F8u;
    SET_GPR_U32(ctx, 31, 0x38F100u);
    ctx->pc = 0x38F0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F0F8u;
    // 0x38f0fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38F0F8u, 0x38F100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F100u;
label_38f100:
    // 0x38f100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f104: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38F104u;
    SET_GPR_U32(ctx, 31, 0x38F10Cu);
    ctx->pc = 0x38F108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F104u;
    // 0x38f108: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38F104u, 0x38F10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F10Cu;
label_38f10c:
    // 0x38f10c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f110: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38F110u;
    SET_GPR_U32(ctx, 31, 0x38F118u);
    ctx->pc = 0x38F114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F110u;
    // 0x38f114: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38F110u, 0x38F118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F118u;
label_38f118:
    // 0x38f118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f11c: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38F11Cu;
    SET_GPR_U32(ctx, 31, 0x38F124u);
    ctx->pc = 0x38F120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F11Cu;
    // 0x38f120: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38F11Cu, 0x38F124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F124u;
label_38f124:
    // 0x38f124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f128: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38F128u;
    SET_GPR_U32(ctx, 31, 0x38F130u);
    ctx->pc = 0x38F12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F128u;
    // 0x38f12c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38F128u, 0x38F130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F130u;
label_38f130:
    // 0x38f130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f134: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38F134u;
    SET_GPR_U32(ctx, 31, 0x38F13Cu);
    ctx->pc = 0x38F138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F134u;
    // 0x38f138: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38F134u, 0x38F13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F13Cu;
label_38f13c:
    // 0x38f13c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38f13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38f140: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38f140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f144: 0x3e00008  jr          $ra
    ctx->pc = 0x38F144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F144u;
        // 0x38f148: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F14Cu;
    // 0x38f14c: 0x0  nop
    ctx->pc = 0x38f14cu;
    // NOP
    ctx->pc = 0x38f150u;
}
