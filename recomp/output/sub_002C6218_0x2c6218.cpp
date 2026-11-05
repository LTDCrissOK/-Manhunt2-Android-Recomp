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

// Function: sub_002C6218
// Address: 0x2c6218 - 0x2c6270
void sub_002C6218_0x2c6218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6218_0x2c6218");
#endif

    ctx->pc = 0x2c6218u;

    // 0x2c6218: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2c6218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c621c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c621cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6220: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2c6220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6224: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2c6224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6228: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c6228u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c622c: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x2c622cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6230: 0xc484000c  lwc1        $f4, 0xC($a0)
    ctx->pc = 0x2c6230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c6234: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2c6234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2c6238: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2c6238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c623c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2c623cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2c6240: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x2c6240u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2c6244: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2c6244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6248: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2c6248u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2c624c: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x2c624cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2c6250: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2c6250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6254: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2c6254u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2c6258: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6258u;
        // 0x2c625c: 0xe484000c  swc1        $f4, 0xC($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6260u;
    // 0x2c6260: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x2c6260u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2c6264: 0x0  nop
    ctx->pc = 0x2c6264u;
    // NOP
    // 0x2c6268: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c6268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c626c: 0x0  nop
    ctx->pc = 0x2c626cu;
    // NOP
    ctx->pc = 0x2c6270u;
}
