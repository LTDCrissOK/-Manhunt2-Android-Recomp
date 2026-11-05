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

// Function: sub_002C6130
// Address: 0x2c6130 - 0x2c6198
void sub_002C6130_0x2c6130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6130_0x2c6130");
#endif

    ctx->pc = 0x2c6130u;

    // 0x2c6130: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2c6130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6134: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x2c6134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2c6138: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x2c6138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2c613c: 0x24a70020  addiu       $a3, $a1, 0x20
    ctx->pc = 0x2c613cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2c6140: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2c6140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2c6144: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x2c6144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2c6148: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x2c6148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c614c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2c614cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2c6150: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x2c6150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6154: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2c6154u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2c6158: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2c6158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c615c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2c615cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2c6160: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2c6160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6164: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c6164u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c6168: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x2c6168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c616c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c616cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c6170: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2c6170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6174: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x2c6174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2c6178: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2c6178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c617c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2c617cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2c6180: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x2c6180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6184: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6184u;
        // 0x2c6188: 0xe4610008  swc1        $f1, 0x8($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C618Cu;
    // 0x2c618c: 0x0  nop
    ctx->pc = 0x2c618cu;
    // NOP
    // 0x2c6190: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2c6190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c6194: 0x0  nop
    ctx->pc = 0x2c6194u;
    // NOP
    ctx->pc = 0x2c6198u;
}
