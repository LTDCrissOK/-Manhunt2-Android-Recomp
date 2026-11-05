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

// Function: sub_00138C70
// Address: 0x138c70 - 0x138fb0
void sub_00138C70_0x138c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138C70_0x138c70");
#endif

    switch (ctx->pc) {
        case 0x138c70u: goto label_138c70;
        case 0x138c74u: goto label_138c74;
        case 0x138c78u: goto label_138c78;
        case 0x138c7cu: goto label_138c7c;
        case 0x138c80u: goto label_138c80;
        case 0x138c84u: goto label_138c84;
        case 0x138c88u: goto label_138c88;
        case 0x138c8cu: goto label_138c8c;
        case 0x138c90u: goto label_138c90;
        case 0x138c94u: goto label_138c94;
        case 0x138c98u: goto label_138c98;
        case 0x138c9cu: goto label_138c9c;
        case 0x138ca0u: goto label_138ca0;
        case 0x138ca4u: goto label_138ca4;
        case 0x138ca8u: goto label_138ca8;
        case 0x138cacu: goto label_138cac;
        case 0x138cb0u: goto label_138cb0;
        case 0x138cb4u: goto label_138cb4;
        case 0x138cb8u: goto label_138cb8;
        case 0x138cbcu: goto label_138cbc;
        case 0x138cc0u: goto label_138cc0;
        case 0x138cc4u: goto label_138cc4;
        case 0x138cc8u: goto label_138cc8;
        case 0x138cccu: goto label_138ccc;
        case 0x138cd0u: goto label_138cd0;
        case 0x138cd4u: goto label_138cd4;
        case 0x138cd8u: goto label_138cd8;
        case 0x138cdcu: goto label_138cdc;
        case 0x138ce0u: goto label_138ce0;
        case 0x138ce4u: goto label_138ce4;
        case 0x138ce8u: goto label_138ce8;
        case 0x138cecu: goto label_138cec;
        case 0x138cf0u: goto label_138cf0;
        case 0x138cf4u: goto label_138cf4;
        case 0x138cf8u: goto label_138cf8;
        case 0x138cfcu: goto label_138cfc;
        case 0x138d00u: goto label_138d00;
        case 0x138d04u: goto label_138d04;
        case 0x138d08u: goto label_138d08;
        case 0x138d0cu: goto label_138d0c;
        case 0x138d10u: goto label_138d10;
        case 0x138d14u: goto label_138d14;
        case 0x138d18u: goto label_138d18;
        case 0x138d1cu: goto label_138d1c;
        case 0x138d20u: goto label_138d20;
        case 0x138d24u: goto label_138d24;
        case 0x138d28u: goto label_138d28;
        case 0x138d2cu: goto label_138d2c;
        case 0x138d30u: goto label_138d30;
        case 0x138d34u: goto label_138d34;
        case 0x138d38u: goto label_138d38;
        case 0x138d3cu: goto label_138d3c;
        case 0x138d40u: goto label_138d40;
        case 0x138d44u: goto label_138d44;
        case 0x138d48u: goto label_138d48;
        case 0x138d4cu: goto label_138d4c;
        case 0x138d50u: goto label_138d50;
        case 0x138d54u: goto label_138d54;
        case 0x138d58u: goto label_138d58;
        case 0x138d5cu: goto label_138d5c;
        case 0x138d60u: goto label_138d60;
        case 0x138d64u: goto label_138d64;
        case 0x138d68u: goto label_138d68;
        case 0x138d6cu: goto label_138d6c;
        case 0x138d70u: goto label_138d70;
        case 0x138d74u: goto label_138d74;
        case 0x138d78u: goto label_138d78;
        case 0x138d7cu: goto label_138d7c;
        case 0x138d80u: goto label_138d80;
        case 0x138d84u: goto label_138d84;
        case 0x138d88u: goto label_138d88;
        case 0x138d8cu: goto label_138d8c;
        case 0x138d90u: goto label_138d90;
        case 0x138d94u: goto label_138d94;
        case 0x138d98u: goto label_138d98;
        case 0x138d9cu: goto label_138d9c;
        case 0x138da0u: goto label_138da0;
        case 0x138da4u: goto label_138da4;
        case 0x138da8u: goto label_138da8;
        case 0x138dacu: goto label_138dac;
        case 0x138db0u: goto label_138db0;
        case 0x138db4u: goto label_138db4;
        case 0x138db8u: goto label_138db8;
        case 0x138dbcu: goto label_138dbc;
        case 0x138dc0u: goto label_138dc0;
        case 0x138dc4u: goto label_138dc4;
        case 0x138dc8u: goto label_138dc8;
        case 0x138dccu: goto label_138dcc;
        case 0x138dd0u: goto label_138dd0;
        case 0x138dd4u: goto label_138dd4;
        case 0x138dd8u: goto label_138dd8;
        case 0x138ddcu: goto label_138ddc;
        case 0x138de0u: goto label_138de0;
        case 0x138de4u: goto label_138de4;
        case 0x138de8u: goto label_138de8;
        case 0x138decu: goto label_138dec;
        case 0x138df0u: goto label_138df0;
        case 0x138df4u: goto label_138df4;
        case 0x138df8u: goto label_138df8;
        case 0x138dfcu: goto label_138dfc;
        case 0x138e00u: goto label_138e00;
        case 0x138e04u: goto label_138e04;
        case 0x138e08u: goto label_138e08;
        case 0x138e0cu: goto label_138e0c;
        case 0x138e10u: goto label_138e10;
        case 0x138e14u: goto label_138e14;
        case 0x138e18u: goto label_138e18;
        case 0x138e1cu: goto label_138e1c;
        case 0x138e20u: goto label_138e20;
        case 0x138e24u: goto label_138e24;
        case 0x138e28u: goto label_138e28;
        case 0x138e2cu: goto label_138e2c;
        case 0x138e30u: goto label_138e30;
        case 0x138e34u: goto label_138e34;
        case 0x138e38u: goto label_138e38;
        case 0x138e3cu: goto label_138e3c;
        case 0x138e40u: goto label_138e40;
        case 0x138e44u: goto label_138e44;
        case 0x138e48u: goto label_138e48;
        case 0x138e4cu: goto label_138e4c;
        case 0x138e50u: goto label_138e50;
        case 0x138e54u: goto label_138e54;
        case 0x138e58u: goto label_138e58;
        case 0x138e5cu: goto label_138e5c;
        case 0x138e60u: goto label_138e60;
        case 0x138e64u: goto label_138e64;
        case 0x138e68u: goto label_138e68;
        case 0x138e6cu: goto label_138e6c;
        case 0x138e70u: goto label_138e70;
        case 0x138e74u: goto label_138e74;
        case 0x138e78u: goto label_138e78;
        case 0x138e7cu: goto label_138e7c;
        case 0x138e80u: goto label_138e80;
        case 0x138e84u: goto label_138e84;
        case 0x138e88u: goto label_138e88;
        case 0x138e8cu: goto label_138e8c;
        case 0x138e90u: goto label_138e90;
        case 0x138e94u: goto label_138e94;
        case 0x138e98u: goto label_138e98;
        case 0x138e9cu: goto label_138e9c;
        case 0x138ea0u: goto label_138ea0;
        case 0x138ea4u: goto label_138ea4;
        case 0x138ea8u: goto label_138ea8;
        case 0x138eacu: goto label_138eac;
        case 0x138eb0u: goto label_138eb0;
        case 0x138eb4u: goto label_138eb4;
        case 0x138eb8u: goto label_138eb8;
        case 0x138ebcu: goto label_138ebc;
        case 0x138ec0u: goto label_138ec0;
        case 0x138ec4u: goto label_138ec4;
        case 0x138ec8u: goto label_138ec8;
        case 0x138eccu: goto label_138ecc;
        case 0x138ed0u: goto label_138ed0;
        case 0x138ed4u: goto label_138ed4;
        case 0x138ed8u: goto label_138ed8;
        case 0x138edcu: goto label_138edc;
        case 0x138ee0u: goto label_138ee0;
        case 0x138ee4u: goto label_138ee4;
        case 0x138ee8u: goto label_138ee8;
        case 0x138eecu: goto label_138eec;
        case 0x138ef0u: goto label_138ef0;
        case 0x138ef4u: goto label_138ef4;
        case 0x138ef8u: goto label_138ef8;
        case 0x138efcu: goto label_138efc;
        case 0x138f00u: goto label_138f00;
        case 0x138f04u: goto label_138f04;
        case 0x138f08u: goto label_138f08;
        case 0x138f0cu: goto label_138f0c;
        case 0x138f10u: goto label_138f10;
        case 0x138f14u: goto label_138f14;
        case 0x138f18u: goto label_138f18;
        case 0x138f1cu: goto label_138f1c;
        case 0x138f20u: goto label_138f20;
        case 0x138f24u: goto label_138f24;
        case 0x138f28u: goto label_138f28;
        case 0x138f2cu: goto label_138f2c;
        case 0x138f30u: goto label_138f30;
        case 0x138f34u: goto label_138f34;
        case 0x138f38u: goto label_138f38;
        case 0x138f3cu: goto label_138f3c;
        case 0x138f40u: goto label_138f40;
        case 0x138f44u: goto label_138f44;
        case 0x138f48u: goto label_138f48;
        case 0x138f4cu: goto label_138f4c;
        case 0x138f50u: goto label_138f50;
        case 0x138f54u: goto label_138f54;
        case 0x138f58u: goto label_138f58;
        case 0x138f5cu: goto label_138f5c;
        case 0x138f60u: goto label_138f60;
        case 0x138f64u: goto label_138f64;
        case 0x138f68u: goto label_138f68;
        case 0x138f6cu: goto label_138f6c;
        case 0x138f70u: goto label_138f70;
        case 0x138f74u: goto label_138f74;
        case 0x138f78u: goto label_138f78;
        case 0x138f7cu: goto label_138f7c;
        case 0x138f80u: goto label_138f80;
        case 0x138f84u: goto label_138f84;
        case 0x138f88u: goto label_138f88;
        case 0x138f8cu: goto label_138f8c;
        case 0x138f90u: goto label_138f90;
        case 0x138f94u: goto label_138f94;
        case 0x138f98u: goto label_138f98;
        case 0x138f9cu: goto label_138f9c;
        case 0x138fa0u: goto label_138fa0;
        case 0x138fa4u: goto label_138fa4;
        case 0x138fa8u: goto label_138fa8;
        case 0x138facu: goto label_138fac;
        default: break;
    }

    ctx->pc = 0x138c70u;

label_138c70:
    // 0x138c70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x138c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_138c74:
    // 0x138c74: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x138c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_138c78:
    // 0x138c78: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x138c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_138c7c:
    // 0x138c7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x138c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_138c80:
    // 0x138c80: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x138c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_138c84:
    // 0x138c84: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x138c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_138c88:
    // 0x138c88: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x138c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_138c8c:
    // 0x138c8c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x138c8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_138c90:
    // 0x138c90: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x138c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_138c94:
    // 0x138c94: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x138c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_138c98:
    // 0x138c98: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x138c98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_138c9c:
    // 0x138c9c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x138c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_138ca0:
    // 0x138ca0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x138ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_138ca4:
    // 0x138ca4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x138ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_138ca8:
    // 0x138ca8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_138cac:
    if (ctx->pc == 0x138CACu) {
        ctx->pc = 0x138CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CA8u;
        // 0x138cac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138CB0u;
        goto label_138cb0;
    }
    ctx->pc = 0x138CA8u;
    {
        const bool branch_taken_0x138ca8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x138CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CA8u;
        // 0x138cac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ca8) {
            ctx->pc = 0x138CBCu;
            goto label_138cbc;
        }
    }
    ctx->pc = 0x138CB0u;
label_138cb0:
    // 0x138cb0: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x138cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_138cb4:
    // 0x138cb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x138cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_138cb8:
    // 0x138cb8: 0x24710070  addiu       $s1, $v1, 0x70
    ctx->pc = 0x138cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_138cbc:
    // 0x138cbc: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x138cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
label_138cc0:
    // 0x138cc0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x138cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_138cc4:
    // 0x138cc4: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x138cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
label_138cc8:
    // 0x138cc8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x138cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_138ccc:
    // 0x138ccc: 0x8c45020c  lw          $a1, 0x20C($v0)
    ctx->pc = 0x138cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_138cd0:
    // 0x138cd0: 0x10a000af  beqz        $a1, . + 4 + (0xAF << 2)
label_138cd4:
    if (ctx->pc == 0x138CD4u) {
        ctx->pc = 0x138CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CD0u;
        // 0x138cd4: 0x24660108  addiu       $a2, $v1, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138CD8u;
        goto label_138cd8;
    }
    ctx->pc = 0x138CD0u;
    {
        const bool branch_taken_0x138cd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x138CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CD0u;
        // 0x138cd4: 0x24660108  addiu       $a2, $v1, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138cd0) {
            ctx->pc = 0x138F90u;
            goto label_138f90;
        }
    }
    ctx->pc = 0x138CD8u;
label_138cd8:
    // 0x138cd8: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x138cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_138cdc:
    // 0x138cdc: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x138cdcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_138ce0:
    // 0x138ce0: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x138ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_138ce4:
    // 0x138ce4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x138ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_138ce8:
    // 0x138ce8: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x138ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
label_138cec:
    // 0x138cec: 0x544000a9  bnel        $v0, $zero, . + 4 + (0xA9 << 2)
label_138cf0:
    if (ctx->pc == 0x138CF0u) {
        ctx->pc = 0x138CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CECu;
        // 0x138cf0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138CF4u;
        goto label_138cf4;
    }
    ctx->pc = 0x138CECu;
    {
        const bool branch_taken_0x138cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138cec) {
            ctx->pc = 0x138CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138CECu;
            // 0x138cf0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138F94u;
            goto label_138f94;
        }
    }
    ctx->pc = 0x138CF4u;
label_138cf4:
    // 0x138cf4: 0x526000a7  beql        $s3, $zero, . + 4 + (0xA7 << 2)
label_138cf8:
    if (ctx->pc == 0x138CF8u) {
        ctx->pc = 0x138CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CF4u;
        // 0x138cf8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138CFCu;
        goto label_138cfc;
    }
    ctx->pc = 0x138CF4u;
    {
        const bool branch_taken_0x138cf4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x138cf4) {
            ctx->pc = 0x138CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138CF4u;
            // 0x138cf8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138F94u;
            goto label_138f94;
        }
    }
    ctx->pc = 0x138CFCu;
label_138cfc:
    // 0x138cfc: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x138cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_138d00:
    // 0x138d00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x138d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_138d04:
    // 0x138d04: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x138d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_138d08:
    // 0x138d08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x138d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_138d0c:
    // 0x138d0c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_138d10:
    if (ctx->pc == 0x138D10u) {
        ctx->pc = 0x138D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D0Cu;
        // 0x138d10: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138D14u;
        goto label_138d14;
    }
    ctx->pc = 0x138D0Cu;
    {
        const bool branch_taken_0x138d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138d0c) {
            ctx->pc = 0x138D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138D0Cu;
            // 0x138d10: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138D1Cu;
            goto label_138d1c;
        }
    }
    ctx->pc = 0x138D14u;
label_138d14:
    // 0x138d14: 0x10000003  b           . + 4 + (0x3 << 2)
label_138d18:
    if (ctx->pc == 0x138D18u) {
        ctx->pc = 0x138D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D14u;
        // 0x138d18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138D1Cu;
        goto label_138d1c;
    }
    ctx->pc = 0x138D14u;
    {
        const bool branch_taken_0x138d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D14u;
        // 0x138d18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d14) {
            ctx->pc = 0x138D24u;
            goto label_138d24;
        }
    }
    ctx->pc = 0x138D1Cu;
label_138d1c:
    // 0x138d1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x138d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_138d20:
    // 0x138d20: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x138d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_138d24:
    // 0x138d24: 0x5040009b  beql        $v0, $zero, . + 4 + (0x9B << 2)
label_138d28:
    if (ctx->pc == 0x138D28u) {
        ctx->pc = 0x138D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D24u;
        // 0x138d28: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138D2Cu;
        goto label_138d2c;
    }
    ctx->pc = 0x138D24u;
    {
        const bool branch_taken_0x138d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138d24) {
            ctx->pc = 0x138D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138D24u;
            // 0x138d28: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138F94u;
            goto label_138f94;
        }
    }
    ctx->pc = 0x138D2Cu;
label_138d2c:
    // 0x138d2c: 0x5220002a  beql        $s1, $zero, . + 4 + (0x2A << 2)
label_138d30:
    if (ctx->pc == 0x138D30u) {
        ctx->pc = 0x138D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D2Cu;
        // 0x138d30: 0x8e710334  lw          $s1, 0x334($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138D34u;
        goto label_138d34;
    }
    ctx->pc = 0x138D2Cu;
    {
        const bool branch_taken_0x138d2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x138d2c) {
            ctx->pc = 0x138D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138D2Cu;
            // 0x138d30: 0x8e710334  lw          $s1, 0x334($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138DD8u;
            goto label_138dd8;
        }
    }
    ctx->pc = 0x138D34u;
label_138d34:
    // 0x138d34: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x138d34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_138d38:
    // 0x138d38: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x138d38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_138d3c:
    // 0x138d3c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x138d3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_138d40:
    // 0x138d40: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x138d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_138d44:
    // 0x138d44: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x138d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_138d48:
    // 0x138d48: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x138d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_138d4c:
    // 0x138d4c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x138d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_138d50:
    // 0x138d50: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x138d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_138d54:
    // 0x138d54: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x138d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_138d58:
    // 0x138d58: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x138d58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_138d5c:
    // 0x138d5c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x138d5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_138d60:
    // 0x138d60: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x138d60u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_138d64:
    // 0x138d64: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x138d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_138d68:
    // 0x138d68: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x138d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_138d6c:
    // 0x138d6c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x138d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_138d70:
    // 0x138d70: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x138d70u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_138d74:
    // 0x138d74: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x138d74u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_138d78:
    // 0x138d78: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x138d78u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_138d7c:
    // 0x138d7c: 0x46010044  c1          0x10044
    ctx->pc = 0x138d7cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_138d80:
    // 0x138d80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x138d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_138d84:
    // 0x138d84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x138d84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_138d88:
    // 0x138d88: 0x0  nop
    ctx->pc = 0x138d88u;
    // NOP
label_138d8c:
    // 0x138d8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x138d8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_138d90:
    // 0x138d90: 0x0  nop
    ctx->pc = 0x138d90u;
    // NOP
label_138d94:
    // 0x138d94: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_138d98:
    if (ctx->pc == 0x138D98u) {
        ctx->pc = 0x138D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D94u;
        // 0x138d98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138D9Cu;
        goto label_138d9c;
    }
    ctx->pc = 0x138D94u;
    {
        const bool branch_taken_0x138d94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x138D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D94u;
        // 0x138d98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d94) {
            ctx->pc = 0x138DD4u;
            goto label_138dd4;
        }
    }
    ctx->pc = 0x138D9Cu;
label_138d9c:
    // 0x138d9c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x138d9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_138da0:
    // 0x138da0: 0xc04d8d6  jal         func_136358
label_138da4:
    if (ctx->pc == 0x138DA4u) {
        ctx->pc = 0x138DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138DA0u;
        // 0x138da4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138DA8u;
        goto label_138da8;
    }
    ctx->pc = 0x138DA0u;
    SET_GPR_U32(ctx, 31, 0x138DA8u);
    ctx->pc = 0x138DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138DA0u;
    // 0x138da4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x138DA0u, 0x138DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138DA8u;
label_138da8:
    // 0x138da8: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x138da8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_138dac:
    // 0x138dac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_138db0:
    // 0x138db0: 0xc04e1aa  jal         func_1386A8
label_138db4:
    if (ctx->pc == 0x138DB4u) {
        ctx->pc = 0x138DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138DB0u;
        // 0x138db4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138DB8u;
        goto label_138db8;
    }
    ctx->pc = 0x138DB0u;
    SET_GPR_U32(ctx, 31, 0x138DB8u);
    ctx->pc = 0x138DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138DB0u;
    // 0x138db4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1386A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1386A8u, 0x138DB0u, 0x138DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138DB8u;
label_138db8:
    // 0x138db8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x138db8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_138dbc:
    // 0x138dbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_138dc0:
    // 0x138dc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x138dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_138dc4:
    // 0x138dc4: 0xc04e2ce  jal         func_138B38
label_138dc8:
    if (ctx->pc == 0x138DC8u) {
        ctx->pc = 0x138DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138DC4u;
        // 0x138dc8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138DCCu;
        goto label_138dcc;
    }
    ctx->pc = 0x138DC4u;
    SET_GPR_U32(ctx, 31, 0x138DCCu);
    ctx->pc = 0x138DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138DC4u;
    // 0x138dc8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138B38u, 0x138DC4u, 0x138DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138DCCu;
label_138dcc:
    // 0x138dcc: 0x10000071  b           . + 4 + (0x71 << 2)
label_138dd0:
    if (ctx->pc == 0x138DD0u) {
        ctx->pc = 0x138DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138DCCu;
        // 0x138dd0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138DD4u;
        goto label_138dd4;
    }
    ctx->pc = 0x138DCCu;
    {
        const bool branch_taken_0x138dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138DCCu;
        // 0x138dd0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138dcc) {
            ctx->pc = 0x138F94u;
            goto label_138f94;
        }
    }
    ctx->pc = 0x138DD4u;
label_138dd4:
    // 0x138dd4: 0x8e710334  lw          $s1, 0x334($s3)
    ctx->pc = 0x138dd4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
label_138dd8:
    // 0x138dd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_138ddc:
    // 0x138ddc: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x138ddcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_138de0:
    // 0x138de0: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x138de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_138de4:
    // 0x138de4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x138de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_138de8:
    // 0x138de8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x138de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_138dec:
    // 0x138dec: 0xc04e1b0  jal         func_1386C0
label_138df0:
    if (ctx->pc == 0x138DF0u) {
        ctx->pc = 0x138DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138DECu;
        // 0x138df0: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138DF4u;
        goto label_138df4;
    }
    ctx->pc = 0x138DECu;
    SET_GPR_U32(ctx, 31, 0x138DF4u);
    ctx->pc = 0x138DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138DECu;
    // 0x138df0: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1386C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1386C0u, 0x138DECu, 0x138DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138DF4u;
label_138df4:
    // 0x138df4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x138df4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_138df8:
    // 0x138df8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_138dfc:
    // 0x138dfc: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
label_138e00:
    if (ctx->pc == 0x138E00u) {
        ctx->pc = 0x138E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138DFCu;
        // 0x138e00: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x138E04u;
        goto label_138e04;
    }
    ctx->pc = 0x138DFCu;
    {
        const bool branch_taken_0x138dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x138E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138DFCu;
        // 0x138e00: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x138dfc) {
            ctx->pc = 0x138E6Cu;
            goto label_138e6c;
        }
    }
    ctx->pc = 0x138E04u;
label_138e04:
    // 0x138e04: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_138e08:
    if (ctx->pc == 0x138E08u) {
        ctx->pc = 0x138E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138E04u;
        // 0x138e08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138E0Cu;
        goto label_138e0c;
    }
    ctx->pc = 0x138E04u;
    {
        const bool branch_taken_0x138e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138e04) {
            ctx->pc = 0x138E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138E04u;
            // 0x138e08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138E1Cu;
            goto label_138e1c;
        }
    }
    ctx->pc = 0x138E0Cu;
label_138e0c:
    // 0x138e0c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_138e10:
    if (ctx->pc == 0x138E10u) {
        ctx->pc = 0x138E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138E0Cu;
        // 0x138e10: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138E14u;
        goto label_138e14;
    }
    ctx->pc = 0x138E0Cu;
    {
        const bool branch_taken_0x138e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x138e0c) {
            ctx->pc = 0x138E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138E0Cu;
            // 0x138e10: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138E2Cu;
            goto label_138e2c;
        }
    }
    ctx->pc = 0x138E14u;
label_138e14:
    // 0x138e14: 0x1000005f  b           . + 4 + (0x5F << 2)
label_138e18:
    if (ctx->pc == 0x138E18u) {
        ctx->pc = 0x138E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138E14u;
        // 0x138e18: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138E1Cu;
        goto label_138e1c;
    }
    ctx->pc = 0x138E14u;
    {
        const bool branch_taken_0x138e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138E14u;
        // 0x138e18: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138e14) {
            ctx->pc = 0x138F94u;
            goto label_138f94;
        }
    }
    ctx->pc = 0x138E1Cu;
label_138e1c:
    // 0x138e1c: 0x5062004b  beql        $v1, $v0, . + 4 + (0x4B << 2)
label_138e20:
    if (ctx->pc == 0x138E20u) {
        ctx->pc = 0x138E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138E1Cu;
        // 0x138e20: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138E24u;
        goto label_138e24;
    }
    ctx->pc = 0x138E1Cu;
    {
        const bool branch_taken_0x138e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x138e1c) {
            ctx->pc = 0x138E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138E1Cu;
            // 0x138e20: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138F4Cu;
            goto label_138f4c;
        }
    }
    ctx->pc = 0x138E24u;
label_138e24:
    // 0x138e24: 0x1000005b  b           . + 4 + (0x5B << 2)
label_138e28:
    if (ctx->pc == 0x138E28u) {
        ctx->pc = 0x138E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138E24u;
        // 0x138e28: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138E2Cu;
        goto label_138e2c;
    }
    ctx->pc = 0x138E24u;
    {
        const bool branch_taken_0x138e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138E24u;
        // 0x138e28: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138e24) {
            ctx->pc = 0x138F94u;
            goto label_138f94;
        }
    }
    ctx->pc = 0x138E2Cu;
label_138e2c:
    // 0x138e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_138e30:
    // 0x138e30: 0xc04d8d6  jal         func_136358
label_138e34:
    if (ctx->pc == 0x138E34u) {
        ctx->pc = 0x138E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138E30u;
        // 0x138e34: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138E38u;
        goto label_138e38;
    }
    ctx->pc = 0x138E30u;
    SET_GPR_U32(ctx, 31, 0x138E38u);
    ctx->pc = 0x138E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138E30u;
    // 0x138e34: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x138E30u, 0x138E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138E38u;
label_138e38:
    // 0x138e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_138e3c:
    // 0x138e3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x138e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_138e40:
    // 0x138e40: 0xc04e1aa  jal         func_1386A8
label_138e44:
    if (ctx->pc == 0x138E44u) {
        ctx->pc = 0x138E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138E40u;
        // 0x138e44: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138E48u;
        goto label_138e48;
    }
    ctx->pc = 0x138E40u;
    SET_GPR_U32(ctx, 31, 0x138E48u);
    ctx->pc = 0x138E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138E40u;
    // 0x138e44: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1386A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1386A8u, 0x138E40u, 0x138E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138E48u;
label_138e48:
    // 0x138e48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x138e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_138e4c:
    // 0x138e4c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x138e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_138e50:
    // 0x138e50: 0xc069712  jal         func_1A5C48
label_138e54:
    if (ctx->pc == 0x138E54u) {
        ctx->pc = 0x138E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138E50u;
        // 0x138e54: 0x240606b6  addiu       $a2, $zero, 0x6B6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1718));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138E58u;
        goto label_138e58;
    }
    ctx->pc = 0x138E50u;
    SET_GPR_U32(ctx, 31, 0x138E58u);
    ctx->pc = 0x138E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138E50u;
    // 0x138e54: 0x240606b6  addiu       $a2, $zero, 0x6B6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1718));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x138E50u, 0x138E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138E58u;
label_138e58:
    // 0x138e58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x138e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_138e5c:
    // 0x138e5c: 0xc06a23e  jal         func_1A88F8
label_138e60:
    if (ctx->pc == 0x138E60u) {
        ctx->pc = 0x138E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138E5Cu;
        // 0x138e60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138E64u;
        goto label_138e64;
    }
    ctx->pc = 0x138E5Cu;
    SET_GPR_U32(ctx, 31, 0x138E64u);
    ctx->pc = 0x138E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138E5Cu;
    // 0x138e60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x138E5Cu, 0x138E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138E64u;
label_138e64:
    // 0x138e64: 0x1000004b  b           . + 4 + (0x4B << 2)
label_138e68:
    if (ctx->pc == 0x138E68u) {
        ctx->pc = 0x138E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138E64u;
        // 0x138e68: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138E6Cu;
        goto label_138e6c;
    }
    ctx->pc = 0x138E64u;
    {
        const bool branch_taken_0x138e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138E64u;
        // 0x138e68: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138e64) {
            ctx->pc = 0x138F94u;
            goto label_138f94;
        }
    }
    ctx->pc = 0x138E6Cu;
label_138e6c:
    // 0x138e6c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x138e6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_138e70:
    // 0x138e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_138e74:
    // 0x138e74: 0xc04d8d6  jal         func_136358
label_138e78:
    if (ctx->pc == 0x138E78u) {
        ctx->pc = 0x138E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138E74u;
        // 0x138e78: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138E7Cu;
        goto label_138e7c;
    }
    ctx->pc = 0x138E74u;
    SET_GPR_U32(ctx, 31, 0x138E7Cu);
    ctx->pc = 0x138E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138E74u;
    // 0x138e78: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x138E74u, 0x138E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138E7Cu;
label_138e7c:
    // 0x138e7c: 0x240206b6  addiu       $v0, $zero, 0x6B6
    ctx->pc = 0x138e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1718));
label_138e80:
    // 0x138e80: 0x12820043  beq         $s4, $v0, . + 4 + (0x43 << 2)
label_138e84:
    if (ctx->pc == 0x138E84u) {
        ctx->pc = 0x138E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138E80u;
        // 0x138e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138E88u;
        goto label_138e88;
    }
    ctx->pc = 0x138E80u;
    {
        const bool branch_taken_0x138e80 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x138E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138E80u;
        // 0x138e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138e80) {
            ctx->pc = 0x138F90u;
            goto label_138f90;
        }
    }
    ctx->pc = 0x138E88u;
label_138e88:
    // 0x138e88: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x138e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_138e8c:
    // 0x138e8c: 0xc04e1aa  jal         func_1386A8
label_138e90:
    if (ctx->pc == 0x138E90u) {
        ctx->pc = 0x138E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138E8Cu;
        // 0x138e90: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138E94u;
        goto label_138e94;
    }
    ctx->pc = 0x138E8Cu;
    SET_GPR_U32(ctx, 31, 0x138E94u);
    ctx->pc = 0x138E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138E8Cu;
    // 0x138e90: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1386A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1386A8u, 0x138E8Cu, 0x138E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138E94u;
label_138e94:
    // 0x138e94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x138e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_138e98:
    // 0x138e98: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x138e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_138e9c:
    // 0x138e9c: 0xc069712  jal         func_1A5C48
label_138ea0:
    if (ctx->pc == 0x138EA0u) {
        ctx->pc = 0x138EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138E9Cu;
        // 0x138ea0: 0x240606b7  addiu       $a2, $zero, 0x6B7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1719));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138EA4u;
        goto label_138ea4;
    }
    ctx->pc = 0x138E9Cu;
    SET_GPR_U32(ctx, 31, 0x138EA4u);
    ctx->pc = 0x138EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138E9Cu;
    // 0x138ea0: 0x240606b7  addiu       $a2, $zero, 0x6B7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1719));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x138E9Cu, 0x138EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138EA4u;
label_138ea4:
    // 0x138ea4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x138ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_138ea8:
    // 0x138ea8: 0xc06a23e  jal         func_1A88F8
label_138eac:
    if (ctx->pc == 0x138EACu) {
        ctx->pc = 0x138EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138EA8u;
        // 0x138eac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138EB0u;
        goto label_138eb0;
    }
    ctx->pc = 0x138EA8u;
    SET_GPR_U32(ctx, 31, 0x138EB0u);
    ctx->pc = 0x138EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138EA8u;
    // 0x138eac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x138EA8u, 0x138EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138EB0u;
label_138eb0:
    // 0x138eb0: 0x12400038  beqz        $s2, . + 4 + (0x38 << 2)
label_138eb4:
    if (ctx->pc == 0x138EB4u) {
        ctx->pc = 0x138EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138EB0u;
        // 0x138eb4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138EB8u;
        goto label_138eb8;
    }
    ctx->pc = 0x138EB0u;
    {
        const bool branch_taken_0x138eb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x138EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138EB0u;
        // 0x138eb4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138eb0) {
            ctx->pc = 0x138F94u;
            goto label_138f94;
        }
    }
    ctx->pc = 0x138EB8u;
label_138eb8:
    // 0x138eb8: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x138eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_138ebc:
    // 0x138ebc: 0x30421001  andi        $v0, $v0, 0x1001
    ctx->pc = 0x138ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4097);
label_138ec0:
    // 0x138ec0: 0x38421001  xori        $v0, $v0, 0x1001
    ctx->pc = 0x138ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4097);
label_138ec4:
    // 0x138ec4: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
label_138ec8:
    if (ctx->pc == 0x138EC8u) {
        ctx->pc = 0x138EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138EC4u;
        // 0x138ec8: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138ECCu;
        goto label_138ecc;
    }
    ctx->pc = 0x138EC4u;
    {
        const bool branch_taken_0x138ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138ec4) {
            ctx->pc = 0x138EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138EC4u;
            // 0x138ec8: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138F98u;
            goto label_138f98;
        }
    }
    ctx->pc = 0x138ECCu;
label_138ecc:
    // 0x138ecc: 0x8e420234  lw          $v0, 0x234($s2)
    ctx->pc = 0x138eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
label_138ed0:
    // 0x138ed0: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
label_138ed4:
    if (ctx->pc == 0x138ED4u) {
        ctx->pc = 0x138ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138ED0u;
        // 0x138ed4: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138ED8u;
        goto label_138ed8;
    }
    ctx->pc = 0x138ED0u;
    {
        const bool branch_taken_0x138ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138ed0) {
            ctx->pc = 0x138ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138ED0u;
            // 0x138ed4: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138F98u;
            goto label_138f98;
        }
    }
    ctx->pc = 0x138ED8u;
label_138ed8:
    // 0x138ed8: 0x8e700224  lw          $s0, 0x224($s3)
    ctx->pc = 0x138ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 548)));
label_138edc:
    // 0x138edc: 0xc097f2a  jal         func_25FCA8
label_138ee0:
    if (ctx->pc == 0x138EE0u) {
        ctx->pc = 0x138EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138EDCu;
        // 0x138ee0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138EE4u;
        goto label_138ee4;
    }
    ctx->pc = 0x138EDCu;
    SET_GPR_U32(ctx, 31, 0x138EE4u);
    ctx->pc = 0x138EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138EDCu;
    // 0x138ee0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA8u, 0x138EDCu, 0x138EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138EE4u;
label_138ee4:
    // 0x138ee4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x138ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_138ee8:
    // 0x138ee8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x138ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_138eec:
    // 0x138eec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x138eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_138ef0:
    // 0x138ef0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x138ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_138ef4:
    // 0x138ef4: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_138ef8:
    if (ctx->pc == 0x138EF8u) {
        ctx->pc = 0x138EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138EF4u;
        // 0x138ef8: 0x8e430218  lw          $v1, 0x218($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138EFCu;
        goto label_138efc;
    }
    ctx->pc = 0x138EF4u;
    {
        const bool branch_taken_0x138ef4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x138ef4) {
            ctx->pc = 0x138EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138EF4u;
            // 0x138ef8: 0x8e430218  lw          $v1, 0x218($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138F28u;
            goto label_138f28;
        }
    }
    ctx->pc = 0x138EFCu;
label_138efc:
    // 0x138efc: 0xc097f26  jal         func_25FC98
label_138f00:
    if (ctx->pc == 0x138F00u) {
        ctx->pc = 0x138F04u;
        goto label_138f04;
    }
    ctx->pc = 0x138EFCu;
    SET_GPR_U32(ctx, 31, 0x138F04u);
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x138EFCu, 0x138F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138F04u;
label_138f04:
    // 0x138f04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x138f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_138f08:
    // 0x138f08: 0xc097f26  jal         func_25FC98
label_138f0c:
    if (ctx->pc == 0x138F0Cu) {
        ctx->pc = 0x138F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F08u;
        // 0x138f0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138F10u;
        goto label_138f10;
    }
    ctx->pc = 0x138F08u;
    SET_GPR_U32(ctx, 31, 0x138F10u);
    ctx->pc = 0x138F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138F08u;
    // 0x138f0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x138F08u, 0x138F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138F10u;
label_138f10:
    // 0x138f10: 0x56020005  bnel        $s0, $v0, . + 4 + (0x5 << 2)
label_138f14:
    if (ctx->pc == 0x138F14u) {
        ctx->pc = 0x138F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F10u;
        // 0x138f14: 0x8e430218  lw          $v1, 0x218($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138F18u;
        goto label_138f18;
    }
    ctx->pc = 0x138F10u;
    {
        const bool branch_taken_0x138f10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x138f10) {
            ctx->pc = 0x138F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138F10u;
            // 0x138f14: 0x8e430218  lw          $v1, 0x218($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138F28u;
            goto label_138f28;
        }
    }
    ctx->pc = 0x138F18u;
label_138f18:
    // 0x138f18: 0xc0837b4  jal         func_20DED0
label_138f1c:
    if (ctx->pc == 0x138F1Cu) {
        ctx->pc = 0x138F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F18u;
        // 0x138f1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138F20u;
        goto label_138f20;
    }
    ctx->pc = 0x138F18u;
    SET_GPR_U32(ctx, 31, 0x138F20u);
    ctx->pc = 0x138F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138F18u;
    // 0x138f1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DED0u, 0x138F18u, 0x138F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138F20u;
label_138f20:
    // 0x138f20: 0x1000001c  b           . + 4 + (0x1C << 2)
label_138f24:
    if (ctx->pc == 0x138F24u) {
        ctx->pc = 0x138F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F20u;
        // 0x138f24: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138F28u;
        goto label_138f28;
    }
    ctx->pc = 0x138F20u;
    {
        const bool branch_taken_0x138f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F20u;
        // 0x138f24: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138f20) {
            ctx->pc = 0x138F94u;
            goto label_138f94;
        }
    }
    ctx->pc = 0x138F28u;
label_138f28:
    // 0x138f28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x138f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_138f2c:
    // 0x138f2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x138f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_138f30:
    // 0x138f30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x138f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_138f34:
    // 0x138f34: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x138f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_138f38:
    // 0x138f38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x138f38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_138f3c:
    // 0x138f3c: 0x40f809  jalr        $v0
label_138f40:
    if (ctx->pc == 0x138F40u) {
        ctx->pc = 0x138F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F3Cu;
        // 0x138f40: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138F44u;
        goto label_138f44;
    }
    ctx->pc = 0x138F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x138F44u);
        ctx->pc = 0x138F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F3Cu;
        // 0x138f40: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138F3Cu, 0x138F44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x138F44u;
label_138f44:
    // 0x138f44: 0x10000013  b           . + 4 + (0x13 << 2)
label_138f48:
    if (ctx->pc == 0x138F48u) {
        ctx->pc = 0x138F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F44u;
        // 0x138f48: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138F4Cu;
        goto label_138f4c;
    }
    ctx->pc = 0x138F44u;
    {
        const bool branch_taken_0x138f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F44u;
        // 0x138f48: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138f44) {
            ctx->pc = 0x138F94u;
            goto label_138f94;
        }
    }
    ctx->pc = 0x138F4Cu;
label_138f4c:
    // 0x138f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_138f50:
    // 0x138f50: 0xc04d8d6  jal         func_136358
label_138f54:
    if (ctx->pc == 0x138F54u) {
        ctx->pc = 0x138F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F50u;
        // 0x138f54: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138F58u;
        goto label_138f58;
    }
    ctx->pc = 0x138F50u;
    SET_GPR_U32(ctx, 31, 0x138F58u);
    ctx->pc = 0x138F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138F50u;
    // 0x138f54: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x138F50u, 0x138F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138F58u;
label_138f58:
    // 0x138f58: 0x240206b7  addiu       $v0, $zero, 0x6B7
    ctx->pc = 0x138f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1719));
label_138f5c:
    // 0x138f5c: 0x1282000c  beq         $s4, $v0, . + 4 + (0xC << 2)
label_138f60:
    if (ctx->pc == 0x138F60u) {
        ctx->pc = 0x138F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F5Cu;
        // 0x138f60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138F64u;
        goto label_138f64;
    }
    ctx->pc = 0x138F5Cu;
    {
        const bool branch_taken_0x138f5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x138F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F5Cu;
        // 0x138f60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138f5c) {
            ctx->pc = 0x138F90u;
            goto label_138f90;
        }
    }
    ctx->pc = 0x138F64u;
label_138f64:
    // 0x138f64: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x138f64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_138f68:
    // 0x138f68: 0xc04d8d6  jal         func_136358
label_138f6c:
    if (ctx->pc == 0x138F6Cu) {
        ctx->pc = 0x138F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F68u;
        // 0x138f6c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138F70u;
        goto label_138f70;
    }
    ctx->pc = 0x138F68u;
    SET_GPR_U32(ctx, 31, 0x138F70u);
    ctx->pc = 0x138F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138F68u;
    // 0x138f6c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x138F68u, 0x138F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138F70u;
label_138f70:
    // 0x138f70: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x138f70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_138f74:
    // 0x138f74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_138f78:
    // 0x138f78: 0xc04e1aa  jal         func_1386A8
label_138f7c:
    if (ctx->pc == 0x138F7Cu) {
        ctx->pc = 0x138F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F78u;
        // 0x138f7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138F80u;
        goto label_138f80;
    }
    ctx->pc = 0x138F78u;
    SET_GPR_U32(ctx, 31, 0x138F80u);
    ctx->pc = 0x138F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138F78u;
    // 0x138f7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1386A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1386A8u, 0x138F78u, 0x138F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138F80u;
label_138f80:
    // 0x138f80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_138f84:
    // 0x138f84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_138f88:
    // 0x138f88: 0xc04e19e  jal         func_138678
label_138f8c:
    if (ctx->pc == 0x138F8Cu) {
        ctx->pc = 0x138F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F88u;
        // 0x138f8c: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138F90u;
        goto label_138f90;
    }
    ctx->pc = 0x138F88u;
    SET_GPR_U32(ctx, 31, 0x138F90u);
    ctx->pc = 0x138F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138F88u;
    // 0x138f8c: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138678u, 0x138F88u, 0x138F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138F90u;
label_138f90:
    // 0x138f90: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x138f90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_138f94:
    // 0x138f94: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x138f94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_138f98:
    // 0x138f98: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x138f98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_138f9c:
    // 0x138f9c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x138f9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_138fa0:
    // 0x138fa0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x138fa0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_138fa4:
    // 0x138fa4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x138fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_138fa8:
    // 0x138fa8: 0x3e00008  jr          $ra
label_138fac:
    if (ctx->pc == 0x138FACu) {
        ctx->pc = 0x138FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138FA8u;
        // 0x138fac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138FB0u;
        goto label_fallthrough_0x138fa8;
    }
    ctx->pc = 0x138FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138FA8u;
        // 0x138fac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x138fa8:
    ctx->pc = 0x138FB0u;
}
