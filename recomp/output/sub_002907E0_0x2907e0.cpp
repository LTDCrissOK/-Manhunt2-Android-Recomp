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

// Function: sub_002907E0
// Address: 0x2907e0 - 0x290858
void sub_002907E0_0x2907e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002907E0_0x2907e0");
#endif

    switch (ctx->pc) {
        case 0x290808u: goto label_290808;
        case 0x290810u: goto label_290810;
        default: break;
    }

    ctx->pc = 0x2907e0u;

    // 0x2907e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2907e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2907e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2907e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2907e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2907e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2907ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2907ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2907f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2907f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2907f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2907f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2907f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2907f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2907fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2907FCu;
    {
        const bool branch_taken_0x2907fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2907FCu;
        // 0x290800: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2907fc) {
            ctx->pc = 0x290810u;
            goto label_290810;
        }
    }
    ctx->pc = 0x290804u;
    // 0x290804: 0x0  nop
    ctx->pc = 0x290804u;
    // NOP
label_290808:
    // 0x290808: 0xc0a9be0  jal         func_2A6F80
    ctx->pc = 0x290808u;
    SET_GPR_U32(ctx, 31, 0x290810u);
    ctx->pc = 0x2A6F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6F80u, 0x290808u, 0x290810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290810u;
label_290810:
    // 0x290810: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x290810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x290814: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x290814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290818: 0x262502a0  addiu       $a1, $s1, 0x2A0
    ctx->pc = 0x290818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 672));
    // 0x29081c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29081cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290820: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x290820u;
    {
        const bool branch_taken_0x290820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290820u;
        // 0x290824: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290820) {
            ctx->pc = 0x29082Cu;
            goto label_29082c;
        }
    }
    ctx->pc = 0x290828u;
    // 0x290828: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x290828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29082c:
    // 0x29082c: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x29082Cu;
    {
        const bool branch_taken_0x29082c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x290830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29082Cu;
        // 0x290830: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29082c) {
            ctx->pc = 0x29083Cu;
            goto label_29083c;
        }
    }
    ctx->pc = 0x290834u;
    // 0x290834: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x290834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x290838: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x290838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_29083c:
    // 0x29083c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x29083Cu;
    {
        const bool branch_taken_0x29083c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x290840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29083Cu;
        // 0x290840: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29083c) {
            ctx->pc = 0x290808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290808;
        }
    }
    ctx->pc = 0x290844u;
    // 0x290844: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x290844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290848: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x290848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29084c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29084cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290850: 0x3e00008  jr          $ra
    ctx->pc = 0x290850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290850u;
        // 0x290854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290858u;
}
