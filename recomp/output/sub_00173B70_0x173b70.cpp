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

// Function: sub_00173B70
// Address: 0x173b70 - 0x173be0
void sub_00173B70_0x173b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173B70_0x173b70");
#endif

    switch (ctx->pc) {
        case 0x173b70u: goto label_173b70;
        case 0x173b74u: goto label_173b74;
        case 0x173b78u: goto label_173b78;
        case 0x173b7cu: goto label_173b7c;
        case 0x173b80u: goto label_173b80;
        case 0x173b84u: goto label_173b84;
        case 0x173b88u: goto label_173b88;
        case 0x173b8cu: goto label_173b8c;
        case 0x173b90u: goto label_173b90;
        case 0x173b94u: goto label_173b94;
        case 0x173b98u: goto label_173b98;
        case 0x173b9cu: goto label_173b9c;
        case 0x173ba0u: goto label_173ba0;
        case 0x173ba4u: goto label_173ba4;
        case 0x173ba8u: goto label_173ba8;
        case 0x173bacu: goto label_173bac;
        case 0x173bb0u: goto label_173bb0;
        case 0x173bb4u: goto label_173bb4;
        case 0x173bb8u: goto label_173bb8;
        case 0x173bbcu: goto label_173bbc;
        case 0x173bc0u: goto label_173bc0;
        case 0x173bc4u: goto label_173bc4;
        case 0x173bc8u: goto label_173bc8;
        case 0x173bccu: goto label_173bcc;
        case 0x173bd0u: goto label_173bd0;
        case 0x173bd4u: goto label_173bd4;
        case 0x173bd8u: goto label_173bd8;
        case 0x173bdcu: goto label_173bdc;
        default: break;
    }

    ctx->pc = 0x173b70u;

label_173b70:
    // 0x173b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_173b74:
    // 0x173b74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x173b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_173b78:
    // 0x173b78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_173b7c:
    // 0x173b7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x173b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_173b80:
    // 0x173b80: 0xc04f9a4  jal         func_13E690
label_173b84:
    if (ctx->pc == 0x173B84u) {
        ctx->pc = 0x173B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173B80u;
        // 0x173b84: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173B88u;
        goto label_173b88;
    }
    ctx->pc = 0x173B80u;
    SET_GPR_U32(ctx, 31, 0x173B88u);
    ctx->pc = 0x173B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173B80u;
    // 0x173b84: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E690u, 0x173B80u, 0x173B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173B88u;
label_173b88:
    // 0x173b88: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x173b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_173b8c:
    // 0x173b8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x173b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173b90:
    // 0x173b90: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x173b90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
label_173b94:
    // 0x173b94: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x173b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_173b98:
    // 0x173b98: 0xc04f8fc  jal         func_13E3F0
label_173b9c:
    if (ctx->pc == 0x173B9Cu) {
        ctx->pc = 0x173B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173B98u;
        // 0x173b9c: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173BA0u;
        goto label_173ba0;
    }
    ctx->pc = 0x173B98u;
    SET_GPR_U32(ctx, 31, 0x173BA0u);
    ctx->pc = 0x173B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173B98u;
    // 0x173b9c: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x173B98u, 0x173BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173BA0u;
label_173ba0:
    // 0x173ba0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x173ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173ba4:
    // 0x173ba4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x173ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_173ba8:
    // 0x173ba8: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x173ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_173bac:
    // 0x173bac: 0xc046330  jal         func_118CC0
label_173bb0:
    if (ctx->pc == 0x173BB0u) {
        ctx->pc = 0x173BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173BACu;
        // 0x173bb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173BB4u;
        goto label_173bb4;
    }
    ctx->pc = 0x173BACu;
    SET_GPR_U32(ctx, 31, 0x173BB4u);
    ctx->pc = 0x173BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173BACu;
    // 0x173bb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118CC0u, 0x173BACu, 0x173BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173BB4u;
label_173bb4:
    // 0x173bb4: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x173bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_173bb8:
    // 0x173bb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x173bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173bbc:
    // 0x173bbc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x173bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_173bc0:
    // 0x173bc0: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x173bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_173bc4:
    // 0x173bc4: 0x40f809  jalr        $v0
label_173bc8:
    if (ctx->pc == 0x173BC8u) {
        ctx->pc = 0x173BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173BC4u;
        // 0x173bc8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173BCCu;
        goto label_173bcc;
    }
    ctx->pc = 0x173BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173BCCu);
        ctx->pc = 0x173BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173BC4u;
        // 0x173bc8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173BC4u, 0x173BCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x173BCCu;
label_173bcc:
    // 0x173bcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_173bd0:
    // 0x173bd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x173bd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_173bd4:
    // 0x173bd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x173bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_173bd8:
    // 0x173bd8: 0x3e00008  jr          $ra
label_173bdc:
    if (ctx->pc == 0x173BDCu) {
        ctx->pc = 0x173BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173BD8u;
        // 0x173bdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173BE0u;
        goto label_fallthrough_0x173bd8;
    }
    ctx->pc = 0x173BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173BD8u;
        // 0x173bdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x173bd8:
    ctx->pc = 0x173BE0u;
}
