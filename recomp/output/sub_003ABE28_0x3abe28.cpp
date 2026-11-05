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

// Function: sub_003ABE28
// Address: 0x3abe28 - 0x3abf50
void sub_003ABE28_0x3abe28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ABE28_0x3abe28");
#endif

    switch (ctx->pc) {
        case 0x3abe28u: goto label_3abe28;
        case 0x3abe2cu: goto label_3abe2c;
        case 0x3abe30u: goto label_3abe30;
        case 0x3abe34u: goto label_3abe34;
        case 0x3abe38u: goto label_3abe38;
        case 0x3abe3cu: goto label_3abe3c;
        case 0x3abe40u: goto label_3abe40;
        case 0x3abe44u: goto label_3abe44;
        case 0x3abe48u: goto label_3abe48;
        case 0x3abe4cu: goto label_3abe4c;
        case 0x3abe50u: goto label_3abe50;
        case 0x3abe54u: goto label_3abe54;
        case 0x3abe58u: goto label_3abe58;
        case 0x3abe5cu: goto label_3abe5c;
        case 0x3abe60u: goto label_3abe60;
        case 0x3abe64u: goto label_3abe64;
        case 0x3abe68u: goto label_3abe68;
        case 0x3abe6cu: goto label_3abe6c;
        case 0x3abe70u: goto label_3abe70;
        case 0x3abe74u: goto label_3abe74;
        case 0x3abe78u: goto label_3abe78;
        case 0x3abe7cu: goto label_3abe7c;
        case 0x3abe80u: goto label_3abe80;
        case 0x3abe84u: goto label_3abe84;
        case 0x3abe88u: goto label_3abe88;
        case 0x3abe8cu: goto label_3abe8c;
        case 0x3abe90u: goto label_3abe90;
        case 0x3abe94u: goto label_3abe94;
        case 0x3abe98u: goto label_3abe98;
        case 0x3abe9cu: goto label_3abe9c;
        case 0x3abea0u: goto label_3abea0;
        case 0x3abea4u: goto label_3abea4;
        case 0x3abea8u: goto label_3abea8;
        case 0x3abeacu: goto label_3abeac;
        case 0x3abeb0u: goto label_3abeb0;
        case 0x3abeb4u: goto label_3abeb4;
        case 0x3abeb8u: goto label_3abeb8;
        case 0x3abebcu: goto label_3abebc;
        case 0x3abec0u: goto label_3abec0;
        case 0x3abec4u: goto label_3abec4;
        case 0x3abec8u: goto label_3abec8;
        case 0x3abeccu: goto label_3abecc;
        case 0x3abed0u: goto label_3abed0;
        case 0x3abed4u: goto label_3abed4;
        case 0x3abed8u: goto label_3abed8;
        case 0x3abedcu: goto label_3abedc;
        case 0x3abee0u: goto label_3abee0;
        case 0x3abee4u: goto label_3abee4;
        case 0x3abee8u: goto label_3abee8;
        case 0x3abeecu: goto label_3abeec;
        case 0x3abef0u: goto label_3abef0;
        case 0x3abef4u: goto label_3abef4;
        case 0x3abef8u: goto label_3abef8;
        case 0x3abefcu: goto label_3abefc;
        case 0x3abf00u: goto label_3abf00;
        case 0x3abf04u: goto label_3abf04;
        case 0x3abf08u: goto label_3abf08;
        case 0x3abf0cu: goto label_3abf0c;
        case 0x3abf10u: goto label_3abf10;
        case 0x3abf14u: goto label_3abf14;
        case 0x3abf18u: goto label_3abf18;
        case 0x3abf1cu: goto label_3abf1c;
        case 0x3abf20u: goto label_3abf20;
        case 0x3abf24u: goto label_3abf24;
        case 0x3abf28u: goto label_3abf28;
        case 0x3abf2cu: goto label_3abf2c;
        case 0x3abf30u: goto label_3abf30;
        case 0x3abf34u: goto label_3abf34;
        case 0x3abf38u: goto label_3abf38;
        case 0x3abf3cu: goto label_3abf3c;
        case 0x3abf40u: goto label_3abf40;
        case 0x3abf44u: goto label_3abf44;
        case 0x3abf48u: goto label_3abf48;
        case 0x3abf4cu: goto label_3abf4c;
        default: break;
    }

    ctx->pc = 0x3abe28u;

label_3abe28:
    // 0x3abe28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3abe28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3abe2c:
    // 0x3abe2c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_3abe30:
    if (ctx->pc == 0x3ABE30u) {
        ctx->pc = 0x3ABE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE2Cu;
        // 0x3abe30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE34u;
        goto label_3abe34;
    }
    ctx->pc = 0x3ABE2Cu;
    {
        const bool branch_taken_0x3abe2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE2Cu;
        // 0x3abe30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abe2c) {
            ctx->pc = 0x3ABE50u;
            goto label_3abe50;
        }
    }
    ctx->pc = 0x3ABE34u;
label_3abe34:
    // 0x3abe34: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3abe34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3abe38:
    // 0x3abe38: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3abe38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3abe3c:
    // 0x3abe3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3abe3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3abe40:
    // 0x3abe40: 0x2484f188  addiu       $a0, $a0, -0xE78
    ctx->pc = 0x3abe40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963592));
label_3abe44:
    // 0x3abe44: 0x24a5f098  addiu       $a1, $a1, -0xF68
    ctx->pc = 0x3abe44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963352));
label_3abe48:
    // 0x3abe48: 0x80ead68  j           func_3AB5A0
label_3abe4c:
    if (ctx->pc == 0x3ABE4Cu) {
        ctx->pc = 0x3ABE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE48u;
        // 0x3abe4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE50u;
        goto label_3abe50;
    }
    ctx->pc = 0x3ABE48u;
    ctx->pc = 0x3ABE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABE48u;
    // 0x3abe4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB5A0u;
    sub_003AB5A0_0x3ab5a0(rdram, ctx, runtime); return;
    ctx->pc = 0x3ABE50u;
label_3abe50:
    // 0x3abe50: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x3abe50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_3abe54:
    // 0x3abe54: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3abe58:
    if (ctx->pc == 0x3ABE58u) {
        ctx->pc = 0x3ABE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE54u;
        // 0x3abe58: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE5Cu;
        goto label_3abe5c;
    }
    ctx->pc = 0x3ABE54u;
    {
        const bool branch_taken_0x3abe54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE54u;
        // 0x3abe58: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abe54) {
            ctx->pc = 0x3ABE78u;
            goto label_3abe78;
        }
    }
    ctx->pc = 0x3ABE5Cu;
label_3abe5c:
    // 0x3abe5c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3abe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3abe60:
    // 0x3abe60: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3abe60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3abe64:
    // 0x3abe64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3abe64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3abe68:
    // 0x3abe68: 0x2484f198  addiu       $a0, $a0, -0xE68
    ctx->pc = 0x3abe68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963608));
label_3abe6c:
    // 0x3abe6c: 0x24a5f0c8  addiu       $a1, $a1, -0xF38
    ctx->pc = 0x3abe6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963400));
label_3abe70:
    // 0x3abe70: 0x80ead68  j           func_3AB5A0
label_3abe74:
    if (ctx->pc == 0x3ABE74u) {
        ctx->pc = 0x3ABE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE70u;
        // 0x3abe74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE78u;
        goto label_3abe78;
    }
    ctx->pc = 0x3ABE70u;
    ctx->pc = 0x3ABE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABE70u;
    // 0x3abe74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB5A0u;
    sub_003AB5A0_0x3ab5a0(rdram, ctx, runtime); return;
    ctx->pc = 0x3ABE78u;
label_3abe78:
    // 0x3abe78: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
label_3abe7c:
    if (ctx->pc == 0x3ABE7Cu) {
        ctx->pc = 0x3ABE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE78u;
        // 0x3abe7c: 0x8c820028  lw          $v0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE80u;
        goto label_3abe80;
    }
    ctx->pc = 0x3ABE78u;
    {
        const bool branch_taken_0x3abe78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3abe78) {
            ctx->pc = 0x3ABE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABE78u;
            // 0x3abe7c: 0x8c820028  lw          $v0, 0x28($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABF0Cu;
            goto label_3abf0c;
        }
    }
    ctx->pc = 0x3ABE80u;
label_3abe80:
    // 0x3abe80: 0x8cc90004  lw          $t1, 0x4($a2)
    ctx->pc = 0x3abe80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3abe84:
    // 0x3abe84: 0x19200030  blez        $t1, . + 4 + (0x30 << 2)
label_3abe88:
    if (ctx->pc == 0x3ABE88u) {
        ctx->pc = 0x3ABE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE84u;
        // 0x3abe88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE8Cu;
        goto label_3abe8c;
    }
    ctx->pc = 0x3ABE84u;
    {
        const bool branch_taken_0x3abe84 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3ABE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE84u;
        // 0x3abe88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abe84) {
            ctx->pc = 0x3ABF48u;
            goto label_3abf48;
        }
    }
    ctx->pc = 0x3ABE8Cu;
label_3abe8c:
    // 0x3abe8c: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x3abe8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3abe90:
    // 0x3abe90: 0x1100002d  beqz        $t0, . + 4 + (0x2D << 2)
label_3abe94:
    if (ctx->pc == 0x3ABE94u) {
        ctx->pc = 0x3ABE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE90u;
        // 0x3abe94: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE98u;
        goto label_3abe98;
    }
    ctx->pc = 0x3ABE90u;
    {
        const bool branch_taken_0x3abe90 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE90u;
        // 0x3abe94: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abe90) {
            ctx->pc = 0x3ABF48u;
            goto label_3abf48;
        }
    }
    ctx->pc = 0x3ABE98u;
label_3abe98:
    // 0x3abe98: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3abe98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3abe9c:
    // 0x3abe9c: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x3abe9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_3abea0:
    // 0x3abea0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3abea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3abea4:
    // 0x3abea4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3abea8:
    if (ctx->pc == 0x3ABEA8u) {
        ctx->pc = 0x3ABEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABEA4u;
        // 0x3abea8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABEACu;
        goto label_3abeac;
    }
    ctx->pc = 0x3ABEA4u;
    {
        const bool branch_taken_0x3abea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABEA4u;
        // 0x3abea8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abea4) {
            ctx->pc = 0x3ABEC8u;
            goto label_3abec8;
        }
    }
    ctx->pc = 0x3ABEACu;
label_3abeac:
    // 0x3abeac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3abeacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3abeb0:
    // 0x3abeb0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3abeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3abeb4:
    // 0x3abeb4: 0x0  nop
    ctx->pc = 0x3abeb4u;
    // NOP
label_3abeb8:
    // 0x3abeb8: 0x0  nop
    ctx->pc = 0x3abeb8u;
    // NOP
label_3abebc:
    // 0x3abebc: 0x0  nop
    ctx->pc = 0x3abebcu;
    // NOP
label_3abec0:
    // 0x3abec0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3abec4:
    if (ctx->pc == 0x3ABEC4u) {
        ctx->pc = 0x3ABEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABEC0u;
        // 0x3abec4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABEC8u;
        goto label_3abec8;
    }
    ctx->pc = 0x3ABEC0u;
    {
        const bool branch_taken_0x3abec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABEC0u;
        // 0x3abec4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abec0) {
            ctx->pc = 0x3ABEACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abeac;
        }
    }
    ctx->pc = 0x3ABEC8u;
label_3abec8:
    // 0x3abec8: 0x80830005  lb          $v1, 0x5($a0)
    ctx->pc = 0x3abec8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
label_3abecc:
    // 0x3abecc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3abeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3abed0:
    // 0x3abed0: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_3abed4:
    if (ctx->pc == 0x3ABED4u) {
        ctx->pc = 0x3ABED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABED0u;
        // 0x3abed4: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABED8u;
        goto label_3abed8;
    }
    ctx->pc = 0x3ABED0u;
    {
        const bool branch_taken_0x3abed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3abed0) {
            ctx->pc = 0x3ABED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABED0u;
            // 0x3abed4: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABF00u;
            goto label_3abf00;
        }
    }
    ctx->pc = 0x3ABED8u;
label_3abed8:
    // 0x3abed8: 0x50e00009  beql        $a3, $zero, . + 4 + (0x9 << 2)
label_3abedc:
    if (ctx->pc == 0x3ABEDCu) {
        ctx->pc = 0x3ABEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABED8u;
        // 0x3abedc: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABEE0u;
        goto label_3abee0;
    }
    ctx->pc = 0x3ABED8u;
    {
        const bool branch_taken_0x3abed8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3abed8) {
            ctx->pc = 0x3ABEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABED8u;
            // 0x3abedc: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABF00u;
            goto label_3abf00;
        }
    }
    ctx->pc = 0x3ABEE0u;
label_3abee0:
    // 0x3abee0: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x3abee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_3abee4:
    // 0x3abee4: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x3abee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_3abee8:
    // 0x3abee8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3abee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3abeec:
    // 0x3abeec: 0x54480004  bnel        $v0, $t0, . + 4 + (0x4 << 2)
label_3abef0:
    if (ctx->pc == 0x3ABEF0u) {
        ctx->pc = 0x3ABEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABEECu;
        // 0x3abef0: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABEF4u;
        goto label_3abef4;
    }
    ctx->pc = 0x3ABEECu;
    {
        const bool branch_taken_0x3abeec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x3abeec) {
            ctx->pc = 0x3ABEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABEECu;
            // 0x3abef0: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABF00u;
            goto label_3abf00;
        }
    }
    ctx->pc = 0x3ABEF4u;
label_3abef4:
    // 0x3abef4: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x3abef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_3abef8:
    // 0x3abef8: 0x10000012  b           . + 4 + (0x12 << 2)
label_3abefc:
    if (ctx->pc == 0x3ABEFCu) {
        ctx->pc = 0x3ABEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABEF8u;
        // 0x3abefc: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABF00u;
        goto label_3abf00;
    }
    ctx->pc = 0x3ABEF8u;
    {
        const bool branch_taken_0x3abef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABEF8u;
        // 0x3abefc: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abef8) {
            ctx->pc = 0x3ABF44u;
            goto label_3abf44;
        }
    }
    ctx->pc = 0x3ABF00u;
label_3abf00:
    // 0x3abf00: 0x54e00009  bnel        $a3, $zero, . + 4 + (0x9 << 2)
label_3abf04:
    if (ctx->pc == 0x3ABF04u) {
        ctx->pc = 0x3ABF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF00u;
        // 0x3abf04: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABF08u;
        goto label_3abf08;
    }
    ctx->pc = 0x3ABF00u;
    {
        const bool branch_taken_0x3abf00 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x3abf00) {
            ctx->pc = 0x3ABF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABF00u;
            // 0x3abf04: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABF28u;
            goto label_3abf28;
        }
    }
    ctx->pc = 0x3ABF08u;
label_3abf08:
    // 0x3abf08: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x3abf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3abf0c:
    // 0x3abf0c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3abf10:
    if (ctx->pc == 0x3ABF10u) {
        ctx->pc = 0x3ABF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF0Cu;
        // 0x3abf10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABF14u;
        goto label_3abf14;
    }
    ctx->pc = 0x3ABF0Cu;
    {
        const bool branch_taken_0x3abf0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF0Cu;
        // 0x3abf10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abf0c) {
            ctx->pc = 0x3ABF48u;
            goto label_3abf48;
        }
    }
    ctx->pc = 0x3ABF14u;
label_3abf14:
    // 0x3abf14: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x3abf14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_3abf18:
    // 0x3abf18: 0x40f809  jalr        $v0
label_3abf1c:
    if (ctx->pc == 0x3ABF1Cu) {
        ctx->pc = 0x3ABF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF18u;
        // 0x3abf1c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABF20u;
        goto label_3abf20;
    }
    ctx->pc = 0x3ABF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ABF20u);
        ctx->pc = 0x3ABF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF18u;
        // 0x3abf1c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ABF18u, 0x3ABF20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ABF20u;
label_3abf20:
    // 0x3abf20: 0x10000009  b           . + 4 + (0x9 << 2)
label_3abf24:
    if (ctx->pc == 0x3ABF24u) {
        ctx->pc = 0x3ABF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF20u;
        // 0x3abf24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABF28u;
        goto label_3abf28;
    }
    ctx->pc = 0x3ABF20u;
    {
        const bool branch_taken_0x3abf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF20u;
        // 0x3abf24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abf20) {
            ctx->pc = 0x3ABF48u;
            goto label_3abf48;
        }
    }
    ctx->pc = 0x3ABF28u;
label_3abf28:
    // 0x3abf28: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x3abf28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3abf2c:
    // 0x3abf2c: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x3abf2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3abf30:
    // 0x3abf30: 0xb0e3000f  sdl         $v1, 0xF($a3)
    ctx->pc = 0x3abf30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3abf34:
    // 0x3abf34: 0xb4e30008  sdr         $v1, 0x8($a3)
    ctx->pc = 0x3abf34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3abf38:
    // 0x3abf38: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x3abf38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_3abf3c:
    // 0x3abf3c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x3abf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_3abf40:
    // 0x3abf40: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x3abf40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_3abf44:
    // 0x3abf44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3abf44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3abf48:
    // 0x3abf48: 0x3e00008  jr          $ra
label_3abf4c:
    if (ctx->pc == 0x3ABF4Cu) {
        ctx->pc = 0x3ABF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF48u;
        // 0x3abf4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABF50u;
        goto label_fallthrough_0x3abf48;
    }
    ctx->pc = 0x3ABF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ABF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF48u;
        // 0x3abf4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ABF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3abf48:
    ctx->pc = 0x3ABF50u;
}
