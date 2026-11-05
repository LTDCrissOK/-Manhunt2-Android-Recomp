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

// Function: sub_0031B5C8
// Address: 0x31b5c8 - 0x31b618
void sub_0031B5C8_0x31b5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B5C8_0x31b5c8");
#endif

    ctx->pc = 0x31b5c8u;

    // 0x31b5c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31b5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b5cc: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x31b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x31b5d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31B5D0u;
    {
        const bool branch_taken_0x31b5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B5D0u;
        // 0x31b5d4: 0xc4a00034  lwc1        $f0, 0x34($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b5d0) {
            ctx->pc = 0x31B5F8u;
            goto label_31b5f8;
        }
    }
    ctx->pc = 0x31B5D8u;
    // 0x31b5d8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x31b5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x31b5dc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31b5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31b5e0: 0x8c82bd48  lw          $v0, -0x42B8($a0)
    ctx->pc = 0x31b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x31b5e4: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x31b5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
    // 0x31b5e8: 0x8c83bd48  lw          $v1, -0x42B8($a0)
    ctx->pc = 0x31b5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x31b5ec: 0xc4a0c8dc  lwc1        $f0, -0x3724($a1)
    ctx->pc = 0x31b5ecu;
    { uint32_t bits = FAST_READ32(0x3FC8DCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x31B5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B5F0u;
        // 0x31b5f4: 0xe46000f4  swc1        $f0, 0xF4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B5F8u;
label_31b5f8:
    // 0x31b5f8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x31b5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x31b5fc: 0x8c62bd48  lw          $v0, -0x42B8($v1)
    ctx->pc = 0x31b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x31b600: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x31b600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
    // 0x31b604: 0x8c64bd48  lw          $a0, -0x42B8($v1)
    ctx->pc = 0x31b604u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x31b608: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x31b608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b60c: 0x3e00008  jr          $ra
    ctx->pc = 0x31B60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B60Cu;
        // 0x31b610: 0xe48000f4  swc1        $f0, 0xF4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B614u;
    // 0x31b614: 0x0  nop
    ctx->pc = 0x31b614u;
    // NOP
    ctx->pc = 0x31b618u;
}
