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

// Function: sub_0026A1A0
// Address: 0x26a1a0 - 0x26a250
void sub_0026A1A0_0x26a1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A1A0_0x26a1a0");
#endif

    switch (ctx->pc) {
        case 0x26a1e8u: goto label_26a1e8;
        case 0x26a1f8u: goto label_26a1f8;
        case 0x26a208u: goto label_26a208;
        case 0x26a22cu: goto label_26a22c;
        default: break;
    }

    ctx->pc = 0x26a1a0u;

    // 0x26a1a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26a1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26a1a4: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x26a1a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x26a1a8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x26a1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x26a1ac: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x26a1acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x26a1b0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x26a1b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26a1b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26a1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26a1b8: 0x4600ad07  neg.s       $f20, $f21
    ctx->pc = 0x26a1b8u;
    ctx->f[20] = FPU_NEG_S(ctx->f[21]);
    // 0x26a1bc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x26a1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x26a1c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26a1c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a1c4: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x26a1c4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26a1c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26a1c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a1cc: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x26a1ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x26a1d0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x26a1d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x26a1d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26a1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26a1d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26a1d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x26a1dc: 0xae000248  sw          $zero, 0x248($s0)
    ctx->pc = 0x26a1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 0));
    // 0x26a1e0: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x26A1E0u;
    SET_GPR_U32(ctx, 31, 0x26A1E8u);
    ctx->pc = 0x26A1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A1E0u;
    // 0x26a1e4: 0xae00024c  sw          $zero, 0x24C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x26A1E0u, 0x26A1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A1E8u;
label_26a1e8:
    // 0x26a1e8: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x26a1e8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x26a1ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26a1ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x26a1f0: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x26A1F0u;
    SET_GPR_U32(ctx, 31, 0x26A1F8u);
    ctx->pc = 0x26A1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A1F0u;
    // 0x26a1f4: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x26A1F0u, 0x26A1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A1F8u;
label_26a1f8:
    // 0x26a1f8: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x26a1f8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x26a1fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26a1fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x26a200: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x26A200u;
    SET_GPR_U32(ctx, 31, 0x26A208u);
    ctx->pc = 0x26A204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A200u;
    // 0x26a204: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x26A200u, 0x26A208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A208u;
label_26a208:
    // 0x26a208: 0xe7b70000  swc1        $f23, 0x0($sp)
    ctx->pc = 0x26a208u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26a20c: 0xe7b60004  swc1        $f22, 0x4($sp)
    ctx->pc = 0x26a20cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26a210: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x26a210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26a214: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x26a214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x26a218: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x26a218u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a21c: 0xfa010230  sqc2        $vf1, 0x230($s0)
    ctx->pc = 0x26a21cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 560), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26a220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a224: 0xc0845aa  jal         func_2116A8
    ctx->pc = 0x26A224u;
    SET_GPR_U32(ctx, 31, 0x26A22Cu);
    ctx->pc = 0x26A228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A224u;
    // 0x26a228: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2116A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2116A8u, 0x26A224u, 0x26A22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A22Cu;
label_26a22c:
    // 0x26a22c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x26a22cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a230: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x26a230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26a234: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26a234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a238: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x26a238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x26a23c: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x26a23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x26a240: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x26a240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26a244: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x26a244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26a248: 0x3e00008  jr          $ra
    ctx->pc = 0x26A248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A248u;
        // 0x26a24c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26A250u;
}
