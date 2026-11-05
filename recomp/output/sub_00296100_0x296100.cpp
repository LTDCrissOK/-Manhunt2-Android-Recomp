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

// Function: sub_00296100
// Address: 0x296100 - 0x296170
void sub_00296100_0x296100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296100_0x296100");
#endif

    switch (ctx->pc) {
        case 0x296128u: goto label_296128;
        case 0x296134u: goto label_296134;
        default: break;
    }

    ctx->pc = 0x296100u;

    // 0x296100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x296100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x296104: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x296104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x296108: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29610c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29610cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x296110: 0x2450a908  addiu       $s0, $v0, -0x56F8
    ctx->pc = 0x296110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945032));
    // 0x296114: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x296114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x296118: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x296118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29611c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x29611cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x296120: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x296120u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296124: 0x0  nop
    ctx->pc = 0x296124u;
    // NOP
label_296128:
    // 0x296128: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x296128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29612c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x29612Cu;
    SET_GPR_U32(ctx, 31, 0x296134u);
    ctx->pc = 0x296130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29612Cu;
    // 0x296130: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x29612Cu, 0x296134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296134u;
label_296134:
    // 0x296134: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x296134u;
    {
        const bool branch_taken_0x296134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296134u;
        // 0x296138: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296134) {
            ctx->pc = 0x296144u;
            goto label_296144;
        }
    }
    ctx->pc = 0x29613Cu;
    // 0x29613c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29613Cu;
    {
        const bool branch_taken_0x29613c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29613Cu;
        // 0x296140: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29613c) {
            ctx->pc = 0x296154u;
            goto label_296154;
        }
    }
    ctx->pc = 0x296144u;
label_296144:
    // 0x296144: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x296144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x296148: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x296148u;
    {
        const bool branch_taken_0x296148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296148u;
        // 0x29614c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296148) {
            ctx->pc = 0x296128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296128;
        }
    }
    ctx->pc = 0x296150u;
    // 0x296150: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x296150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296154:
    // 0x296154: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296158: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x296158u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29615c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29615cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296160: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x296160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296164: 0x3e00008  jr          $ra
    ctx->pc = 0x296164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296164u;
        // 0x296168: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29616Cu;
    // 0x29616c: 0x0  nop
    ctx->pc = 0x29616cu;
    // NOP
    ctx->pc = 0x296170u;
}
