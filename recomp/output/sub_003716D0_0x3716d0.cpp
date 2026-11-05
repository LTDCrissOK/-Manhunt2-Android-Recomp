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

// Function: sub_003716D0
// Address: 0x3716d0 - 0x371730
void sub_003716D0_0x3716d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003716D0_0x3716d0");
#endif

    switch (ctx->pc) {
        case 0x3716e8u: goto label_3716e8;
        case 0x371718u: goto label_371718;
        default: break;
    }

    ctx->pc = 0x3716d0u;

    // 0x3716d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3716d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3716d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3716d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3716d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3716d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3716dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3716dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3716e0: 0xc0f25b0  jal         func_3C96C0
    ctx->pc = 0x3716E0u;
    SET_GPR_U32(ctx, 31, 0x3716E8u);
    ctx->pc = 0x3716E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3716E0u;
    // 0x3716e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C96C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C96C0u, 0x3716E0u, 0x3716E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3716E8u;
label_3716e8:
    // 0x3716e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3716e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3716ec: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3716ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3716f0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3716f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x3716f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3716f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3716f8: 0x244259c8  addiu       $v0, $v0, 0x59C8
    ctx->pc = 0x3716f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
    // 0x3716fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3716fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x371700: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x371700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x371704: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x371704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x371708: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x371708u;
    {
        const bool branch_taken_0x371708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x37170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371708u;
        // 0x37170c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371708) {
            ctx->pc = 0x371718u;
            goto label_371718;
        }
    }
    ctx->pc = 0x371710u;
    // 0x371710: 0xc0f2938  jal         func_3CA4E0
    ctx->pc = 0x371710u;
    SET_GPR_U32(ctx, 31, 0x371718u);
    ctx->pc = 0x371714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371710u;
    // 0x371714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA4E0u, 0x371710u, 0x371718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371718u;
label_371718:
    // 0x371718: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x371718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37171c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37171cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371720: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x371720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x371724: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x371724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371728: 0x3e00008  jr          $ra
    ctx->pc = 0x371728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371728u;
        // 0x37172c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371730u;
}
