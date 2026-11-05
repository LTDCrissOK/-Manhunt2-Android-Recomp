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

// Function: sub_00173BE0
// Address: 0x173be0 - 0x173df8
void sub_00173BE0_0x173be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173BE0_0x173be0");
#endif

    switch (ctx->pc) {
        case 0x173be0u: goto label_173be0;
        case 0x173be4u: goto label_173be4;
        case 0x173be8u: goto label_173be8;
        case 0x173becu: goto label_173bec;
        case 0x173bf0u: goto label_173bf0;
        case 0x173bf4u: goto label_173bf4;
        case 0x173bf8u: goto label_173bf8;
        case 0x173bfcu: goto label_173bfc;
        case 0x173c00u: goto label_173c00;
        case 0x173c04u: goto label_173c04;
        case 0x173c08u: goto label_173c08;
        case 0x173c0cu: goto label_173c0c;
        case 0x173c10u: goto label_173c10;
        case 0x173c14u: goto label_173c14;
        case 0x173c18u: goto label_173c18;
        case 0x173c1cu: goto label_173c1c;
        case 0x173c20u: goto label_173c20;
        case 0x173c24u: goto label_173c24;
        case 0x173c28u: goto label_173c28;
        case 0x173c2cu: goto label_173c2c;
        case 0x173c30u: goto label_173c30;
        case 0x173c34u: goto label_173c34;
        case 0x173c38u: goto label_173c38;
        case 0x173c3cu: goto label_173c3c;
        case 0x173c40u: goto label_173c40;
        case 0x173c44u: goto label_173c44;
        case 0x173c48u: goto label_173c48;
        case 0x173c4cu: goto label_173c4c;
        case 0x173c50u: goto label_173c50;
        case 0x173c54u: goto label_173c54;
        case 0x173c58u: goto label_173c58;
        case 0x173c5cu: goto label_173c5c;
        case 0x173c60u: goto label_173c60;
        case 0x173c64u: goto label_173c64;
        case 0x173c68u: goto label_173c68;
        case 0x173c6cu: goto label_173c6c;
        case 0x173c70u: goto label_173c70;
        case 0x173c74u: goto label_173c74;
        case 0x173c78u: goto label_173c78;
        case 0x173c7cu: goto label_173c7c;
        case 0x173c80u: goto label_173c80;
        case 0x173c84u: goto label_173c84;
        case 0x173c88u: goto label_173c88;
        case 0x173c8cu: goto label_173c8c;
        case 0x173c90u: goto label_173c90;
        case 0x173c94u: goto label_173c94;
        case 0x173c98u: goto label_173c98;
        case 0x173c9cu: goto label_173c9c;
        case 0x173ca0u: goto label_173ca0;
        case 0x173ca4u: goto label_173ca4;
        case 0x173ca8u: goto label_173ca8;
        case 0x173cacu: goto label_173cac;
        case 0x173cb0u: goto label_173cb0;
        case 0x173cb4u: goto label_173cb4;
        case 0x173cb8u: goto label_173cb8;
        case 0x173cbcu: goto label_173cbc;
        case 0x173cc0u: goto label_173cc0;
        case 0x173cc4u: goto label_173cc4;
        case 0x173cc8u: goto label_173cc8;
        case 0x173cccu: goto label_173ccc;
        case 0x173cd0u: goto label_173cd0;
        case 0x173cd4u: goto label_173cd4;
        case 0x173cd8u: goto label_173cd8;
        case 0x173cdcu: goto label_173cdc;
        case 0x173ce0u: goto label_173ce0;
        case 0x173ce4u: goto label_173ce4;
        case 0x173ce8u: goto label_173ce8;
        case 0x173cecu: goto label_173cec;
        case 0x173cf0u: goto label_173cf0;
        case 0x173cf4u: goto label_173cf4;
        case 0x173cf8u: goto label_173cf8;
        case 0x173cfcu: goto label_173cfc;
        case 0x173d00u: goto label_173d00;
        case 0x173d04u: goto label_173d04;
        case 0x173d08u: goto label_173d08;
        case 0x173d0cu: goto label_173d0c;
        case 0x173d10u: goto label_173d10;
        case 0x173d14u: goto label_173d14;
        case 0x173d18u: goto label_173d18;
        case 0x173d1cu: goto label_173d1c;
        case 0x173d20u: goto label_173d20;
        case 0x173d24u: goto label_173d24;
        case 0x173d28u: goto label_173d28;
        case 0x173d2cu: goto label_173d2c;
        case 0x173d30u: goto label_173d30;
        case 0x173d34u: goto label_173d34;
        case 0x173d38u: goto label_173d38;
        case 0x173d3cu: goto label_173d3c;
        case 0x173d40u: goto label_173d40;
        case 0x173d44u: goto label_173d44;
        case 0x173d48u: goto label_173d48;
        case 0x173d4cu: goto label_173d4c;
        case 0x173d50u: goto label_173d50;
        case 0x173d54u: goto label_173d54;
        case 0x173d58u: goto label_173d58;
        case 0x173d5cu: goto label_173d5c;
        case 0x173d60u: goto label_173d60;
        case 0x173d64u: goto label_173d64;
        case 0x173d68u: goto label_173d68;
        case 0x173d6cu: goto label_173d6c;
        case 0x173d70u: goto label_173d70;
        case 0x173d74u: goto label_173d74;
        case 0x173d78u: goto label_173d78;
        case 0x173d7cu: goto label_173d7c;
        case 0x173d80u: goto label_173d80;
        case 0x173d84u: goto label_173d84;
        case 0x173d88u: goto label_173d88;
        case 0x173d8cu: goto label_173d8c;
        case 0x173d90u: goto label_173d90;
        case 0x173d94u: goto label_173d94;
        case 0x173d98u: goto label_173d98;
        case 0x173d9cu: goto label_173d9c;
        case 0x173da0u: goto label_173da0;
        case 0x173da4u: goto label_173da4;
        case 0x173da8u: goto label_173da8;
        case 0x173dacu: goto label_173dac;
        case 0x173db0u: goto label_173db0;
        case 0x173db4u: goto label_173db4;
        case 0x173db8u: goto label_173db8;
        case 0x173dbcu: goto label_173dbc;
        case 0x173dc0u: goto label_173dc0;
        case 0x173dc4u: goto label_173dc4;
        case 0x173dc8u: goto label_173dc8;
        case 0x173dccu: goto label_173dcc;
        case 0x173dd0u: goto label_173dd0;
        case 0x173dd4u: goto label_173dd4;
        case 0x173dd8u: goto label_173dd8;
        case 0x173ddcu: goto label_173ddc;
        case 0x173de0u: goto label_173de0;
        case 0x173de4u: goto label_173de4;
        case 0x173de8u: goto label_173de8;
        case 0x173decu: goto label_173dec;
        case 0x173df0u: goto label_173df0;
        case 0x173df4u: goto label_173df4;
        default: break;
    }

    ctx->pc = 0x173be0u;

label_173be0:
    // 0x173be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_173be4:
    // 0x173be4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x173be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_173be8:
    // 0x173be8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_173bec:
    // 0x173bec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x173becu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_173bf0:
    // 0x173bf0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x173bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_173bf4:
    // 0x173bf4: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x173bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_173bf8:
    // 0x173bf8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_173bfc:
    if (ctx->pc == 0x173BFCu) {
        ctx->pc = 0x173BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173BF8u;
        // 0x173bfc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173C00u;
        goto label_173c00;
    }
    ctx->pc = 0x173BF8u;
    {
        const bool branch_taken_0x173bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173BF8u;
        // 0x173bfc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173bf8) {
            ctx->pc = 0x173C0Cu;
            goto label_173c0c;
        }
    }
    ctx->pc = 0x173C00u;
label_173c00:
    // 0x173c00: 0x8e2300b4  lw          $v1, 0xB4($s1)
    ctx->pc = 0x173c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_173c04:
    // 0x173c04: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_173c08:
    if (ctx->pc == 0x173C08u) {
        ctx->pc = 0x173C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C04u;
        // 0x173c08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173C0Cu;
        goto label_173c0c;
    }
    ctx->pc = 0x173C04u;
    {
        const bool branch_taken_0x173c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x173C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C04u;
        // 0x173c08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c04) {
            ctx->pc = 0x173C78u;
            goto label_173c78;
        }
    }
    ctx->pc = 0x173C0Cu;
label_173c0c:
    // 0x173c0c: 0xc04f9a4  jal         func_13E690
label_173c10:
    if (ctx->pc == 0x173C10u) {
        ctx->pc = 0x173C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C0Cu;
        // 0x173c10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173C14u;
        goto label_173c14;
    }
    ctx->pc = 0x173C0Cu;
    SET_GPR_U32(ctx, 31, 0x173C14u);
    ctx->pc = 0x173C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173C0Cu;
    // 0x173c10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E690u, 0x173C0Cu, 0x173C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173C14u;
label_173c14:
    // 0x173c14: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x173c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_173c18:
    // 0x173c18: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x173c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_173c1c:
    // 0x173c1c: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x173c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
label_173c20:
    // 0x173c20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x173c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173c24:
    // 0x173c24: 0xc04f8fc  jal         func_13E3F0
label_173c28:
    if (ctx->pc == 0x173C28u) {
        ctx->pc = 0x173C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C24u;
        // 0x173c28: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173C2Cu;
        goto label_173c2c;
    }
    ctx->pc = 0x173C24u;
    SET_GPR_U32(ctx, 31, 0x173C2Cu);
    ctx->pc = 0x173C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173C24u;
    // 0x173c28: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x173C24u, 0x173C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173C2Cu;
label_173c2c:
    // 0x173c2c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x173c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_173c30:
    // 0x173c30: 0xc05a5fe  jal         func_1697F8
label_173c34:
    if (ctx->pc == 0x173C34u) {
        ctx->pc = 0x173C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C30u;
        // 0x173c34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173C38u;
        goto label_173c38;
    }
    ctx->pc = 0x173C30u;
    SET_GPR_U32(ctx, 31, 0x173C38u);
    ctx->pc = 0x173C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173C30u;
    // 0x173c34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x173C30u, 0x173C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173C38u;
label_173c38:
    // 0x173c38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x173c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173c3c:
    // 0x173c3c: 0xc0461e8  jal         func_1187A0
label_173c40:
    if (ctx->pc == 0x173C40u) {
        ctx->pc = 0x173C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C3Cu;
        // 0x173c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173C44u;
        goto label_173c44;
    }
    ctx->pc = 0x173C3Cu;
    SET_GPR_U32(ctx, 31, 0x173C44u);
    ctx->pc = 0x173C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173C3Cu;
    // 0x173c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x173C3Cu, 0x173C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173C44u;
label_173c44:
    // 0x173c44: 0x8e2502b4  lw          $a1, 0x2B4($s1)
    ctx->pc = 0x173c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 692)));
label_173c48:
    // 0x173c48: 0xc046104  jal         func_118410
label_173c4c:
    if (ctx->pc == 0x173C4Cu) {
        ctx->pc = 0x173C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C48u;
        // 0x173c4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173C50u;
        goto label_173c50;
    }
    ctx->pc = 0x173C48u;
    SET_GPR_U32(ctx, 31, 0x173C50u);
    ctx->pc = 0x173C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173C48u;
    // 0x173c4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x173C48u, 0x173C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173C50u;
label_173c50:
    // 0x173c50: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x173c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_173c54:
    // 0x173c54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x173c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173c58:
    // 0x173c58: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x173c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_173c5c:
    // 0x173c5c: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x173c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_173c60:
    // 0x173c60: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x173c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_173c64:
    // 0x173c64: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x173c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_173c68:
    // 0x173c68: 0x40f809  jalr        $v0
label_173c6c:
    if (ctx->pc == 0x173C6Cu) {
        ctx->pc = 0x173C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C68u;
        // 0x173c6c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173C70u;
        goto label_173c70;
    }
    ctx->pc = 0x173C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173C70u);
        ctx->pc = 0x173C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C68u;
        // 0x173c6c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173C68u, 0x173C70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x173C70u;
label_173c70:
    // 0x173c70: 0xae200250  sw          $zero, 0x250($s1)
    ctx->pc = 0x173c70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 0));
label_173c74:
    // 0x173c74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_173c78:
    // 0x173c78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x173c78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_173c7c:
    // 0x173c7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x173c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_173c80:
    // 0x173c80: 0x3e00008  jr          $ra
label_173c84:
    if (ctx->pc == 0x173C84u) {
        ctx->pc = 0x173C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C80u;
        // 0x173c84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173C88u;
        goto label_173c88;
    }
    ctx->pc = 0x173C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C80u;
        // 0x173c84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173C88u;
label_173c88:
    // 0x173c88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x173c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_173c8c:
    // 0x173c8c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x173c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_173c90:
    // 0x173c90: 0x8c8300b4  lw          $v1, 0xB4($a0)
    ctx->pc = 0x173c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
label_173c94:
    // 0x173c94: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x173c94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_173c98:
    // 0x173c98: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
label_173c9c:
    if (ctx->pc == 0x173C9Cu) {
        ctx->pc = 0x173C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C98u;
        // 0x173c9c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173CA0u;
        goto label_173ca0;
    }
    ctx->pc = 0x173C98u;
    {
        const bool branch_taken_0x173c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C98u;
        // 0x173c9c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c98) {
            ctx->pc = 0x173DD4u;
            goto label_173dd4;
        }
    }
    ctx->pc = 0x173CA0u;
label_173ca0:
    // 0x173ca0: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x173ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_173ca4:
    // 0x173ca4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x173ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_173ca8:
    // 0x173ca8: 0x2442f370  addiu       $v0, $v0, -0xC90
    ctx->pc = 0x173ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964080));
label_173cac:
    // 0x173cac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x173cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_173cb0:
    // 0x173cb0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x173cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_173cb4:
    // 0x173cb4: 0x800008  jr          $a0
label_173cb8:
    if (ctx->pc == 0x173CB8u) {
        ctx->pc = 0x173CBCu;
        goto label_173cbc;
    }
    ctx->pc = 0x173CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173CBCu: goto label_173cbc;
            case 0x173CD8u: goto label_173cd8;
            case 0x173CF4u: goto label_173cf4;
            case 0x173D18u: goto label_173d18;
            case 0x173D34u: goto label_173d34;
            case 0x173D60u: goto label_173d60;
            case 0x173D70u: goto label_173d70;
            case 0x173D94u: goto label_173d94;
            case 0x173DB0u: goto label_173db0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173CB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x173CBCu;
label_173cbc:
    // 0x173cbc: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x173cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_173cc0:
    // 0x173cc0: 0x2443f2e0  addiu       $v1, $v0, -0xD20
    ctx->pc = 0x173cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963936));
label_173cc4:
    // 0x173cc4: 0x8c44f2e0  lw          $a0, -0xD20($v0)
    ctx->pc = 0x173cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963936)));
label_173cc8:
    // 0x173cc8: 0x90650004  lbu         $a1, 0x4($v1)
    ctx->pc = 0x173cc8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_173ccc:
    // 0x173ccc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x173cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_173cd0:
    // 0x173cd0: 0x10000043  b           . + 4 + (0x43 << 2)
label_173cd4:
    if (ctx->pc == 0x173CD4u) {
        ctx->pc = 0x173CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173CD0u;
        // 0x173cd4: 0xa3a50004  sb          $a1, 0x4($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173CD8u;
        goto label_173cd8;
    }
    ctx->pc = 0x173CD0u;
    {
        const bool branch_taken_0x173cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173CD0u;
        // 0x173cd4: 0xa3a50004  sb          $a1, 0x4($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173cd0) {
            ctx->pc = 0x173DE0u;
            goto label_173de0;
        }
    }
    ctx->pc = 0x173CD8u;
label_173cd8:
    // 0x173cd8: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x173cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_173cdc:
    // 0x173cdc: 0x2443f2e8  addiu       $v1, $v0, -0xD18
    ctx->pc = 0x173cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963944));
label_173ce0:
    // 0x173ce0: 0xdc44f2e8  ld          $a0, -0xD18($v0)
    ctx->pc = 0x173ce0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294963944)));
label_173ce4:
    // 0x173ce4: 0x94650008  lhu         $a1, 0x8($v1)
    ctx->pc = 0x173ce4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_173ce8:
    // 0x173ce8: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x173ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
label_173cec:
    // 0x173cec: 0x1000003c  b           . + 4 + (0x3C << 2)
label_173cf0:
    if (ctx->pc == 0x173CF0u) {
        ctx->pc = 0x173CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173CECu;
        // 0x173cf0: 0xa7a50008  sh          $a1, 0x8($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173CF4u;
        goto label_173cf4;
    }
    ctx->pc = 0x173CECu;
    {
        const bool branch_taken_0x173cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173CECu;
        // 0x173cf0: 0xa7a50008  sh          $a1, 0x8($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173cec) {
            ctx->pc = 0x173DE0u;
            goto label_173de0;
        }
    }
    ctx->pc = 0x173CF4u;
label_173cf4:
    // 0x173cf4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x173cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_173cf8:
    // 0x173cf8: 0x2443f2f8  addiu       $v1, $v0, -0xD08
    ctx->pc = 0x173cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963960));
label_173cfc:
    // 0x173cfc: 0x8c44f2f8  lw          $a0, -0xD08($v0)
    ctx->pc = 0x173cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963960)));
label_173d00:
    // 0x173d00: 0x90650006  lbu         $a1, 0x6($v1)
    ctx->pc = 0x173d00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
label_173d04:
    // 0x173d04: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x173d04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_173d08:
    // 0x173d08: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x173d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_173d0c:
    // 0x173d0c: 0xa7a20004  sh          $v0, 0x4($sp)
    ctx->pc = 0x173d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 2));
label_173d10:
    // 0x173d10: 0x10000033  b           . + 4 + (0x33 << 2)
label_173d14:
    if (ctx->pc == 0x173D14u) {
        ctx->pc = 0x173D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D10u;
        // 0x173d14: 0xa3a50006  sb          $a1, 0x6($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173D18u;
        goto label_173d18;
    }
    ctx->pc = 0x173D10u;
    {
        const bool branch_taken_0x173d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D10u;
        // 0x173d14: 0xa3a50006  sb          $a1, 0x6($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d10) {
            ctx->pc = 0x173DE0u;
            goto label_173de0;
        }
    }
    ctx->pc = 0x173D18u;
label_173d18:
    // 0x173d18: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x173d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_173d1c:
    // 0x173d1c: 0x2443f300  addiu       $v1, $v0, -0xD00
    ctx->pc = 0x173d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963968));
label_173d20:
    // 0x173d20: 0xdc44f300  ld          $a0, -0xD00($v0)
    ctx->pc = 0x173d20u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294963968)));
label_173d24:
    // 0x173d24: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x173d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_173d28:
    // 0x173d28: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x173d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
label_173d2c:
    // 0x173d2c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_173d30:
    if (ctx->pc == 0x173D30u) {
        ctx->pc = 0x173D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D2Cu;
        // 0x173d30: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173D34u;
        goto label_173d34;
    }
    ctx->pc = 0x173D2Cu;
    {
        const bool branch_taken_0x173d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D2Cu;
        // 0x173d30: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d2c) {
            ctx->pc = 0x173DE0u;
            goto label_173de0;
        }
    }
    ctx->pc = 0x173D34u;
label_173d34:
    // 0x173d34: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x173d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
label_173d38:
    // 0x173d38: 0x2462f310  addiu       $v0, $v1, -0xCF0
    ctx->pc = 0x173d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963984));
label_173d3c:
    // 0x173d3c: 0xdc65f310  ld          $a1, -0xCF0($v1)
    ctx->pc = 0x173d3cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 4294963984)));
label_173d40:
    // 0x173d40: 0x9046000e  lbu         $a2, 0xE($v0)
    ctx->pc = 0x173d40u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 14)));
label_173d44:
    // 0x173d44: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x173d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_173d48:
    // 0x173d48: 0x9444000c  lhu         $a0, 0xC($v0)
    ctx->pc = 0x173d48u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_173d4c:
    // 0x173d4c: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x173d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
label_173d50:
    // 0x173d50: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x173d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_173d54:
    // 0x173d54: 0xa7a4000c  sh          $a0, 0xC($sp)
    ctx->pc = 0x173d54u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 4));
label_173d58:
    // 0x173d58: 0x10000021  b           . + 4 + (0x21 << 2)
label_173d5c:
    if (ctx->pc == 0x173D5Cu) {
        ctx->pc = 0x173D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D58u;
        // 0x173d5c: 0xa3a6000e  sb          $a2, 0xE($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 14), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173D60u;
        goto label_173d60;
    }
    ctx->pc = 0x173D58u;
    {
        const bool branch_taken_0x173d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D58u;
        // 0x173d5c: 0xa3a6000e  sb          $a2, 0xE($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 14), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d58) {
            ctx->pc = 0x173DE0u;
            goto label_173de0;
        }
    }
    ctx->pc = 0x173D60u;
label_173d60:
    // 0x173d60: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x173d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_173d64:
    // 0x173d64: 0x2443f320  addiu       $v1, $v0, -0xCE0
    ctx->pc = 0x173d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964000));
label_173d68:
    // 0x173d68: 0x10000004  b           . + 4 + (0x4 << 2)
label_173d6c:
    if (ctx->pc == 0x173D6Cu) {
        ctx->pc = 0x173D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D68u;
        // 0x173d6c: 0xdc44f320  ld          $a0, -0xCE0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294964000)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173D70u;
        goto label_173d70;
    }
    ctx->pc = 0x173D68u;
    {
        const bool branch_taken_0x173d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D68u;
        // 0x173d6c: 0xdc44f320  ld          $a0, -0xCE0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294964000)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d68) {
            ctx->pc = 0x173D7Cu;
            goto label_173d7c;
        }
    }
    ctx->pc = 0x173D70u;
label_173d70:
    // 0x173d70: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x173d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_173d74:
    // 0x173d74: 0x2443f330  addiu       $v1, $v0, -0xCD0
    ctx->pc = 0x173d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964016));
label_173d78:
    // 0x173d78: 0xdc44f330  ld          $a0, -0xCD0($v0)
    ctx->pc = 0x173d78u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294964016)));
label_173d7c:
    // 0x173d7c: 0x9065000a  lbu         $a1, 0xA($v1)
    ctx->pc = 0x173d7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
label_173d80:
    // 0x173d80: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x173d80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_173d84:
    // 0x173d84: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x173d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
label_173d88:
    // 0x173d88: 0xa7a20008  sh          $v0, 0x8($sp)
    ctx->pc = 0x173d88u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 2));
label_173d8c:
    // 0x173d8c: 0x10000014  b           . + 4 + (0x14 << 2)
label_173d90:
    if (ctx->pc == 0x173D90u) {
        ctx->pc = 0x173D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D8Cu;
        // 0x173d90: 0xa3a5000a  sb          $a1, 0xA($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 10), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173D94u;
        goto label_173d94;
    }
    ctx->pc = 0x173D8Cu;
    {
        const bool branch_taken_0x173d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D8Cu;
        // 0x173d90: 0xa3a5000a  sb          $a1, 0xA($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 10), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d8c) {
            ctx->pc = 0x173DE0u;
            goto label_173de0;
        }
    }
    ctx->pc = 0x173D94u;
label_173d94:
    // 0x173d94: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x173d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_173d98:
    // 0x173d98: 0x2443f340  addiu       $v1, $v0, -0xCC0
    ctx->pc = 0x173d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964032));
label_173d9c:
    // 0x173d9c: 0xdc44f340  ld          $a0, -0xCC0($v0)
    ctx->pc = 0x173d9cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294964032)));
label_173da0:
    // 0x173da0: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x173da0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_173da4:
    // 0x173da4: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x173da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
label_173da8:
    // 0x173da8: 0x1000000d  b           . + 4 + (0xD << 2)
label_173dac:
    if (ctx->pc == 0x173DACu) {
        ctx->pc = 0x173DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DA8u;
        // 0x173dac: 0xffa50008  sd          $a1, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173DB0u;
        goto label_173db0;
    }
    ctx->pc = 0x173DA8u;
    {
        const bool branch_taken_0x173da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DA8u;
        // 0x173dac: 0xffa50008  sd          $a1, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173da8) {
            ctx->pc = 0x173DE0u;
            goto label_173de0;
        }
    }
    ctx->pc = 0x173DB0u;
label_173db0:
    // 0x173db0: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x173db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_173db4:
    // 0x173db4: 0x2443f350  addiu       $v1, $v0, -0xCB0
    ctx->pc = 0x173db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964048));
label_173db8:
    // 0x173db8: 0xdc44f350  ld          $a0, -0xCB0($v0)
    ctx->pc = 0x173db8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294964048)));
label_173dbc:
    // 0x173dbc: 0x94650010  lhu         $a1, 0x10($v1)
    ctx->pc = 0x173dbcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_173dc0:
    // 0x173dc0: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x173dc0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_173dc4:
    // 0x173dc4: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x173dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
label_173dc8:
    // 0x173dc8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x173dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_173dcc:
    // 0x173dcc: 0x10000004  b           . + 4 + (0x4 << 2)
label_173dd0:
    if (ctx->pc == 0x173DD0u) {
        ctx->pc = 0x173DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DCCu;
        // 0x173dd0: 0xa7a50010  sh          $a1, 0x10($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173DD4u;
        goto label_173dd4;
    }
    ctx->pc = 0x173DCCu;
    {
        const bool branch_taken_0x173dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DCCu;
        // 0x173dd0: 0xa7a50010  sh          $a1, 0x10($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173dcc) {
            ctx->pc = 0x173DE0u;
            goto label_173de0;
        }
    }
    ctx->pc = 0x173DD4u;
label_173dd4:
    // 0x173dd4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x173dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_173dd8:
    // 0x173dd8: 0xdc43f368  ld          $v1, -0xC98($v0)
    ctx->pc = 0x173dd8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294964072)));
label_173ddc:
    // 0x173ddc: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x173ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_173de0:
    // 0x173de0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x173de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_173de4:
    // 0x173de4: 0xc0efbe8  jal         func_3BEFA0
label_173de8:
    if (ctx->pc == 0x173DE8u) {
        ctx->pc = 0x173DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DE4u;
        // 0x173de8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173DECu;
        goto label_173dec;
    }
    ctx->pc = 0x173DE4u;
    SET_GPR_U32(ctx, 31, 0x173DECu);
    ctx->pc = 0x173DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173DE4u;
    // 0x173de8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x173DE4u, 0x173DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173DECu;
label_173dec:
    // 0x173dec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x173decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_173df0:
    // 0x173df0: 0x3e00008  jr          $ra
label_173df4:
    if (ctx->pc == 0x173DF4u) {
        ctx->pc = 0x173DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DF0u;
        // 0x173df4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173DF8u;
        goto label_fallthrough_0x173df0;
    }
    ctx->pc = 0x173DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DF0u;
        // 0x173df4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x173df0:
    ctx->pc = 0x173DF8u;
}
