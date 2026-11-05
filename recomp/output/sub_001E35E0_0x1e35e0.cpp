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

// Function: sub_001E35E0
// Address: 0x1e35e0 - 0x1e3618
void sub_001E35E0_0x1e35e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E35E0_0x1e35e0");
#endif

    ctx->pc = 0x1e35e0u;

    // 0x1e35e0: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x1e35e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1e35e4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1e35e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e35e8: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x1e35e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e35ec: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e35ecu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e35f0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1e35f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e35f4: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x1e35f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e35f8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e35f8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e35fc: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1e35fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3600: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x1e3600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3604: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1e3604u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e3608: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x1e3608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e360c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E360Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E360Cu;
        // 0x1e3610: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E360Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3614u;
    // 0x1e3614: 0x0  nop
    ctx->pc = 0x1e3614u;
    // NOP
    ctx->pc = 0x1e3618u;
}
