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

// Function: sub_003AAE68
// Address: 0x3aae68 - 0x3ab008
void sub_003AAE68_0x3aae68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AAE68_0x3aae68");
#endif

    switch (ctx->pc) {
        case 0x3aae68u: goto label_3aae68;
        case 0x3aae6cu: goto label_3aae6c;
        case 0x3aae70u: goto label_3aae70;
        case 0x3aae74u: goto label_3aae74;
        case 0x3aae78u: goto label_3aae78;
        case 0x3aae7cu: goto label_3aae7c;
        case 0x3aae80u: goto label_3aae80;
        case 0x3aae84u: goto label_3aae84;
        case 0x3aae88u: goto label_3aae88;
        case 0x3aae8cu: goto label_3aae8c;
        case 0x3aae90u: goto label_3aae90;
        case 0x3aae94u: goto label_3aae94;
        case 0x3aae98u: goto label_3aae98;
        case 0x3aae9cu: goto label_3aae9c;
        case 0x3aaea0u: goto label_3aaea0;
        case 0x3aaea4u: goto label_3aaea4;
        case 0x3aaea8u: goto label_3aaea8;
        case 0x3aaeacu: goto label_3aaeac;
        case 0x3aaeb0u: goto label_3aaeb0;
        case 0x3aaeb4u: goto label_3aaeb4;
        case 0x3aaeb8u: goto label_3aaeb8;
        case 0x3aaebcu: goto label_3aaebc;
        case 0x3aaec0u: goto label_3aaec0;
        case 0x3aaec4u: goto label_3aaec4;
        case 0x3aaec8u: goto label_3aaec8;
        case 0x3aaeccu: goto label_3aaecc;
        case 0x3aaed0u: goto label_3aaed0;
        case 0x3aaed4u: goto label_3aaed4;
        case 0x3aaed8u: goto label_3aaed8;
        case 0x3aaedcu: goto label_3aaedc;
        case 0x3aaee0u: goto label_3aaee0;
        case 0x3aaee4u: goto label_3aaee4;
        case 0x3aaee8u: goto label_3aaee8;
        case 0x3aaeecu: goto label_3aaeec;
        case 0x3aaef0u: goto label_3aaef0;
        case 0x3aaef4u: goto label_3aaef4;
        case 0x3aaef8u: goto label_3aaef8;
        case 0x3aaefcu: goto label_3aaefc;
        case 0x3aaf00u: goto label_3aaf00;
        case 0x3aaf04u: goto label_3aaf04;
        case 0x3aaf08u: goto label_3aaf08;
        case 0x3aaf0cu: goto label_3aaf0c;
        case 0x3aaf10u: goto label_3aaf10;
        case 0x3aaf14u: goto label_3aaf14;
        case 0x3aaf18u: goto label_3aaf18;
        case 0x3aaf1cu: goto label_3aaf1c;
        case 0x3aaf20u: goto label_3aaf20;
        case 0x3aaf24u: goto label_3aaf24;
        case 0x3aaf28u: goto label_3aaf28;
        case 0x3aaf2cu: goto label_3aaf2c;
        case 0x3aaf30u: goto label_3aaf30;
        case 0x3aaf34u: goto label_3aaf34;
        case 0x3aaf38u: goto label_3aaf38;
        case 0x3aaf3cu: goto label_3aaf3c;
        case 0x3aaf40u: goto label_3aaf40;
        case 0x3aaf44u: goto label_3aaf44;
        case 0x3aaf48u: goto label_3aaf48;
        case 0x3aaf4cu: goto label_3aaf4c;
        case 0x3aaf50u: goto label_3aaf50;
        case 0x3aaf54u: goto label_3aaf54;
        case 0x3aaf58u: goto label_3aaf58;
        case 0x3aaf5cu: goto label_3aaf5c;
        case 0x3aaf60u: goto label_3aaf60;
        case 0x3aaf64u: goto label_3aaf64;
        case 0x3aaf68u: goto label_3aaf68;
        case 0x3aaf6cu: goto label_3aaf6c;
        case 0x3aaf70u: goto label_3aaf70;
        case 0x3aaf74u: goto label_3aaf74;
        case 0x3aaf78u: goto label_3aaf78;
        case 0x3aaf7cu: goto label_3aaf7c;
        case 0x3aaf80u: goto label_3aaf80;
        case 0x3aaf84u: goto label_3aaf84;
        case 0x3aaf88u: goto label_3aaf88;
        case 0x3aaf8cu: goto label_3aaf8c;
        case 0x3aaf90u: goto label_3aaf90;
        case 0x3aaf94u: goto label_3aaf94;
        case 0x3aaf98u: goto label_3aaf98;
        case 0x3aaf9cu: goto label_3aaf9c;
        case 0x3aafa0u: goto label_3aafa0;
        case 0x3aafa4u: goto label_3aafa4;
        case 0x3aafa8u: goto label_3aafa8;
        case 0x3aafacu: goto label_3aafac;
        case 0x3aafb0u: goto label_3aafb0;
        case 0x3aafb4u: goto label_3aafb4;
        case 0x3aafb8u: goto label_3aafb8;
        case 0x3aafbcu: goto label_3aafbc;
        case 0x3aafc0u: goto label_3aafc0;
        case 0x3aafc4u: goto label_3aafc4;
        case 0x3aafc8u: goto label_3aafc8;
        case 0x3aafccu: goto label_3aafcc;
        case 0x3aafd0u: goto label_3aafd0;
        case 0x3aafd4u: goto label_3aafd4;
        case 0x3aafd8u: goto label_3aafd8;
        case 0x3aafdcu: goto label_3aafdc;
        case 0x3aafe0u: goto label_3aafe0;
        case 0x3aafe4u: goto label_3aafe4;
        case 0x3aafe8u: goto label_3aafe8;
        case 0x3aafecu: goto label_3aafec;
        case 0x3aaff0u: goto label_3aaff0;
        case 0x3aaff4u: goto label_3aaff4;
        case 0x3aaff8u: goto label_3aaff8;
        case 0x3aaffcu: goto label_3aaffc;
        case 0x3ab000u: goto label_3ab000;
        case 0x3ab004u: goto label_3ab004;
        default: break;
    }

    ctx->pc = 0x3aae68u;

label_3aae68:
    // 0x3aae68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aae68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3aae6c:
    // 0x3aae6c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3aae6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3aae70:
    // 0x3aae70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3aae70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3aae74:
    // 0x3aae74: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
label_3aae78:
    if (ctx->pc == 0x3AAE78u) {
        ctx->pc = 0x3AAE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAE74u;
        // 0x3aae78: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAE7Cu;
        goto label_3aae7c;
    }
    ctx->pc = 0x3AAE74u;
    {
        const bool branch_taken_0x3aae74 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AAE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAE74u;
        // 0x3aae78: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aae74) {
            ctx->pc = 0x3AAE98u;
            goto label_3aae98;
        }
    }
    ctx->pc = 0x3AAE7Cu;
label_3aae7c:
    // 0x3aae7c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3aae7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3aae80:
    // 0x3aae80: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3aae80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3aae84:
    // 0x3aae84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aae84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3aae88:
    // 0x3aae88: 0x2484efb0  addiu       $a0, $a0, -0x1050
    ctx->pc = 0x3aae88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963120));
label_3aae8c:
    // 0x3aae8c: 0x24a5eef0  addiu       $a1, $a1, -0x1110
    ctx->pc = 0x3aae8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962928));
label_3aae90:
    // 0x3aae90: 0x80eaa6e  j           func_3AA9B8
label_3aae94:
    if (ctx->pc == 0x3AAE94u) {
        ctx->pc = 0x3AAE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAE90u;
        // 0x3aae94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAE98u;
        goto label_3aae98;
    }
    ctx->pc = 0x3AAE90u;
    ctx->pc = 0x3AAE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAE90u;
    // 0x3aae94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA9B8u;
    sub_003AA9B8_0x3aa9b8(rdram, ctx, runtime); return;
    ctx->pc = 0x3AAE98u;
label_3aae98:
    // 0x3aae98: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x3aae98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_3aae9c:
    // 0x3aae9c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_3aaea0:
    if (ctx->pc == 0x3AAEA0u) {
        ctx->pc = 0x3AAEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAE9Cu;
        // 0x3aaea0: 0x8d040020  lw          $a0, 0x20($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAEA4u;
        goto label_3aaea4;
    }
    ctx->pc = 0x3AAE9Cu;
    {
        const bool branch_taken_0x3aae9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aae9c) {
            ctx->pc = 0x3AAEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AAE9Cu;
            // 0x3aaea0: 0x8d040020  lw          $a0, 0x20($t0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAEC0u;
            goto label_3aaec0;
        }
    }
    ctx->pc = 0x3AAEA4u;
label_3aaea4:
    // 0x3aaea4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3aaea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3aaea8:
    // 0x3aaea8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3aaea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3aaeac:
    // 0x3aaeac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aaeacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3aaeb0:
    // 0x3aaeb0: 0x2484efc0  addiu       $a0, $a0, -0x1040
    ctx->pc = 0x3aaeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963136));
label_3aaeb4:
    // 0x3aaeb4: 0x24a5ef70  addiu       $a1, $a1, -0x1090
    ctx->pc = 0x3aaeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963056));
label_3aaeb8:
    // 0x3aaeb8: 0x80eaa6e  j           func_3AA9B8
label_3aaebc:
    if (ctx->pc == 0x3AAEBCu) {
        ctx->pc = 0x3AAEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAEB8u;
        // 0x3aaebc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAEC0u;
        goto label_3aaec0;
    }
    ctx->pc = 0x3AAEB8u;
    ctx->pc = 0x3AAEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAEB8u;
    // 0x3aaebc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA9B8u;
    sub_003AA9B8_0x3aa9b8(rdram, ctx, runtime); return;
    ctx->pc = 0x3AAEC0u;
label_3aaec0:
    // 0x3aaec0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_3aaec4:
    if (ctx->pc == 0x3AAEC4u) {
        ctx->pc = 0x3AAEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAEC0u;
        // 0x3aaec4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAEC8u;
        goto label_3aaec8;
    }
    ctx->pc = 0x3AAEC0u;
    {
        const bool branch_taken_0x3aaec0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AAEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAEC0u;
        // 0x3aaec4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaec0) {
            ctx->pc = 0x3AAEE0u;
            goto label_3aaee0;
        }
    }
    ctx->pc = 0x3AAEC8u;
label_3aaec8:
    // 0x3aaec8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3aaec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3aaecc:
    // 0x3aaecc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3aaeccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3aaed0:
    // 0x3aaed0: 0x2484efd0  addiu       $a0, $a0, -0x1030
    ctx->pc = 0x3aaed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963152));
label_3aaed4:
    // 0x3aaed4: 0x24a5efe0  addiu       $a1, $a1, -0x1020
    ctx->pc = 0x3aaed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963168));
label_3aaed8:
    // 0x3aaed8: 0x80eaa6e  j           func_3AA9B8
label_3aaedc:
    if (ctx->pc == 0x3AAEDCu) {
        ctx->pc = 0x3AAEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAED8u;
        // 0x3aaedc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAEE0u;
        goto label_3aaee0;
    }
    ctx->pc = 0x3AAED8u;
    ctx->pc = 0x3AAEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAED8u;
    // 0x3aaedc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA9B8u;
    sub_003AA9B8_0x3aa9b8(rdram, ctx, runtime); return;
    ctx->pc = 0x3AAEE0u;
label_3aaee0:
    // 0x3aaee0: 0x14a0001f  bnez        $a1, . + 4 + (0x1F << 2)
label_3aaee4:
    if (ctx->pc == 0x3AAEE4u) {
        ctx->pc = 0x3AAEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAEE0u;
        // 0x3aaee4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAEE8u;
        goto label_3aaee8;
    }
    ctx->pc = 0x3AAEE0u;
    {
        const bool branch_taken_0x3aaee0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AAEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAEE0u;
        // 0x3aaee4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaee0) {
            ctx->pc = 0x3AAF60u;
            goto label_3aaf60;
        }
    }
    ctx->pc = 0x3AAEE8u;
label_3aaee8:
    // 0x3aaee8: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x3aaee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_3aaeec:
    // 0x3aaeec: 0x8d030024  lw          $v1, 0x24($t0)
    ctx->pc = 0x3aaeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
label_3aaef0:
    // 0x3aaef0: 0x8d050010  lw          $a1, 0x10($t0)
    ctx->pc = 0x3aaef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_3aaef4:
    // 0x3aaef4: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x3aaef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3aaef8:
    // 0x3aaef8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3aaef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3aaefc:
    // 0x3aaefc: 0x8d06001c  lw          $a2, 0x1C($t0)
    ctx->pc = 0x3aaefcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_3aaf00:
    // 0x3aaf00: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x3aaf00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3aaf04:
    // 0x3aaf04: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x3aaf04u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_3aaf08:
    // 0x3aaf08: 0x49202a  slt         $a0, $v0, $t1
    ctx->pc = 0x3aaf08u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3aaf0c:
    // 0x3aaf0c: 0x124100a  movz        $v0, $t1, $a0
    ctx->pc = 0x3aaf0cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 9));
label_3aaf10:
    // 0x3aaf10: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x3aaf10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_3aaf14:
    // 0x3aaf14: 0x8d040014  lw          $a0, 0x14($t0)
    ctx->pc = 0x3aaf14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_3aaf18:
    // 0x3aaf18: 0x8d030020  lw          $v1, 0x20($t0)
    ctx->pc = 0x3aaf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_3aaf1c:
    // 0x3aaf1c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3aaf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3aaf20:
    // 0x3aaf20: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x3aaf20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_3aaf24:
    // 0x3aaf24: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x3aaf24u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3aaf28:
    // 0x3aaf28: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x3aaf28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_3aaf2c:
    // 0x3aaf2c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_3aaf30:
    if (ctx->pc == 0x3AAF30u) {
        ctx->pc = 0x3AAF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF2Cu;
        // 0x3aaf30: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAF34u;
        goto label_3aaf34;
    }
    ctx->pc = 0x3AAF2Cu;
    {
        const bool branch_taken_0x3aaf2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aaf2c) {
            ctx->pc = 0x3AAF30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AAF2Cu;
            // 0x3aaf30: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAF34u;
            goto label_3aaf34;
        }
    }
    ctx->pc = 0x3AAF34u;
label_3aaf34:
    // 0x3aaf34: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x3aaf34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_3aaf38:
    // 0x3aaf38: 0x8d030028  lw          $v1, 0x28($t0)
    ctx->pc = 0x3aaf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
label_3aaf3c:
    // 0x3aaf3c: 0x2810  mfhi        $a1
    ctx->pc = 0x3aaf3cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_3aaf40:
    // 0x3aaf40: 0xad050014  sw          $a1, 0x14($t0)
    ctx->pc = 0x3aaf40u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 5));
label_3aaf44:
    // 0x3aaf44: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x3aaf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3aaf48:
    // 0x3aaf48: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x3aaf48u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3aaf4c:
    // 0x3aaf4c: 0xad040010  sw          $a0, 0x10($t0)
    ctx->pc = 0x3aaf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 4));
label_3aaf50:
    // 0x3aaf50: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x3aaf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3aaf54:
    // 0x3aaf54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3aaf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3aaf58:
    // 0x3aaf58: 0x10000027  b           . + 4 + (0x27 << 2)
label_3aaf5c:
    if (ctx->pc == 0x3AAF5Cu) {
        ctx->pc = 0x3AAF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF58u;
        // 0x3aaf5c: 0xad030028  sw          $v1, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAF60u;
        goto label_3aaf60;
    }
    ctx->pc = 0x3AAF58u;
    {
        const bool branch_taken_0x3aaf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF58u;
        // 0x3aaf5c: 0xad030028  sw          $v1, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaf58) {
            ctx->pc = 0x3AAFF8u;
            goto label_3aaff8;
        }
    }
    ctx->pc = 0x3AAF60u;
label_3aaf60:
    // 0x3aaf60: 0x54a2001f  bnel        $a1, $v0, . + 4 + (0x1F << 2)
label_3aaf64:
    if (ctx->pc == 0x3AAF64u) {
        ctx->pc = 0x3AAF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF60u;
        // 0x3aaf64: 0x8d020038  lw          $v0, 0x38($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAF68u;
        goto label_3aaf68;
    }
    ctx->pc = 0x3AAF60u;
    {
        const bool branch_taken_0x3aaf60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3aaf60) {
            ctx->pc = 0x3AAF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AAF60u;
            // 0x3aaf64: 0x8d020038  lw          $v0, 0x38($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAFE0u;
            goto label_3aafe0;
        }
    }
    ctx->pc = 0x3AAF68u;
label_3aaf68:
    // 0x3aaf68: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x3aaf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_3aaf6c:
    // 0x3aaf6c: 0x8d030024  lw          $v1, 0x24($t0)
    ctx->pc = 0x3aaf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
label_3aaf70:
    // 0x3aaf70: 0x8d05000c  lw          $a1, 0xC($t0)
    ctx->pc = 0x3aaf70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_3aaf74:
    // 0x3aaf74: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x3aaf74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3aaf78:
    // 0x3aaf78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3aaf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3aaf7c:
    // 0x3aaf7c: 0x8d06001c  lw          $a2, 0x1C($t0)
    ctx->pc = 0x3aaf7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_3aaf80:
    // 0x3aaf80: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x3aaf80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3aaf84:
    // 0x3aaf84: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x3aaf84u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_3aaf88:
    // 0x3aaf88: 0x49202a  slt         $a0, $v0, $t1
    ctx->pc = 0x3aaf88u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3aaf8c:
    // 0x3aaf8c: 0x124100a  movz        $v0, $t1, $a0
    ctx->pc = 0x3aaf8cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 9));
label_3aaf90:
    // 0x3aaf90: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x3aaf90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_3aaf94:
    // 0x3aaf94: 0x8d040018  lw          $a0, 0x18($t0)
    ctx->pc = 0x3aaf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_3aaf98:
    // 0x3aaf98: 0x8d030020  lw          $v1, 0x20($t0)
    ctx->pc = 0x3aaf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_3aaf9c:
    // 0x3aaf9c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3aaf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3aafa0:
    // 0x3aafa0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x3aafa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_3aafa4:
    // 0x3aafa4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x3aafa4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3aafa8:
    // 0x3aafa8: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x3aafa8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_3aafac:
    // 0x3aafac: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_3aafb0:
    if (ctx->pc == 0x3AAFB0u) {
        ctx->pc = 0x3AAFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAFACu;
        // 0x3aafb0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAFB4u;
        goto label_3aafb4;
    }
    ctx->pc = 0x3AAFACu;
    {
        const bool branch_taken_0x3aafac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aafac) {
            ctx->pc = 0x3AAFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AAFACu;
            // 0x3aafb0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAFB4u;
            goto label_3aafb4;
        }
    }
    ctx->pc = 0x3AAFB4u;
label_3aafb4:
    // 0x3aafb4: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x3aafb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_3aafb8:
    // 0x3aafb8: 0x8d030030  lw          $v1, 0x30($t0)
    ctx->pc = 0x3aafb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
label_3aafbc:
    // 0x3aafbc: 0x2810  mfhi        $a1
    ctx->pc = 0x3aafbcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_3aafc0:
    // 0x3aafc0: 0xad050018  sw          $a1, 0x18($t0)
    ctx->pc = 0x3aafc0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 5));
label_3aafc4:
    // 0x3aafc4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x3aafc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3aafc8:
    // 0x3aafc8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x3aafc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3aafcc:
    // 0x3aafcc: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x3aafccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
label_3aafd0:
    // 0x3aafd0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x3aafd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3aafd4:
    // 0x3aafd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3aafd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3aafd8:
    // 0x3aafd8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3aafdc:
    if (ctx->pc == 0x3AAFDCu) {
        ctx->pc = 0x3AAFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAFD8u;
        // 0x3aafdc: 0xad030030  sw          $v1, 0x30($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAFE0u;
        goto label_3aafe0;
    }
    ctx->pc = 0x3AAFD8u;
    {
        const bool branch_taken_0x3aafd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAFD8u;
        // 0x3aafdc: 0xad030030  sw          $v1, 0x30($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aafd8) {
            ctx->pc = 0x3AAFF8u;
            goto label_3aaff8;
        }
    }
    ctx->pc = 0x3AAFE0u;
label_3aafe0:
    // 0x3aafe0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x3aafe0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_3aafe4:
    // 0x3aafe4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3aafe8:
    if (ctx->pc == 0x3AAFE8u) {
        ctx->pc = 0x3AAFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAFE4u;
        // 0x3aafe8: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAFECu;
        goto label_3aafec;
    }
    ctx->pc = 0x3AAFE4u;
    {
        const bool branch_taken_0x3aafe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAFE4u;
        // 0x3aafe8: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aafe4) {
            ctx->pc = 0x3AAFF8u;
            goto label_3aaff8;
        }
    }
    ctx->pc = 0x3AAFECu;
label_3aafec:
    // 0x3aafec: 0x8d04003c  lw          $a0, 0x3C($t0)
    ctx->pc = 0x3aafecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 60)));
label_3aaff0:
    // 0x3aaff0: 0x40f809  jalr        $v0
label_3aaff4:
    if (ctx->pc == 0x3AAFF4u) {
        ctx->pc = 0x3AAFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAFF0u;
        // 0x3aaff4: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAFF8u;
        goto label_3aaff8;
    }
    ctx->pc = 0x3AAFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AAFF8u);
        ctx->pc = 0x3AAFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAFF0u;
        // 0x3aaff4: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AAFF0u, 0x3AAFF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AAFF8u;
label_3aaff8:
    // 0x3aaff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aaff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3aaffc:
    // 0x3aaffc: 0x3e00008  jr          $ra
label_3ab000:
    if (ctx->pc == 0x3AB000u) {
        ctx->pc = 0x3AB000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAFFCu;
        // 0x3ab000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB004u;
        goto label_3ab004;
    }
    ctx->pc = 0x3AAFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAFFCu;
        // 0x3ab000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AAFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AB004u;
label_3ab004:
    // 0x3ab004: 0x0  nop
    ctx->pc = 0x3ab004u;
    // NOP
    ctx->pc = 0x3ab008u;
}
