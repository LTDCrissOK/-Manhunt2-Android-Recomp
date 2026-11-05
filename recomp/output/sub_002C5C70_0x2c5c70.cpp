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

// Function: sub_002C5C70
// Address: 0x2c5c70 - 0x2c5d08
void sub_002C5C70_0x2c5c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5C70_0x2c5c70");
#endif

    switch (ctx->pc) {
        case 0x2c5ca0u: goto label_2c5ca0;
        case 0x2c5cb0u: goto label_2c5cb0;
        case 0x2c5cc4u: goto label_2c5cc4;
        default: break;
    }

    ctx->pc = 0x2c5c70u;

    // 0x2c5c70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c5c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c5c74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c5c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2c5c78: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2c5c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2c5c7c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c5c7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5c80: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2c5c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2c5c84: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2c5c84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5c88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c5c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c5c8c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2c5c8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5c90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c5c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c5c94: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c5c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2c5c98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c5c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c5c9c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x2c5c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_2c5ca0:
    // 0x2c5ca0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c5ca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5ca4: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x2c5ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2c5ca8: 0x26530001  addiu       $s3, $s2, 0x1
    ctx->pc = 0x2c5ca8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2c5cac: 0x0  nop
    ctx->pc = 0x2c5cacu;
    // NOP
label_2c5cb0:
    // 0x2c5cb0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c5cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5cb4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c5cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5cb8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c5cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5cbc: 0xc0b16ce  jal         func_2C5B38
    ctx->pc = 0x2C5CBCu;
    SET_GPR_U32(ctx, 31, 0x2C5CC4u);
    ctx->pc = 0x2C5CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5CBCu;
    // 0x2c5cc0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5B38u, 0x2C5CBCu, 0x2C5CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5CC4u;
label_2c5cc4:
    // 0x2c5cc4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2c5cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2c5cc8: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x2c5cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c5ccc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2C5CCCu;
    {
        const bool branch_taken_0x2c5ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5CCCu;
        // 0x2c5cd0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ccc) {
            ctx->pc = 0x2C5CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5cb0;
        }
    }
    ctx->pc = 0x2C5CD4u;
    // 0x2c5cd4: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x2c5cd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5cd8: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x2c5cd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c5cdc: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2C5CDCu;
    {
        const bool branch_taken_0x2c5cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5cdc) {
            ctx->pc = 0x2C5CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5CDCu;
            // 0x2c5ce0: 0x121100  sll         $v0, $s2, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5ca0;
        }
    }
    ctx->pc = 0x2C5CE4u;
    // 0x2c5ce4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c5ce4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5ce8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c5ce8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c5cec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c5cecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5cf0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c5cf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c5cf4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2c5cf4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5cf8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2c5cf8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c5cfc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c5cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5d00: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D00u;
        // 0x2c5d04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5D08u;
}
