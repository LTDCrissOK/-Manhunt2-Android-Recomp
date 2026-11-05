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

// Function: sub_002E5560
// Address: 0x2e5560 - 0x2e5588
void sub_002E5560_0x2e5560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5560_0x2e5560");
#endif

    ctx->pc = 0x2e5560u;

    // 0x2e5560: 0x8c8311c0  lw          $v1, 0x11C0($a0)
    ctx->pc = 0x2e5560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4544)));
    // 0x2e5564: 0x2405ffbf  addiu       $a1, $zero, -0x41
    ctx->pc = 0x2e5564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x2e5568: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x2e5568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x2e556c: 0xc4801264  lwc1        $f0, 0x1264($a0)
    ctx->pc = 0x2e556cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5570: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e5570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e5574: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2e5574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2e5578: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2e5578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e557c: 0xe48011d4  swc1        $f0, 0x11D4($a0)
    ctx->pc = 0x2e557cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4564), bits); }
    // 0x2e5580: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5580u;
        // 0x2e5584: 0xac8311c0  sw          $v1, 0x11C0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5588u;
}
