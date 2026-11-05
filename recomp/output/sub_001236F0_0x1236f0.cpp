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

// Function: sub_001236F0
// Address: 0x1236f0 - 0x123750
void sub_001236F0_0x1236f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001236F0_0x1236f0");
#endif

    switch (ctx->pc) {
        case 0x123718u: goto label_123718;
        case 0x12372cu: goto label_12372c;
        default: break;
    }

    ctx->pc = 0x1236f0u;

    // 0x1236f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1236f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1236f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1236f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1236f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1236f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1236fc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1236fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123700: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x123704: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x123704u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123708: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x123708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12370c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12370cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123710: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123710u;
    SET_GPR_U32(ctx, 31, 0x123718u);
    ctx->pc = 0x123714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123710u;
    // 0x123714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123710u, 0x123718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123718u;
label_123718:
    // 0x123718: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x123718u;
    {
        const bool branch_taken_0x123718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123718u;
        // 0x12371c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123718) {
            ctx->pc = 0x123734u;
            goto label_123734;
        }
    }
    ctx->pc = 0x123720u;
    // 0x123720: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x123720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x123724: 0xc042af0  jal         func_10ABC0
    ctx->pc = 0x123724u;
    SET_GPR_U32(ctx, 31, 0x12372Cu);
    ctx->pc = 0x123728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123724u;
    // 0x123728: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ABC0u, 0x123724u, 0x12372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12372Cu;
label_12372c:
    // 0x12372c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12372Cu;
    {
        const bool branch_taken_0x12372c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12372Cu;
        // 0x123730: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12372c) {
            ctx->pc = 0x12373Cu;
            goto label_12373c;
        }
    }
    ctx->pc = 0x123734u;
label_123734:
    // 0x123734: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x123734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12373c:
    // 0x12373c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12373cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123740: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x123740u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123744: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x123744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123748: 0x3e00008  jr          $ra
    ctx->pc = 0x123748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123748u;
        // 0x12374c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123750u;
}
