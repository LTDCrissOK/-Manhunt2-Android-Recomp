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

// Function: sub_002C3D70
// Address: 0x2c3d70 - 0x2c3d98
void sub_002C3D70_0x2c3d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3D70_0x2c3d70");
#endif

    ctx->pc = 0x2c3d70u;

    // 0x2c3d70: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2c3d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3d74: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x2c3d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x2c3d78: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2c3d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3d7c: 0xe4810044  swc1        $f1, 0x44($a0)
    ctx->pc = 0x2c3d7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x2c3d80: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2c3d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3d84: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D84u;
        // 0x2c3d88: 0xe4800048  swc1        $f0, 0x48($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3D8Cu;
    // 0x2c3d8c: 0x0  nop
    ctx->pc = 0x2c3d8cu;
    // NOP
    // 0x2c3d90: 0xe4830048  swc1        $f3, 0x48($a0)
    ctx->pc = 0x2c3d90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x2c3d94: 0x0  nop
    ctx->pc = 0x2c3d94u;
    // NOP
    ctx->pc = 0x2c3d98u;
}
