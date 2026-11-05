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

// Function: sub_0013D5D8
// Address: 0x13d5d8 - 0x13d608
void sub_0013D5D8_0x13d5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D5D8_0x13d5d8");
#endif

    ctx->pc = 0x13d5d8u;

    // 0x13d5d8: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13D5D8u;
    {
        const bool branch_taken_0x13d5d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5D8u;
        // 0x13d5dc: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d5d8) {
            ctx->pc = 0x13D5FCu;
            goto label_13d5fc;
        }
    }
    ctx->pc = 0x13D5E0u;
    // 0x13d5e0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x13d5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13d5e4: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x13d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x13d5e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13d5ec: 0x8c430108  lw          $v1, 0x108($v0)
    ctx->pc = 0x13d5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x13d5f0: 0x8c640ff4  lw          $a0, 0xFF4($v1)
    ctx->pc = 0x13d5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4084)));
    // 0x13d5f4: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x13d5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d5f8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x13d5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_13d5fc:
    // 0x13d5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x13D5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D604u;
    // 0x13d604: 0x0  nop
    ctx->pc = 0x13d604u;
    // NOP
    ctx->pc = 0x13d608u;
}
