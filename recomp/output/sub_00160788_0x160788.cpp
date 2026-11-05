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

// Function: sub_00160788
// Address: 0x160788 - 0x160818
void sub_00160788_0x160788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160788_0x160788");
#endif

    switch (ctx->pc) {
        case 0x1607c0u: goto label_1607c0;
        case 0x1607d8u: goto label_1607d8;
        case 0x1607f4u: goto label_1607f4;
        default: break;
    }

    ctx->pc = 0x160788u;

    // 0x160788: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x160788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16078c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16078cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x160790: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x160790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x160794: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x160794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160798: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x160798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16079c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x16079cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1607a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1607a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1607a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1607a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1607a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1607a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1607ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1607acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1607b0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1607b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1607b4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1607b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1607b8: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x1607B8u;
    SET_GPR_U32(ctx, 31, 0x1607C0u);
    ctx->pc = 0x1607BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1607B8u;
    // 0x1607bc: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x1607B8u, 0x1607C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1607C0u;
label_1607c0:
    // 0x1607c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1607c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1607c4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1607c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1607c8: 0x50a2000b  beql        $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1607C8u;
    {
        const bool branch_taken_0x1607c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1607c8) {
            ctx->pc = 0x1607CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1607C8u;
            // 0x1607cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1607F8u;
            goto label_1607f8;
        }
    }
    ctx->pc = 0x1607D0u;
    // 0x1607d0: 0xc04f130  jal         func_13C4C0
    ctx->pc = 0x1607D0u;
    SET_GPR_U32(ctx, 31, 0x1607D8u);
    ctx->pc = 0x1607D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1607D0u;
    // 0x1607d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4C0u, 0x1607D0u, 0x1607D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1607D8u;
label_1607d8:
    // 0x1607d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1607D8u;
    {
        const bool branch_taken_0x1607d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1607DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607D8u;
        // 0x1607dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1607d8) {
            ctx->pc = 0x1607F4u;
            goto label_1607f4;
        }
    }
    ctx->pc = 0x1607E0u;
    // 0x1607e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1607e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1607e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1607e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1607e8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1607e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1607ec: 0xc04d7c6  jal         func_135F18
    ctx->pc = 0x1607ECu;
    SET_GPR_U32(ctx, 31, 0x1607F4u);
    ctx->pc = 0x1607F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1607ECu;
    // 0x1607f0: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F18u, 0x1607ECu, 0x1607F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1607F4u;
label_1607f4:
    // 0x1607f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1607f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1607f8:
    // 0x1607f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1607f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1607fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1607fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160800: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x160800u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x160804: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x160804u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160808: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x160808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16080c: 0x3e00008  jr          $ra
    ctx->pc = 0x16080Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16080Cu;
        // 0x160810: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16080Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160814u;
    // 0x160814: 0x0  nop
    ctx->pc = 0x160814u;
    // NOP
    ctx->pc = 0x160818u;
}
