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

// Function: sub_00122590
// Address: 0x122590 - 0x122650
void sub_00122590_0x122590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122590_0x122590");
#endif

    switch (ctx->pc) {
        case 0x1225e0u: goto label_1225e0;
        case 0x122618u: goto label_122618;
        default: break;
    }

    ctx->pc = 0x122590u;

    // 0x122590: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x122590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x122594: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x122594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x122598: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x122598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x12259c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x12259cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1225a0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1225a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1225a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1225a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1225a8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1225a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1225ac: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x1225acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1225b0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1225b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1225b4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1225b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1225b8: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1225b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1225bc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1225bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1225c0: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1225c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1225c4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1225c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1225c8: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1225c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1225cc: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x1225ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1225d0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1225d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1225d4: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x1225d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1225d8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1225D8u;
    SET_GPR_U32(ctx, 31, 0x1225E0u);
    ctx->pc = 0x1225DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1225D8u;
    // 0x1225dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1225D8u, 0x1225E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1225E0u;
label_1225e0:
    // 0x1225e0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1225E0u;
    {
        const bool branch_taken_0x1225e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1225E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1225E0u;
        // 0x1225e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1225e0) {
            ctx->pc = 0x122620u;
            goto label_122620;
        }
    }
    ctx->pc = 0x1225E8u;
    // 0x1225e8: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x1225e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x1225ec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1225ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1225f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1225f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1225f4: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x1225f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    // 0x1225f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1225f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1225fc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1225fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122600: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x122600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122604: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x122604u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122608: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x122608u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12260c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12260cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122610: 0xc0489ca  jal         func_122728
    ctx->pc = 0x122610u;
    SET_GPR_U32(ctx, 31, 0x122618u);
    ctx->pc = 0x122614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122610u;
    // 0x122614: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122728u, 0x122610u, 0x122618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122618u;
label_122618:
    // 0x122618: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x122618u;
    {
        const bool branch_taken_0x122618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122618u;
        // 0x12261c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122618) {
            ctx->pc = 0x122628u;
            goto label_122628;
        }
    }
    ctx->pc = 0x122620u;
label_122620:
    // 0x122620: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x122620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x122624: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x122624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_122628:
    // 0x122628: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x122628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12262c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x12262cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122630: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x122630u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x122634: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x122634u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122638: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x122638u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12263c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x12263cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x122640: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x122640u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x122644: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x122644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x122648: 0x3e00008  jr          $ra
    ctx->pc = 0x122648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122648u;
        // 0x12264c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122650u;
}
