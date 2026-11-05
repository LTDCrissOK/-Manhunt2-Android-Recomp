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

// Function: sub_002287C8
// Address: 0x2287c8 - 0x228818
void sub_002287C8_0x2287c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002287C8_0x2287c8");
#endif

    switch (ctx->pc) {
        case 0x2287e0u: goto label_2287e0;
        default: break;
    }

    ctx->pc = 0x2287c8u;

    // 0x2287c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2287c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2287cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2287ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2287d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2287d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2287d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2287d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2287d8: 0xc0c3254  jal         func_30C950
    ctx->pc = 0x2287D8u;
    SET_GPR_U32(ctx, 31, 0x2287E0u);
    ctx->pc = 0x2287DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2287D8u;
    // 0x2287dc: 0x8e040104  lw          $a0, 0x104($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C950u, 0x2287D8u, 0x2287E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2287E0u;
label_2287e0:
    // 0x2287e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2287e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2287e4: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2287E4u;
    {
        const bool branch_taken_0x2287e4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2287E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2287E4u;
        // 0x2287e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2287e4) {
            ctx->pc = 0x228808u;
            goto label_228808;
        }
    }
    ctx->pc = 0x2287ECu;
    // 0x2287ec: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x2287ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x2287f0: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2287F0u;
    {
        const bool branch_taken_0x2287f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2287f0) {
            ctx->pc = 0x2287F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2287F0u;
            // 0x2287f4: 0x8e020340  lw          $v0, 0x340($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 832)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2287FCu;
            goto label_2287fc;
        }
    }
    ctx->pc = 0x2287F8u;
    // 0x2287f8: 0x8e02033c  lw          $v0, 0x33C($s0)
    ctx->pc = 0x2287f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 828)));
label_2287fc:
    // 0x2287fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2287fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x228800: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x228800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x228804: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x228804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_228808:
    // 0x228808: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x228808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22880c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22880cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x228810: 0x3e00008  jr          $ra
    ctx->pc = 0x228810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228810u;
        // 0x228814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228818u;
}
