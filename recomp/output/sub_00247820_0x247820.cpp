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

// Function: sub_00247820
// Address: 0x247820 - 0x247880
void sub_00247820_0x247820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247820_0x247820");
#endif

    switch (ctx->pc) {
        case 0x247874u: goto label_247874;
        default: break;
    }

    ctx->pc = 0x247820u;

    // 0x247820: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x247820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x247824: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x247824u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x247828: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x247828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24782c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24782cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x247830: 0x8c44bd50  lw          $a0, -0x42B0($v0)
    ctx->pc = 0x247830u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x247834: 0x24050487  addiu       $a1, $zero, 0x487
    ctx->pc = 0x247834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1159));
    // 0x247838: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x247838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x24783c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24783cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x247840: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x247840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x247844: 0x8c830334  lw          $v1, 0x334($a0)
    ctx->pc = 0x247844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x247848: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x247848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x24784c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24784cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x247850: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x247850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x247854: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x247854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x247858: 0x14850004  bne         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x247858u;
    {
        const bool branch_taken_0x247858 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x24785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247858u;
        // 0x24785c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247858) {
            ctx->pc = 0x24786Cu;
            goto label_24786c;
        }
    }
    ctx->pc = 0x247860u;
    // 0x247860: 0x3c013d07  lui         $at, 0x3D07
    ctx->pc = 0x247860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15623 << 16));
    // 0x247864: 0x34212b02  ori         $at, $at, 0x2B02
    ctx->pc = 0x247864u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11010);
    // 0x247868: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x247868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_24786c:
    // 0x24786c: 0xc0b8dfa  jal         func_2E37E8
    ctx->pc = 0x24786Cu;
    SET_GPR_U32(ctx, 31, 0x247874u);
    ctx->pc = 0x247870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24786Cu;
    // 0x247870: 0x24050055  addiu       $a1, $zero, 0x55 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E37E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E37E8u, 0x24786Cu, 0x247874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247874u;
label_247874:
    // 0x247874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247878: 0x3e00008  jr          $ra
    ctx->pc = 0x247878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247878u;
        // 0x24787c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247880u;
}
