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

// Function: sub_00265B80
// Address: 0x265b80 - 0x265f70
void sub_00265B80_0x265b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265B80_0x265b80");
#endif

    switch (ctx->pc) {
        case 0x265b80u: goto label_265b80;
        case 0x265b84u: goto label_265b84;
        case 0x265b88u: goto label_265b88;
        case 0x265b8cu: goto label_265b8c;
        case 0x265b90u: goto label_265b90;
        case 0x265b94u: goto label_265b94;
        case 0x265b98u: goto label_265b98;
        case 0x265b9cu: goto label_265b9c;
        case 0x265ba0u: goto label_265ba0;
        case 0x265ba4u: goto label_265ba4;
        case 0x265ba8u: goto label_265ba8;
        case 0x265bacu: goto label_265bac;
        case 0x265bb0u: goto label_265bb0;
        case 0x265bb4u: goto label_265bb4;
        case 0x265bb8u: goto label_265bb8;
        case 0x265bbcu: goto label_265bbc;
        case 0x265bc0u: goto label_265bc0;
        case 0x265bc4u: goto label_265bc4;
        case 0x265bc8u: goto label_265bc8;
        case 0x265bccu: goto label_265bcc;
        case 0x265bd0u: goto label_265bd0;
        case 0x265bd4u: goto label_265bd4;
        case 0x265bd8u: goto label_265bd8;
        case 0x265bdcu: goto label_265bdc;
        case 0x265be0u: goto label_265be0;
        case 0x265be4u: goto label_265be4;
        case 0x265be8u: goto label_265be8;
        case 0x265becu: goto label_265bec;
        case 0x265bf0u: goto label_265bf0;
        case 0x265bf4u: goto label_265bf4;
        case 0x265bf8u: goto label_265bf8;
        case 0x265bfcu: goto label_265bfc;
        case 0x265c00u: goto label_265c00;
        case 0x265c04u: goto label_265c04;
        case 0x265c08u: goto label_265c08;
        case 0x265c0cu: goto label_265c0c;
        case 0x265c10u: goto label_265c10;
        case 0x265c14u: goto label_265c14;
        case 0x265c18u: goto label_265c18;
        case 0x265c1cu: goto label_265c1c;
        case 0x265c20u: goto label_265c20;
        case 0x265c24u: goto label_265c24;
        case 0x265c28u: goto label_265c28;
        case 0x265c2cu: goto label_265c2c;
        case 0x265c30u: goto label_265c30;
        case 0x265c34u: goto label_265c34;
        case 0x265c38u: goto label_265c38;
        case 0x265c3cu: goto label_265c3c;
        case 0x265c40u: goto label_265c40;
        case 0x265c44u: goto label_265c44;
        case 0x265c48u: goto label_265c48;
        case 0x265c4cu: goto label_265c4c;
        case 0x265c50u: goto label_265c50;
        case 0x265c54u: goto label_265c54;
        case 0x265c58u: goto label_265c58;
        case 0x265c5cu: goto label_265c5c;
        case 0x265c60u: goto label_265c60;
        case 0x265c64u: goto label_265c64;
        case 0x265c68u: goto label_265c68;
        case 0x265c6cu: goto label_265c6c;
        case 0x265c70u: goto label_265c70;
        case 0x265c74u: goto label_265c74;
        case 0x265c78u: goto label_265c78;
        case 0x265c7cu: goto label_265c7c;
        case 0x265c80u: goto label_265c80;
        case 0x265c84u: goto label_265c84;
        case 0x265c88u: goto label_265c88;
        case 0x265c8cu: goto label_265c8c;
        case 0x265c90u: goto label_265c90;
        case 0x265c94u: goto label_265c94;
        case 0x265c98u: goto label_265c98;
        case 0x265c9cu: goto label_265c9c;
        case 0x265ca0u: goto label_265ca0;
        case 0x265ca4u: goto label_265ca4;
        case 0x265ca8u: goto label_265ca8;
        case 0x265cacu: goto label_265cac;
        case 0x265cb0u: goto label_265cb0;
        case 0x265cb4u: goto label_265cb4;
        case 0x265cb8u: goto label_265cb8;
        case 0x265cbcu: goto label_265cbc;
        case 0x265cc0u: goto label_265cc0;
        case 0x265cc4u: goto label_265cc4;
        case 0x265cc8u: goto label_265cc8;
        case 0x265cccu: goto label_265ccc;
        case 0x265cd0u: goto label_265cd0;
        case 0x265cd4u: goto label_265cd4;
        case 0x265cd8u: goto label_265cd8;
        case 0x265cdcu: goto label_265cdc;
        case 0x265ce0u: goto label_265ce0;
        case 0x265ce4u: goto label_265ce4;
        case 0x265ce8u: goto label_265ce8;
        case 0x265cecu: goto label_265cec;
        case 0x265cf0u: goto label_265cf0;
        case 0x265cf4u: goto label_265cf4;
        case 0x265cf8u: goto label_265cf8;
        case 0x265cfcu: goto label_265cfc;
        case 0x265d00u: goto label_265d00;
        case 0x265d04u: goto label_265d04;
        case 0x265d08u: goto label_265d08;
        case 0x265d0cu: goto label_265d0c;
        case 0x265d10u: goto label_265d10;
        case 0x265d14u: goto label_265d14;
        case 0x265d18u: goto label_265d18;
        case 0x265d1cu: goto label_265d1c;
        case 0x265d20u: goto label_265d20;
        case 0x265d24u: goto label_265d24;
        case 0x265d28u: goto label_265d28;
        case 0x265d2cu: goto label_265d2c;
        case 0x265d30u: goto label_265d30;
        case 0x265d34u: goto label_265d34;
        case 0x265d38u: goto label_265d38;
        case 0x265d3cu: goto label_265d3c;
        case 0x265d40u: goto label_265d40;
        case 0x265d44u: goto label_265d44;
        case 0x265d48u: goto label_265d48;
        case 0x265d4cu: goto label_265d4c;
        case 0x265d50u: goto label_265d50;
        case 0x265d54u: goto label_265d54;
        case 0x265d58u: goto label_265d58;
        case 0x265d5cu: goto label_265d5c;
        case 0x265d60u: goto label_265d60;
        case 0x265d64u: goto label_265d64;
        case 0x265d68u: goto label_265d68;
        case 0x265d6cu: goto label_265d6c;
        case 0x265d70u: goto label_265d70;
        case 0x265d74u: goto label_265d74;
        case 0x265d78u: goto label_265d78;
        case 0x265d7cu: goto label_265d7c;
        case 0x265d80u: goto label_265d80;
        case 0x265d84u: goto label_265d84;
        case 0x265d88u: goto label_265d88;
        case 0x265d8cu: goto label_265d8c;
        case 0x265d90u: goto label_265d90;
        case 0x265d94u: goto label_265d94;
        case 0x265d98u: goto label_265d98;
        case 0x265d9cu: goto label_265d9c;
        case 0x265da0u: goto label_265da0;
        case 0x265da4u: goto label_265da4;
        case 0x265da8u: goto label_265da8;
        case 0x265dacu: goto label_265dac;
        case 0x265db0u: goto label_265db0;
        case 0x265db4u: goto label_265db4;
        case 0x265db8u: goto label_265db8;
        case 0x265dbcu: goto label_265dbc;
        case 0x265dc0u: goto label_265dc0;
        case 0x265dc4u: goto label_265dc4;
        case 0x265dc8u: goto label_265dc8;
        case 0x265dccu: goto label_265dcc;
        case 0x265dd0u: goto label_265dd0;
        case 0x265dd4u: goto label_265dd4;
        case 0x265dd8u: goto label_265dd8;
        case 0x265ddcu: goto label_265ddc;
        case 0x265de0u: goto label_265de0;
        case 0x265de4u: goto label_265de4;
        case 0x265de8u: goto label_265de8;
        case 0x265decu: goto label_265dec;
        case 0x265df0u: goto label_265df0;
        case 0x265df4u: goto label_265df4;
        case 0x265df8u: goto label_265df8;
        case 0x265dfcu: goto label_265dfc;
        case 0x265e00u: goto label_265e00;
        case 0x265e04u: goto label_265e04;
        case 0x265e08u: goto label_265e08;
        case 0x265e0cu: goto label_265e0c;
        case 0x265e10u: goto label_265e10;
        case 0x265e14u: goto label_265e14;
        case 0x265e18u: goto label_265e18;
        case 0x265e1cu: goto label_265e1c;
        case 0x265e20u: goto label_265e20;
        case 0x265e24u: goto label_265e24;
        case 0x265e28u: goto label_265e28;
        case 0x265e2cu: goto label_265e2c;
        case 0x265e30u: goto label_265e30;
        case 0x265e34u: goto label_265e34;
        case 0x265e38u: goto label_265e38;
        case 0x265e3cu: goto label_265e3c;
        case 0x265e40u: goto label_265e40;
        case 0x265e44u: goto label_265e44;
        case 0x265e48u: goto label_265e48;
        case 0x265e4cu: goto label_265e4c;
        case 0x265e50u: goto label_265e50;
        case 0x265e54u: goto label_265e54;
        case 0x265e58u: goto label_265e58;
        case 0x265e5cu: goto label_265e5c;
        case 0x265e60u: goto label_265e60;
        case 0x265e64u: goto label_265e64;
        case 0x265e68u: goto label_265e68;
        case 0x265e6cu: goto label_265e6c;
        case 0x265e70u: goto label_265e70;
        case 0x265e74u: goto label_265e74;
        case 0x265e78u: goto label_265e78;
        case 0x265e7cu: goto label_265e7c;
        case 0x265e80u: goto label_265e80;
        case 0x265e84u: goto label_265e84;
        case 0x265e88u: goto label_265e88;
        case 0x265e8cu: goto label_265e8c;
        case 0x265e90u: goto label_265e90;
        case 0x265e94u: goto label_265e94;
        case 0x265e98u: goto label_265e98;
        case 0x265e9cu: goto label_265e9c;
        case 0x265ea0u: goto label_265ea0;
        case 0x265ea4u: goto label_265ea4;
        case 0x265ea8u: goto label_265ea8;
        case 0x265eacu: goto label_265eac;
        case 0x265eb0u: goto label_265eb0;
        case 0x265eb4u: goto label_265eb4;
        case 0x265eb8u: goto label_265eb8;
        case 0x265ebcu: goto label_265ebc;
        case 0x265ec0u: goto label_265ec0;
        case 0x265ec4u: goto label_265ec4;
        case 0x265ec8u: goto label_265ec8;
        case 0x265eccu: goto label_265ecc;
        case 0x265ed0u: goto label_265ed0;
        case 0x265ed4u: goto label_265ed4;
        case 0x265ed8u: goto label_265ed8;
        case 0x265edcu: goto label_265edc;
        case 0x265ee0u: goto label_265ee0;
        case 0x265ee4u: goto label_265ee4;
        case 0x265ee8u: goto label_265ee8;
        case 0x265eecu: goto label_265eec;
        case 0x265ef0u: goto label_265ef0;
        case 0x265ef4u: goto label_265ef4;
        case 0x265ef8u: goto label_265ef8;
        case 0x265efcu: goto label_265efc;
        case 0x265f00u: goto label_265f00;
        case 0x265f04u: goto label_265f04;
        case 0x265f08u: goto label_265f08;
        case 0x265f0cu: goto label_265f0c;
        case 0x265f10u: goto label_265f10;
        case 0x265f14u: goto label_265f14;
        case 0x265f18u: goto label_265f18;
        case 0x265f1cu: goto label_265f1c;
        case 0x265f20u: goto label_265f20;
        case 0x265f24u: goto label_265f24;
        case 0x265f28u: goto label_265f28;
        case 0x265f2cu: goto label_265f2c;
        case 0x265f30u: goto label_265f30;
        case 0x265f34u: goto label_265f34;
        case 0x265f38u: goto label_265f38;
        case 0x265f3cu: goto label_265f3c;
        case 0x265f40u: goto label_265f40;
        case 0x265f44u: goto label_265f44;
        case 0x265f48u: goto label_265f48;
        case 0x265f4cu: goto label_265f4c;
        case 0x265f50u: goto label_265f50;
        case 0x265f54u: goto label_265f54;
        case 0x265f58u: goto label_265f58;
        case 0x265f5cu: goto label_265f5c;
        case 0x265f60u: goto label_265f60;
        case 0x265f64u: goto label_265f64;
        case 0x265f68u: goto label_265f68;
        case 0x265f6cu: goto label_265f6c;
        default: break;
    }

    ctx->pc = 0x265b80u;

label_265b80:
    // 0x265b80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x265b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_265b84:
    // 0x265b84: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x265b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_265b88:
    // 0x265b88: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x265b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_265b8c:
    // 0x265b8c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x265b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_265b90:
    // 0x265b90: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x265b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_265b94:
    // 0x265b94: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x265b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_265b98:
    // 0x265b98: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x265b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_265b9c:
    // 0x265b9c: 0xc09bf86  jal         func_26FE18
label_265ba0:
    if (ctx->pc == 0x265BA0u) {
        ctx->pc = 0x265BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265B9Cu;
        // 0x265ba0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265BA4u;
        goto label_265ba4;
    }
    ctx->pc = 0x265B9Cu;
    SET_GPR_U32(ctx, 31, 0x265BA4u);
    ctx->pc = 0x265BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265B9Cu;
    // 0x265ba0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FE18u, 0x265B9Cu, 0x265BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265BA4u;
label_265ba4:
    // 0x265ba4: 0x928202dc  lbu         $v0, 0x2DC($s4)
    ctx->pc = 0x265ba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 732)));
label_265ba8:
    // 0x265ba8: 0x104000e8  beqz        $v0, . + 4 + (0xE8 << 2)
label_265bac:
    if (ctx->pc == 0x265BACu) {
        ctx->pc = 0x265BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265BA8u;
        // 0x265bac: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265BB0u;
        goto label_265bb0;
    }
    ctx->pc = 0x265BA8u;
    {
        const bool branch_taken_0x265ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265BA8u;
        // 0x265bac: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265ba8) {
            ctx->pc = 0x265F4Cu;
            goto label_265f4c;
        }
    }
    ctx->pc = 0x265BB0u;
label_265bb0:
    // 0x265bb0: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x265bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_265bb4:
    // 0x265bb4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_265bb8:
    if (ctx->pc == 0x265BB8u) {
        ctx->pc = 0x265BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265BB4u;
        // 0x265bb8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265BBCu;
        goto label_265bbc;
    }
    ctx->pc = 0x265BB4u;
    {
        const bool branch_taken_0x265bb4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x265BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265BB4u;
        // 0x265bb8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265bb4) {
            ctx->pc = 0x265BD0u;
            goto label_265bd0;
        }
    }
    ctx->pc = 0x265BBCu;
label_265bbc:
    // 0x265bbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x265bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_265bc0:
    // 0x265bc0: 0x0  nop
    ctx->pc = 0x265bc0u;
    // NOP
label_265bc4:
    // 0x265bc4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x265bc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_265bc8:
    // 0x265bc8: 0x10000007  b           . + 4 + (0x7 << 2)
label_265bcc:
    if (ctx->pc == 0x265BCCu) {
        ctx->pc = 0x265BD0u;
        goto label_265bd0;
    }
    ctx->pc = 0x265BC8u;
    {
        const bool branch_taken_0x265bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265bc8) {
            ctx->pc = 0x265BE8u;
            goto label_265be8;
        }
    }
    ctx->pc = 0x265BD0u;
label_265bd0:
    // 0x265bd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x265bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_265bd4:
    // 0x265bd4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x265bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_265bd8:
    // 0x265bd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x265bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_265bdc:
    // 0x265bdc: 0x0  nop
    ctx->pc = 0x265bdcu;
    // NOP
label_265be0:
    // 0x265be0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x265be0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_265be4:
    // 0x265be4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x265be4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_265be8:
    // 0x265be8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x265be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_265bec:
    // 0x265bec: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x265becu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_265bf0:
    // 0x265bf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x265bf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_265bf4:
    // 0x265bf4: 0xc68202e0  lwc1        $f2, 0x2E0($s4)
    ctx->pc = 0x265bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_265bf8:
    // 0x265bf8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x265bf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_265bfc:
    // 0x265bfc: 0xc68102e4  lwc1        $f1, 0x2E4($s4)
    ctx->pc = 0x265bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_265c00:
    // 0x265c00: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x265c00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_265c04:
    // 0x265c04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x265c04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_265c08:
    // 0x265c08: 0x0  nop
    ctx->pc = 0x265c08u;
    // NOP
label_265c0c:
    // 0x265c0c: 0x450000d0  bc1f        . + 4 + (0xD0 << 2)
label_265c10:
    if (ctx->pc == 0x265C10u) {
        ctx->pc = 0x265C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265C0Cu;
        // 0x265c10: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265C14u;
        goto label_265c14;
    }
    ctx->pc = 0x265C0Cu;
    {
        const bool branch_taken_0x265c0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x265C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265C0Cu;
        // 0x265c10: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265c0c) {
            ctx->pc = 0x265F50u;
            goto label_265f50;
        }
    }
    ctx->pc = 0x265C14u;
label_265c14:
    // 0x265c14: 0xc099678  jal         func_2659E0
label_265c18:
    if (ctx->pc == 0x265C18u) {
        ctx->pc = 0x265C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265C14u;
        // 0x265c18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265C1Cu;
        goto label_265c1c;
    }
    ctx->pc = 0x265C14u;
    SET_GPR_U32(ctx, 31, 0x265C1Cu);
    ctx->pc = 0x265C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265C14u;
    // 0x265c18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2659E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2659E0u, 0x265C14u, 0x265C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265C1Cu;
label_265c1c:
    // 0x265c1c: 0xc0f6a96  jal         func_3DAA58
label_265c20:
    if (ctx->pc == 0x265C20u) {
        ctx->pc = 0x265C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265C1Cu;
        // 0x265c20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265C24u;
        goto label_265c24;
    }
    ctx->pc = 0x265C1Cu;
    SET_GPR_U32(ctx, 31, 0x265C24u);
    ctx->pc = 0x265C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265C1Cu;
    // 0x265c20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x265C1Cu, 0x265C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265C24u;
label_265c24:
    // 0x265c24: 0xc0f6a96  jal         func_3DAA58
label_265c28:
    if (ctx->pc == 0x265C28u) {
        ctx->pc = 0x265C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265C24u;
        // 0x265c28: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265C2Cu;
        goto label_265c2c;
    }
    ctx->pc = 0x265C24u;
    SET_GPR_U32(ctx, 31, 0x265C2Cu);
    ctx->pc = 0x265C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265C24u;
    // 0x265c28: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x265C24u, 0x265C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265C2Cu;
label_265c2c:
    // 0x265c2c: 0x8e85032c  lw          $a1, 0x32C($s4)
    ctx->pc = 0x265c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 812)));
label_265c30:
    // 0x265c30: 0x50a00083  beql        $a1, $zero, . + 4 + (0x83 << 2)
label_265c34:
    if (ctx->pc == 0x265C34u) {
        ctx->pc = 0x265C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265C30u;
        // 0x265c34: 0x8e830104  lw          $v1, 0x104($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265C38u;
        goto label_265c38;
    }
    ctx->pc = 0x265C30u;
    {
        const bool branch_taken_0x265c30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x265c30) {
            ctx->pc = 0x265C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265C30u;
            // 0x265c34: 0x8e830104  lw          $v1, 0x104($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265E40u;
            goto label_265e40;
        }
    }
    ctx->pc = 0x265C38u;
label_265c38:
    // 0x265c38: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x265c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
label_265c3c:
    // 0x265c3c: 0x24a40310  addiu       $a0, $a1, 0x310
    ctx->pc = 0x265c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 784));
label_265c40:
    // 0x265c40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x265c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_265c44:
    // 0x265c44: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x265c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_265c48:
    // 0x265c48: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x265c48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_265c4c:
    // 0x265c4c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x265c4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_265c50:
    // 0x265c50: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x265c50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_265c54:
    // 0x265c54: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x265c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_265c58:
    // 0x265c58: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x265c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_265c5c:
    // 0x265c5c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x265c5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_265c60:
    // 0x265c60: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x265c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265c64:
    // 0x265c64: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x265c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_265c68:
    // 0x265c68: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x265c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_265c6c:
    // 0x265c6c: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x265c6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_265c70:
    // 0x265c70: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x265c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_265c74:
    // 0x265c74: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x265c74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_265c78:
    // 0x265c78: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x265c78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_265c7c:
    // 0x265c7c: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x265c7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_265c80:
    // 0x265c80: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x265c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_265c84:
    // 0x265c84: 0x8ca30218  lw          $v1, 0x218($a1)
    ctx->pc = 0x265c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 536)));
label_265c88:
    // 0x265c88: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x265c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_265c8c:
    // 0x265c8c: 0x40f809  jalr        $v0
label_265c90:
    if (ctx->pc == 0x265C90u) {
        ctx->pc = 0x265C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265C8Cu;
        // 0x265c90: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265C94u;
        goto label_265c94;
    }
    ctx->pc = 0x265C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x265C94u);
        ctx->pc = 0x265C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265C8Cu;
        // 0x265c90: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265C8Cu, 0x265C94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x265C94u;
label_265c94:
    // 0x265c94: 0x8e84032c  lw          $a0, 0x32C($s4)
    ctx->pc = 0x265c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 812)));
label_265c98:
    // 0x265c98: 0x24830330  addiu       $v1, $a0, 0x330
    ctx->pc = 0x265c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 816));
label_265c9c:
    // 0x265c9c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x265c9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_265ca0:
    // 0x265ca0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x265ca0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_265ca4:
    // 0x265ca4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x265ca4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_265ca8:
    // 0x265ca8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x265ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_265cac:
    // 0x265cac: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x265cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_265cb0:
    // 0x265cb0: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x265cb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_265cb4:
    // 0x265cb4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x265cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265cb8:
    // 0x265cb8: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x265cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_265cbc:
    // 0x265cbc: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x265cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_265cc0:
    // 0x265cc0: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x265cc0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_265cc4:
    // 0x265cc4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x265cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_265cc8:
    // 0x265cc8: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x265cc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_265ccc:
    // 0x265ccc: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x265cccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_265cd0:
    // 0x265cd0: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x265cd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_265cd4:
    // 0x265cd4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x265cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_265cd8:
    // 0x265cd8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x265cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_265cdc:
    // 0x265cdc: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x265cdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_265ce0:
    // 0x265ce0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x265ce0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_265ce4:
    // 0x265ce4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x265ce4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_265ce8:
    // 0x265ce8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x265ce8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_265cec:
    // 0x265cec: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x265cecu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_265cf0:
    // 0x265cf0: 0x4a0003bf  vwaitq
    ctx->pc = 0x265cf0u;
    // VWAITQ (Q already resolved in this runtime)
label_265cf4:
    // 0x265cf4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x265cf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_265cf8:
    // 0x265cf8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x265cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_265cfc:
    // 0x265cfc: 0x3c134220  lui         $s3, 0x4220
    ctx->pc = 0x265cfcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16928 << 16));
label_265d00:
    // 0x265d00: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x265d00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_265d04:
    // 0x265d04: 0x48b31000  qmtc2.ni    $s3, $vf2
    ctx->pc = 0x265d04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 19));
label_265d08:
    // 0x265d08: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x265d08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_265d0c:
    // 0x265d0c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x265d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_265d10:
    // 0x265d10: 0x8c90010c  lw          $s0, 0x10C($a0)
    ctx->pc = 0x265d10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
label_265d14:
    // 0x265d14: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x265d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_265d18:
    // 0x265d18: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x265d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_265d1c:
    // 0x265d1c: 0x40f809  jalr        $v0
label_265d20:
    if (ctx->pc == 0x265D20u) {
        ctx->pc = 0x265D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265D1Cu;
        // 0x265d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265D24u;
        goto label_265d24;
    }
    ctx->pc = 0x265D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x265D24u);
        ctx->pc = 0x265D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265D1Cu;
        // 0x265d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265D1Cu, 0x265D24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x265D24u;
label_265d24:
    // 0x265d24: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x265d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_265d28:
    // 0x265d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x265d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_265d2c:
    // 0x265d2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_265d30:
    // 0x265d30: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x265d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_265d34:
    // 0x265d34: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x265d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_265d38:
    // 0x265d38: 0x40f809  jalr        $v0
label_265d3c:
    if (ctx->pc == 0x265D3Cu) {
        ctx->pc = 0x265D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265D38u;
        // 0x265d3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265D40u;
        goto label_265d40;
    }
    ctx->pc = 0x265D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x265D40u);
        ctx->pc = 0x265D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265D38u;
        // 0x265d3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265D38u, 0x265D40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x265D40u;
label_265d40:
    // 0x265d40: 0x8e830104  lw          $v1, 0x104($s4)
    ctx->pc = 0x265d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_265d44:
    // 0x265d44: 0x26840310  addiu       $a0, $s4, 0x310
    ctx->pc = 0x265d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 784));
label_265d48:
    // 0x265d48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x265d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_265d4c:
    // 0x265d4c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x265d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_265d50:
    // 0x265d50: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x265d50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_265d54:
    // 0x265d54: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x265d54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_265d58:
    // 0x265d58: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x265d58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_265d5c:
    // 0x265d5c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x265d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_265d60:
    // 0x265d60: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x265d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265d64:
    // 0x265d64: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x265d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_265d68:
    // 0x265d68: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x265d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_265d6c:
    // 0x265d6c: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x265d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_265d70:
    // 0x265d70: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x265d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_265d74:
    // 0x265d74: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x265d74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_265d78:
    // 0x265d78: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x265d78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_265d7c:
    // 0x265d7c: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x265d7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_265d80:
    // 0x265d80: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x265d80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_265d84:
    // 0x265d84: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x265d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_265d88:
    // 0x265d88: 0x8e830218  lw          $v1, 0x218($s4)
    ctx->pc = 0x265d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 536)));
label_265d8c:
    // 0x265d8c: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x265d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_265d90:
    // 0x265d90: 0x40f809  jalr        $v0
label_265d94:
    if (ctx->pc == 0x265D94u) {
        ctx->pc = 0x265D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265D90u;
        // 0x265d94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265D98u;
        goto label_265d98;
    }
    ctx->pc = 0x265D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x265D98u);
        ctx->pc = 0x265D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265D90u;
        // 0x265d94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265D90u, 0x265D98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x265D98u;
label_265d98:
    // 0x265d98: 0x26830330  addiu       $v1, $s4, 0x330
    ctx->pc = 0x265d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 816));
label_265d9c:
    // 0x265d9c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x265d9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_265da0:
    // 0x265da0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x265da0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_265da4:
    // 0x265da4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x265da4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_265da8:
    // 0x265da8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x265da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_265dac:
    // 0x265dac: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x265dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265db0:
    // 0x265db0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x265db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_265db4:
    // 0x265db4: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x265db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_265db8:
    // 0x265db8: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x265db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_265dbc:
    // 0x265dbc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x265dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_265dc0:
    // 0x265dc0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x265dc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_265dc4:
    // 0x265dc4: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x265dc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_265dc8:
    // 0x265dc8: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x265dc8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_265dcc:
    // 0x265dcc: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x265dccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_265dd0:
    // 0x265dd0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x265dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_265dd4:
    // 0x265dd4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x265dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_265dd8:
    // 0x265dd8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x265dd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_265ddc:
    // 0x265ddc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x265ddcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_265de0:
    // 0x265de0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x265de0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_265de4:
    // 0x265de4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x265de4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_265de8:
    // 0x265de8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x265de8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_265dec:
    // 0x265dec: 0x4a0003bf  vwaitq
    ctx->pc = 0x265decu;
    // VWAITQ (Q already resolved in this runtime)
label_265df0:
    // 0x265df0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x265df0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_265df4:
    // 0x265df4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x265df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_265df8:
    // 0x265df8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x265df8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_265dfc:
    // 0x265dfc: 0x48b31000  qmtc2.ni    $s3, $vf2
    ctx->pc = 0x265dfcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 19));
label_265e00:
    // 0x265e00: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x265e00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_265e04:
    // 0x265e04: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x265e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_265e08:
    // 0x265e08: 0x8e90010c  lw          $s0, 0x10C($s4)
    ctx->pc = 0x265e08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_265e0c:
    // 0x265e0c: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x265e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_265e10:
    // 0x265e10: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x265e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_265e14:
    // 0x265e14: 0x40f809  jalr        $v0
label_265e18:
    if (ctx->pc == 0x265E18u) {
        ctx->pc = 0x265E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E14u;
        // 0x265e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265E1Cu;
        goto label_265e1c;
    }
    ctx->pc = 0x265E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x265E1Cu);
        ctx->pc = 0x265E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E14u;
        // 0x265e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265E14u, 0x265E1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x265E1Cu;
label_265e1c:
    // 0x265e1c: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x265e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_265e20:
    // 0x265e20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x265e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_265e24:
    // 0x265e24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_265e28:
    // 0x265e28: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x265e28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_265e2c:
    // 0x265e2c: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x265e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_265e30:
    // 0x265e30: 0x40f809  jalr        $v0
label_265e34:
    if (ctx->pc == 0x265E34u) {
        ctx->pc = 0x265E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E30u;
        // 0x265e34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265E38u;
        goto label_265e38;
    }
    ctx->pc = 0x265E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x265E38u);
        ctx->pc = 0x265E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E30u;
        // 0x265e34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265E30u, 0x265E38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x265E38u;
label_265e38:
    // 0x265e38: 0x10000045  b           . + 4 + (0x45 << 2)
label_265e3c:
    if (ctx->pc == 0x265E3Cu) {
        ctx->pc = 0x265E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E38u;
        // 0x265e3c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265E40u;
        goto label_265e40;
    }
    ctx->pc = 0x265E38u;
    {
        const bool branch_taken_0x265e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E38u;
        // 0x265e3c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e38) {
            ctx->pc = 0x265F50u;
            goto label_265f50;
        }
    }
    ctx->pc = 0x265E40u;
label_265e40:
    // 0x265e40: 0x26840310  addiu       $a0, $s4, 0x310
    ctx->pc = 0x265e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 784));
label_265e44:
    // 0x265e44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x265e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_265e48:
    // 0x265e48: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x265e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_265e4c:
    // 0x265e4c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x265e4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_265e50:
    // 0x265e50: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x265e50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_265e54:
    // 0x265e54: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x265e54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_265e58:
    // 0x265e58: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x265e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_265e5c:
    // 0x265e5c: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x265e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_265e60:
    // 0x265e60: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x265e60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_265e64:
    // 0x265e64: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x265e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265e68:
    // 0x265e68: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x265e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_265e6c:
    // 0x265e6c: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x265e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_265e70:
    // 0x265e70: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x265e70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_265e74:
    // 0x265e74: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x265e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_265e78:
    // 0x265e78: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x265e78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_265e7c:
    // 0x265e7c: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x265e7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_265e80:
    // 0x265e80: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x265e80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_265e84:
    // 0x265e84: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x265e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_265e88:
    // 0x265e88: 0x8e830218  lw          $v1, 0x218($s4)
    ctx->pc = 0x265e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 536)));
label_265e8c:
    // 0x265e8c: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x265e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_265e90:
    // 0x265e90: 0x40f809  jalr        $v0
label_265e94:
    if (ctx->pc == 0x265E94u) {
        ctx->pc = 0x265E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E90u;
        // 0x265e94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265E98u;
        goto label_265e98;
    }
    ctx->pc = 0x265E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x265E98u);
        ctx->pc = 0x265E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E90u;
        // 0x265e94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265E90u, 0x265E98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x265E98u;
label_265e98:
    // 0x265e98: 0x26830330  addiu       $v1, $s4, 0x330
    ctx->pc = 0x265e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 816));
label_265e9c:
    // 0x265e9c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x265e9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_265ea0:
    // 0x265ea0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x265ea0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_265ea4:
    // 0x265ea4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x265ea4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_265ea8:
    // 0x265ea8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x265ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_265eac:
    // 0x265eac: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x265eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_265eb0:
    // 0x265eb0: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x265eb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_265eb4:
    // 0x265eb4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x265eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265eb8:
    // 0x265eb8: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x265eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_265ebc:
    // 0x265ebc: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x265ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_265ec0:
    // 0x265ec0: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x265ec0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_265ec4:
    // 0x265ec4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x265ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_265ec8:
    // 0x265ec8: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x265ec8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_265ecc:
    // 0x265ecc: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x265eccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_265ed0:
    // 0x265ed0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x265ed0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_265ed4:
    // 0x265ed4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x265ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_265ed8:
    // 0x265ed8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x265ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_265edc:
    // 0x265edc: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x265edcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_265ee0:
    // 0x265ee0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x265ee0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_265ee4:
    // 0x265ee4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x265ee4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_265ee8:
    // 0x265ee8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x265ee8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_265eec:
    // 0x265eec: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x265eecu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_265ef0:
    // 0x265ef0: 0x4a0003bf  vwaitq
    ctx->pc = 0x265ef0u;
    // VWAITQ (Q already resolved in this runtime)
label_265ef4:
    // 0x265ef4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x265ef4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_265ef8:
    // 0x265ef8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x265ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_265efc:
    // 0x265efc: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x265efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
label_265f00:
    // 0x265f00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x265f00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_265f04:
    // 0x265f04: 0x0  nop
    ctx->pc = 0x265f04u;
    // NOP
label_265f08:
    // 0x265f08: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x265f08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_265f0c:
    // 0x265f0c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x265f0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_265f10:
    // 0x265f10: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x265f10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_265f14:
    // 0x265f14: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x265f14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_265f18:
    // 0x265f18: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x265f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_265f1c:
    // 0x265f1c: 0x8e90010c  lw          $s0, 0x10C($s4)
    ctx->pc = 0x265f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_265f20:
    // 0x265f20: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x265f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_265f24:
    // 0x265f24: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x265f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_265f28:
    // 0x265f28: 0x40f809  jalr        $v0
label_265f2c:
    if (ctx->pc == 0x265F2Cu) {
        ctx->pc = 0x265F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265F28u;
        // 0x265f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265F30u;
        goto label_265f30;
    }
    ctx->pc = 0x265F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x265F30u);
        ctx->pc = 0x265F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265F28u;
        // 0x265f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265F28u, 0x265F30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x265F30u;
label_265f30:
    // 0x265f30: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x265f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_265f34:
    // 0x265f34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x265f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_265f38:
    // 0x265f38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x265f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_265f3c:
    // 0x265f3c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x265f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_265f40:
    // 0x265f40: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x265f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_265f44:
    // 0x265f44: 0x40f809  jalr        $v0
label_265f48:
    if (ctx->pc == 0x265F48u) {
        ctx->pc = 0x265F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265F44u;
        // 0x265f48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265F4Cu;
        goto label_265f4c;
    }
    ctx->pc = 0x265F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x265F4Cu);
        ctx->pc = 0x265F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265F44u;
        // 0x265f48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265F44u, 0x265F4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x265F4Cu;
label_265f4c:
    // 0x265f4c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x265f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_265f50:
    // 0x265f50: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x265f50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_265f54:
    // 0x265f54: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x265f54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_265f58:
    // 0x265f58: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x265f58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_265f5c:
    // 0x265f5c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x265f5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_265f60:
    // 0x265f60: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x265f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_265f64:
    // 0x265f64: 0x3e00008  jr          $ra
label_265f68:
    if (ctx->pc == 0x265F68u) {
        ctx->pc = 0x265F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265F64u;
        // 0x265f68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265F6Cu;
        goto label_265f6c;
    }
    ctx->pc = 0x265F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265F64u;
        // 0x265f68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265F6Cu;
label_265f6c:
    // 0x265f6c: 0x0  nop
    ctx->pc = 0x265f6cu;
    // NOP
    ctx->pc = 0x265f70u;
}
