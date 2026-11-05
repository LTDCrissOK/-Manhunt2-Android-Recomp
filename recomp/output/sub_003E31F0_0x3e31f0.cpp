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

// Function: sub_003E31F0
// Address: 0x3e31f0 - 0x3e3278
void sub_003E31F0_0x3e31f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E31F0_0x3e31f0");
#endif

    switch (ctx->pc) {
        case 0x3e31f8u: goto label_3e31f8;
        default: break;
    }

    ctx->pc = 0x3e31f0u;

    // 0x3e31f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3E31F0u;
    {
        const bool branch_taken_0x3e31f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E31F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E31F0u;
        // 0x3e31f4: 0x2483ffec  addiu       $v1, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e31f0) {
            ctx->pc = 0x3E3224u;
            goto label_3e3224;
        }
    }
    ctx->pc = 0x3E31F8u;
label_3e31f8:
    // 0x3e31f8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3e31f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3e31fc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3e31fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e3200: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x3e3200u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3e3204: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3e3204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e3208: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x3e3208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3e320c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x3e320cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e3210: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x3e3210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x3e3214: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x3e3214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e3218: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x3e3218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x3e321c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3e321cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3220: 0x2483ffec  addiu       $v1, $a0, -0x14
    ctx->pc = 0x3e3220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_3e3224:
    // 0x3e3224: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x3e3224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e3228: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x3e3228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e322c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3e322cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e3230: 0x0  nop
    ctx->pc = 0x3e3230u;
    // NOP
    // 0x3e3234: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3E3234u;
    {
        const bool branch_taken_0x3e3234 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E3238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3234u;
        // 0x3e3238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3234) {
            ctx->pc = 0x3E3240u;
            goto label_3e3240;
        }
    }
    ctx->pc = 0x3E323Cu;
    // 0x3e323c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e323cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e3240:
    // 0x3e3240: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e3240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e3244: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3E3244u;
    {
        const bool branch_taken_0x3e3244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e3244) {
            ctx->pc = 0x3E3248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3244u;
            // 0x3e3248: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E31F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e31f8;
        }
    }
    ctx->pc = 0x3E324Cu;
    // 0x3e324c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3e324cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e3250: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3e3250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3e3254: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x3e3254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e3258: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x3e3258u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3e325c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3e325cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e3260: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x3e3260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3e3264: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x3e3264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e3268: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x3e3268u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x3e326c: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x3e326cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e3270: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3270u;
        // 0x3e3274: 0xe4800010  swc1        $f0, 0x10($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E3278u;
}
