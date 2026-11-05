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

// Function: sub_003BF8A0
// Address: 0x3bf8a0 - 0x3bf908
void sub_003BF8A0_0x3bf8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF8A0_0x3bf8a0");
#endif

    switch (ctx->pc) {
        case 0x3bf8f8u: goto label_3bf8f8;
        default: break;
    }

    ctx->pc = 0x3bf8a0u;

    // 0x3bf8a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3bf8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3bf8a4: 0x3c0c0043  lui         $t4, 0x43
    ctx->pc = 0x3bf8a4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)67 << 16));
    // 0x3bf8a8: 0xffa50058  sd          $a1, 0x58($sp)
    ctx->pc = 0x3bf8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 5));
    // 0x3bf8ac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3bf8acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf8b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bf8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3bf8b4: 0xffa60060  sd          $a2, 0x60($sp)
    ctx->pc = 0x3bf8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 6));
    // 0x3bf8b8: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x3bf8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x3bf8bc: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x3bf8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x3bf8c0: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x3bf8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x3bf8c4: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x3bf8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x3bf8c8: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x3bf8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x3bf8cc: 0xffab0088  sd          $t3, 0x88($sp)
    ctx->pc = 0x3bf8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    // 0x3bf8d0: 0xe7ac0048  swc1        $f12, 0x48($sp)
    ctx->pc = 0x3bf8d0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3bf8d4: 0xe7ae004c  swc1        $f14, 0x4C($sp)
    ctx->pc = 0x3bf8d4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3bf8d8: 0xe7b00050  swc1        $f16, 0x50($sp)
    ctx->pc = 0x3bf8d8u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3bf8dc: 0xe7b20054  swc1        $f18, 0x54($sp)
    ctx->pc = 0x3bf8dcu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3bf8e0: 0x8d84cddc  lw          $a0, -0x3224($t4)
    ctx->pc = 0x3bf8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x42CDDCu));
    // 0x3bf8e4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3bf8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3bf8e8: 0xac440054  sw          $a0, 0x54($v0)
    ctx->pc = 0x3bf8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 4));
    // 0x3bf8ec: 0x8d83cddc  lw          $v1, -0x3224($t4)
    ctx->pc = 0x3bf8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x42CDDCu));
    // 0x3bf8f0: 0xc0f0d10  jal         func_3C3440
    ctx->pc = 0x3BF8F0u;
    SET_GPR_U32(ctx, 31, 0x3BF8F8u);
    ctx->pc = 0x3BF8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF8F0u;
    // 0x3bf8f4: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C3440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3440u, 0x3BF8F0u, 0x3BF8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF8F8u;
label_3bf8f8:
    // 0x3bf8f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bf8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bf8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF8FCu;
        // 0x3bf900: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BF904u;
    // 0x3bf904: 0x0  nop
    ctx->pc = 0x3bf904u;
    // NOP
    ctx->pc = 0x3bf908u;
}
