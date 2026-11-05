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

// Function: sub_00236C78
// Address: 0x236c78 - 0x236ef0
void sub_00236C78_0x236c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236C78_0x236c78");
#endif

    switch (ctx->pc) {
        case 0x236c78u: goto label_236c78;
        case 0x236c7cu: goto label_236c7c;
        case 0x236c80u: goto label_236c80;
        case 0x236c84u: goto label_236c84;
        case 0x236c88u: goto label_236c88;
        case 0x236c8cu: goto label_236c8c;
        case 0x236c90u: goto label_236c90;
        case 0x236c94u: goto label_236c94;
        case 0x236c98u: goto label_236c98;
        case 0x236c9cu: goto label_236c9c;
        case 0x236ca0u: goto label_236ca0;
        case 0x236ca4u: goto label_236ca4;
        case 0x236ca8u: goto label_236ca8;
        case 0x236cacu: goto label_236cac;
        case 0x236cb0u: goto label_236cb0;
        case 0x236cb4u: goto label_236cb4;
        case 0x236cb8u: goto label_236cb8;
        case 0x236cbcu: goto label_236cbc;
        case 0x236cc0u: goto label_236cc0;
        case 0x236cc4u: goto label_236cc4;
        case 0x236cc8u: goto label_236cc8;
        case 0x236cccu: goto label_236ccc;
        case 0x236cd0u: goto label_236cd0;
        case 0x236cd4u: goto label_236cd4;
        case 0x236cd8u: goto label_236cd8;
        case 0x236cdcu: goto label_236cdc;
        case 0x236ce0u: goto label_236ce0;
        case 0x236ce4u: goto label_236ce4;
        case 0x236ce8u: goto label_236ce8;
        case 0x236cecu: goto label_236cec;
        case 0x236cf0u: goto label_236cf0;
        case 0x236cf4u: goto label_236cf4;
        case 0x236cf8u: goto label_236cf8;
        case 0x236cfcu: goto label_236cfc;
        case 0x236d00u: goto label_236d00;
        case 0x236d04u: goto label_236d04;
        case 0x236d08u: goto label_236d08;
        case 0x236d0cu: goto label_236d0c;
        case 0x236d10u: goto label_236d10;
        case 0x236d14u: goto label_236d14;
        case 0x236d18u: goto label_236d18;
        case 0x236d1cu: goto label_236d1c;
        case 0x236d20u: goto label_236d20;
        case 0x236d24u: goto label_236d24;
        case 0x236d28u: goto label_236d28;
        case 0x236d2cu: goto label_236d2c;
        case 0x236d30u: goto label_236d30;
        case 0x236d34u: goto label_236d34;
        case 0x236d38u: goto label_236d38;
        case 0x236d3cu: goto label_236d3c;
        case 0x236d40u: goto label_236d40;
        case 0x236d44u: goto label_236d44;
        case 0x236d48u: goto label_236d48;
        case 0x236d4cu: goto label_236d4c;
        case 0x236d50u: goto label_236d50;
        case 0x236d54u: goto label_236d54;
        case 0x236d58u: goto label_236d58;
        case 0x236d5cu: goto label_236d5c;
        case 0x236d60u: goto label_236d60;
        case 0x236d64u: goto label_236d64;
        case 0x236d68u: goto label_236d68;
        case 0x236d6cu: goto label_236d6c;
        case 0x236d70u: goto label_236d70;
        case 0x236d74u: goto label_236d74;
        case 0x236d78u: goto label_236d78;
        case 0x236d7cu: goto label_236d7c;
        case 0x236d80u: goto label_236d80;
        case 0x236d84u: goto label_236d84;
        case 0x236d88u: goto label_236d88;
        case 0x236d8cu: goto label_236d8c;
        case 0x236d90u: goto label_236d90;
        case 0x236d94u: goto label_236d94;
        case 0x236d98u: goto label_236d98;
        case 0x236d9cu: goto label_236d9c;
        case 0x236da0u: goto label_236da0;
        case 0x236da4u: goto label_236da4;
        case 0x236da8u: goto label_236da8;
        case 0x236dacu: goto label_236dac;
        case 0x236db0u: goto label_236db0;
        case 0x236db4u: goto label_236db4;
        case 0x236db8u: goto label_236db8;
        case 0x236dbcu: goto label_236dbc;
        case 0x236dc0u: goto label_236dc0;
        case 0x236dc4u: goto label_236dc4;
        case 0x236dc8u: goto label_236dc8;
        case 0x236dccu: goto label_236dcc;
        case 0x236dd0u: goto label_236dd0;
        case 0x236dd4u: goto label_236dd4;
        case 0x236dd8u: goto label_236dd8;
        case 0x236ddcu: goto label_236ddc;
        case 0x236de0u: goto label_236de0;
        case 0x236de4u: goto label_236de4;
        case 0x236de8u: goto label_236de8;
        case 0x236decu: goto label_236dec;
        case 0x236df0u: goto label_236df0;
        case 0x236df4u: goto label_236df4;
        case 0x236df8u: goto label_236df8;
        case 0x236dfcu: goto label_236dfc;
        case 0x236e00u: goto label_236e00;
        case 0x236e04u: goto label_236e04;
        case 0x236e08u: goto label_236e08;
        case 0x236e0cu: goto label_236e0c;
        case 0x236e10u: goto label_236e10;
        case 0x236e14u: goto label_236e14;
        case 0x236e18u: goto label_236e18;
        case 0x236e1cu: goto label_236e1c;
        case 0x236e20u: goto label_236e20;
        case 0x236e24u: goto label_236e24;
        case 0x236e28u: goto label_236e28;
        case 0x236e2cu: goto label_236e2c;
        case 0x236e30u: goto label_236e30;
        case 0x236e34u: goto label_236e34;
        case 0x236e38u: goto label_236e38;
        case 0x236e3cu: goto label_236e3c;
        case 0x236e40u: goto label_236e40;
        case 0x236e44u: goto label_236e44;
        case 0x236e48u: goto label_236e48;
        case 0x236e4cu: goto label_236e4c;
        case 0x236e50u: goto label_236e50;
        case 0x236e54u: goto label_236e54;
        case 0x236e58u: goto label_236e58;
        case 0x236e5cu: goto label_236e5c;
        case 0x236e60u: goto label_236e60;
        case 0x236e64u: goto label_236e64;
        case 0x236e68u: goto label_236e68;
        case 0x236e6cu: goto label_236e6c;
        case 0x236e70u: goto label_236e70;
        case 0x236e74u: goto label_236e74;
        case 0x236e78u: goto label_236e78;
        case 0x236e7cu: goto label_236e7c;
        case 0x236e80u: goto label_236e80;
        case 0x236e84u: goto label_236e84;
        case 0x236e88u: goto label_236e88;
        case 0x236e8cu: goto label_236e8c;
        case 0x236e90u: goto label_236e90;
        case 0x236e94u: goto label_236e94;
        case 0x236e98u: goto label_236e98;
        case 0x236e9cu: goto label_236e9c;
        case 0x236ea0u: goto label_236ea0;
        case 0x236ea4u: goto label_236ea4;
        case 0x236ea8u: goto label_236ea8;
        case 0x236eacu: goto label_236eac;
        case 0x236eb0u: goto label_236eb0;
        case 0x236eb4u: goto label_236eb4;
        case 0x236eb8u: goto label_236eb8;
        case 0x236ebcu: goto label_236ebc;
        case 0x236ec0u: goto label_236ec0;
        case 0x236ec4u: goto label_236ec4;
        case 0x236ec8u: goto label_236ec8;
        case 0x236eccu: goto label_236ecc;
        case 0x236ed0u: goto label_236ed0;
        case 0x236ed4u: goto label_236ed4;
        case 0x236ed8u: goto label_236ed8;
        case 0x236edcu: goto label_236edc;
        case 0x236ee0u: goto label_236ee0;
        case 0x236ee4u: goto label_236ee4;
        case 0x236ee8u: goto label_236ee8;
        case 0x236eecu: goto label_236eec;
        default: break;
    }

    ctx->pc = 0x236c78u;

label_236c78:
    // 0x236c78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x236c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_236c7c:
    // 0x236c7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236c80:
    // 0x236c80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_236c84:
    // 0x236c84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236c88:
    // 0x236c88: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x236c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_236c8c:
    // 0x236c8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x236c8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_236c90:
    // 0x236c90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x236c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_236c94:
    // 0x236c94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x236c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_236c98:
    // 0x236c98: 0x8e020228  lw          $v0, 0x228($s0)
    ctx->pc = 0x236c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
label_236c9c:
    // 0x236c9c: 0x1051008c  beq         $v0, $s1, . + 4 + (0x8C << 2)
label_236ca0:
    if (ctx->pc == 0x236CA0u) {
        ctx->pc = 0x236CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C9Cu;
        // 0x236ca0: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236CA4u;
        goto label_236ca4;
    }
    ctx->pc = 0x236C9Cu;
    {
        const bool branch_taken_0x236c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x236CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C9Cu;
        // 0x236ca0: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c9c) {
            ctx->pc = 0x236ED0u;
            goto label_236ed0;
        }
    }
    ctx->pc = 0x236CA4u;
label_236ca4:
    // 0x236ca4: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x236ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_236ca8:
    // 0x236ca8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x236ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_236cac:
    // 0x236cac: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_236cb0:
    if (ctx->pc == 0x236CB0u) {
        ctx->pc = 0x236CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CACu;
        // 0x236cb0: 0x8e050224  lw          $a1, 0x224($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236CB4u;
        goto label_236cb4;
    }
    ctx->pc = 0x236CACu;
    {
        const bool branch_taken_0x236cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236cac) {
            ctx->pc = 0x236CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236CACu;
            // 0x236cb0: 0x8e050224  lw          $a1, 0x224($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236CE0u;
            goto label_236ce0;
        }
    }
    ctx->pc = 0x236CB4u;
label_236cb4:
    // 0x236cb4: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x236cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_236cb8:
    // 0x236cb8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x236cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_236cbc:
    // 0x236cbc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x236cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_236cc0:
    // 0x236cc0: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_236cc4:
    if (ctx->pc == 0x236CC4u) {
        ctx->pc = 0x236CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CC0u;
        // 0x236cc4: 0x8e050224  lw          $a1, 0x224($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236CC8u;
        goto label_236cc8;
    }
    ctx->pc = 0x236CC0u;
    {
        const bool branch_taken_0x236cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x236cc0) {
            ctx->pc = 0x236CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236CC0u;
            // 0x236cc4: 0x8e050224  lw          $a1, 0x224($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236CE0u;
            goto label_236ce0;
        }
    }
    ctx->pc = 0x236CC8u;
label_236cc8:
    // 0x236cc8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x236cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_236ccc:
    // 0x236ccc: 0x8c43be30  lw          $v1, -0x41D0($v0)
    ctx->pc = 0x236cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950448)));
label_236cd0:
    // 0x236cd0: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_236cd4:
    if (ctx->pc == 0x236CD4u) {
        ctx->pc = 0x236CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CD0u;
        // 0x236cd4: 0x8e050224  lw          $a1, 0x224($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236CD8u;
        goto label_236cd8;
    }
    ctx->pc = 0x236CD0u;
    {
        const bool branch_taken_0x236cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x236cd0) {
            ctx->pc = 0x236CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236CD0u;
            // 0x236cd4: 0x8e050224  lw          $a1, 0x224($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236CE0u;
            goto label_236ce0;
        }
    }
    ctx->pc = 0x236CD8u;
label_236cd8:
    // 0x236cd8: 0x1000007d  b           . + 4 + (0x7D << 2)
label_236cdc:
    if (ctx->pc == 0x236CDCu) {
        ctx->pc = 0x236CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CD8u;
        // 0x236cdc: 0xae110424  sw          $s1, 0x424($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1060), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236CE0u;
        goto label_236ce0;
    }
    ctx->pc = 0x236CD8u;
    {
        const bool branch_taken_0x236cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CD8u;
        // 0x236cdc: 0xae110424  sw          $s1, 0x424($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1060), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236cd8) {
            ctx->pc = 0x236ED0u;
            goto label_236ed0;
        }
    }
    ctx->pc = 0x236CE0u;
label_236ce0:
    // 0x236ce0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x236ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_236ce4:
    // 0x236ce4: 0x8e070334  lw          $a3, 0x334($s0)
    ctx->pc = 0x236ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_236ce8:
    // 0x236ce8: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x236ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_236cec:
    // 0x236cec: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x236cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_236cf0:
    // 0x236cf0: 0x8ce40150  lw          $a0, 0x150($a3)
    ctx->pc = 0x236cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 336)));
label_236cf4:
    // 0x236cf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x236cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_236cf8:
    // 0x236cf8: 0x14860012  bne         $a0, $a2, . + 4 + (0x12 << 2)
label_236cfc:
    if (ctx->pc == 0x236CFCu) {
        ctx->pc = 0x236CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CF8u;
        // 0x236cfc: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D00u;
        goto label_236d00;
    }
    ctx->pc = 0x236CF8u;
    {
        const bool branch_taken_0x236cf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x236CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CF8u;
        // 0x236cfc: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236cf8) {
            ctx->pc = 0x236D44u;
            goto label_236d44;
        }
    }
    ctx->pc = 0x236D00u;
label_236d00:
    // 0x236d00: 0x8ce201e4  lw          $v0, 0x1E4($a3)
    ctx->pc = 0x236d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
label_236d04:
    // 0x236d04: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x236d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_236d08:
    // 0x236d08: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x236d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_236d0c:
    // 0x236d0c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x236d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_236d10:
    // 0x236d10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x236d10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_236d14:
    // 0x236d14: 0x0  nop
    ctx->pc = 0x236d14u;
    // NOP
label_236d18:
    // 0x236d18: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_236d1c:
    if (ctx->pc == 0x236D1Cu) {
        ctx->pc = 0x236D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D18u;
        // 0x236d1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D20u;
        goto label_236d20;
    }
    ctx->pc = 0x236D18u;
    {
        const bool branch_taken_0x236d18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x236D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D18u;
        // 0x236d1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d18) {
            ctx->pc = 0x236D24u;
            goto label_236d24;
        }
    }
    ctx->pc = 0x236D20u;
label_236d20:
    // 0x236d20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x236d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236d24:
    // 0x236d24: 0x1480006b  bnez        $a0, . + 4 + (0x6B << 2)
label_236d28:
    if (ctx->pc == 0x236D28u) {
        ctx->pc = 0x236D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D24u;
        // 0x236d28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D2Cu;
        goto label_236d2c;
    }
    ctx->pc = 0x236D24u;
    {
        const bool branch_taken_0x236d24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x236D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D24u;
        // 0x236d28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d24) {
            ctx->pc = 0x236ED4u;
            goto label_236ed4;
        }
    }
    ctx->pc = 0x236D2Cu;
label_236d2c:
    // 0x236d2c: 0xc08c5b8  jal         func_2316E0
label_236d30:
    if (ctx->pc == 0x236D30u) {
        ctx->pc = 0x236D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D2Cu;
        // 0x236d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D34u;
        goto label_236d34;
    }
    ctx->pc = 0x236D2Cu;
    SET_GPR_U32(ctx, 31, 0x236D34u);
    ctx->pc = 0x236D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236D2Cu;
    // 0x236d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2316E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2316E0u, 0x236D2Cu, 0x236D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236D34u;
label_236d34:
    // 0x236d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236d38:
    // 0x236d38: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x236d38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_236d3c:
    // 0x236d3c: 0xc08fed2  jal         func_23FB48
label_236d40:
    if (ctx->pc == 0x236D40u) {
        ctx->pc = 0x236D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D3Cu;
        // 0x236d40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D44u;
        goto label_236d44;
    }
    ctx->pc = 0x236D3Cu;
    SET_GPR_U32(ctx, 31, 0x236D44u);
    ctx->pc = 0x236D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236D3Cu;
    // 0x236d40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x236D3Cu, 0x236D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236D44u;
label_236d44:
    // 0x236d44: 0x8e030338  lw          $v1, 0x338($s0)
    ctx->pc = 0x236d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_236d48:
    // 0x236d48: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x236d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_236d4c:
    // 0x236d4c: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x236d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_236d50:
    // 0x236d50: 0x10440060  beq         $v0, $a0, . + 4 + (0x60 << 2)
label_236d54:
    if (ctx->pc == 0x236D54u) {
        ctx->pc = 0x236D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D50u;
        // 0x236d54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D58u;
        goto label_236d58;
    }
    ctx->pc = 0x236D50u;
    {
        const bool branch_taken_0x236d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x236D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D50u;
        // 0x236d54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d50) {
            ctx->pc = 0x236ED4u;
            goto label_236ed4;
        }
    }
    ctx->pc = 0x236D58u;
label_236d58:
    // 0x236d58: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x236d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_236d5c:
    // 0x236d5c: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
label_236d60:
    if (ctx->pc == 0x236D60u) {
        ctx->pc = 0x236D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D5Cu;
        // 0x236d60: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D64u;
        goto label_236d64;
    }
    ctx->pc = 0x236D5Cu;
    {
        const bool branch_taken_0x236d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x236d5c) {
            ctx->pc = 0x236D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236D5Cu;
            // 0x236d60: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236D6Cu;
            goto label_236d6c;
        }
    }
    ctx->pc = 0x236D64u;
label_236d64:
    // 0x236d64: 0x1000005b  b           . + 4 + (0x5B << 2)
label_236d68:
    if (ctx->pc == 0x236D68u) {
        ctx->pc = 0x236D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D64u;
        // 0x236d68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D6Cu;
        goto label_236d6c;
    }
    ctx->pc = 0x236D64u;
    {
        const bool branch_taken_0x236d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D64u;
        // 0x236d68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d64) {
            ctx->pc = 0x236ED4u;
            goto label_236ed4;
        }
    }
    ctx->pc = 0x236D6Cu;
label_236d6c:
    // 0x236d6c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x236d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_236d70:
    // 0x236d70: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_236d74:
    if (ctx->pc == 0x236D74u) {
        ctx->pc = 0x236D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D70u;
        // 0x236d74: 0xae110424  sw          $s1, 0x424($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1060), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D78u;
        goto label_236d78;
    }
    ctx->pc = 0x236D70u;
    {
        const bool branch_taken_0x236d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236d70) {
            ctx->pc = 0x236D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236D70u;
            // 0x236d74: 0xae110424  sw          $s1, 0x424($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1060), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236D90u;
            goto label_236d90;
        }
    }
    ctx->pc = 0x236D78u;
label_236d78:
    // 0x236d78: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
label_236d7c:
    if (ctx->pc == 0x236D7Cu) {
        ctx->pc = 0x236D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D78u;
        // 0x236d7c: 0xae110424  sw          $s1, 0x424($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1060), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D80u;
        goto label_236d80;
    }
    ctx->pc = 0x236D78u;
    {
        const bool branch_taken_0x236d78 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x236d78) {
            ctx->pc = 0x236D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236D78u;
            // 0x236d7c: 0xae110424  sw          $s1, 0x424($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1060), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236D90u;
            goto label_236d90;
        }
    }
    ctx->pc = 0x236D80u;
label_236d80:
    // 0x236d80: 0x8e020228  lw          $v0, 0x228($s0)
    ctx->pc = 0x236d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
label_236d84:
    // 0x236d84: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_236d88:
    if (ctx->pc == 0x236D88u) {
        ctx->pc = 0x236D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D84u;
        // 0x236d88: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D8Cu;
        goto label_236d8c;
    }
    ctx->pc = 0x236D84u;
    {
        const bool branch_taken_0x236d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D84u;
        // 0x236d88: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d84) {
            ctx->pc = 0x236ED0u;
            goto label_236ed0;
        }
    }
    ctx->pc = 0x236D8Cu;
label_236d8c:
    // 0x236d8c: 0xae110424  sw          $s1, 0x424($s0)
    ctx->pc = 0x236d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1060), GPR_U32(ctx, 17));
label_236d90:
    // 0x236d90: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x236d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_236d94:
    // 0x236d94: 0x8e030338  lw          $v1, 0x338($s0)
    ctx->pc = 0x236d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_236d98:
    // 0x236d98: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x236d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_236d9c:
    // 0x236d9c: 0x1044004d  beq         $v0, $a0, . + 4 + (0x4D << 2)
label_236da0:
    if (ctx->pc == 0x236DA0u) {
        ctx->pc = 0x236DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D9Cu;
        // 0x236da0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236DA4u;
        goto label_236da4;
    }
    ctx->pc = 0x236D9Cu;
    {
        const bool branch_taken_0x236d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x236DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D9Cu;
        // 0x236da0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d9c) {
            ctx->pc = 0x236ED4u;
            goto label_236ed4;
        }
    }
    ctx->pc = 0x236DA4u;
label_236da4:
    // 0x236da4: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x236da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_236da8:
    // 0x236da8: 0x10440049  beq         $v0, $a0, . + 4 + (0x49 << 2)
label_236dac:
    if (ctx->pc == 0x236DACu) {
        ctx->pc = 0x236DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DA8u;
        // 0x236dac: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236DB0u;
        goto label_236db0;
    }
    ctx->pc = 0x236DA8u;
    {
        const bool branch_taken_0x236da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x236DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DA8u;
        // 0x236dac: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236da8) {
            ctx->pc = 0x236ED0u;
            goto label_236ed0;
        }
    }
    ctx->pc = 0x236DB0u;
label_236db0:
    // 0x236db0: 0x8e020224  lw          $v0, 0x224($s0)
    ctx->pc = 0x236db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_236db4:
    // 0x236db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236db8:
    // 0x236db8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x236db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_236dbc:
    // 0x236dbc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x236dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_236dc0:
    // 0x236dc0: 0xc0899bc  jal         func_2266F0
label_236dc4:
    if (ctx->pc == 0x236DC4u) {
        ctx->pc = 0x236DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DC0u;
        // 0x236dc4: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236DC8u;
        goto label_236dc8;
    }
    ctx->pc = 0x236DC0u;
    SET_GPR_U32(ctx, 31, 0x236DC8u);
    ctx->pc = 0x236DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236DC0u;
    // 0x236dc4: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x236DC0u, 0x236DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236DC8u;
label_236dc8:
    // 0x236dc8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_236dcc:
    if (ctx->pc == 0x236DCCu) {
        ctx->pc = 0x236DD0u;
        goto label_236dd0;
    }
    ctx->pc = 0x236DC8u;
    {
        const bool branch_taken_0x236dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236dc8) {
            ctx->pc = 0x236DF8u;
            goto label_236df8;
        }
    }
    ctx->pc = 0x236DD0u;
label_236dd0:
    // 0x236dd0: 0xc0899bc  jal         func_2266F0
label_236dd4:
    if (ctx->pc == 0x236DD4u) {
        ctx->pc = 0x236DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DD0u;
        // 0x236dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236DD8u;
        goto label_236dd8;
    }
    ctx->pc = 0x236DD0u;
    SET_GPR_U32(ctx, 31, 0x236DD8u);
    ctx->pc = 0x236DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236DD0u;
    // 0x236dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x236DD0u, 0x236DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236DD8u;
label_236dd8:
    // 0x236dd8: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x236dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
label_236ddc:
    // 0x236ddc: 0x8c6202e0  lw          $v0, 0x2E0($v1)
    ctx->pc = 0x236ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 736)));
label_236de0:
    // 0x236de0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_236de4:
    if (ctx->pc == 0x236DE4u) {
        ctx->pc = 0x236DE8u;
        goto label_236de8;
    }
    ctx->pc = 0x236DE0u;
    {
        const bool branch_taken_0x236de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236de0) {
            ctx->pc = 0x236DF8u;
            goto label_236df8;
        }
    }
    ctx->pc = 0x236DE8u;
label_236de8:
    // 0x236de8: 0xc0899bc  jal         func_2266F0
label_236dec:
    if (ctx->pc == 0x236DECu) {
        ctx->pc = 0x236DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DE8u;
        // 0x236dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236DF0u;
        goto label_236df0;
    }
    ctx->pc = 0x236DE8u;
    SET_GPR_U32(ctx, 31, 0x236DF0u);
    ctx->pc = 0x236DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236DE8u;
    // 0x236dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x236DE8u, 0x236DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236DF0u;
label_236df0:
    // 0x236df0: 0xc098554  jal         func_261550
label_236df4:
    if (ctx->pc == 0x236DF4u) {
        ctx->pc = 0x236DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DF0u;
        // 0x236df4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236DF8u;
        goto label_236df8;
    }
    ctx->pc = 0x236DF0u;
    SET_GPR_U32(ctx, 31, 0x236DF8u);
    ctx->pc = 0x236DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236DF0u;
    // 0x236df4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261550u, 0x236DF0u, 0x236DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236DF8u;
label_236df8:
    // 0x236df8: 0x1660000b  bnez        $s3, . + 4 + (0xB << 2)
label_236dfc:
    if (ctx->pc == 0x236DFCu) {
        ctx->pc = 0x236E00u;
        goto label_236e00;
    }
    ctx->pc = 0x236DF8u;
    {
        const bool branch_taken_0x236df8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x236df8) {
            ctx->pc = 0x236E28u;
            goto label_236e28;
        }
    }
    ctx->pc = 0x236E00u;
label_236e00:
    // 0x236e00: 0xc0899bc  jal         func_2266F0
label_236e04:
    if (ctx->pc == 0x236E04u) {
        ctx->pc = 0x236E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E00u;
        // 0x236e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E08u;
        goto label_236e08;
    }
    ctx->pc = 0x236E00u;
    SET_GPR_U32(ctx, 31, 0x236E08u);
    ctx->pc = 0x236E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E00u;
    // 0x236e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x236E00u, 0x236E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236E08u;
label_236e08:
    // 0x236e08: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_236e0c:
    if (ctx->pc == 0x236E0Cu) {
        ctx->pc = 0x236E10u;
        goto label_236e10;
    }
    ctx->pc = 0x236E08u;
    {
        const bool branch_taken_0x236e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236e08) {
            ctx->pc = 0x236E84u;
            goto label_236e84;
        }
    }
    ctx->pc = 0x236E10u;
label_236e10:
    // 0x236e10: 0xc0899bc  jal         func_2266F0
label_236e14:
    if (ctx->pc == 0x236E14u) {
        ctx->pc = 0x236E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E10u;
        // 0x236e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E18u;
        goto label_236e18;
    }
    ctx->pc = 0x236E10u;
    SET_GPR_U32(ctx, 31, 0x236E18u);
    ctx->pc = 0x236E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E10u;
    // 0x236e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x236E10u, 0x236E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236E18u;
label_236e18:
    // 0x236e18: 0xc097f2a  jal         func_25FCA8
label_236e1c:
    if (ctx->pc == 0x236E1Cu) {
        ctx->pc = 0x236E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E18u;
        // 0x236e1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E20u;
        goto label_236e20;
    }
    ctx->pc = 0x236E18u;
    SET_GPR_U32(ctx, 31, 0x236E20u);
    ctx->pc = 0x236E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E18u;
    // 0x236e1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA8u, 0x236E18u, 0x236E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236E20u;
label_236e20:
    // 0x236e20: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_236e24:
    if (ctx->pc == 0x236E24u) {
        ctx->pc = 0x236E28u;
        goto label_236e28;
    }
    ctx->pc = 0x236E20u;
    {
        const bool branch_taken_0x236e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236e20) {
            ctx->pc = 0x236E84u;
            goto label_236e84;
        }
    }
    ctx->pc = 0x236E28u;
label_236e28:
    // 0x236e28: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_236e2c:
    if (ctx->pc == 0x236E2Cu) {
        ctx->pc = 0x236E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E28u;
        // 0x236e2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E30u;
        goto label_236e30;
    }
    ctx->pc = 0x236E28u;
    {
        const bool branch_taken_0x236e28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x236E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E28u;
        // 0x236e2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236e28) {
            ctx->pc = 0x236E9Cu;
            goto label_236e9c;
        }
    }
    ctx->pc = 0x236E30u;
label_236e30:
    // 0x236e30: 0x56600006  bnel        $s3, $zero, . + 4 + (0x6 << 2)
label_236e34:
    if (ctx->pc == 0x236E34u) {
        ctx->pc = 0x236E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E30u;
        // 0x236e34: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E38u;
        goto label_236e38;
    }
    ctx->pc = 0x236E30u;
    {
        const bool branch_taken_0x236e30 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x236e30) {
            ctx->pc = 0x236E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236E30u;
            // 0x236e34: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236E4Cu;
            goto label_236e4c;
        }
    }
    ctx->pc = 0x236E38u;
label_236e38:
    // 0x236e38: 0xc097f2a  jal         func_25FCA8
label_236e3c:
    if (ctx->pc == 0x236E3Cu) {
        ctx->pc = 0x236E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E38u;
        // 0x236e3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E40u;
        goto label_236e40;
    }
    ctx->pc = 0x236E38u;
    SET_GPR_U32(ctx, 31, 0x236E40u);
    ctx->pc = 0x236E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E38u;
    // 0x236e3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA8u, 0x236E38u, 0x236E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236E40u;
label_236e40:
    // 0x236e40: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_236e44:
    if (ctx->pc == 0x236E44u) {
        ctx->pc = 0x236E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E40u;
        // 0x236e44: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E48u;
        goto label_236e48;
    }
    ctx->pc = 0x236E40u;
    {
        const bool branch_taken_0x236e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236e40) {
            ctx->pc = 0x236E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236E40u;
            // 0x236e44: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236E68u;
            goto label_236e68;
        }
    }
    ctx->pc = 0x236E48u;
label_236e48:
    // 0x236e48: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x236e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_236e4c:
    // 0x236e4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236e50:
    // 0x236e50: 0x8e050424  lw          $a1, 0x424($s0)
    ctx->pc = 0x236e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1060)));
label_236e54:
    // 0x236e54: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x236e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_236e58:
    // 0x236e58: 0x40f809  jalr        $v0
label_236e5c:
    if (ctx->pc == 0x236E5Cu) {
        ctx->pc = 0x236E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E58u;
        // 0x236e5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E60u;
        goto label_236e60;
    }
    ctx->pc = 0x236E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x236E60u);
        ctx->pc = 0x236E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E58u;
        // 0x236e5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236E58u, 0x236E60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236E60u;
label_236e60:
    // 0x236e60: 0x1000000e  b           . + 4 + (0xE << 2)
label_236e64:
    if (ctx->pc == 0x236E64u) {
        ctx->pc = 0x236E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E60u;
        // 0x236e64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E68u;
        goto label_236e68;
    }
    ctx->pc = 0x236E60u;
    {
        const bool branch_taken_0x236e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E60u;
        // 0x236e64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236e60) {
            ctx->pc = 0x236E9Cu;
            goto label_236e9c;
        }
    }
    ctx->pc = 0x236E68u;
label_236e68:
    // 0x236e68: 0xc06be26  jal         func_1AF898
label_236e6c:
    if (ctx->pc == 0x236E6Cu) {
        ctx->pc = 0x236E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E68u;
        // 0x236e6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E70u;
        goto label_236e70;
    }
    ctx->pc = 0x236E68u;
    SET_GPR_U32(ctx, 31, 0x236E70u);
    ctx->pc = 0x236E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E68u;
    // 0x236e6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF898u, 0x236E68u, 0x236E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236E70u;
label_236e70:
    // 0x236e70: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x236e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_236e74:
    // 0x236e74: 0xc06c546  jal         func_1B1518
label_236e78:
    if (ctx->pc == 0x236E78u) {
        ctx->pc = 0x236E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E74u;
        // 0x236e78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E7Cu;
        goto label_236e7c;
    }
    ctx->pc = 0x236E74u;
    SET_GPR_U32(ctx, 31, 0x236E7Cu);
    ctx->pc = 0x236E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E74u;
    // 0x236e78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x236E74u, 0x236E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236E7Cu;
label_236e7c:
    // 0x236e7c: 0x10000007  b           . + 4 + (0x7 << 2)
label_236e80:
    if (ctx->pc == 0x236E80u) {
        ctx->pc = 0x236E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E7Cu;
        // 0x236e80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E84u;
        goto label_236e84;
    }
    ctx->pc = 0x236E7Cu;
    {
        const bool branch_taken_0x236e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E7Cu;
        // 0x236e80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236e7c) {
            ctx->pc = 0x236E9Cu;
            goto label_236e9c;
        }
    }
    ctx->pc = 0x236E84u;
label_236e84:
    // 0x236e84: 0xc06bde8  jal         func_1AF7A0
label_236e88:
    if (ctx->pc == 0x236E88u) {
        ctx->pc = 0x236E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E84u;
        // 0x236e88: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E8Cu;
        goto label_236e8c;
    }
    ctx->pc = 0x236E84u;
    SET_GPR_U32(ctx, 31, 0x236E8Cu);
    ctx->pc = 0x236E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E84u;
    // 0x236e88: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF7A0u, 0x236E84u, 0x236E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236E8Cu;
label_236e8c:
    // 0x236e8c: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x236e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_236e90:
    // 0x236e90: 0xc06c546  jal         func_1B1518
label_236e94:
    if (ctx->pc == 0x236E94u) {
        ctx->pc = 0x236E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E90u;
        // 0x236e94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E98u;
        goto label_236e98;
    }
    ctx->pc = 0x236E90u;
    SET_GPR_U32(ctx, 31, 0x236E98u);
    ctx->pc = 0x236E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E90u;
    // 0x236e94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x236E90u, 0x236E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236E98u;
label_236e98:
    // 0x236e98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236e9c:
    // 0x236e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236ea0:
    // 0x236ea0: 0xc08fed2  jal         func_23FB48
label_236ea4:
    if (ctx->pc == 0x236EA4u) {
        ctx->pc = 0x236EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236EA0u;
        // 0x236ea4: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236EA8u;
        goto label_236ea8;
    }
    ctx->pc = 0x236EA0u;
    SET_GPR_U32(ctx, 31, 0x236EA8u);
    ctx->pc = 0x236EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236EA0u;
    // 0x236ea4: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x236EA0u, 0x236EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236EA8u;
label_236ea8:
    // 0x236ea8: 0x8e020370  lw          $v0, 0x370($s0)
    ctx->pc = 0x236ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
label_236eac:
    // 0x236eac: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x236eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_236eb0:
    // 0x236eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236eb4:
    // 0x236eb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x236eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236eb8:
    // 0x236eb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x236eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_236ebc:
    // 0x236ebc: 0xc08a15a  jal         func_228568
label_236ec0:
    if (ctx->pc == 0x236EC0u) {
        ctx->pc = 0x236EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236EBCu;
        // 0x236ec0: 0xae020370  sw          $v0, 0x370($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236EC4u;
        goto label_236ec4;
    }
    ctx->pc = 0x236EBCu;
    SET_GPR_U32(ctx, 31, 0x236EC4u);
    ctx->pc = 0x236EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236EBCu;
    // 0x236ec0: 0xae020370  sw          $v0, 0x370($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x236EBCu, 0x236EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236EC4u;
label_236ec4:
    // 0x236ec4: 0xc08ba82  jal         func_22EA08
label_236ec8:
    if (ctx->pc == 0x236EC8u) {
        ctx->pc = 0x236EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236EC4u;
        // 0x236ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236ECCu;
        goto label_236ecc;
    }
    ctx->pc = 0x236EC4u;
    SET_GPR_U32(ctx, 31, 0x236ECCu);
    ctx->pc = 0x236EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236EC4u;
    // 0x236ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA08u, 0x236EC4u, 0x236ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236ECCu;
label_236ecc:
    // 0x236ecc: 0xae0004f4  sw          $zero, 0x4F4($s0)
    ctx->pc = 0x236eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1268), GPR_U32(ctx, 0));
label_236ed0:
    // 0x236ed0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x236ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236ed4:
    // 0x236ed4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236ed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236ed8:
    // 0x236ed8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236ed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_236edc:
    // 0x236edc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x236edcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236ee0:
    // 0x236ee0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x236ee0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_236ee4:
    // 0x236ee4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x236ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_236ee8:
    // 0x236ee8: 0x3e00008  jr          $ra
label_236eec:
    if (ctx->pc == 0x236EECu) {
        ctx->pc = 0x236EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236EE8u;
        // 0x236eec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236EF0u;
        goto label_fallthrough_0x236ee8;
    }
    ctx->pc = 0x236EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236EE8u;
        // 0x236eec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x236ee8:
    ctx->pc = 0x236EF0u;
}
