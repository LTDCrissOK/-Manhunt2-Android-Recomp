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

// Function: sub_003807F8
// Address: 0x3807f8 - 0x380868
void sub_003807F8_0x3807f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003807F8_0x3807f8");
#endif

    switch (ctx->pc) {
        case 0x380820u: goto label_380820;
        case 0x38085cu: goto label_38085c;
        default: break;
    }

    ctx->pc = 0x3807f8u;

    // 0x3807f8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3807f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3807fc: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x3807fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x380800: 0x34428020  ori         $v0, $v0, 0x8020
    ctx->pc = 0x380800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32800);
    // 0x380804: 0x34c68030  ori         $a2, $a2, 0x8030
    ctx->pc = 0x380804u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32816);
    // 0x380808: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x380808u;
    runtime->Store32(rdram, ctx, 0x10008020u, GPR_U32(ctx, 0)); // MMIO: 0x10008020
    // 0x38080c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x38080cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x380810: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x380810u;
    runtime->Store32(rdram, ctx, 0x10008030u, GPR_U32(ctx, 4)); // MMIO: 0x10008030
    // 0x380814: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x380814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
    // 0x380818: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x380818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38081c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38081cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_380820:
    // 0x380820: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x380820u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x1000e010
    // 0x380824: 0x34a50104  ori         $a1, $a1, 0x104
    ctx->pc = 0x380824u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)260);
    // 0x380828: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x380828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x38082c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x38082cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10008000
    // 0x380830: 0x3e00008  jr          $ra
    ctx->pc = 0x380830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380838u;
    // 0x380838: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x380838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x38083c: 0x0  nop
    ctx->pc = 0x38083cu;
    // NOP
    // 0x380840: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x380840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x380844: 0x0  nop
    ctx->pc = 0x380844u;
    // NOP
    // 0x380848: 0x0  nop
    ctx->pc = 0x380848u;
    // NOP
    // 0x38084c: 0x0  nop
    ctx->pc = 0x38084cu;
    // NOP
    // 0x380850: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x380850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x380854: 0x0  nop
    ctx->pc = 0x380854u;
    // NOP
    // 0x380858: 0x0  nop
    ctx->pc = 0x380858u;
    // NOP
label_38085c:
    // 0x38085c: 0x0  nop
    ctx->pc = 0x38085cu;
    // NOP
    // 0x380860: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x380860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x380864: 0x0  nop
    ctx->pc = 0x380864u;
    // NOP
    ctx->pc = 0x380868u;
}
