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

// Function: sub_003357B8
// Address: 0x3357b8 - 0x335800
void sub_003357B8_0x3357b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003357B8_0x3357b8");
#endif

    switch (ctx->pc) {
        case 0x3357e8u: goto label_3357e8;
        default: break;
    }

    ctx->pc = 0x3357b8u;

    // 0x3357b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3357b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3357bc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3357bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3357c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3357c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3357c4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3357c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3357c8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3357c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3357cc: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x3357ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3357d0: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x3357d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x3357d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3357d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3357d8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3357D8u;
    {
        const bool branch_taken_0x3357d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3357DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3357D8u;
        // 0x3357dc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3357d8) {
            ctx->pc = 0x3357F0u;
            goto label_3357f0;
        }
    }
    ctx->pc = 0x3357E0u;
    // 0x3357e0: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x3357E0u;
    SET_GPR_U32(ctx, 31, 0x3357E8u);
    ctx->pc = 0x3357E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3357E0u;
    // 0x3357e4: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x3357E0u, 0x3357E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3357E8u;
label_3357e8:
    // 0x3357e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3357E8u;
    {
        const bool branch_taken_0x3357e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3357ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3357E8u;
        // 0x3357ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3357e8) {
            ctx->pc = 0x3357F8u;
            goto label_3357f8;
        }
    }
    ctx->pc = 0x3357F0u;
label_3357f0:
    // 0x3357f0: 0xacc5002c  sw          $a1, 0x2C($a2)
    ctx->pc = 0x3357f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 5));
    // 0x3357f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3357f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3357f8:
    // 0x3357f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3357F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3357FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3357F8u;
        // 0x3357fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3357F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335800u;
}
