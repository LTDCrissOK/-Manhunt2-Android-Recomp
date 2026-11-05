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

// Function: sub_0026AF80
// Address: 0x26af80 - 0x26afd0
void sub_0026AF80_0x26af80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026AF80_0x26af80");
#endif

    switch (ctx->pc) {
        case 0x26af94u: goto label_26af94;
        case 0x26afa8u: goto label_26afa8;
        default: break;
    }

    ctx->pc = 0x26af80u;

    // 0x26af80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26af80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26af84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26af84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26af88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x26af88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x26af8c: 0xc084536  jal         func_2114D8
    ctx->pc = 0x26AF8Cu;
    SET_GPR_U32(ctx, 31, 0x26AF94u);
    ctx->pc = 0x26AF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AF8Cu;
    // 0x26af90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2114D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2114D8u, 0x26AF8Cu, 0x26AF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AF94u;
label_26af94:
    // 0x26af94: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x26af94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x26af98: 0x8e040280  lw          $a0, 0x280($s0)
    ctx->pc = 0x26af98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
    // 0x26af9c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x26af9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26afa0: 0xc0b1680  jal         func_2C5A00
    ctx->pc = 0x26AFA0u;
    SET_GPR_U32(ctx, 31, 0x26AFA8u);
    ctx->pc = 0x26AFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AFA0u;
    // 0x26afa4: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x26AFA0u, 0x26AFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AFA8u;
label_26afa8:
    // 0x26afa8: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x26afa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x26afac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26afacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26afb0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x26afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x26afb4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x26afb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26afb8: 0xfa010230  sqc2        $vf1, 0x230($s0)
    ctx->pc = 0x26afb8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 560), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26afbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26afbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26afc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x26afc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26afc4: 0x3e00008  jr          $ra
    ctx->pc = 0x26AFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AFC4u;
        // 0x26afc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26AFCCu;
    // 0x26afcc: 0x0  nop
    ctx->pc = 0x26afccu;
    // NOP
    ctx->pc = 0x26afd0u;
}
