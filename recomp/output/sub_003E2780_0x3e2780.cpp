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

// Function: sub_003E2780
// Address: 0x3e2780 - 0x3e27d8
void sub_003E2780_0x3e2780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2780_0x3e2780");
#endif

    switch (ctx->pc) {
        case 0x3e27b0u: goto label_3e27b0;
        case 0x3e27c4u: goto label_3e27c4;
        default: break;
    }

    ctx->pc = 0x3e2780u;

    // 0x3e2780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e2780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e2784: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e2784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e2788: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e2788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e278c: 0x24422d20  addiu       $v0, $v0, 0x2D20
    ctx->pc = 0x3e278cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11552));
    // 0x3e2790: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e2790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e2794: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e2794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2798: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e2798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e279c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e279cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e27a0: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x3e27a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x3e27a4: 0x26240048  addiu       $a0, $s1, 0x48
    ctx->pc = 0x3e27a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x3e27a8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E27A8u;
    SET_GPR_U32(ctx, 31, 0x3E27B0u);
    ctx->pc = 0x3E27ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E27A8u;
    // 0x3e27ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E27A8u, 0x3E27B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E27B0u;
label_3e27b0:
    // 0x3e27b0: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3e27b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3e27b4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E27B4u;
    {
        const bool branch_taken_0x3e27b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E27B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E27B4u;
        // 0x3e27b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e27b4) {
            ctx->pc = 0x3E27C8u;
            goto label_3e27c8;
        }
    }
    ctx->pc = 0x3E27BCu;
    // 0x3e27bc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E27BCu;
    SET_GPR_U32(ctx, 31, 0x3E27C4u);
    ctx->pc = 0x3E27C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E27BCu;
    // 0x3e27c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E27BCu, 0x3E27C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E27C4u;
label_3e27c4:
    // 0x3e27c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e27c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e27c8:
    // 0x3e27c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e27c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e27cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e27ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e27d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E27D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E27D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E27D0u;
        // 0x3e27d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E27D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E27D8u;
}
