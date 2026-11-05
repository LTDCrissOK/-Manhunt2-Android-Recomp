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

// Function: sub_00380868
// Address: 0x380868 - 0x3808a8
void sub_00380868_0x380868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380868_0x380868");
#endif

    switch (ctx->pc) {
        case 0x380898u: goto label_380898;
        default: break;
    }

    ctx->pc = 0x380868u;

    // 0x380868: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x380868u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x38086c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x38086cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x380870: 0x34c6e000  ori         $a2, $a2, 0xE000
    ctx->pc = 0x380870u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)57344);
    // 0x380874: 0x34e7e020  ori         $a3, $a3, 0xE020
    ctx->pc = 0x380874u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)57376);
    // 0x380878: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x380878u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000E000u)); // MMIO: 0x1000e000
    // 0x38087c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x38087cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x380880: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x380880u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x1000E020u)); // MMIO: 0x1000e020
    // 0x380884: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x380884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x380888: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x380888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x38088c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x38088cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x380890: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x380890u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x380894: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x380894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_380898:
    // 0x380898: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x380898u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x38089c: 0x3e00008  jr          $ra
    ctx->pc = 0x38089Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38089Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3808A4u;
    // 0x3808a4: 0x0  nop
    ctx->pc = 0x3808a4u;
    // NOP
    ctx->pc = 0x3808a8u;
}
