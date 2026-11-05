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

// Function: sub_002A4C70
// Address: 0x2a4c70 - 0x2a4ce8
void sub_002A4C70_0x2a4c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4C70_0x2a4c70");
#endif

    switch (ctx->pc) {
        case 0x2a4c70u: goto label_2a4c70;
        case 0x2a4c74u: goto label_2a4c74;
        case 0x2a4c78u: goto label_2a4c78;
        case 0x2a4c7cu: goto label_2a4c7c;
        case 0x2a4c80u: goto label_2a4c80;
        case 0x2a4c84u: goto label_2a4c84;
        case 0x2a4c88u: goto label_2a4c88;
        case 0x2a4c8cu: goto label_2a4c8c;
        case 0x2a4c90u: goto label_2a4c90;
        case 0x2a4c94u: goto label_2a4c94;
        case 0x2a4c98u: goto label_2a4c98;
        case 0x2a4c9cu: goto label_2a4c9c;
        case 0x2a4ca0u: goto label_2a4ca0;
        case 0x2a4ca4u: goto label_2a4ca4;
        case 0x2a4ca8u: goto label_2a4ca8;
        case 0x2a4cacu: goto label_2a4cac;
        case 0x2a4cb0u: goto label_2a4cb0;
        case 0x2a4cb4u: goto label_2a4cb4;
        case 0x2a4cb8u: goto label_2a4cb8;
        case 0x2a4cbcu: goto label_2a4cbc;
        case 0x2a4cc0u: goto label_2a4cc0;
        case 0x2a4cc4u: goto label_2a4cc4;
        case 0x2a4cc8u: goto label_2a4cc8;
        case 0x2a4cccu: goto label_2a4ccc;
        case 0x2a4cd0u: goto label_2a4cd0;
        case 0x2a4cd4u: goto label_2a4cd4;
        case 0x2a4cd8u: goto label_2a4cd8;
        case 0x2a4cdcu: goto label_2a4cdc;
        case 0x2a4ce0u: goto label_2a4ce0;
        case 0x2a4ce4u: goto label_2a4ce4;
        default: break;
    }

    ctx->pc = 0x2a4c70u;

label_2a4c70:
    // 0x2a4c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a4c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a4c74:
    // 0x2a4c74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a4c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2a4c78:
    // 0x2a4c78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a4c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2a4c7c:
    // 0x2a4c7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a4c7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a4c80:
    // 0x2a4c80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a4c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2a4c84:
    // 0x2a4c84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a4c84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a4c88:
    // 0x2a4c88: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2a4c8c:
    if (ctx->pc == 0x2A4C8Cu) {
        ctx->pc = 0x2A4C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4C88u;
        // 0x2a4c8c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4C90u;
        goto label_2a4c90;
    }
    ctx->pc = 0x2A4C88u;
    {
        const bool branch_taken_0x2a4c88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4C88u;
        // 0x2a4c8c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4c88) {
            ctx->pc = 0x2A4CBCu;
            goto label_2a4cbc;
        }
    }
    ctx->pc = 0x2A4C90u;
label_2a4c90:
    // 0x2a4c90: 0x26300a80  addiu       $s0, $s1, 0xA80
    ctx->pc = 0x2a4c90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2688));
label_2a4c94:
    // 0x2a4c94: 0x1230000a  beq         $s1, $s0, . + 4 + (0xA << 2)
label_2a4c98:
    if (ctx->pc == 0x2A4C98u) {
        ctx->pc = 0x2A4C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4C94u;
        // 0x2a4c98: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4C9Cu;
        goto label_2a4c9c;
    }
    ctx->pc = 0x2A4C94u;
    {
        const bool branch_taken_0x2a4c94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x2A4C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4C94u;
        // 0x2a4c98: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4c94) {
            ctx->pc = 0x2A4CC0u;
            goto label_2a4cc0;
        }
    }
    ctx->pc = 0x2A4C9Cu;
label_2a4c9c:
    // 0x2a4c9c: 0x2610fe40  addiu       $s0, $s0, -0x1C0
    ctx->pc = 0x2a4c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966848));
label_2a4ca0:
    // 0x2a4ca0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a4ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a4ca4:
    // 0x2a4ca4: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x2a4ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_2a4ca8:
    // 0x2a4ca8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2a4ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2a4cac:
    // 0x2a4cac: 0x40f809  jalr        $v0
label_2a4cb0:
    if (ctx->pc == 0x2A4CB0u) {
        ctx->pc = 0x2A4CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4CACu;
        // 0x2a4cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4CB4u;
        goto label_2a4cb4;
    }
    ctx->pc = 0x2A4CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A4CB4u);
        ctx->pc = 0x2A4CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4CACu;
        // 0x2a4cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4CACu, 0x2A4CB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A4CB4u;
label_2a4cb4:
    // 0x2a4cb4: 0x1630fffa  bne         $s1, $s0, . + 4 + (-0x6 << 2)
label_2a4cb8:
    if (ctx->pc == 0x2A4CB8u) {
        ctx->pc = 0x2A4CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4CB4u;
        // 0x2a4cb8: 0x2610fe40  addiu       $s0, $s0, -0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4CBCu;
        goto label_2a4cbc;
    }
    ctx->pc = 0x2A4CB4u;
    {
        const bool branch_taken_0x2a4cb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x2A4CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4CB4u;
        // 0x2a4cb8: 0x2610fe40  addiu       $s0, $s0, -0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4cb4) {
            ctx->pc = 0x2A4CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4ca0;
        }
    }
    ctx->pc = 0x2A4CBCu;
label_2a4cbc:
    // 0x2a4cbc: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x2a4cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_2a4cc0:
    // 0x2a4cc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2a4cc4:
    if (ctx->pc == 0x2A4CC4u) {
        ctx->pc = 0x2A4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4CC0u;
        // 0x2a4cc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4CC8u;
        goto label_2a4cc8;
    }
    ctx->pc = 0x2A4CC0u;
    {
        const bool branch_taken_0x2a4cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4CC0u;
        // 0x2a4cc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4cc0) {
            ctx->pc = 0x2A4CD4u;
            goto label_2a4cd4;
        }
    }
    ctx->pc = 0x2A4CC8u;
label_2a4cc8:
    // 0x2a4cc8: 0xc0f5222  jal         func_3D4888
label_2a4ccc:
    if (ctx->pc == 0x2A4CCCu) {
        ctx->pc = 0x2A4CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4CC8u;
        // 0x2a4ccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4CD0u;
        goto label_2a4cd0;
    }
    ctx->pc = 0x2A4CC8u;
    SET_GPR_U32(ctx, 31, 0x2A4CD0u);
    ctx->pc = 0x2A4CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4CC8u;
    // 0x2a4ccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2A4CC8u, 0x2A4CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4CD0u;
label_2a4cd0:
    // 0x2a4cd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a4cd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a4cd4:
    // 0x2a4cd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a4cd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2a4cd8:
    // 0x2a4cd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a4cd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a4cdc:
    // 0x2a4cdc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2a4cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2a4ce0:
    // 0x2a4ce0: 0x3e00008  jr          $ra
label_2a4ce4:
    if (ctx->pc == 0x2A4CE4u) {
        ctx->pc = 0x2A4CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4CE0u;
        // 0x2a4ce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4CE8u;
        goto label_fallthrough_0x2a4ce0;
    }
    ctx->pc = 0x2A4CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4CE0u;
        // 0x2a4ce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a4ce0:
    ctx->pc = 0x2A4CE8u;
}
