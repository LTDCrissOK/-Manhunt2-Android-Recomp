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

// Function: sub_002BFA50
// Address: 0x2bfa50 - 0x2bfab0
void sub_002BFA50_0x2bfa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFA50_0x2bfa50");
#endif

    switch (ctx->pc) {
        case 0x2bfa64u: goto label_2bfa64;
        case 0x2bfa78u: goto label_2bfa78;
        case 0x2bfa98u: goto label_2bfa98;
        default: break;
    }

    ctx->pc = 0x2bfa50u;

    // 0x2bfa50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bfa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bfa54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bfa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bfa58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2bfa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2bfa5c: 0xc0af778  jal         func_2BDDE0
    ctx->pc = 0x2BFA5Cu;
    SET_GPR_U32(ctx, 31, 0x2BFA64u);
    ctx->pc = 0x2BFA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFA5Cu;
    // 0x2bfa60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDE0u, 0x2BFA5Cu, 0x2BFA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFA64u;
label_2bfa64:
    // 0x2bfa64: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2bfa64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2bfa68: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2bfa68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2bfa6c: 0x24633a68  addiu       $v1, $v1, 0x3A68
    ctx->pc = 0x2bfa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14952));
    // 0x2bfa70: 0xc0b0440  jal         func_2C1100
    ctx->pc = 0x2BFA70u;
    SET_GPR_U32(ctx, 31, 0x2BFA78u);
    ctx->pc = 0x2BFA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFA70u;
    // 0x2bfa74: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1100u, 0x2BFA70u, 0x2BFA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFA78u;
label_2bfa78:
    // 0x2bfa78: 0x24034004  addiu       $v1, $zero, 0x4004
    ctx->pc = 0x2bfa78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16388));
    // 0x2bfa7c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2bfa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bfa80: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2bfa80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2bfa84: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2bfa84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bfa88: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x2bfa88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bfa8c: 0x2484513c  addiu       $a0, $a0, 0x513C
    ctx->pc = 0x2bfa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20796));
    // 0x2bfa90: 0xc0f9ef4  jal         func_3E7BD0
    ctx->pc = 0x2BFA90u;
    SET_GPR_U32(ctx, 31, 0x2BFA98u);
    ctx->pc = 0x2BFA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFA90u;
    // 0x2bfa94: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7BD0u, 0x2BFA90u, 0x2BFA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFA98u;
label_2bfa98:
    // 0x2bfa98: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2bfa98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2bfa9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bfa9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfaa0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2bfaa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfaa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bfaa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bfaa8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFAA8u;
        // 0x2bfaac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFAA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFAB0u;
}
