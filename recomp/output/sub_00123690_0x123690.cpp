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

// Function: sub_00123690
// Address: 0x123690 - 0x1236f0
void sub_00123690_0x123690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123690_0x123690");
#endif

    switch (ctx->pc) {
        case 0x1236b8u: goto label_1236b8;
        case 0x1236ccu: goto label_1236cc;
        default: break;
    }

    ctx->pc = 0x123690u;

    // 0x123690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123694: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123698: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x123698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12369c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x12369cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1236a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1236a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1236a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1236a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1236a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1236a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1236ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1236acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1236b0: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1236B0u;
    SET_GPR_U32(ctx, 31, 0x1236B8u);
    ctx->pc = 0x1236B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1236B0u;
    // 0x1236b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1236B0u, 0x1236B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1236B8u;
label_1236b8:
    // 0x1236b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1236B8u;
    {
        const bool branch_taken_0x1236b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1236BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236B8u;
        // 0x1236bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1236b8) {
            ctx->pc = 0x1236D4u;
            goto label_1236d4;
        }
    }
    ctx->pc = 0x1236C0u;
    // 0x1236c0: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x1236c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x1236c4: 0xc042ac6  jal         func_10AB18
    ctx->pc = 0x1236C4u;
    SET_GPR_U32(ctx, 31, 0x1236CCu);
    ctx->pc = 0x1236C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1236C4u;
    // 0x1236c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AB18u, 0x1236C4u, 0x1236CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1236CCu;
label_1236cc:
    // 0x1236cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1236CCu;
    {
        const bool branch_taken_0x1236cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1236D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236CCu;
        // 0x1236d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1236cc) {
            ctx->pc = 0x1236DCu;
            goto label_1236dc;
        }
    }
    ctx->pc = 0x1236D4u;
label_1236d4:
    // 0x1236d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1236d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1236d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1236d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1236dc:
    // 0x1236dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1236dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1236e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1236e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1236e4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1236e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1236e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1236E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1236ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236E8u;
        // 0x1236ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1236E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1236F0u;
}
