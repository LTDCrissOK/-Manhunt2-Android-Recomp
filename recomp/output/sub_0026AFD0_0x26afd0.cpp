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

// Function: sub_0026AFD0
// Address: 0x26afd0 - 0x26b020
void sub_0026AFD0_0x26afd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026AFD0_0x26afd0");
#endif

    switch (ctx->pc) {
        case 0x26afe4u: goto label_26afe4;
        case 0x26aff8u: goto label_26aff8;
        default: break;
    }

    ctx->pc = 0x26afd0u;

    // 0x26afd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26afd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26afd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26afd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26afd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x26afd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x26afdc: 0xc0845aa  jal         func_2116A8
    ctx->pc = 0x26AFDCu;
    SET_GPR_U32(ctx, 31, 0x26AFE4u);
    ctx->pc = 0x26AFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AFDCu;
    // 0x26afe0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2116A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2116A8u, 0x26AFDCu, 0x26AFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AFE4u;
label_26afe4:
    // 0x26afe4: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x26afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x26afe8: 0x8e040280  lw          $a0, 0x280($s0)
    ctx->pc = 0x26afe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
    // 0x26afec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x26afecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26aff0: 0xc0b1680  jal         func_2C5A00
    ctx->pc = 0x26AFF0u;
    SET_GPR_U32(ctx, 31, 0x26AFF8u);
    ctx->pc = 0x26AFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AFF0u;
    // 0x26aff4: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x26AFF0u, 0x26AFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AFF8u;
label_26aff8:
    // 0x26aff8: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x26aff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x26affc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26affcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26b000: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x26b000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x26b004: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x26b004u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b008: 0xfa010230  sqc2        $vf1, 0x230($s0)
    ctx->pc = 0x26b008u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 560), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26b00c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26b00cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b010: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x26b010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26b014: 0x3e00008  jr          $ra
    ctx->pc = 0x26B014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B014u;
        // 0x26b018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B01Cu;
    // 0x26b01c: 0x0  nop
    ctx->pc = 0x26b01cu;
    // NOP
    ctx->pc = 0x26b020u;
}
