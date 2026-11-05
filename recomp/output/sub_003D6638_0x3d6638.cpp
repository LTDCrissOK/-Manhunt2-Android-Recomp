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

// Function: sub_003D6638
// Address: 0x3d6638 - 0x3d66c0
void sub_003D6638_0x3d6638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6638_0x3d6638");
#endif

    switch (ctx->pc) {
        case 0x3d6650u: goto label_3d6650;
        default: break;
    }

    ctx->pc = 0x3d6638u;

    // 0x3d6638: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3d6638u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d663c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x3d663cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6640: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3d6640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3d6644: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x3d6644u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d6648: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3D6648u;
    {
        const bool branch_taken_0x3d6648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6648u;
        // 0x3d664c: 0x8cea0000  lw          $t2, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6648) {
            ctx->pc = 0x3D66B4u;
            goto label_3d66b4;
        }
    }
    ctx->pc = 0x3D6650u;
label_3d6650:
    // 0x3d6650: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x3d6650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x3d6654: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x3D6654u;
    {
        const bool branch_taken_0x3d6654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6654) {
            ctx->pc = 0x3D6658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D6654u;
            // 0x3d6658: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D66A4u;
            goto label_3d66a4;
        }
    }
    ctx->pc = 0x3D665Cu;
    // 0x3d665c: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x3d665cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3d6660: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3D6660u;
    {
        const bool branch_taken_0x3d6660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6660) {
            ctx->pc = 0x3D6664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D6660u;
            // 0x3d6664: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D66A4u;
            goto label_3d66a4;
        }
    }
    ctx->pc = 0x3D6668u;
    // 0x3d6668: 0x8d640004  lw          $a0, 0x4($t3)
    ctx->pc = 0x3d6668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x3d666c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x3d666cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3d6670: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3d6670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3d6674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d6674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d6678: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d6678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d667c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x3d667cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x3d6680: 0xad640004  sw          $a0, 0x4($t3)
    ctx->pc = 0x3d6680u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 4));
    // 0x3d6684: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x3d6684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3d6688: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x3d6688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x3d668c: 0x69282b  sltu        $a1, $v1, $t1
    ctx->pc = 0x3d668cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3d6690: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3d6690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d6694: 0x65480b  movn        $t1, $v1, $a1
    ctx->pc = 0x3d6694u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x3d6698: 0x144102b  sltu        $v0, $t2, $a0
    ctx->pc = 0x3d6698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3d669c: 0x82500b  movn        $t2, $a0, $v0
    ctx->pc = 0x3d669cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 4));
    // 0x3d66a0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3d66a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3d66a4:
    // 0x3d66a4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x3d66a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3d66a8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3d66a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3d66ac: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x3D66ACu;
    {
        const bool branch_taken_0x3d66ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D66B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D66ACu;
        // 0x3d66b0: 0x24480004  addiu       $t0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d66ac) {
            ctx->pc = 0x3D6650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6650;
        }
    }
    ctx->pc = 0x3D66B4u;
label_3d66b4:
    // 0x3d66b4: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x3d66b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x3d66b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D66B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D66BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D66B8u;
        // 0x3d66bc: 0xacea0000  sw          $t2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D66B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D66C0u;
}
