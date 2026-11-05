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

// Function: sub_002B3F48
// Address: 0x2b3f48 - 0x2b3fc0
void sub_002B3F48_0x2b3f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3F48_0x2b3f48");
#endif

    switch (ctx->pc) {
        case 0x2b3f6cu: goto label_2b3f6c;
        case 0x2b3f78u: goto label_2b3f78;
        case 0x2b3f84u: goto label_2b3f84;
        default: break;
    }

    ctx->pc = 0x2b3f48u;

    // 0x2b3f48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3f4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b3f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b3f50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b3f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b3f54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b3f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3f58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b3f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b3f5c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b3f5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3f60: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2b3f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2b3f64: 0xc0acff0  jal         func_2B3FC0
    ctx->pc = 0x2B3F64u;
    SET_GPR_U32(ctx, 31, 0x2B3F6Cu);
    ctx->pc = 0x2B3F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3F64u;
    // 0x2b3f68: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3FC0u, 0x2B3F64u, 0x2B3F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3F6Cu;
label_2b3f6c:
    // 0x2b3f6c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B3F6Cu;
    {
        const bool branch_taken_0x2b3f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F6Cu;
        // 0x2b3f70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f6c) {
            ctx->pc = 0x2B3FA4u;
            goto label_2b3fa4;
        }
    }
    ctx->pc = 0x2B3F74u;
    // 0x2b3f74: 0x261008e0  addiu       $s0, $s0, 0x8E0
    ctx->pc = 0x2b3f74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2272));
label_2b3f78:
    // 0x2b3f78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b3f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3f7c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B3F7Cu;
    SET_GPR_U32(ctx, 31, 0x2B3F84u);
    ctx->pc = 0x2B3F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3F7Cu;
    // 0x2b3f80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B3F7Cu, 0x2B3F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3F84u;
label_2b3f84:
    // 0x2b3f84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3F84u;
    {
        const bool branch_taken_0x2b3f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F84u;
        // 0x2b3f88: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f84) {
            ctx->pc = 0x2B3F94u;
            goto label_2b3f94;
        }
    }
    ctx->pc = 0x2B3F8Cu;
    // 0x2b3f8c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3F8Cu;
    {
        const bool branch_taken_0x2b3f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F8Cu;
        // 0x2b3f90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f8c) {
            ctx->pc = 0x2B3FA4u;
            goto label_2b3fa4;
        }
    }
    ctx->pc = 0x2B3F94u;
label_2b3f94:
    // 0x2b3f94: 0x2a22000d  slti        $v0, $s1, 0xD
    ctx->pc = 0x2b3f94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2b3f98: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2B3F98u;
    {
        const bool branch_taken_0x2b3f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F98u;
        // 0x2b3f9c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f98) {
            ctx->pc = 0x2B3F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3f78;
        }
    }
    ctx->pc = 0x2B3FA0u;
    // 0x2b3fa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b3fa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3fa4:
    // 0x2b3fa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b3fa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3fa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b3fa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3fac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b3facu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3fb0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b3fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3FB4u;
        // 0x2b3fb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3FBCu;
    // 0x2b3fbc: 0x0  nop
    ctx->pc = 0x2b3fbcu;
    // NOP
    ctx->pc = 0x2b3fc0u;
}
