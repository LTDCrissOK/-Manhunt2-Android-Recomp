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

// Function: sub_00250E08
// Address: 0x250e08 - 0x250e48
void sub_00250E08_0x250e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250E08_0x250e08");
#endif

    switch (ctx->pc) {
        case 0x250e38u: goto label_250e38;
        default: break;
    }

    ctx->pc = 0x250e08u;

    // 0x250e08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x250e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x250e0c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250e10: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x250E10u;
    {
        const bool branch_taken_0x250e10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x250E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E10u;
        // 0x250e14: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e10) {
            ctx->pc = 0x250E38u;
            goto label_250e38;
        }
    }
    ctx->pc = 0x250E18u;
    // 0x250e18: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x250E18u;
    {
        const bool branch_taken_0x250e18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x250E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E18u;
        // 0x250e1c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e18) {
            ctx->pc = 0x250E38u;
            goto label_250e38;
        }
    }
    ctx->pc = 0x250E20u;
    // 0x250e20: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x250e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x250e24: 0xc44098fc  lwc1        $f0, -0x6704($v0)
    ctx->pc = 0x250e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250e28: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x250e28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x250e2c: 0x24843d00  addiu       $a0, $a0, 0x3D00
    ctx->pc = 0x250e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15616));
    // 0x250e30: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x250E30u;
    SET_GPR_U32(ctx, 31, 0x250E38u);
    ctx->pc = 0x250E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250E30u;
    // 0x250e34: 0xe4603cf0  swc1        $f0, 0x3CF0($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 15600), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x250E30u, 0x250E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E38u;
label_250e38:
    // 0x250e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x250E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E3Cu;
        // 0x250e40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250E44u;
    // 0x250e44: 0x0  nop
    ctx->pc = 0x250e44u;
    // NOP
    ctx->pc = 0x250e48u;
}
