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

// Function: sub_0036CAD8
// Address: 0x36cad8 - 0x36cb60
void sub_0036CAD8_0x36cad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CAD8_0x36cad8");
#endif

    switch (ctx->pc) {
        case 0x36caf4u: goto label_36caf4;
        case 0x36cb20u: goto label_36cb20;
        case 0x36cb28u: goto label_36cb28;
        case 0x36cb30u: goto label_36cb30;
        case 0x36cb38u: goto label_36cb38;
        case 0x36cb4cu: goto label_36cb4c;
        default: break;
    }

    ctx->pc = 0x36cad8u;

    // 0x36cad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36cad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36cadc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x36cadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x36cae0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36cae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36cae4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36cae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cae8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36cae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36caec: 0xc082ebc  jal         func_20BAF0
    ctx->pc = 0x36CAECu;
    SET_GPR_U32(ctx, 31, 0x36CAF4u);
    ctx->pc = 0x36CAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CAECu;
    // 0x36caf0: 0xa040cbb9  sb          $zero, -0x3447($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294953913), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BAF0u, 0x36CAECu, 0x36CAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CAF4u;
label_36caf4:
    // 0x36caf4: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x36caf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x36caf8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x36caf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x36cafc: 0x8cc4cbc8  lw          $a0, -0x3438($a2)
    ctx->pc = 0x36cafcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FCBC8u));
    // 0x36cb00: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x36cb00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x36cb04: 0x9067cbba  lbu         $a3, -0x3446($v1)
    ctx->pc = 0x36cb04u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x3FCBBAu));
    // 0x36cb08: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x36cb08u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x36cb0c: 0xacc2cbc8  sw          $v0, -0x3438($a2)
    ctx->pc = 0x36cb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294953928), GPR_U32(ctx, 2));
    // 0x36cb10: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x36CB10u;
    {
        const bool branch_taken_0x36cb10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CB10u;
        // 0x36cb14: 0xaca4cbc4  sw          $a0, -0x343C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294953924), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cb10) {
            ctx->pc = 0x36CB20u;
            goto label_36cb20;
        }
    }
    ctx->pc = 0x36CB18u;
    // 0x36cb18: 0xc0d9e9e  jal         func_367A78
    ctx->pc = 0x36CB18u;
    SET_GPR_U32(ctx, 31, 0x36CB20u);
    ctx->pc = 0x367A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367A78u, 0x36CB18u, 0x36CB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CB20u;
label_36cb20:
    // 0x36cb20: 0xc0dd74a  jal         func_375D28
    ctx->pc = 0x36CB20u;
    SET_GPR_U32(ctx, 31, 0x36CB28u);
    ctx->pc = 0x375D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375D28u, 0x36CB20u, 0x36CB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CB28u;
label_36cb28:
    // 0x36cb28: 0xc0ddd3c  jal         func_3774F0
    ctx->pc = 0x36CB28u;
    SET_GPR_U32(ctx, 31, 0x36CB30u);
    ctx->pc = 0x3774F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3774F0u, 0x36CB28u, 0x36CB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CB30u;
label_36cb30:
    // 0x36cb30: 0xc0dcea2  jal         func_373A88
    ctx->pc = 0x36CB30u;
    SET_GPR_U32(ctx, 31, 0x36CB38u);
    ctx->pc = 0x373A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A88u, 0x36CB30u, 0x36CB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CB38u;
label_36cb38:
    // 0x36cb38: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36CB38u;
    {
        const bool branch_taken_0x36cb38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CB38u;
        // 0x36cb3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cb38) {
            ctx->pc = 0x36CB4Cu;
            goto label_36cb4c;
        }
    }
    ctx->pc = 0x36CB40u;
    // 0x36cb40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36cb40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cb44: 0xc0db35c  jal         func_36CD70
    ctx->pc = 0x36CB44u;
    SET_GPR_U32(ctx, 31, 0x36CB4Cu);
    ctx->pc = 0x36CB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CB44u;
    // 0x36cb48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CD70u, 0x36CB44u, 0x36CB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CB4Cu;
label_36cb4c:
    // 0x36cb4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36cb4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36cb50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36cb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36cb54: 0x3e00008  jr          $ra
    ctx->pc = 0x36CB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CB54u;
        // 0x36cb58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CB54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CB5Cu;
    // 0x36cb5c: 0x0  nop
    ctx->pc = 0x36cb5cu;
    // NOP
    ctx->pc = 0x36cb60u;
}
