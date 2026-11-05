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

// Function: sub_0025D210
// Address: 0x25d210 - 0x25d2a8
void sub_0025D210_0x25d210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D210_0x25d210");
#endif

    ctx->pc = 0x25d210u;

    // 0x25d210: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x25d210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x25d214: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25d214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d218: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x25d218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x25d21c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25d21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d220: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x25d220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x25d224: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x25d224u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x25d228: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x25d228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x25d22c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x25d22cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x25d230: 0xac850034  sw          $a1, 0x34($a0)
    ctx->pc = 0x25d230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
    // 0x25d234: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x25d234u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x25d238: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x25d238u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x25d23c: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x25d23cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x25d240: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x25d240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x25d244: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25d244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25d248: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x25d248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d24c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x25d24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x25d250: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25d250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25d254: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x25d254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x25d258: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x25d258u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25d25c: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x25d25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x25d260: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x25d260u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x25d264: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x25d264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x25d268: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x25d268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x25d26c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25D26Cu;
    {
        const bool branch_taken_0x25d26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d26c) {
            ctx->pc = 0x25D2A0u;
            goto label_25d2a0;
        }
    }
    ctx->pc = 0x25D274u;
    // 0x25d274: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x25d274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x25d278: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25d278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d27c: 0xa080002c  sb          $zero, 0x2C($a0)
    ctx->pc = 0x25d27cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x25d280: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x25d280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x25d284: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x25d284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x25d288: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25d288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25d28c: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x25d28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d290: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25d290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25d294: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x25d294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x25d298: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x25d298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d29c: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x25d29cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_25d2a0:
    // 0x25d2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x25D2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D2A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D2A8u;
}
