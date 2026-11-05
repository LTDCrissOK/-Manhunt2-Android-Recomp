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

// Function: sub_002D6970
// Address: 0x2d6970 - 0x2d6a00
void sub_002D6970_0x2d6970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6970_0x2d6970");
#endif

    switch (ctx->pc) {
        case 0x2d69d0u: goto label_2d69d0;
        case 0x2d69e8u: goto label_2d69e8;
        default: break;
    }

    ctx->pc = 0x2d6970u;

    // 0x2d6970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d6970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d6974: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2d6974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6978: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d6978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d697c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2d697cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6980: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d6980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6984: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d6984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d6988: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d6988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d698c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2d698cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2d6990: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2d6990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2d6994: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2d6994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2d6998: 0x3463f800  ori         $v1, $v1, 0xF800
    ctx->pc = 0x2d6998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63488);
    // 0x2d699c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2d699cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d69a0: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x2d69a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d69a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2d69a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d69a8: 0x8c91bd2c  lw          $s1, -0x42D4($a0)
    ctx->pc = 0x2d69a8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3FBD2Cu));
    // 0x2d69ac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2d69acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d69b0: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x2d69b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x2d69b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d69b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d69b8: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x2d69b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
    // 0x2d69bc: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2d69bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d69c0: 0x25086948  addiu       $t0, $t0, 0x6948
    ctx->pc = 0x2d69c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 26952));
    // 0x2d69c4: 0x24c607ff  addiu       $a2, $a2, 0x7FF
    ctx->pc = 0x2d69c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2047));
    // 0x2d69c8: 0xc0b4f18  jal         func_2D3C60
    ctx->pc = 0x2D69C8u;
    SET_GPR_U32(ctx, 31, 0x2D69D0u);
    ctx->pc = 0x2D69CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D69C8u;
    // 0x2d69cc: 0xc33024  and         $a2, $a2, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3C60u, 0x2D69C8u, 0x2D69D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D69D0u;
label_2d69d0:
    // 0x2d69d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d69d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d69d4: 0xa2000025  sb          $zero, 0x25($s0)
    ctx->pc = 0x2d69d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d69d8: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2d69d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2d69dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d69dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d69e0: 0xc0b4e26  jal         func_2D3898
    ctx->pc = 0x2D69E0u;
    SET_GPR_U32(ctx, 31, 0x2D69E8u);
    ctx->pc = 0x2D69E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D69E0u;
    // 0x2d69e4: 0xa2030024  sb          $v1, 0x24($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3898u, 0x2D69E0u, 0x2D69E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D69E8u;
label_2d69e8:
    // 0x2d69e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d69e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d69ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d69ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d69f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d69f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d69f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D69F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D69F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D69F4u;
        // 0x2d69f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D69F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D69FCu;
    // 0x2d69fc: 0x0  nop
    ctx->pc = 0x2d69fcu;
    // NOP
    ctx->pc = 0x2d6a00u;
}
