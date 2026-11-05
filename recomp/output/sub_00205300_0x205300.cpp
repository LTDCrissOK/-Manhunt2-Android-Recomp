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

// Function: sub_00205300
// Address: 0x205300 - 0x205358
void sub_00205300_0x205300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205300_0x205300");
#endif

    switch (ctx->pc) {
        case 0x205324u: goto label_205324;
        case 0x205348u: goto label_205348;
        default: break;
    }

    ctx->pc = 0x205300u;

    // 0x205300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205308: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x205308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20530c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20530cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205310: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x205310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x205314: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x205314u;
    {
        const bool branch_taken_0x205314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x205314) {
            ctx->pc = 0x205318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205314u;
            // 0x205318: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20534Cu;
            goto label_20534c;
        }
    }
    ctx->pc = 0x20531Cu;
    // 0x20531c: 0xc0e71c6  jal         func_39C718
    ctx->pc = 0x20531Cu;
    SET_GPR_U32(ctx, 31, 0x205324u);
    ctx->pc = 0x205320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20531Cu;
    // 0x205320: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C718u, 0x20531Cu, 0x205324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205324u;
label_205324:
    // 0x205324: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x205324u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x205328: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x205328u;
    {
        const bool branch_taken_0x205328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205328u;
        // 0x20532c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205328) {
            ctx->pc = 0x205348u;
            goto label_205348;
        }
    }
    ctx->pc = 0x205330u;
    // 0x205330: 0x904393c0  lbu         $v1, -0x6C40($v0)
    ctx->pc = 0x205330u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939584)));
    // 0x205334: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x205334u;
    {
        const bool branch_taken_0x205334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x205338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205334u;
        // 0x205338: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205334) {
            ctx->pc = 0x205348u;
            goto label_205348;
        }
    }
    ctx->pc = 0x20533Cu;
    // 0x20533c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x20533cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x205340: 0xc082ae2  jal         func_20AB88
    ctx->pc = 0x205340u;
    SET_GPR_U32(ctx, 31, 0x205348u);
    ctx->pc = 0x205344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205340u;
    // 0x205344: 0x2484c100  addiu       $a0, $a0, -0x3F00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AB88u, 0x205340u, 0x205348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205348u;
label_205348:
    // 0x205348: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20534c:
    // 0x20534c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20534cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205350: 0x3e00008  jr          $ra
    ctx->pc = 0x205350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205350u;
        // 0x205354: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205358u;
}
