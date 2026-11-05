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

// Function: sub_002C5D38
// Address: 0x2c5d38 - 0x2c5d88
void sub_002C5D38_0x2c5d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5D38_0x2c5d38");
#endif

    switch (ctx->pc) {
        case 0x2c5d40u: goto label_2c5d40;
        case 0x2c5d58u: goto label_2c5d58;
        default: break;
    }

    ctx->pc = 0x2c5d38u;

    // 0x2c5d38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c5d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5d3c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2c5d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2c5d40:
    // 0x2c5d40: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x2c5d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2c5d44: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x2c5d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2c5d48: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c5d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c5d4c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c5d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c5d50: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2c5d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c5d54: 0x0  nop
    ctx->pc = 0x2c5d54u;
    // NOP
label_2c5d58:
    // 0x2c5d58: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2c5d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5d5c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2c5d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2c5d60: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2c5d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2c5d64: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2c5d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c5d68: 0x4c1fffb  bgez        $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C5D68u;
    {
        const bool branch_taken_0x2c5d68 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2C5D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D68u;
        // 0x2c5d6c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d68) {
            ctx->pc = 0x2C5D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5d58;
        }
    }
    ctx->pc = 0x2C5D70u;
    // 0x2c5d70: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2c5d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5d74: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x2c5d74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c5d78: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2C5D78u;
    {
        const bool branch_taken_0x2c5d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D78u;
        // 0x2c5d7c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d78) {
            ctx->pc = 0x2C5D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5d40;
        }
    }
    ctx->pc = 0x2C5D80u;
    // 0x2c5d80: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5D88u;
}
