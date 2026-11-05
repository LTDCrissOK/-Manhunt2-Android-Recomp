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

// Function: sub_003ABB70
// Address: 0x3abb70 - 0x3abc28
void sub_003ABB70_0x3abb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ABB70_0x3abb70");
#endif

    switch (ctx->pc) {
        case 0x3abb70u: goto label_3abb70;
        case 0x3abb74u: goto label_3abb74;
        case 0x3abb78u: goto label_3abb78;
        case 0x3abb7cu: goto label_3abb7c;
        case 0x3abb80u: goto label_3abb80;
        case 0x3abb84u: goto label_3abb84;
        case 0x3abb88u: goto label_3abb88;
        case 0x3abb8cu: goto label_3abb8c;
        case 0x3abb90u: goto label_3abb90;
        case 0x3abb94u: goto label_3abb94;
        case 0x3abb98u: goto label_3abb98;
        case 0x3abb9cu: goto label_3abb9c;
        case 0x3abba0u: goto label_3abba0;
        case 0x3abba4u: goto label_3abba4;
        case 0x3abba8u: goto label_3abba8;
        case 0x3abbacu: goto label_3abbac;
        case 0x3abbb0u: goto label_3abbb0;
        case 0x3abbb4u: goto label_3abbb4;
        case 0x3abbb8u: goto label_3abbb8;
        case 0x3abbbcu: goto label_3abbbc;
        case 0x3abbc0u: goto label_3abbc0;
        case 0x3abbc4u: goto label_3abbc4;
        case 0x3abbc8u: goto label_3abbc8;
        case 0x3abbccu: goto label_3abbcc;
        case 0x3abbd0u: goto label_3abbd0;
        case 0x3abbd4u: goto label_3abbd4;
        case 0x3abbd8u: goto label_3abbd8;
        case 0x3abbdcu: goto label_3abbdc;
        case 0x3abbe0u: goto label_3abbe0;
        case 0x3abbe4u: goto label_3abbe4;
        case 0x3abbe8u: goto label_3abbe8;
        case 0x3abbecu: goto label_3abbec;
        case 0x3abbf0u: goto label_3abbf0;
        case 0x3abbf4u: goto label_3abbf4;
        case 0x3abbf8u: goto label_3abbf8;
        case 0x3abbfcu: goto label_3abbfc;
        case 0x3abc00u: goto label_3abc00;
        case 0x3abc04u: goto label_3abc04;
        case 0x3abc08u: goto label_3abc08;
        case 0x3abc0cu: goto label_3abc0c;
        case 0x3abc10u: goto label_3abc10;
        case 0x3abc14u: goto label_3abc14;
        case 0x3abc18u: goto label_3abc18;
        case 0x3abc1cu: goto label_3abc1c;
        case 0x3abc20u: goto label_3abc20;
        case 0x3abc24u: goto label_3abc24;
        default: break;
    }

    ctx->pc = 0x3abb70u;

label_3abb70:
    // 0x3abb70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3abb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3abb74:
    // 0x3abb74: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3abb78:
    if (ctx->pc == 0x3ABB78u) {
        ctx->pc = 0x3ABB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB74u;
        // 0x3abb78: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB7Cu;
        goto label_3abb7c;
    }
    ctx->pc = 0x3ABB74u;
    {
        const bool branch_taken_0x3abb74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB74u;
        // 0x3abb78: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb74) {
            ctx->pc = 0x3ABB90u;
            goto label_3abb90;
        }
    }
    ctx->pc = 0x3ABB7Cu;
label_3abb7c:
    // 0x3abb7c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3abb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3abb80:
    // 0x3abb80: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3abb80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3abb84:
    // 0x3abb84: 0x2484f148  addiu       $a0, $a0, -0xEB8
    ctx->pc = 0x3abb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963528));
label_3abb88:
    // 0x3abb88: 0x10000008  b           . + 4 + (0x8 << 2)
label_3abb8c:
    if (ctx->pc == 0x3ABB8Cu) {
        ctx->pc = 0x3ABB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB88u;
        // 0x3abb8c: 0x24a5f098  addiu       $a1, $a1, -0xF68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB90u;
        goto label_3abb90;
    }
    ctx->pc = 0x3ABB88u;
    {
        const bool branch_taken_0x3abb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB88u;
        // 0x3abb8c: 0x24a5f098  addiu       $a1, $a1, -0xF68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb88) {
            ctx->pc = 0x3ABBACu;
            goto label_3abbac;
        }
    }
    ctx->pc = 0x3ABB90u;
label_3abb90:
    // 0x3abb90: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x3abb90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_3abb94:
    // 0x3abb94: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_3abb98:
    if (ctx->pc == 0x3ABB98u) {
        ctx->pc = 0x3ABB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB94u;
        // 0x3abb98: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB9Cu;
        goto label_3abb9c;
    }
    ctx->pc = 0x3ABB94u;
    {
        const bool branch_taken_0x3abb94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3abb94) {
            ctx->pc = 0x3ABB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABB94u;
            // 0x3abb98: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABBC0u;
            goto label_3abbc0;
        }
    }
    ctx->pc = 0x3ABB9Cu;
label_3abb9c:
    // 0x3abb9c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3abb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3abba0:
    // 0x3abba0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3abba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3abba4:
    // 0x3abba4: 0x2484f158  addiu       $a0, $a0, -0xEA8
    ctx->pc = 0x3abba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963544));
label_3abba8:
    // 0x3abba8: 0x24a5f0c8  addiu       $a1, $a1, -0xF38
    ctx->pc = 0x3abba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963400));
label_3abbac:
    // 0x3abbac: 0xc0ead68  jal         func_3AB5A0
label_3abbb0:
    if (ctx->pc == 0x3ABBB0u) {
        ctx->pc = 0x3ABBB4u;
        goto label_3abbb4;
    }
    ctx->pc = 0x3ABBACu;
    SET_GPR_U32(ctx, 31, 0x3ABBB4u);
    ctx->pc = 0x3AB5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB5A0u, 0x3ABBACu, 0x3ABBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABBB4u;
label_3abbb4:
    // 0x3abbb4: 0x10000018  b           . + 4 + (0x18 << 2)
label_3abbb8:
    if (ctx->pc == 0x3ABBB8u) {
        ctx->pc = 0x3ABBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABBB4u;
        // 0x3abbb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABBBCu;
        goto label_3abbbc;
    }
    ctx->pc = 0x3ABBB4u;
    {
        const bool branch_taken_0x3abbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABBB4u;
        // 0x3abbb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abbb4) {
            ctx->pc = 0x3ABC18u;
            goto label_3abc18;
        }
    }
    ctx->pc = 0x3ABBBCu;
label_3abbbc:
    // 0x3abbbc: 0x0  nop
    ctx->pc = 0x3abbbcu;
    // NOP
label_3abbc0:
    // 0x3abbc0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3abbc4:
    if (ctx->pc == 0x3ABBC4u) {
        ctx->pc = 0x3ABBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABBC0u;
        // 0x3abbc4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABBC8u;
        goto label_3abbc8;
    }
    ctx->pc = 0x3ABBC0u;
    {
        const bool branch_taken_0x3abbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABBC0u;
        // 0x3abbc4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abbc0) {
            ctx->pc = 0x3ABBE8u;
            goto label_3abbe8;
        }
    }
    ctx->pc = 0x3ABBC8u;
label_3abbc8:
    // 0x3abbc8: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x3abbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3abbcc:
    // 0x3abbcc: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_3abbd0:
    if (ctx->pc == 0x3ABBD0u) {
        ctx->pc = 0x3ABBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABBCCu;
        // 0x3abbd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABBD4u;
        goto label_3abbd4;
    }
    ctx->pc = 0x3ABBCCu;
    {
        const bool branch_taken_0x3abbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3abbcc) {
            ctx->pc = 0x3ABBD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABBCCu;
            // 0x3abbd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABC18u;
            goto label_3abc18;
        }
    }
    ctx->pc = 0x3ABBD4u;
label_3abbd4:
    // 0x3abbd4: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x3abbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_3abbd8:
    // 0x3abbd8: 0x40f809  jalr        $v0
label_3abbdc:
    if (ctx->pc == 0x3ABBDCu) {
        ctx->pc = 0x3ABBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABBD8u;
        // 0x3abbdc: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABBE0u;
        goto label_3abbe0;
    }
    ctx->pc = 0x3ABBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ABBE0u);
        ctx->pc = 0x3ABBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABBD8u;
        // 0x3abbdc: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ABBD8u, 0x3ABBE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ABBE0u;
label_3abbe0:
    // 0x3abbe0: 0x1000000d  b           . + 4 + (0xD << 2)
label_3abbe4:
    if (ctx->pc == 0x3ABBE4u) {
        ctx->pc = 0x3ABBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABBE0u;
        // 0x3abbe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABBE8u;
        goto label_3abbe8;
    }
    ctx->pc = 0x3ABBE0u;
    {
        const bool branch_taken_0x3abbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABBE0u;
        // 0x3abbe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abbe0) {
            ctx->pc = 0x3ABC18u;
            goto label_3abc18;
        }
    }
    ctx->pc = 0x3ABBE8u;
label_3abbe8:
    // 0x3abbe8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3abbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3abbec:
    // 0x3abbec: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x3abbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3abbf0:
    // 0x3abbf0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_3abbf4:
    if (ctx->pc == 0x3ABBF4u) {
        ctx->pc = 0x3ABBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABBF0u;
        // 0x3abbf4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABBF8u;
        goto label_3abbf8;
    }
    ctx->pc = 0x3ABBF0u;
    {
        const bool branch_taken_0x3abbf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABBF0u;
        // 0x3abbf4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abbf0) {
            ctx->pc = 0x3ABC14u;
            goto label_3abc14;
        }
    }
    ctx->pc = 0x3ABBF8u;
label_3abbf8:
    // 0x3abbf8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3abbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3abbfc:
    // 0x3abbfc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3abbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3abc00:
    // 0x3abc00: 0x0  nop
    ctx->pc = 0x3abc00u;
    // NOP
label_3abc04:
    // 0x3abc04: 0x0  nop
    ctx->pc = 0x3abc04u;
    // NOP
label_3abc08:
    // 0x3abc08: 0x0  nop
    ctx->pc = 0x3abc08u;
    // NOP
label_3abc0c:
    // 0x3abc0c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_3abc10:
    if (ctx->pc == 0x3ABC10u) {
        ctx->pc = 0x3ABC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC0Cu;
        // 0x3abc10: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABC14u;
        goto label_3abc14;
    }
    ctx->pc = 0x3ABC0Cu;
    {
        const bool branch_taken_0x3abc0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC0Cu;
        // 0x3abc10: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abc0c) {
            ctx->pc = 0x3ABBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abbf8;
        }
    }
    ctx->pc = 0x3ABC14u;
label_3abc14:
    // 0x3abc14: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3abc14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3abc18:
    // 0x3abc18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3abc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3abc1c:
    // 0x3abc1c: 0x3e00008  jr          $ra
label_3abc20:
    if (ctx->pc == 0x3ABC20u) {
        ctx->pc = 0x3ABC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC1Cu;
        // 0x3abc20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABC24u;
        goto label_3abc24;
    }
    ctx->pc = 0x3ABC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ABC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC1Cu;
        // 0x3abc20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ABC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ABC24u;
label_3abc24:
    // 0x3abc24: 0x0  nop
    ctx->pc = 0x3abc24u;
    // NOP
    ctx->pc = 0x3abc28u;
}
