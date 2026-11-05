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

// Function: sub_003DFF38
// Address: 0x3dff38 - 0x3e00a0
void sub_003DFF38_0x3dff38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DFF38_0x3dff38");
#endif

    switch (ctx->pc) {
        case 0x3dff38u: goto label_3dff38;
        case 0x3dff3cu: goto label_3dff3c;
        case 0x3dff40u: goto label_3dff40;
        case 0x3dff44u: goto label_3dff44;
        case 0x3dff48u: goto label_3dff48;
        case 0x3dff4cu: goto label_3dff4c;
        case 0x3dff50u: goto label_3dff50;
        case 0x3dff54u: goto label_3dff54;
        case 0x3dff58u: goto label_3dff58;
        case 0x3dff5cu: goto label_3dff5c;
        case 0x3dff60u: goto label_3dff60;
        case 0x3dff64u: goto label_3dff64;
        case 0x3dff68u: goto label_3dff68;
        case 0x3dff6cu: goto label_3dff6c;
        case 0x3dff70u: goto label_3dff70;
        case 0x3dff74u: goto label_3dff74;
        case 0x3dff78u: goto label_3dff78;
        case 0x3dff7cu: goto label_3dff7c;
        case 0x3dff80u: goto label_3dff80;
        case 0x3dff84u: goto label_3dff84;
        case 0x3dff88u: goto label_3dff88;
        case 0x3dff8cu: goto label_3dff8c;
        case 0x3dff90u: goto label_3dff90;
        case 0x3dff94u: goto label_3dff94;
        case 0x3dff98u: goto label_3dff98;
        case 0x3dff9cu: goto label_3dff9c;
        case 0x3dffa0u: goto label_3dffa0;
        case 0x3dffa4u: goto label_3dffa4;
        case 0x3dffa8u: goto label_3dffa8;
        case 0x3dffacu: goto label_3dffac;
        case 0x3dffb0u: goto label_3dffb0;
        case 0x3dffb4u: goto label_3dffb4;
        case 0x3dffb8u: goto label_3dffb8;
        case 0x3dffbcu: goto label_3dffbc;
        case 0x3dffc0u: goto label_3dffc0;
        case 0x3dffc4u: goto label_3dffc4;
        case 0x3dffc8u: goto label_3dffc8;
        case 0x3dffccu: goto label_3dffcc;
        case 0x3dffd0u: goto label_3dffd0;
        case 0x3dffd4u: goto label_3dffd4;
        case 0x3dffd8u: goto label_3dffd8;
        case 0x3dffdcu: goto label_3dffdc;
        case 0x3dffe0u: goto label_3dffe0;
        case 0x3dffe4u: goto label_3dffe4;
        case 0x3dffe8u: goto label_3dffe8;
        case 0x3dffecu: goto label_3dffec;
        case 0x3dfff0u: goto label_3dfff0;
        case 0x3dfff4u: goto label_3dfff4;
        case 0x3dfff8u: goto label_3dfff8;
        case 0x3dfffcu: goto label_3dfffc;
        case 0x3e0000u: goto label_3e0000;
        case 0x3e0004u: goto label_3e0004;
        case 0x3e0008u: goto label_3e0008;
        case 0x3e000cu: goto label_3e000c;
        case 0x3e0010u: goto label_3e0010;
        case 0x3e0014u: goto label_3e0014;
        case 0x3e0018u: goto label_3e0018;
        case 0x3e001cu: goto label_3e001c;
        case 0x3e0020u: goto label_3e0020;
        case 0x3e0024u: goto label_3e0024;
        case 0x3e0028u: goto label_3e0028;
        case 0x3e002cu: goto label_3e002c;
        case 0x3e0030u: goto label_3e0030;
        case 0x3e0034u: goto label_3e0034;
        case 0x3e0038u: goto label_3e0038;
        case 0x3e003cu: goto label_3e003c;
        case 0x3e0040u: goto label_3e0040;
        case 0x3e0044u: goto label_3e0044;
        case 0x3e0048u: goto label_3e0048;
        case 0x3e004cu: goto label_3e004c;
        case 0x3e0050u: goto label_3e0050;
        case 0x3e0054u: goto label_3e0054;
        case 0x3e0058u: goto label_3e0058;
        case 0x3e005cu: goto label_3e005c;
        case 0x3e0060u: goto label_3e0060;
        case 0x3e0064u: goto label_3e0064;
        case 0x3e0068u: goto label_3e0068;
        case 0x3e006cu: goto label_3e006c;
        case 0x3e0070u: goto label_3e0070;
        case 0x3e0074u: goto label_3e0074;
        case 0x3e0078u: goto label_3e0078;
        case 0x3e007cu: goto label_3e007c;
        case 0x3e0080u: goto label_3e0080;
        case 0x3e0084u: goto label_3e0084;
        case 0x3e0088u: goto label_3e0088;
        case 0x3e008cu: goto label_3e008c;
        case 0x3e0090u: goto label_3e0090;
        case 0x3e0094u: goto label_3e0094;
        case 0x3e0098u: goto label_3e0098;
        case 0x3e009cu: goto label_3e009c;
        default: break;
    }

    ctx->pc = 0x3dff38u;

label_3dff38:
    // 0x3dff38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3dff38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3dff3c:
    // 0x3dff3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3dff3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3dff40:
    // 0x3dff40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3dff40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3dff44:
    // 0x3dff44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dff44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dff48:
    // 0x3dff48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dff48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3dff4c:
    // 0x3dff4c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3dff4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dff50:
    // 0x3dff50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3dff50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_3dff54:
    // 0x3dff54: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3dff54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_3dff58:
    // 0x3dff58: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3dff58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_3dff5c:
    // 0x3dff5c: 0x8e222040  lw          $v0, 0x2040($s1)
    ctx->pc = 0x3dff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8256)));
label_3dff60:
    // 0x3dff60: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_3dff64:
    if (ctx->pc == 0x3DFF64u) {
        ctx->pc = 0x3DFF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF60u;
        // 0x3dff64: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFF68u;
        goto label_3dff68;
    }
    ctx->pc = 0x3DFF60u;
    {
        const bool branch_taken_0x3dff60 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3DFF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF60u;
        // 0x3dff64: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dff60) {
            ctx->pc = 0x3DFF70u;
            goto label_3dff70;
        }
    }
    ctx->pc = 0x3DFF68u;
label_3dff68:
    // 0x3dff68: 0x10000045  b           . + 4 + (0x45 << 2)
label_3dff6c:
    if (ctx->pc == 0x3DFF6Cu) {
        ctx->pc = 0x3DFF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF68u;
        // 0x3dff6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFF70u;
        goto label_3dff70;
    }
    ctx->pc = 0x3DFF68u;
    {
        const bool branch_taken_0x3dff68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF68u;
        // 0x3dff6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dff68) {
            ctx->pc = 0x3E0080u;
            goto label_3e0080;
        }
    }
    ctx->pc = 0x3DFF70u;
label_3dff70:
    // 0x3dff70: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3dff70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dff74:
    // 0x3dff74: 0x10000037  b           . + 4 + (0x37 << 2)
label_3dff78:
    if (ctx->pc == 0x3DFF78u) {
        ctx->pc = 0x3DFF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF74u;
        // 0x3dff78: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFF7Cu;
        goto label_3dff7c;
    }
    ctx->pc = 0x3DFF74u;
    {
        const bool branch_taken_0x3dff74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF74u;
        // 0x3dff78: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dff74) {
            ctx->pc = 0x3E0054u;
            goto label_3e0054;
        }
    }
    ctx->pc = 0x3DFF7Cu;
label_3dff7c:
    // 0x3dff7c: 0x0  nop
    ctx->pc = 0x3dff7cu;
    // NOP
label_3dff80:
    // 0x3dff80: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x3dff80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_3dff84:
    // 0x3dff84: 0x8e242040  lw          $a0, 0x2040($s1)
    ctx->pc = 0x3dff84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8256)));
label_3dff88:
    // 0x3dff88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3dff88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dff8c:
    // 0x3dff8c: 0xc0f3974  jal         func_3CE5D0
label_3dff90:
    if (ctx->pc == 0x3DFF90u) {
        ctx->pc = 0x3DFF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF8Cu;
        // 0x3dff90: 0x8e252048  lw          $a1, 0x2048($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFF94u;
        goto label_3dff94;
    }
    ctx->pc = 0x3DFF8Cu;
    SET_GPR_U32(ctx, 31, 0x3DFF94u);
    ctx->pc = 0x3DFF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFF8Cu;
    // 0x3dff90: 0x8e252048  lw          $a1, 0x2048($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE5D0u, 0x3DFF8Cu, 0x3DFF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFF94u;
label_3dff94:
    // 0x3dff94: 0x0  nop
    ctx->pc = 0x3dff94u;
    // NOP
label_3dff98:
    // 0x3dff98: 0x440fffb  bltz        $v0, . + 4 + (-0x5 << 2)
label_3dff9c:
    if (ctx->pc == 0x3DFF9Cu) {
        ctx->pc = 0x3DFF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF98u;
        // 0x3dff9c: 0x8e242040  lw          $a0, 0x2040($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFFA0u;
        goto label_3dffa0;
    }
    ctx->pc = 0x3DFF98u;
    {
        const bool branch_taken_0x3dff98 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3DFF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF98u;
        // 0x3dff9c: 0x8e242040  lw          $a0, 0x2040($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dff98) {
            ctx->pc = 0x3DFF88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dff88;
        }
    }
    ctx->pc = 0x3DFFA0u;
label_3dffa0:
    // 0x3dffa0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3dffa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dffa4:
    // 0x3dffa4: 0xc0f3a04  jal         func_3CE810
label_3dffa8:
    if (ctx->pc == 0x3DFFA8u) {
        ctx->pc = 0x3DFFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFFA4u;
        // 0x3dffa8: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFFACu;
        goto label_3dffac;
    }
    ctx->pc = 0x3DFFA4u;
    SET_GPR_U32(ctx, 31, 0x3DFFACu);
    ctx->pc = 0x3DFFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFFA4u;
    // 0x3dffa8: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE810u, 0x3DFFA4u, 0x3DFFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFFACu;
label_3dffac:
    // 0x3dffac: 0x0  nop
    ctx->pc = 0x3dffacu;
    // NOP
label_3dffb0:
    // 0x3dffb0: 0x442fffb  bltzl       $v0, . + 4 + (-0x5 << 2)
label_3dffb4:
    if (ctx->pc == 0x3DFFB4u) {
        ctx->pc = 0x3DFFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFFB0u;
        // 0x3dffb4: 0x8e242040  lw          $a0, 0x2040($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFFB8u;
        goto label_3dffb8;
    }
    ctx->pc = 0x3DFFB0u;
    {
        const bool branch_taken_0x3dffb0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3dffb0) {
            ctx->pc = 0x3DFFB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DFFB0u;
            // 0x3dffb4: 0x8e242040  lw          $a0, 0x2040($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DFFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dffa0;
        }
    }
    ctx->pc = 0x3DFFB8u;
label_3dffb8:
    // 0x3dffb8: 0xae222050  sw          $v0, 0x2050($s1)
    ctx->pc = 0x3dffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8272), GPR_U32(ctx, 2));
label_3dffbc:
    // 0x3dffbc: 0xae30204c  sw          $s0, 0x204C($s1)
    ctx->pc = 0x3dffbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8268), GPR_U32(ctx, 16));
label_3dffc0:
    // 0x3dffc0: 0x8e222050  lw          $v0, 0x2050($s1)
    ctx->pc = 0x3dffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8272)));
label_3dffc4:
    // 0x3dffc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3dffc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dffc8:
    // 0x3dffc8: 0x52182b  sltu        $v1, $v0, $s2
    ctx->pc = 0x3dffc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_3dffcc:
    // 0x3dffcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3dffccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dffd0:
    // 0x3dffd0: 0x243800a  movz        $s0, $s2, $v1
    ctx->pc = 0x3dffd0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_3dffd4:
    // 0x3dffd4: 0x56040010  bnel        $s0, $a0, . + 4 + (0x10 << 2)
label_3dffd8:
    if (ctx->pc == 0x3DFFD8u) {
        ctx->pc = 0x3DFFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFFD4u;
        // 0x3dffd8: 0x8e25204c  lw          $a1, 0x204C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFFDCu;
        goto label_3dffdc;
    }
    ctx->pc = 0x3DFFD4u;
    {
        const bool branch_taken_0x3dffd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x3dffd4) {
            ctx->pc = 0x3DFFD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DFFD4u;
            // 0x3dffd8: 0x8e25204c  lw          $a1, 0x204C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0018u;
            goto label_3e0018;
        }
    }
    ctx->pc = 0x3DFFDCu;
label_3dffdc:
    // 0x3dffdc: 0x8e22204c  lw          $v0, 0x204C($s1)
    ctx->pc = 0x3dffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8268)));
label_3dffe0:
    // 0x3dffe0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3dffe0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3dffe4:
    // 0x3dffe4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3dffe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3dffe8:
    // 0x3dffe8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3dffe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3dffec:
    // 0x3dffec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3dffecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3dfff0:
    // 0x3dfff0: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x3dfff0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
label_3dfff4:
    // 0x3dfff4: 0xae22204c  sw          $v0, 0x204C($s1)
    ctx->pc = 0x3dfff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8268), GPR_U32(ctx, 2));
label_3dfff8:
    // 0x3dfff8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3dfff8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3dfffc:
    // 0x3dfffc: 0x8e222048  lw          $v0, 0x2048($s1)
    ctx->pc = 0x3dfffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8264)));
label_3e0000:
    // 0x3e0000: 0x8e232050  lw          $v1, 0x2050($s1)
    ctx->pc = 0x3e0000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8272)));
label_3e0004:
    // 0x3e0004: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e0004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e0008:
    // 0x3e0008: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e0008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3e000c:
    // 0x3e000c: 0xae222048  sw          $v0, 0x2048($s1)
    ctx->pc = 0x3e000cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8264), GPR_U32(ctx, 2));
label_3e0010:
    // 0x3e0010: 0x10000010  b           . + 4 + (0x10 << 2)
label_3e0014:
    if (ctx->pc == 0x3E0014u) {
        ctx->pc = 0x3E0014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0010u;
        // 0x3e0014: 0xae232050  sw          $v1, 0x2050($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0018u;
        goto label_3e0018;
    }
    ctx->pc = 0x3E0010u;
    {
        const bool branch_taken_0x3e0010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0010u;
        // 0x3e0014: 0xae232050  sw          $v1, 0x2050($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0010) {
            ctx->pc = 0x3E0054u;
            goto label_3e0054;
        }
    }
    ctx->pc = 0x3E0018u;
label_3e0018:
    // 0x3e0018: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e0018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e001c:
    // 0x3e001c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3e001cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e0020:
    // 0x3e0020: 0xc0efa49  jal         func_3BE924
label_3e0024:
    if (ctx->pc == 0x3E0024u) {
        ctx->pc = 0x3E0024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0020u;
        // 0x3e0024: 0x290a021  addu        $s4, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0028u;
        goto label_3e0028;
    }
    ctx->pc = 0x3E0020u;
    SET_GPR_U32(ctx, 31, 0x3E0028u);
    ctx->pc = 0x3E0024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0020u;
    // 0x3e0024: 0x290a021  addu        $s4, $s4, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3E0020u, 0x3E0028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0028u;
label_3e0028:
    // 0x3e0028: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x3e0028u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_3e002c:
    // 0x3e002c: 0x8e222048  lw          $v0, 0x2048($s1)
    ctx->pc = 0x3e002cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8264)));
label_3e0030:
    // 0x3e0030: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x3e0030u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_3e0034:
    // 0x3e0034: 0x8e23204c  lw          $v1, 0x204C($s1)
    ctx->pc = 0x3e0034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8268)));
label_3e0038:
    // 0x3e0038: 0x8e242050  lw          $a0, 0x2050($s1)
    ctx->pc = 0x3e0038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8272)));
label_3e003c:
    // 0x3e003c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3e003cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3e0040:
    // 0x3e0040: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3e0040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3e0044:
    // 0x3e0044: 0xae222048  sw          $v0, 0x2048($s1)
    ctx->pc = 0x3e0044u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8264), GPR_U32(ctx, 2));
label_3e0048:
    // 0x3e0048: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x3e0048u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_3e004c:
    // 0x3e004c: 0xae23204c  sw          $v1, 0x204C($s1)
    ctx->pc = 0x3e004cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8268), GPR_U32(ctx, 3));
label_3e0050:
    // 0x3e0050: 0xae242050  sw          $a0, 0x2050($s1)
    ctx->pc = 0x3e0050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8272), GPR_U32(ctx, 4));
label_3e0054:
    // 0x3e0054: 0x1a40000a  blez        $s2, . + 4 + (0xA << 2)
label_3e0058:
    if (ctx->pc == 0x3E0058u) {
        ctx->pc = 0x3E0058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0054u;
        // 0x3e0058: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E005Cu;
        goto label_3e005c;
    }
    ctx->pc = 0x3E0054u;
    {
        const bool branch_taken_0x3e0054 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x3E0058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0054u;
        // 0x3e0058: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0054) {
            ctx->pc = 0x3E0080u;
            goto label_3e0080;
        }
    }
    ctx->pc = 0x3E005Cu;
label_3e005c:
    // 0x3e005c: 0x8e222050  lw          $v0, 0x2050($s1)
    ctx->pc = 0x3e005cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8272)));
label_3e0060:
    // 0x3e0060: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_3e0064:
    if (ctx->pc == 0x3E0064u) {
        ctx->pc = 0x3E0064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0060u;
        // 0x3e0064: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0068u;
        goto label_3e0068;
    }
    ctx->pc = 0x3E0060u;
    {
        const bool branch_taken_0x3e0060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0060u;
        // 0x3e0064: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0060) {
            ctx->pc = 0x3DFFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dffc8;
        }
    }
    ctx->pc = 0x3E0068u;
label_3e0068:
    // 0x3e0068: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e0068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e006c:
    // 0x3e006c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3e006cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3e0070:
    // 0x3e0070: 0x40f809  jalr        $v0
label_3e0074:
    if (ctx->pc == 0x3E0074u) {
        ctx->pc = 0x3E0074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0070u;
        // 0x3e0074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0078u;
        goto label_3e0078;
    }
    ctx->pc = 0x3E0070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E0078u);
        ctx->pc = 0x3E0074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0070u;
        // 0x3e0074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0070u, 0x3E0078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E0078u;
label_3e0078:
    // 0x3e0078: 0x1040ffc1  beqz        $v0, . + 4 + (-0x3F << 2)
label_3e007c:
    if (ctx->pc == 0x3E007Cu) {
        ctx->pc = 0x3E007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0078u;
        // 0x3e007c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0080u;
        goto label_3e0080;
    }
    ctx->pc = 0x3E0078u;
    {
        const bool branch_taken_0x3e0078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0078u;
        // 0x3e007c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0078) {
            ctx->pc = 0x3DFF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dff80;
        }
    }
    ctx->pc = 0x3E0080u;
label_3e0080:
    // 0x3e0080: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e0080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e0084:
    // 0x3e0084: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e0084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3e0088:
    // 0x3e0088: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e0088u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3e008c:
    // 0x3e008c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3e008cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3e0090:
    // 0x3e0090: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3e0090u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3e0094:
    // 0x3e0094: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3e0094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3e0098:
    // 0x3e0098: 0x3e00008  jr          $ra
label_3e009c:
    if (ctx->pc == 0x3E009Cu) {
        ctx->pc = 0x3E009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0098u;
        // 0x3e009c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E00A0u;
        goto label_fallthrough_0x3e0098;
    }
    ctx->pc = 0x3E0098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0098u;
        // 0x3e009c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e0098:
    ctx->pc = 0x3E00A0u;
}
