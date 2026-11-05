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

// Function: sub_00357A60
// Address: 0x357a60 - 0x357ae0
void sub_00357A60_0x357a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357A60_0x357a60");
#endif

    switch (ctx->pc) {
        case 0x357a8cu: goto label_357a8c;
        case 0x357aa0u: goto label_357aa0;
        case 0x357ab8u: goto label_357ab8;
        default: break;
    }

    ctx->pc = 0x357a60u;

    // 0x357a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x357a64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x357a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x357a68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x357a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x357a6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x357a6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357a70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x357a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x357a74: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x357a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x357a78: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x357a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x357a7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x357A7Cu;
    {
        const bool branch_taken_0x357a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357A7Cu;
        // 0x357a80: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357a7c) {
            ctx->pc = 0x357A94u;
            goto label_357a94;
        }
    }
    ctx->pc = 0x357A84u;
    // 0x357a84: 0xc074256  jal         func_1D0958
    ctx->pc = 0x357A84u;
    SET_GPR_U32(ctx, 31, 0x357A8Cu);
    ctx->pc = 0x357A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357A84u;
    // 0x357a88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0958u, 0x357A84u, 0x357A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357A8Cu;
label_357a8c:
    // 0x357a8c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x357A8Cu;
    {
        const bool branch_taken_0x357a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357A8Cu;
        // 0x357a90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357a8c) {
            ctx->pc = 0x357AC8u;
            goto label_357ac8;
        }
    }
    ctx->pc = 0x357A94u;
label_357a94:
    // 0x357a94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x357a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357a98: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x357a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x357a9c: 0x0  nop
    ctx->pc = 0x357a9cu;
    // NOP
label_357aa0:
    // 0x357aa0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x357aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x357aa4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x357aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357aa8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x357aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x357aac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x357aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x357ab0: 0xc0742a0  jal         func_1D0A80
    ctx->pc = 0x357AB0u;
    SET_GPR_U32(ctx, 31, 0x357AB8u);
    ctx->pc = 0x357AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357AB0u;
    // 0x357ab4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0A80u, 0x357AB0u, 0x357AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357AB8u;
label_357ab8:
    // 0x357ab8: 0x2e02000e  sltiu       $v0, $s0, 0xE
    ctx->pc = 0x357ab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x357abc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x357ABCu;
    {
        const bool branch_taken_0x357abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357abc) {
            ctx->pc = 0x357AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357ABCu;
            // 0x357ac0: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_357aa0;
        }
    }
    ctx->pc = 0x357AC4u;
    // 0x357ac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x357ac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_357ac8:
    // 0x357ac8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x357ac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357acc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x357accu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357ad0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x357ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x357ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x357AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357AD4u;
        // 0x357ad8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357ADCu;
    // 0x357adc: 0x0  nop
    ctx->pc = 0x357adcu;
    // NOP
    ctx->pc = 0x357ae0u;
}
