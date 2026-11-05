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

// Function: sub_002C35C8
// Address: 0x2c35c8 - 0x2c35f8
void sub_002C35C8_0x2c35c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C35C8_0x2c35c8");
#endif

    ctx->pc = 0x2c35c8u;

    // 0x2c35c8: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2c35c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c35cc: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x2c35ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c35d0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2c35d0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2c35d4: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2c35d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c35d8: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x2c35d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c35dc: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2c35dcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2c35e0: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2c35e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c35e4: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x2c35e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c35e8: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x2c35e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2c35ec: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x2c35ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c35f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C35F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C35F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C35F0u;
        // 0x2c35f4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C35F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C35F8u;
}
