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

// Function: sub_00136C78
// Address: 0x136c78 - 0x136d68
void sub_00136C78_0x136c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136C78_0x136c78");
#endif

    switch (ctx->pc) {
        case 0x136cb0u: goto label_136cb0;
        case 0x136cc8u: goto label_136cc8;
        case 0x136cd4u: goto label_136cd4;
        case 0x136ce8u: goto label_136ce8;
        case 0x136cfcu: goto label_136cfc;
        case 0x136d04u: goto label_136d04;
        case 0x136d10u: goto label_136d10;
        case 0x136d1cu: goto label_136d1c;
        case 0x136d40u: goto label_136d40;
        default: break;
    }

    ctx->pc = 0x136c78u;

    // 0x136c78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x136c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x136c7c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x136c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x136c80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x136c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x136c84: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x136c84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136c88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x136c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x136c8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x136c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x136c90: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x136c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x136c94: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x136c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x136c98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x136c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x136c9c: 0x926204b0  lbu         $v0, 0x4B0($s3)
    ctx->pc = 0x136c9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1200)));
    // 0x136ca0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x136CA0u;
    {
        const bool branch_taken_0x136ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CA0u;
        // 0x136ca4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ca0) {
            ctx->pc = 0x136D44u;
            goto label_136d44;
        }
    }
    ctx->pc = 0x136CA8u;
    // 0x136ca8: 0xc04dabc  jal         func_136AF0
    ctx->pc = 0x136CA8u;
    SET_GPR_U32(ctx, 31, 0x136CB0u);
    ctx->pc = 0x136CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CA8u;
    // 0x136cac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136AF0u, 0x136CA8u, 0x136CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CB0u;
label_136cb0:
    // 0x136cb0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x136cb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136cb4: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x136cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x136cb8: 0x8e620464  lw          $v0, 0x464($s3)
    ctx->pc = 0x136cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1124)));
    // 0x136cbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x136cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136cc0: 0xc045612  jal         func_115848
    ctx->pc = 0x136CC0u;
    SET_GPR_U32(ctx, 31, 0x136CC8u);
    ctx->pc = 0x136CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CC0u;
    // 0x136cc4: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x136CC0u, 0x136CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CC8u;
label_136cc8:
    // 0x136cc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x136cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136ccc: 0xc045668  jal         func_1159A0
    ctx->pc = 0x136CCCu;
    SET_GPR_U32(ctx, 31, 0x136CD4u);
    ctx->pc = 0x136CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CCCu;
    // 0x136cd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x136CCCu, 0x136CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CD4u;
label_136cd4:
    // 0x136cd4: 0x927404b0  lbu         $s4, 0x4B0($s3)
    ctx->pc = 0x136cd4u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1200)));
    // 0x136cd8: 0x12800015  beqz        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x136CD8u;
    {
        const bool branch_taken_0x136cd8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x136CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CD8u;
        // 0x136cdc: 0x26750470  addiu       $s5, $s3, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 1136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136cd8) {
            ctx->pc = 0x136D30u;
            goto label_136d30;
        }
    }
    ctx->pc = 0x136CE0u;
    // 0x136ce0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x136ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x136ce4: 0x0  nop
    ctx->pc = 0x136ce4u;
    // NOP
label_136ce8:
    // 0x136ce8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x136ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136cec: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x136cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x136cf0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x136cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136cf4: 0xc04562a  jal         func_1158A8
    ctx->pc = 0x136CF4u;
    SET_GPR_U32(ctx, 31, 0x136CFCu);
    ctx->pc = 0x136CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CF4u;
    // 0x136cf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1158A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158A8u, 0x136CF4u, 0x136CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CFCu;
label_136cfc:
    // 0x136cfc: 0xc042442  jal         func_109108
    ctx->pc = 0x136CFCu;
    SET_GPR_U32(ctx, 31, 0x136D04u);
    ctx->pc = 0x136D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CFCu;
    // 0x136d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109108u, 0x136CFCu, 0x136D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136D04u;
label_136d04:
    // 0x136d04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x136d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136d08: 0xc045642  jal         func_115908
    ctx->pc = 0x136D08u;
    SET_GPR_U32(ctx, 31, 0x136D10u);
    ctx->pc = 0x136D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136D08u;
    // 0x136d0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115908u, 0x136D08u, 0x136D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136D10u;
label_136d10:
    // 0x136d10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x136d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136d14: 0xc04db16  jal         func_136C58
    ctx->pc = 0x136D14u;
    SET_GPR_U32(ctx, 31, 0x136D1Cu);
    ctx->pc = 0x136D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136D14u;
    // 0x136d18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136C58u, 0x136D14u, 0x136D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136D1Cu;
label_136d1c:
    // 0x136d1c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x136d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x136d20: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x136d20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x136d24: 0x234182b  sltu        $v1, $s1, $s4
    ctx->pc = 0x136d24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x136d28: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x136D28u;
    {
        const bool branch_taken_0x136d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x136D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D28u;
        // 0x136d2c: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136d28) {
            ctx->pc = 0x136CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136ce8;
        }
    }
    ctx->pc = 0x136D30u;
label_136d30:
    // 0x136d30: 0x8e640464  lw          $a0, 0x464($s3)
    ctx->pc = 0x136d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1124)));
    // 0x136d34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x136d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136d38: 0xc043f22  jal         func_10FC88
    ctx->pc = 0x136D38u;
    SET_GPR_U32(ctx, 31, 0x136D40u);
    ctx->pc = 0x136D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136D38u;
    // 0x136d3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x136D38u, 0x136D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136D40u;
label_136d40:
    // 0x136d40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x136d40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_136d44:
    // 0x136d44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x136d44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x136d48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x136d48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136d4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x136d4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x136d50: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x136d50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136d54: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x136d54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136d58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x136d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x136d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x136D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D5Cu;
        // 0x136d60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136D64u;
    // 0x136d64: 0x0  nop
    ctx->pc = 0x136d64u;
    // NOP
    ctx->pc = 0x136d68u;
}
