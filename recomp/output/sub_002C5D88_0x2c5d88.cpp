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

// Function: sub_002C5D88
// Address: 0x2c5d88 - 0x2c5dd8
void sub_002C5D88_0x2c5d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5D88_0x2c5d88");
#endif

    switch (ctx->pc) {
        case 0x2c5d90u: goto label_2c5d90;
        case 0x2c5da0u: goto label_2c5da0;
        default: break;
    }

    ctx->pc = 0x2c5d88u;

    // 0x2c5d88: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c5d88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5d8c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2c5d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2c5d90:
    // 0x2c5d90: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x2c5d90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c5d94: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x2c5d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c5d98: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2c5d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c5d9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c5d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2c5da0:
    // 0x2c5da0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2c5da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5da4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2c5da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2c5da8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2c5da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2c5dac: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2c5dacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2c5db0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2c5db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c5db4: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C5DB4u;
    {
        const bool branch_taken_0x2c5db4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2C5DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5DB4u;
        // 0x2c5db8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5db4) {
            ctx->pc = 0x2C5DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5da0;
        }
    }
    ctx->pc = 0x2C5DBCu;
    // 0x2c5dbc: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2c5dbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5dc0: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x2c5dc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c5dc4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2C5DC4u;
    {
        const bool branch_taken_0x2c5dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5DC4u;
        // 0x2c5dc8: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5dc4) {
            ctx->pc = 0x2C5D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5d90;
        }
    }
    ctx->pc = 0x2C5DCCu;
    // 0x2c5dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5DD4u;
    // 0x2c5dd4: 0x0  nop
    ctx->pc = 0x2c5dd4u;
    // NOP
    ctx->pc = 0x2c5dd8u;
}
