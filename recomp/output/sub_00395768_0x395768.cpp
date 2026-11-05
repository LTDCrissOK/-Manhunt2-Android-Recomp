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

// Function: sub_00395768
// Address: 0x395768 - 0x3957c8
void sub_00395768_0x395768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395768_0x395768");
#endif

    switch (ctx->pc) {
        case 0x395788u: goto label_395788;
        case 0x395790u: goto label_395790;
        case 0x3957a4u: goto label_3957a4;
        default: break;
    }

    ctx->pc = 0x395768u;

    // 0x395768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x395768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39576c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39576cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x395770: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x395770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x395774: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x395774u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x395778: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x395778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39577c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x39577cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x395780: 0xc0ebe50  jal         func_3AF940
    ctx->pc = 0x395780u;
    SET_GPR_U32(ctx, 31, 0x395788u);
    ctx->pc = 0x395784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395780u;
    // 0x395784: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF940u, 0x395780u, 0x395788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395788u;
label_395788:
    // 0x395788: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x395788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x39578c: 0x2450e208  addiu       $s0, $v0, -0x1DF8
    ctx->pc = 0x39578cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959624));
label_395790:
    // 0x395790: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x395790u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x395794: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x395794u;
    {
        const bool branch_taken_0x395794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x395794) {
            ctx->pc = 0x395798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395794u;
            // 0x395798: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3957A8u;
            goto label_3957a8;
        }
    }
    ctx->pc = 0x39579Cu;
    // 0x39579c: 0xc0e5596  jal         func_395658
    ctx->pc = 0x39579Cu;
    SET_GPR_U32(ctx, 31, 0x3957A4u);
    ctx->pc = 0x3957A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39579Cu;
    // 0x3957a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395658u, 0x39579Cu, 0x3957A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3957A4u;
label_3957a4:
    // 0x3957a4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3957a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3957a8:
    // 0x3957a8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3957A8u;
    {
        const bool branch_taken_0x3957a8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x3957ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3957A8u;
        // 0x3957ac: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3957a8) {
            ctx->pc = 0x395790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395790;
        }
    }
    ctx->pc = 0x3957B0u;
    // 0x3957b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3957b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3957b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3957b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3957b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3957b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3957bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3957bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3957c0: 0x80ebe56  j           func_3AF958
    ctx->pc = 0x3957C0u;
    ctx->pc = 0x3957C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3957C0u;
    // 0x3957c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF958u;
    sub_003AF958_0x3af958(rdram, ctx, runtime); return;
    ctx->pc = 0x3957C8u;
}
