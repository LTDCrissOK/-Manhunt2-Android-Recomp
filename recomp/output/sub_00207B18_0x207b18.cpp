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

// Function: sub_00207B18
// Address: 0x207b18 - 0x207ba0
void sub_00207B18_0x207b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207B18_0x207b18");
#endif

    switch (ctx->pc) {
        case 0x207b18u: goto label_207b18;
        case 0x207b1cu: goto label_207b1c;
        case 0x207b20u: goto label_207b20;
        case 0x207b24u: goto label_207b24;
        case 0x207b28u: goto label_207b28;
        case 0x207b2cu: goto label_207b2c;
        case 0x207b30u: goto label_207b30;
        case 0x207b34u: goto label_207b34;
        case 0x207b38u: goto label_207b38;
        case 0x207b3cu: goto label_207b3c;
        case 0x207b40u: goto label_207b40;
        case 0x207b44u: goto label_207b44;
        case 0x207b48u: goto label_207b48;
        case 0x207b4cu: goto label_207b4c;
        case 0x207b50u: goto label_207b50;
        case 0x207b54u: goto label_207b54;
        case 0x207b58u: goto label_207b58;
        case 0x207b5cu: goto label_207b5c;
        case 0x207b60u: goto label_207b60;
        case 0x207b64u: goto label_207b64;
        case 0x207b68u: goto label_207b68;
        case 0x207b6cu: goto label_207b6c;
        case 0x207b70u: goto label_207b70;
        case 0x207b74u: goto label_207b74;
        case 0x207b78u: goto label_207b78;
        case 0x207b7cu: goto label_207b7c;
        case 0x207b80u: goto label_207b80;
        case 0x207b84u: goto label_207b84;
        case 0x207b88u: goto label_207b88;
        case 0x207b8cu: goto label_207b8c;
        case 0x207b90u: goto label_207b90;
        case 0x207b94u: goto label_207b94;
        case 0x207b98u: goto label_207b98;
        case 0x207b9cu: goto label_207b9c;
        default: break;
    }

    ctx->pc = 0x207b18u;

label_207b18:
    // 0x207b18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x207b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_207b1c:
    // 0x207b1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x207b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_207b20:
    // 0x207b20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x207b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_207b24:
    // 0x207b24: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x207b24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_207b28:
    // 0x207b28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x207b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_207b2c:
    // 0x207b2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x207b2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207b30:
    // 0x207b30: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x207b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_207b34:
    // 0x207b34: 0x24920018  addiu       $s2, $a0, 0x18
    ctx->pc = 0x207b34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_207b38:
    // 0x207b38: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x207b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_207b3c:
    // 0x207b3c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x207b3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_207b40:
    // 0x207b40: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_207b44:
    if (ctx->pc == 0x207B44u) {
        ctx->pc = 0x207B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B40u;
        // 0x207b44: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207B48u;
        goto label_207b48;
    }
    ctx->pc = 0x207B40u;
    {
        const bool branch_taken_0x207b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x207B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B40u;
        // 0x207b44: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b40) {
            ctx->pc = 0x207B78u;
            goto label_207b78;
        }
    }
    ctx->pc = 0x207B48u;
label_207b48:
    // 0x207b48: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x207b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207b4c:
    // 0x207b4c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x207b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_207b50:
    // 0x207b50: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x207b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_207b54:
    // 0x207b54: 0x40f809  jalr        $v0
label_207b58:
    if (ctx->pc == 0x207B58u) {
        ctx->pc = 0x207B5Cu;
        goto label_207b5c;
    }
    ctx->pc = 0x207B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207B5Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207B54u, 0x207B5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207B5Cu;
label_207b5c:
    // 0x207b5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_207b60:
    if (ctx->pc == 0x207B60u) {
        ctx->pc = 0x207B64u;
        goto label_207b64;
    }
    ctx->pc = 0x207B5Cu;
    {
        const bool branch_taken_0x207b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207b5c) {
            ctx->pc = 0x207B78u;
            goto label_207b78;
        }
    }
    ctx->pc = 0x207B64u;
label_207b64:
    // 0x207b64: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x207b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207b68:
    // 0x207b68: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x207b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_207b6c:
    // 0x207b6c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x207b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_207b70:
    // 0x207b70: 0x40f809  jalr        $v0
label_207b74:
    if (ctx->pc == 0x207B74u) {
        ctx->pc = 0x207B78u;
        goto label_207b78;
    }
    ctx->pc = 0x207B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207B78u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207B70u, 0x207B78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207B78u;
label_207b78:
    // 0x207b78: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x207b78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_207b7c:
    // 0x207b7c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_207b80:
    if (ctx->pc == 0x207B80u) {
        ctx->pc = 0x207B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B7Cu;
        // 0x207b80: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207B84u;
        goto label_207b84;
    }
    ctx->pc = 0x207B7Cu;
    {
        const bool branch_taken_0x207b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B7Cu;
        // 0x207b80: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b7c) {
            ctx->pc = 0x207B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207b38;
        }
    }
    ctx->pc = 0x207B84u;
label_207b84:
    // 0x207b84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207b84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_207b88:
    // 0x207b88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x207b88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_207b8c:
    // 0x207b8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x207b8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_207b90:
    // 0x207b90: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x207b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_207b94:
    // 0x207b94: 0x3e00008  jr          $ra
label_207b98:
    if (ctx->pc == 0x207B98u) {
        ctx->pc = 0x207B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B94u;
        // 0x207b98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207B9Cu;
        goto label_207b9c;
    }
    ctx->pc = 0x207B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B94u;
        // 0x207b98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207B9Cu;
label_207b9c:
    // 0x207b9c: 0x0  nop
    ctx->pc = 0x207b9cu;
    // NOP
    ctx->pc = 0x207ba0u;
}
