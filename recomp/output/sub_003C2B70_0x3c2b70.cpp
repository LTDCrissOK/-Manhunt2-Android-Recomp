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

// Function: sub_003C2B70
// Address: 0x3c2b70 - 0x3c2bf0
void sub_003C2B70_0x3c2b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2B70_0x3c2b70");
#endif

    switch (ctx->pc) {
        case 0x3c2ba0u: goto label_3c2ba0;
        case 0x3c2bbcu: goto label_3c2bbc;
        default: break;
    }

    ctx->pc = 0x3c2b70u;

    // 0x3c2b70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c2b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3c2b74: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c2b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3c2b78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c2b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c2b7c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3c2b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3c2b80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c2b80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c2b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c2b88: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x3c2b88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c2b8c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3C2B8Cu;
    {
        const bool branch_taken_0x3c2b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2B8Cu;
        // 0x3c2b90: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2b8c) {
            ctx->pc = 0x3C2BD0u;
            goto label_3c2bd0;
        }
    }
    ctx->pc = 0x3C2B94u;
    // 0x3c2b94: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3c2b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3c2b98: 0x24520c11  addiu       $s2, $v0, 0xC11
    ctx->pc = 0x3c2b98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 3089));
    // 0x3c2b9c: 0x82040000  lb          $a0, 0x0($s0)
    ctx->pc = 0x3c2b9cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_3c2ba0:
    // 0x3c2ba0: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x3c2ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x3c2ba4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3c2ba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c2ba8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3c2ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3c2bac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C2BACu;
    {
        const bool branch_taken_0x3c2bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2bac) {
            ctx->pc = 0x3C2BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2BACu;
            // 0x3c2bb0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2BC4u;
            goto label_3c2bc4;
        }
    }
    ctx->pc = 0x3C2BB4u;
    // 0x3c2bb4: 0xc0f1668  jal         func_3C59A0
    ctx->pc = 0x3C2BB4u;
    SET_GPR_U32(ctx, 31, 0x3C2BBCu);
    ctx->pc = 0x3C59A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C59A0u, 0x3C2BB4u, 0x3C2BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2BBCu;
label_3c2bbc:
    // 0x3c2bbc: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3c2bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c2bc0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3c2bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3c2bc4:
    // 0x3c2bc4: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x3c2bc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3c2bc8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x3C2BC8u;
    {
        const bool branch_taken_0x3c2bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c2bc8) {
            ctx->pc = 0x3C2BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2BC8u;
            // 0x3c2bcc: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2ba0;
        }
    }
    ctx->pc = 0x3C2BD0u;
label_3c2bd0:
    // 0x3c2bd0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3c2bd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2bd4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3c2bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c2bd8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c2bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c2bdc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3c2bdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c2be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c2be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c2be4: 0x3e00008  jr          $ra
    ctx->pc = 0x3C2BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2BE4u;
        // 0x3c2be8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2BECu;
    // 0x3c2bec: 0x0  nop
    ctx->pc = 0x3c2becu;
    // NOP
    ctx->pc = 0x3c2bf0u;
}
