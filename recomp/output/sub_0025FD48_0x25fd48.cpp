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

// Function: sub_0025FD48
// Address: 0x25fd48 - 0x25fdd8
void sub_0025FD48_0x25fd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FD48_0x25fd48");
#endif

    switch (ctx->pc) {
        case 0x25fd58u: goto label_25fd58;
        default: break;
    }

    ctx->pc = 0x25fd48u;

    // 0x25fd48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25fd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25fd4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25fd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25fd50: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x25FD50u;
    SET_GPR_U32(ctx, 31, 0x25FD58u);
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x25FD50u, 0x25FD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FD58u;
label_25fd58:
    // 0x25fd58: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x25fd58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fd5c: 0x28620033  slti        $v0, $v1, 0x33
    ctx->pc = 0x25fd5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x25fd60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25FD60u;
    {
        const bool branch_taken_0x25fd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD60u;
        // 0x25fd64: 0x28620031  slti        $v0, $v1, 0x31 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)49) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd60) {
            ctx->pc = 0x25FD80u;
            goto label_25fd80;
        }
    }
    ctx->pc = 0x25FD68u;
    // 0x25fd68: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x25FD68u;
    {
        const bool branch_taken_0x25fd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD68u;
        // 0x25fd6c: 0x28620030  slti        $v0, $v1, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)48) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd68) {
            ctx->pc = 0x25FDB8u;
            goto label_25fdb8;
        }
    }
    ctx->pc = 0x25FD70u;
    // 0x25fd70: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x25FD70u;
    {
        const bool branch_taken_0x25fd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD70u;
        // 0x25fd74: 0x2862002e  slti        $v0, $v1, 0x2E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)46) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd70) {
            ctx->pc = 0x25FDC0u;
            goto label_25fdc0;
        }
    }
    ctx->pc = 0x25FD78u;
    // 0x25fd78: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x25FD78u;
    {
        const bool branch_taken_0x25fd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fd78) {
            ctx->pc = 0x25FDB0u;
            goto label_25fdb0;
        }
    }
    ctx->pc = 0x25FD80u;
label_25fd80:
    // 0x25fd80: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x25fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x25fd84: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25FD84u;
    {
        const bool branch_taken_0x25fd84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD84u;
        // 0x25fd88: 0x28620060  slti        $v0, $v1, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)96) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd84) {
            ctx->pc = 0x25FDB8u;
            goto label_25fdb8;
        }
    }
    ctx->pc = 0x25FD8Cu;
    // 0x25fd8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25FD8Cu;
    {
        const bool branch_taken_0x25fd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD8Cu;
        // 0x25fd90: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd8c) {
            ctx->pc = 0x25FDA4u;
            goto label_25fda4;
        }
    }
    ctx->pc = 0x25FD94u;
    // 0x25fd94: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25FD94u;
    {
        const bool branch_taken_0x25fd94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25FD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD94u;
        // 0x25fd98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd94) {
            ctx->pc = 0x25FDB8u;
            goto label_25fdb8;
        }
    }
    ctx->pc = 0x25FD9Cu;
    // 0x25fd9c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25FD9Cu;
    {
        const bool branch_taken_0x25fd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD9Cu;
        // 0x25fda0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd9c) {
            ctx->pc = 0x25FDC8u;
            goto label_25fdc8;
        }
    }
    ctx->pc = 0x25FDA4u;
label_25fda4:
    // 0x25fda4: 0x28620084  slti        $v0, $v1, 0x84
    ctx->pc = 0x25fda4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)132) ? 1 : 0);
    // 0x25fda8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25FDA8u;
    {
        const bool branch_taken_0x25fda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDA8u;
        // 0x25fdac: 0x28620082  slti        $v0, $v1, 0x82 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)130) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fda8) {
            ctx->pc = 0x25FDC0u;
            goto label_25fdc0;
        }
    }
    ctx->pc = 0x25FDB0u;
label_25fdb0:
    // 0x25fdb0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25FDB0u;
    {
        const bool branch_taken_0x25fdb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDB0u;
        // 0x25fdb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fdb0) {
            ctx->pc = 0x25FDC4u;
            goto label_25fdc4;
        }
    }
    ctx->pc = 0x25FDB8u;
label_25fdb8:
    // 0x25fdb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25FDB8u;
    {
        const bool branch_taken_0x25fdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDB8u;
        // 0x25fdbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fdb8) {
            ctx->pc = 0x25FDC4u;
            goto label_25fdc4;
        }
    }
    ctx->pc = 0x25FDC0u;
label_25fdc0:
    // 0x25fdc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25fdc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25fdc4:
    // 0x25fdc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25fdc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25fdc8:
    // 0x25fdc8: 0x3e00008  jr          $ra
    ctx->pc = 0x25FDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDC8u;
        // 0x25fdcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FDD0u;
    // 0x25fdd0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x25fdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25fdd4: 0x0  nop
    ctx->pc = 0x25fdd4u;
    // NOP
    ctx->pc = 0x25fdd8u;
}
