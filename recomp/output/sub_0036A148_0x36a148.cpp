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

// Function: sub_0036A148
// Address: 0x36a148 - 0x36a1d0
void sub_0036A148_0x36a148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A148_0x36a148");
#endif

    switch (ctx->pc) {
        case 0x36a1bcu: goto label_36a1bc;
        default: break;
    }

    ctx->pc = 0x36a148u;

    // 0x36a148: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x36a148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x36a14c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x36a14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x36a150: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x36a150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x36a154: 0x8fb100b0  lw          $s1, 0xB0($sp)
    ctx->pc = 0x36a154u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x36a158: 0x8fb000b8  lw          $s0, 0xB8($sp)
    ctx->pc = 0x36a158u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36a15c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x36a15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36a160: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x36a160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36a164: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x36a164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36a168: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x36a168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36a16c: 0x8faf00c0  lw          $t7, 0xC0($sp)
    ctx->pc = 0x36a16cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x36a170: 0x8fae00c8  lw          $t6, 0xC8($sp)
    ctx->pc = 0x36a170u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36a174: 0x8fad00d0  lw          $t5, 0xD0($sp)
    ctx->pc = 0x36a174u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x36a178: 0x8fac00d8  lw          $t4, 0xD8($sp)
    ctx->pc = 0x36a178u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x36a17c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x36a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x36a180: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x36a180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x36a184: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x36a184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x36a188: 0xafb10020  sw          $s1, 0x20($sp)
    ctx->pc = 0x36a188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
    // 0x36a18c: 0xafb00028  sw          $s0, 0x28($sp)
    ctx->pc = 0x36a18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 16));
    // 0x36a190: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x36a190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36a194: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x36a194u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36a198: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x36a198u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36a19c: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x36a19cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x36a1a0: 0xafaf0030  sw          $t7, 0x30($sp)
    ctx->pc = 0x36a1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 15));
    // 0x36a1a4: 0xafae0038  sw          $t6, 0x38($sp)
    ctx->pc = 0x36a1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 14));
    // 0x36a1a8: 0xafad0040  sw          $t5, 0x40($sp)
    ctx->pc = 0x36a1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 13));
    // 0x36a1ac: 0xafac0048  sw          $t4, 0x48($sp)
    ctx->pc = 0x36a1acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 12));
    // 0x36a1b0: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x36a1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x36a1b4: 0xc0da68a  jal         func_369A28
    ctx->pc = 0x36A1B4u;
    SET_GPR_U32(ctx, 31, 0x36A1BCu);
    ctx->pc = 0x36A1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A1B4u;
    // 0x36a1b8: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369A28u, 0x36A1B4u, 0x36A1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A1BCu;
label_36a1bc:
    // 0x36a1bc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x36a1bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36a1c0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x36a1c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36a1c4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x36a1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36a1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x36A1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A1C8u;
        // 0x36a1cc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A1D0u;
}
