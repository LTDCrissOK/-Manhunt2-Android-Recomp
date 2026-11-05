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

// Function: sub_002C5D08
// Address: 0x2c5d08 - 0x2c5d38
void sub_002C5D08_0x2c5d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5D08_0x2c5d08");
#endif

    switch (ctx->pc) {
        case 0x2c5d10u: goto label_2c5d10;
        default: break;
    }

    ctx->pc = 0x2c5d08u;

    // 0x2c5d08: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2c5d08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c5d0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c5d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c5d10:
    // 0x2c5d10: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2c5d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5d14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c5d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c5d18: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2c5d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5d1c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2c5d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2c5d20: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2c5d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2c5d24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c5d24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c5d28: 0x441fff9  bgez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C5D28u;
    {
        const bool branch_taken_0x2c5d28 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C5D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D28u;
        // 0x2c5d2c: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d28) {
            ctx->pc = 0x2C5D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5d10;
        }
    }
    ctx->pc = 0x2C5D30u;
    // 0x2c5d30: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D30u;
        // 0x2c5d34: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5D38u;
}
