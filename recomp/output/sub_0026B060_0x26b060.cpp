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

// Function: sub_0026B060
// Address: 0x26b060 - 0x26b0f0
void sub_0026B060_0x26b060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B060_0x26b060");
#endif

    switch (ctx->pc) {
        case 0x26b0e0u: goto label_26b0e0;
        default: break;
    }

    ctx->pc = 0x26b060u;

    // 0x26b060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26b060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26b064: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x26b064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b068: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x26B068u;
    {
        const bool branch_taken_0x26b068 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B068u;
        // 0x26b06c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b068) {
            ctx->pc = 0x26B0E0u;
            goto label_26b0e0;
        }
    }
    ctx->pc = 0x26B070u;
    // 0x26b070: 0xacc50260  sw          $a1, 0x260($a2)
    ctx->pc = 0x26b070u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 608), GPR_U32(ctx, 5));
    // 0x26b074: 0x24c40230  addiu       $a0, $a2, 0x230
    ctx->pc = 0x26b074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 560));
    // 0x26b078: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x26b078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x26b07c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26b080: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x26b080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x26b084: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x26b084u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26b088: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x26b088u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b08c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26b08cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26b090: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x26b090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26b094: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x26b094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b098: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x26b098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b09c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x26b09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26b0a0: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x26b0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26b0a4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x26b0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26b0a8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x26b0a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26b0ac: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x26b0acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26b0b0: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x26b0b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x26b0b4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x26b0b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b0b8: 0xf8c10270  sqc2        $vf1, 0x270($a2)
    ctx->pc = 0x26b0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 624), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26b0bc: 0x8cc40260  lw          $a0, 0x260($a2)
    ctx->pc = 0x26b0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 608)));
    // 0x26b0c0: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x26b0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x26b0c4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x26b0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x26b0c8: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x26b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x26b0cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26b0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26b0d0: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26B0D0u;
    {
        const bool branch_taken_0x26b0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26B0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B0D0u;
        // 0x26b0d4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b0d0) {
            ctx->pc = 0x26B0E4u;
            goto label_26b0e4;
        }
    }
    ctx->pc = 0x26B0D8u;
    // 0x26b0d8: 0xc09a568  jal         func_2695A0
    ctx->pc = 0x26B0D8u;
    SET_GPR_U32(ctx, 31, 0x26B0E0u);
    ctx->pc = 0x26B0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B0D8u;
    // 0x26b0dc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2695A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2695A0u, 0x26B0D8u, 0x26B0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B0E0u;
label_26b0e0:
    // 0x26b0e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26b0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26b0e4:
    // 0x26b0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x26B0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B0E4u;
        // 0x26b0e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B0ECu;
    // 0x26b0ec: 0x0  nop
    ctx->pc = 0x26b0ecu;
    // NOP
    ctx->pc = 0x26b0f0u;
}
