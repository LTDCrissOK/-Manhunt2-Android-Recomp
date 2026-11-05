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

// Function: sub_00348B78
// Address: 0x348b78 - 0x348eb8
void sub_00348B78_0x348b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348B78_0x348b78");
#endif

    switch (ctx->pc) {
        case 0x348b78u: goto label_348b78;
        case 0x348b7cu: goto label_348b7c;
        case 0x348b80u: goto label_348b80;
        case 0x348b84u: goto label_348b84;
        case 0x348b88u: goto label_348b88;
        case 0x348b8cu: goto label_348b8c;
        case 0x348b90u: goto label_348b90;
        case 0x348b94u: goto label_348b94;
        case 0x348b98u: goto label_348b98;
        case 0x348b9cu: goto label_348b9c;
        case 0x348ba0u: goto label_348ba0;
        case 0x348ba4u: goto label_348ba4;
        case 0x348ba8u: goto label_348ba8;
        case 0x348bacu: goto label_348bac;
        case 0x348bb0u: goto label_348bb0;
        case 0x348bb4u: goto label_348bb4;
        case 0x348bb8u: goto label_348bb8;
        case 0x348bbcu: goto label_348bbc;
        case 0x348bc0u: goto label_348bc0;
        case 0x348bc4u: goto label_348bc4;
        case 0x348bc8u: goto label_348bc8;
        case 0x348bccu: goto label_348bcc;
        case 0x348bd0u: goto label_348bd0;
        case 0x348bd4u: goto label_348bd4;
        case 0x348bd8u: goto label_348bd8;
        case 0x348bdcu: goto label_348bdc;
        case 0x348be0u: goto label_348be0;
        case 0x348be4u: goto label_348be4;
        case 0x348be8u: goto label_348be8;
        case 0x348becu: goto label_348bec;
        case 0x348bf0u: goto label_348bf0;
        case 0x348bf4u: goto label_348bf4;
        case 0x348bf8u: goto label_348bf8;
        case 0x348bfcu: goto label_348bfc;
        case 0x348c00u: goto label_348c00;
        case 0x348c04u: goto label_348c04;
        case 0x348c08u: goto label_348c08;
        case 0x348c0cu: goto label_348c0c;
        case 0x348c10u: goto label_348c10;
        case 0x348c14u: goto label_348c14;
        case 0x348c18u: goto label_348c18;
        case 0x348c1cu: goto label_348c1c;
        case 0x348c20u: goto label_348c20;
        case 0x348c24u: goto label_348c24;
        case 0x348c28u: goto label_348c28;
        case 0x348c2cu: goto label_348c2c;
        case 0x348c30u: goto label_348c30;
        case 0x348c34u: goto label_348c34;
        case 0x348c38u: goto label_348c38;
        case 0x348c3cu: goto label_348c3c;
        case 0x348c40u: goto label_348c40;
        case 0x348c44u: goto label_348c44;
        case 0x348c48u: goto label_348c48;
        case 0x348c4cu: goto label_348c4c;
        case 0x348c50u: goto label_348c50;
        case 0x348c54u: goto label_348c54;
        case 0x348c58u: goto label_348c58;
        case 0x348c5cu: goto label_348c5c;
        case 0x348c60u: goto label_348c60;
        case 0x348c64u: goto label_348c64;
        case 0x348c68u: goto label_348c68;
        case 0x348c6cu: goto label_348c6c;
        case 0x348c70u: goto label_348c70;
        case 0x348c74u: goto label_348c74;
        case 0x348c78u: goto label_348c78;
        case 0x348c7cu: goto label_348c7c;
        case 0x348c80u: goto label_348c80;
        case 0x348c84u: goto label_348c84;
        case 0x348c88u: goto label_348c88;
        case 0x348c8cu: goto label_348c8c;
        case 0x348c90u: goto label_348c90;
        case 0x348c94u: goto label_348c94;
        case 0x348c98u: goto label_348c98;
        case 0x348c9cu: goto label_348c9c;
        case 0x348ca0u: goto label_348ca0;
        case 0x348ca4u: goto label_348ca4;
        case 0x348ca8u: goto label_348ca8;
        case 0x348cacu: goto label_348cac;
        case 0x348cb0u: goto label_348cb0;
        case 0x348cb4u: goto label_348cb4;
        case 0x348cb8u: goto label_348cb8;
        case 0x348cbcu: goto label_348cbc;
        case 0x348cc0u: goto label_348cc0;
        case 0x348cc4u: goto label_348cc4;
        case 0x348cc8u: goto label_348cc8;
        case 0x348cccu: goto label_348ccc;
        case 0x348cd0u: goto label_348cd0;
        case 0x348cd4u: goto label_348cd4;
        case 0x348cd8u: goto label_348cd8;
        case 0x348cdcu: goto label_348cdc;
        case 0x348ce0u: goto label_348ce0;
        case 0x348ce4u: goto label_348ce4;
        case 0x348ce8u: goto label_348ce8;
        case 0x348cecu: goto label_348cec;
        case 0x348cf0u: goto label_348cf0;
        case 0x348cf4u: goto label_348cf4;
        case 0x348cf8u: goto label_348cf8;
        case 0x348cfcu: goto label_348cfc;
        case 0x348d00u: goto label_348d00;
        case 0x348d04u: goto label_348d04;
        case 0x348d08u: goto label_348d08;
        case 0x348d0cu: goto label_348d0c;
        case 0x348d10u: goto label_348d10;
        case 0x348d14u: goto label_348d14;
        case 0x348d18u: goto label_348d18;
        case 0x348d1cu: goto label_348d1c;
        case 0x348d20u: goto label_348d20;
        case 0x348d24u: goto label_348d24;
        case 0x348d28u: goto label_348d28;
        case 0x348d2cu: goto label_348d2c;
        case 0x348d30u: goto label_348d30;
        case 0x348d34u: goto label_348d34;
        case 0x348d38u: goto label_348d38;
        case 0x348d3cu: goto label_348d3c;
        case 0x348d40u: goto label_348d40;
        case 0x348d44u: goto label_348d44;
        case 0x348d48u: goto label_348d48;
        case 0x348d4cu: goto label_348d4c;
        case 0x348d50u: goto label_348d50;
        case 0x348d54u: goto label_348d54;
        case 0x348d58u: goto label_348d58;
        case 0x348d5cu: goto label_348d5c;
        case 0x348d60u: goto label_348d60;
        case 0x348d64u: goto label_348d64;
        case 0x348d68u: goto label_348d68;
        case 0x348d6cu: goto label_348d6c;
        case 0x348d70u: goto label_348d70;
        case 0x348d74u: goto label_348d74;
        case 0x348d78u: goto label_348d78;
        case 0x348d7cu: goto label_348d7c;
        case 0x348d80u: goto label_348d80;
        case 0x348d84u: goto label_348d84;
        case 0x348d88u: goto label_348d88;
        case 0x348d8cu: goto label_348d8c;
        case 0x348d90u: goto label_348d90;
        case 0x348d94u: goto label_348d94;
        case 0x348d98u: goto label_348d98;
        case 0x348d9cu: goto label_348d9c;
        case 0x348da0u: goto label_348da0;
        case 0x348da4u: goto label_348da4;
        case 0x348da8u: goto label_348da8;
        case 0x348dacu: goto label_348dac;
        case 0x348db0u: goto label_348db0;
        case 0x348db4u: goto label_348db4;
        case 0x348db8u: goto label_348db8;
        case 0x348dbcu: goto label_348dbc;
        case 0x348dc0u: goto label_348dc0;
        case 0x348dc4u: goto label_348dc4;
        case 0x348dc8u: goto label_348dc8;
        case 0x348dccu: goto label_348dcc;
        case 0x348dd0u: goto label_348dd0;
        case 0x348dd4u: goto label_348dd4;
        case 0x348dd8u: goto label_348dd8;
        case 0x348ddcu: goto label_348ddc;
        case 0x348de0u: goto label_348de0;
        case 0x348de4u: goto label_348de4;
        case 0x348de8u: goto label_348de8;
        case 0x348decu: goto label_348dec;
        case 0x348df0u: goto label_348df0;
        case 0x348df4u: goto label_348df4;
        case 0x348df8u: goto label_348df8;
        case 0x348dfcu: goto label_348dfc;
        case 0x348e00u: goto label_348e00;
        case 0x348e04u: goto label_348e04;
        case 0x348e08u: goto label_348e08;
        case 0x348e0cu: goto label_348e0c;
        case 0x348e10u: goto label_348e10;
        case 0x348e14u: goto label_348e14;
        case 0x348e18u: goto label_348e18;
        case 0x348e1cu: goto label_348e1c;
        case 0x348e20u: goto label_348e20;
        case 0x348e24u: goto label_348e24;
        case 0x348e28u: goto label_348e28;
        case 0x348e2cu: goto label_348e2c;
        case 0x348e30u: goto label_348e30;
        case 0x348e34u: goto label_348e34;
        case 0x348e38u: goto label_348e38;
        case 0x348e3cu: goto label_348e3c;
        case 0x348e40u: goto label_348e40;
        case 0x348e44u: goto label_348e44;
        case 0x348e48u: goto label_348e48;
        case 0x348e4cu: goto label_348e4c;
        case 0x348e50u: goto label_348e50;
        case 0x348e54u: goto label_348e54;
        case 0x348e58u: goto label_348e58;
        case 0x348e5cu: goto label_348e5c;
        case 0x348e60u: goto label_348e60;
        case 0x348e64u: goto label_348e64;
        case 0x348e68u: goto label_348e68;
        case 0x348e6cu: goto label_348e6c;
        case 0x348e70u: goto label_348e70;
        case 0x348e74u: goto label_348e74;
        case 0x348e78u: goto label_348e78;
        case 0x348e7cu: goto label_348e7c;
        case 0x348e80u: goto label_348e80;
        case 0x348e84u: goto label_348e84;
        case 0x348e88u: goto label_348e88;
        case 0x348e8cu: goto label_348e8c;
        case 0x348e90u: goto label_348e90;
        case 0x348e94u: goto label_348e94;
        case 0x348e98u: goto label_348e98;
        case 0x348e9cu: goto label_348e9c;
        case 0x348ea0u: goto label_348ea0;
        case 0x348ea4u: goto label_348ea4;
        case 0x348ea8u: goto label_348ea8;
        case 0x348eacu: goto label_348eac;
        case 0x348eb0u: goto label_348eb0;
        case 0x348eb4u: goto label_348eb4;
        default: break;
    }

    ctx->pc = 0x348b78u;

label_348b78:
    // 0x348b78: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x348b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_348b7c:
    // 0x348b7c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x348b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_348b80:
    // 0x348b80: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x348b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
label_348b84:
    // 0x348b84: 0x24a56558  addiu       $a1, $a1, 0x6558
    ctx->pc = 0x348b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25944));
label_348b88:
    // 0x348b88: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x348b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_348b8c:
    // 0x348b8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x348b8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_348b90:
    // 0x348b90: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x348b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
label_348b94:
    // 0x348b94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x348b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_348b98:
    // 0x348b98: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x348b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
label_348b9c:
    // 0x348b9c: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x348b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
label_348ba0:
    // 0x348ba0: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x348ba0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
label_348ba4:
    // 0x348ba4: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x348ba4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_348ba8:
    // 0x348ba8: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x348ba8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_348bac:
    // 0x348bac: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x348bacu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
label_348bb0:
    // 0x348bb0: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x348bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_348bb4:
    // 0x348bb4: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x348bb4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_348bb8:
    // 0x348bb8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x348bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_348bbc:
    // 0x348bbc: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x348bbcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_348bc0:
    // 0x348bc0: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x348bc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_348bc4:
    // 0x348bc4: 0xc0d7424  jal         func_35D090
label_348bc8:
    if (ctx->pc == 0x348BC8u) {
        ctx->pc = 0x348BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348BC4u;
        // 0x348bc8: 0xae200074  sw          $zero, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348BCCu;
        goto label_348bcc;
    }
    ctx->pc = 0x348BC4u;
    SET_GPR_U32(ctx, 31, 0x348BCCu);
    ctx->pc = 0x348BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348BC4u;
    // 0x348bc8: 0xae200074  sw          $zero, 0x74($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x348BC4u, 0x348BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348BCCu;
label_348bcc:
    // 0x348bcc: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x348bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_348bd0:
    // 0x348bd0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x348bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_348bd4:
    // 0x348bd4: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x348bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_348bd8:
    // 0x348bd8: 0x245334c0  addiu       $s3, $v0, 0x34C0
    ctx->pc = 0x348bd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 13504));
label_348bdc:
    // 0x348bdc: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x348bdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_348be0:
    // 0x348be0: 0x27b50070  addiu       $s5, $sp, 0x70
    ctx->pc = 0x348be0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_348be4:
    // 0x348be4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x348be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_348be8:
    // 0x348be8: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x348be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
label_348bec:
    // 0x348bec: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x348becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_348bf0:
    // 0x348bf0: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x348bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
label_348bf4:
    // 0x348bf4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x348bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_348bf8:
    // 0x348bf8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x348bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_348bfc:
    // 0x348bfc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_348c00:
    if (ctx->pc == 0x348C00u) {
        ctx->pc = 0x348C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348BFCu;
        // 0x348c00: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348C04u;
        goto label_348c04;
    }
    ctx->pc = 0x348BFCu;
    {
        const bool branch_taken_0x348bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348BFCu;
        // 0x348c00: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348bfc) {
            ctx->pc = 0x348C60u;
            goto label_348c60;
        }
    }
    ctx->pc = 0x348C04u;
label_348c04:
    // 0x348c04: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x348c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_348c08:
    // 0x348c08: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x348c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_348c0c:
    // 0x348c0c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x348c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_348c10:
    // 0x348c10: 0xc0d73cc  jal         func_35CF30
label_348c14:
    if (ctx->pc == 0x348C14u) {
        ctx->pc = 0x348C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C10u;
        // 0x348c14: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348C18u;
        goto label_348c18;
    }
    ctx->pc = 0x348C10u;
    SET_GPR_U32(ctx, 31, 0x348C18u);
    ctx->pc = 0x348C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348C10u;
    // 0x348c14: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x348C10u, 0x348C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348C18u;
label_348c18:
    // 0x348c18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x348c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_348c1c:
    // 0x348c1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_348c20:
    if (ctx->pc == 0x348C20u) {
        ctx->pc = 0x348C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C1Cu;
        // 0x348c20: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348C24u;
        goto label_348c24;
    }
    ctx->pc = 0x348C1Cu;
    {
        const bool branch_taken_0x348c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C1Cu;
        // 0x348c20: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348c1c) {
            ctx->pc = 0x348C2Cu;
            goto label_348c2c;
        }
    }
    ctx->pc = 0x348C24u;
label_348c24:
    // 0x348c24: 0x1000000e  b           . + 4 + (0xE << 2)
label_348c28:
    if (ctx->pc == 0x348C28u) {
        ctx->pc = 0x348C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C24u;
        // 0x348c28: 0xae300074  sw          $s0, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348C2Cu;
        goto label_348c2c;
    }
    ctx->pc = 0x348C24u;
    {
        const bool branch_taken_0x348c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C24u;
        // 0x348c28: 0xae300074  sw          $s0, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348c24) {
            ctx->pc = 0x348C60u;
            goto label_348c60;
        }
    }
    ctx->pc = 0x348C2Cu;
label_348c2c:
    // 0x348c2c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_348c30:
    if (ctx->pc == 0x348C30u) {
        ctx->pc = 0x348C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C2Cu;
        // 0x348c30: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348C34u;
        goto label_348c34;
    }
    ctx->pc = 0x348C2Cu;
    {
        const bool branch_taken_0x348c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x348c2c) {
            ctx->pc = 0x348C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348C2Cu;
            // 0x348c30: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348C40u;
            goto label_348c40;
        }
    }
    ctx->pc = 0x348C34u;
label_348c34:
    // 0x348c34: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x348c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_348c38:
    // 0x348c38: 0x10000005  b           . + 4 + (0x5 << 2)
label_348c3c:
    if (ctx->pc == 0x348C3Cu) {
        ctx->pc = 0x348C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C38u;
        // 0x348c3c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348C40u;
        goto label_348c40;
    }
    ctx->pc = 0x348C38u;
    {
        const bool branch_taken_0x348c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C38u;
        // 0x348c3c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348c38) {
            ctx->pc = 0x348C50u;
            goto label_348c50;
        }
    }
    ctx->pc = 0x348C40u;
label_348c40:
    // 0x348c40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_348c44:
    if (ctx->pc == 0x348C44u) {
        ctx->pc = 0x348C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C40u;
        // 0x348c44: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348C48u;
        goto label_348c48;
    }
    ctx->pc = 0x348C40u;
    {
        const bool branch_taken_0x348c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C40u;
        // 0x348c44: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348c40) {
            ctx->pc = 0x348C54u;
            goto label_348c54;
        }
    }
    ctx->pc = 0x348C48u;
label_348c48:
    // 0x348c48: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x348c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_348c4c:
    // 0x348c4c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x348c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_348c50:
    // 0x348c50: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x348c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_348c54:
    // 0x348c54: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x348c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_348c58:
    // 0x348c58: 0x1462ffeb  bne         $v1, $v0, . + 4 + (-0x15 << 2)
label_348c5c:
    if (ctx->pc == 0x348C5Cu) {
        ctx->pc = 0x348C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C58u;
        // 0x348c5c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348C60u;
        goto label_348c60;
    }
    ctx->pc = 0x348C58u;
    {
        const bool branch_taken_0x348c58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x348C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C58u;
        // 0x348c5c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348c58) {
            ctx->pc = 0x348C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_348c08;
        }
    }
    ctx->pc = 0x348C60u;
label_348c60:
    // 0x348c60: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x348c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_348c64:
    // 0x348c64: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_348c68:
    if (ctx->pc == 0x348C68u) {
        ctx->pc = 0x348C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C64u;
        // 0x348c68: 0x240402e0  addiu       $a0, $zero, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348C6Cu;
        goto label_348c6c;
    }
    ctx->pc = 0x348C64u;
    {
        const bool branch_taken_0x348c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x348c64) {
            ctx->pc = 0x348C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348C64u;
            // 0x348c68: 0x240402e0  addiu       $a0, $zero, 0x2E0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348CD8u;
            goto label_348cd8;
        }
    }
    ctx->pc = 0x348C6Cu;
label_348c6c:
    // 0x348c6c: 0xc0f5240  jal         func_3D4900
label_348c70:
    if (ctx->pc == 0x348C70u) {
        ctx->pc = 0x348C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C6Cu;
        // 0x348c70: 0x240401c0  addiu       $a0, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348C74u;
        goto label_348c74;
    }
    ctx->pc = 0x348C6Cu;
    SET_GPR_U32(ctx, 31, 0x348C74u);
    ctx->pc = 0x348C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348C6Cu;
    // 0x348c70: 0x240401c0  addiu       $a0, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x348C6Cu, 0x348C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348C74u;
label_348c74:
    // 0x348c74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x348c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_348c78:
    // 0x348c78: 0x24050401  addiu       $a1, $zero, 0x401
    ctx->pc = 0x348c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
label_348c7c:
    // 0x348c7c: 0xc087380  jal         func_21CE00
label_348c80:
    if (ctx->pc == 0x348C80u) {
        ctx->pc = 0x348C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C7Cu;
        // 0x348c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348C84u;
        goto label_348c84;
    }
    ctx->pc = 0x348C7Cu;
    SET_GPR_U32(ctx, 31, 0x348C84u);
    ctx->pc = 0x348C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348C7Cu;
    // 0x348c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CE00u, 0x348C7Cu, 0x348C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348C84u;
label_348c84:
    // 0x348c84: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x348c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_348c88:
    // 0x348c88: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x348c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
label_348c8c:
    // 0x348c8c: 0x246319a8  addiu       $v1, $v1, 0x19A8
    ctx->pc = 0x348c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6568));
label_348c90:
    // 0x348c90: 0x260201a0  addiu       $v0, $s0, 0x1A0
    ctx->pc = 0x348c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
label_348c94:
    // 0x348c94: 0xae030190  sw          $v1, 0x190($s0)
    ctx->pc = 0x348c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 3));
label_348c98:
    // 0x348c98: 0x260601b0  addiu       $a2, $s0, 0x1B0
    ctx->pc = 0x348c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
label_348c9c:
    // 0x348c9c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x348c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_348ca0:
    // 0x348ca0: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x348ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_348ca4:
    // 0x348ca4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x348ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_348ca8:
    // 0x348ca8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x348ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_348cac:
    // 0x348cac: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x348cacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_348cb0:
    // 0x348cb0: 0xae0001b0  sw          $zero, 0x1B0($s0)
    ctx->pc = 0x348cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
label_348cb4:
    // 0x348cb4: 0xae300074  sw          $s0, 0x74($s1)
    ctx->pc = 0x348cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 16));
label_348cb8:
    // 0x348cb8: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x348cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_348cbc:
    // 0x348cbc: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x348cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_348cc0:
    // 0x348cc0: 0xc0d745c  jal         func_35D170
label_348cc4:
    if (ctx->pc == 0x348CC4u) {
        ctx->pc = 0x348CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348CC0u;
        // 0x348cc4: 0xacc00008  sw          $zero, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348CC8u;
        goto label_348cc8;
    }
    ctx->pc = 0x348CC0u;
    SET_GPR_U32(ctx, 31, 0x348CC8u);
    ctx->pc = 0x348CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348CC0u;
    // 0x348cc4: 0xacc00008  sw          $zero, 0x8($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x348CC0u, 0x348CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348CC8u;
label_348cc8:
    // 0x348cc8: 0x8e250074  lw          $a1, 0x74($s1)
    ctx->pc = 0x348cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_348ccc:
    // 0x348ccc: 0xc0f7834  jal         func_3DE0D0
label_348cd0:
    if (ctx->pc == 0x348CD0u) {
        ctx->pc = 0x348CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348CCCu;
        // 0x348cd0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348CD4u;
        goto label_348cd4;
    }
    ctx->pc = 0x348CCCu;
    SET_GPR_U32(ctx, 31, 0x348CD4u);
    ctx->pc = 0x348CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348CCCu;
    // 0x348cd0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE0D0u, 0x348CCCu, 0x348CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348CD4u;
label_348cd4:
    // 0x348cd4: 0x240402e0  addiu       $a0, $zero, 0x2E0
    ctx->pc = 0x348cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
label_348cd8:
    // 0x348cd8: 0xc0f5240  jal         func_3D4900
label_348cdc:
    if (ctx->pc == 0x348CDCu) {
        ctx->pc = 0x348CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348CD8u;
        // 0x348cdc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348CE0u;
        goto label_348ce0;
    }
    ctx->pc = 0x348CD8u;
    SET_GPR_U32(ctx, 31, 0x348CE0u);
    ctx->pc = 0x348CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348CD8u;
    // 0x348cdc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x348CD8u, 0x348CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348CE0u;
label_348ce0:
    // 0x348ce0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x348ce0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_348ce4:
    // 0x348ce4: 0x8e250074  lw          $a1, 0x74($s1)
    ctx->pc = 0x348ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_348ce8:
    // 0x348ce8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x348ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_348cec:
    // 0x348cec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x348cecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_348cf0:
    // 0x348cf0: 0xc099b20  jal         func_266C80
label_348cf4:
    if (ctx->pc == 0x348CF4u) {
        ctx->pc = 0x348CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348CF0u;
        // 0x348cf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348CF8u;
        goto label_348cf8;
    }
    ctx->pc = 0x348CF0u;
    SET_GPR_U32(ctx, 31, 0x348CF8u);
    ctx->pc = 0x348CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348CF0u;
    // 0x348cf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266C80u, 0x348CF0u, 0x348CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348CF8u;
label_348cf8:
    // 0x348cf8: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x348cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
label_348cfc:
    // 0x348cfc: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x348cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
label_348d00:
    // 0x348d00: 0x24c66570  addiu       $a2, $a2, 0x6570
    ctx->pc = 0x348d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25968));
label_348d04:
    // 0x348d04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x348d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_348d08:
    // 0x348d08: 0x8e87c5f0  lw          $a3, -0x3A10($s4)
    ctx->pc = 0x348d08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952432)));
label_348d0c:
    // 0x348d0c: 0xc0efed0  jal         func_3BFB40
label_348d10:
    if (ctx->pc == 0x348D10u) {
        ctx->pc = 0x348D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D0Cu;
        // 0x348d10: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348D14u;
        goto label_348d14;
    }
    ctx->pc = 0x348D0Cu;
    SET_GPR_U32(ctx, 31, 0x348D14u);
    ctx->pc = 0x348D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348D0Cu;
    // 0x348d10: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x348D0Cu, 0x348D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348D14u;
label_348d14:
    // 0x348d14: 0x8e83c5f0  lw          $v1, -0x3A10($s4)
    ctx->pc = 0x348d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952432)));
label_348d18:
    // 0x348d18: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x348d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_348d1c:
    // 0x348d1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x348d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_348d20:
    // 0x348d20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x348d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_348d24:
    // 0x348d24: 0xc0d7468  jal         func_35D1A0
label_348d28:
    if (ctx->pc == 0x348D28u) {
        ctx->pc = 0x348D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D24u;
        // 0x348d28: 0xae83c5f0  sw          $v1, -0x3A10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294952432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348D2Cu;
        goto label_348d2c;
    }
    ctx->pc = 0x348D24u;
    SET_GPR_U32(ctx, 31, 0x348D2Cu);
    ctx->pc = 0x348D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348D24u;
    // 0x348d28: 0xae83c5f0  sw          $v1, -0x3A10($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294952432), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x348D24u, 0x348D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348D2Cu;
label_348d2c:
    // 0x348d2c: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x348d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_348d30:
    // 0x348d30: 0xc083942  jal         func_20E508
label_348d34:
    if (ctx->pc == 0x348D34u) {
        ctx->pc = 0x348D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D30u;
        // 0x348d34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348D38u;
        goto label_348d38;
    }
    ctx->pc = 0x348D30u;
    SET_GPR_U32(ctx, 31, 0x348D38u);
    ctx->pc = 0x348D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348D30u;
    // 0x348d34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E508u, 0x348D30u, 0x348D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348D38u;
label_348d38:
    // 0x348d38: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x348d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_348d3c:
    // 0x348d3c: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x348d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_348d40:
    // 0x348d40: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x348d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_348d44:
    // 0x348d44: 0x40f809  jalr        $v0
label_348d48:
    if (ctx->pc == 0x348D48u) {
        ctx->pc = 0x348D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D44u;
        // 0x348d48: 0x8e250038  lw          $a1, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348D4Cu;
        goto label_348d4c;
    }
    ctx->pc = 0x348D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x348D4Cu);
        ctx->pc = 0x348D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D44u;
        // 0x348d48: 0x8e250038  lw          $a1, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348D44u, 0x348D4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x348D4Cu;
label_348d4c:
    // 0x348d4c: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x348d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_348d50:
    // 0x348d50: 0xc099c02  jal         func_267008
label_348d54:
    if (ctx->pc == 0x348D54u) {
        ctx->pc = 0x348D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D50u;
        // 0x348d54: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348D58u;
        goto label_348d58;
    }
    ctx->pc = 0x348D50u;
    SET_GPR_U32(ctx, 31, 0x348D58u);
    ctx->pc = 0x348D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348D50u;
    // 0x348d54: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267008u, 0x348D50u, 0x348D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348D58u;
label_348d58:
    // 0x348d58: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x348d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_348d5c:
    // 0x348d5c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x348d5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_348d60:
    // 0x348d60: 0xa0500292  sb          $s0, 0x292($v0)
    ctx->pc = 0x348d60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 658), (uint8_t)GPR_U32(ctx, 16));
label_348d64:
    // 0x348d64: 0xc099c64  jal         func_267190
label_348d68:
    if (ctx->pc == 0x348D68u) {
        ctx->pc = 0x348D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D64u;
        // 0x348d68: 0x8e240070  lw          $a0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348D6Cu;
        goto label_348d6c;
    }
    ctx->pc = 0x348D64u;
    SET_GPR_U32(ctx, 31, 0x348D6Cu);
    ctx->pc = 0x348D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348D64u;
    // 0x348d68: 0x8e240070  lw          $a0, 0x70($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267190u, 0x348D64u, 0x348D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348D6Cu;
label_348d6c:
    // 0x348d6c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x348d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_348d70:
    // 0x348d70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x348d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_348d74:
    // 0x348d74: 0xc099c5c  jal         func_267170
label_348d78:
    if (ctx->pc == 0x348D78u) {
        ctx->pc = 0x348D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D74u;
        // 0x348d78: 0x8e240070  lw          $a0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348D7Cu;
        goto label_348d7c;
    }
    ctx->pc = 0x348D74u;
    SET_GPR_U32(ctx, 31, 0x348D7Cu);
    ctx->pc = 0x348D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348D74u;
    // 0x348d78: 0x8e240070  lw          $a0, 0x70($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267170u, 0x348D74u, 0x348D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348D7Cu;
label_348d7c:
    // 0x348d7c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x348d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_348d80:
    // 0x348d80: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x348d80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_348d84:
    // 0x348d84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x348d84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_348d88:
    // 0x348d88: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x348d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_348d8c:
    // 0x348d8c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x348d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_348d90:
    // 0x348d90: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x348d90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_348d94:
    // 0x348d94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x348d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_348d98:
    // 0x348d98: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x348d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_348d9c:
    // 0x348d9c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x348d9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_348da0:
    // 0x348da0: 0xe7b4007c  swc1        $f20, 0x7C($sp)
    ctx->pc = 0x348da0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_348da4:
    // 0x348da4: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x348da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_348da8:
    // 0x348da8: 0xc099c44  jal         func_267110
label_348dac:
    if (ctx->pc == 0x348DACu) {
        ctx->pc = 0x348DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348DA8u;
        // 0x348dac: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x348DB0u;
        goto label_348db0;
    }
    ctx->pc = 0x348DA8u;
    SET_GPR_U32(ctx, 31, 0x348DB0u);
    ctx->pc = 0x348DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348DA8u;
    // 0x348dac: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x267110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267110u, 0x348DA8u, 0x348DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348DB0u;
label_348db0:
    // 0x348db0: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x348db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_348db4:
    // 0x348db4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x348db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_348db8:
    // 0x348db8: 0x240500c4  addiu       $a1, $zero, 0xC4
    ctx->pc = 0x348db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
label_348dbc:
    // 0x348dbc: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x348dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
label_348dc0:
    // 0x348dc0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x348dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_348dc4:
    // 0x348dc4: 0xac4402a4  sw          $a0, 0x2A4($v0)
    ctx->pc = 0x348dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 676), GPR_U32(ctx, 4));
label_348dc8:
    // 0x348dc8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x348dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_348dcc:
    // 0x348dcc: 0x460cb302  mul.s       $f12, $f22, $f12
    ctx->pc = 0x348dccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
label_348dd0:
    // 0x348dd0: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x348dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_348dd4:
    // 0x348dd4: 0xac4402a8  sw          $a0, 0x2A8($v0)
    ctx->pc = 0x348dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 680), GPR_U32(ctx, 4));
label_348dd8:
    // 0x348dd8: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x348dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_348ddc:
    // 0x348ddc: 0xa0600299  sb          $zero, 0x299($v1)
    ctx->pc = 0x348ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 665), (uint8_t)GPR_U32(ctx, 0));
label_348de0:
    // 0x348de0: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x348de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_348de4:
    // 0x348de4: 0xa040029a  sb          $zero, 0x29A($v0)
    ctx->pc = 0x348de4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 666), (uint8_t)GPR_U32(ctx, 0));
label_348de8:
    // 0x348de8: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x348de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_348dec:
    // 0x348dec: 0xe474029c  swc1        $f20, 0x29C($v1)
    ctx->pc = 0x348decu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 668), bits); }
label_348df0:
    // 0x348df0: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x348df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_348df4:
    // 0x348df4: 0xac4502a0  sw          $a1, 0x2A0($v0)
    ctx->pc = 0x348df4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 672), GPR_U32(ctx, 5));
label_348df8:
    // 0x348df8: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x348df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_348dfc:
    // 0x348dfc: 0xa0600297  sb          $zero, 0x297($v1)
    ctx->pc = 0x348dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 663), (uint8_t)GPR_U32(ctx, 0));
label_348e00:
    // 0x348e00: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x348e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_348e04:
    // 0x348e04: 0xa0460295  sb          $a2, 0x295($v0)
    ctx->pc = 0x348e04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 661), (uint8_t)GPR_U32(ctx, 6));
label_348e08:
    // 0x348e08: 0xac400224  sw          $zero, 0x224($v0)
    ctx->pc = 0x348e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 548), GPR_U32(ctx, 0));
label_348e0c:
    // 0x348e0c: 0xac40022c  sw          $zero, 0x22C($v0)
    ctx->pc = 0x348e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 556), GPR_U32(ctx, 0));
label_348e10:
    // 0x348e10: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x348e10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
label_348e14:
    // 0x348e14: 0xac400230  sw          $zero, 0x230($v0)
    ctx->pc = 0x348e14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 560), GPR_U32(ctx, 0));
label_348e18:
    // 0x348e18: 0xac400238  sw          $zero, 0x238($v0)
    ctx->pc = 0x348e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 568), GPR_U32(ctx, 0));
label_348e1c:
    // 0x348e1c: 0xac400240  sw          $zero, 0x240($v0)
    ctx->pc = 0x348e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 576), GPR_U32(ctx, 0));
label_348e20:
    // 0x348e20: 0xc0dde53  jal         func_37794C
label_348e24:
    if (ctx->pc == 0x348E24u) {
        ctx->pc = 0x348E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E20u;
        // 0x348e24: 0xa0400244  sb          $zero, 0x244($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 580), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348E28u;
        goto label_348e28;
    }
    ctx->pc = 0x348E20u;
    SET_GPR_U32(ctx, 31, 0x348E28u);
    ctx->pc = 0x348E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348E20u;
    // 0x348e24: 0xa0400244  sb          $zero, 0x244($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 580), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x348E20u, 0x348E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348E28u;
label_348e28:
    // 0x348e28: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x348e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_348e2c:
    // 0x348e2c: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x348e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
label_348e30:
    // 0x348e30: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x348e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_348e34:
    // 0x348e34: 0xa0500290  sb          $s0, 0x290($v0)
    ctx->pc = 0x348e34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 656), (uint8_t)GPR_U32(ctx, 16));
label_348e38:
    // 0x348e38: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x348e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_348e3c:
    // 0x348e3c: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x348e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_348e40:
    // 0x348e40: 0x8c860218  lw          $a2, 0x218($a0)
    ctx->pc = 0x348e40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_348e44:
    // 0x348e44: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x348e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_348e48:
    // 0x348e48: 0x8cc2004c  lw          $v0, 0x4C($a2)
    ctx->pc = 0x348e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
label_348e4c:
    // 0x348e4c: 0x40f809  jalr        $v0
label_348e50:
    if (ctx->pc == 0x348E50u) {
        ctx->pc = 0x348E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E4Cu;
        // 0x348e50: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348E54u;
        goto label_348e54;
    }
    ctx->pc = 0x348E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x348E54u);
        ctx->pc = 0x348E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E4Cu;
        // 0x348e50: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348E4Cu, 0x348E54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x348E54u;
label_348e54:
    // 0x348e54: 0xc09a07e  jal         func_2681F8
label_348e58:
    if (ctx->pc == 0x348E58u) {
        ctx->pc = 0x348E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E54u;
        // 0x348e58: 0x8e240070  lw          $a0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348E5Cu;
        goto label_348e5c;
    }
    ctx->pc = 0x348E54u;
    SET_GPR_U32(ctx, 31, 0x348E5Cu);
    ctx->pc = 0x348E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348E54u;
    // 0x348e58: 0x8e240070  lw          $a0, 0x70($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2681F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2681F8u, 0x348E54u, 0x348E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348E5Cu;
label_348e5c:
    // 0x348e5c: 0xe6360088  swc1        $f22, 0x88($s1)
    ctx->pc = 0x348e5cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
label_348e60:
    // 0x348e60: 0xe6350080  swc1        $f21, 0x80($s1)
    ctx->pc = 0x348e60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
label_348e64:
    // 0x348e64: 0xc0c3dc2  jal         func_30F708
label_348e68:
    if (ctx->pc == 0x348E68u) {
        ctx->pc = 0x348E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E64u;
        // 0x348e68: 0xe6370084  swc1        $f23, 0x84($s1) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x348E6Cu;
        goto label_348e6c;
    }
    ctx->pc = 0x348E64u;
    SET_GPR_U32(ctx, 31, 0x348E6Cu);
    ctx->pc = 0x348E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348E64u;
    // 0x348e68: 0xe6370084  swc1        $f23, 0x84($s1) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F708u, 0x348E64u, 0x348E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348E6Cu;
label_348e6c:
    // 0x348e6c: 0xc0c47ba  jal         func_311EE8
label_348e70:
    if (ctx->pc == 0x348E70u) {
        ctx->pc = 0x348E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E6Cu;
        // 0x348e70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348E74u;
        goto label_348e74;
    }
    ctx->pc = 0x348E6Cu;
    SET_GPR_U32(ctx, 31, 0x348E74u);
    ctx->pc = 0x348E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348E6Cu;
    // 0x348e70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311EE8u, 0x348E6Cu, 0x348E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348E74u;
label_348e74:
    // 0x348e74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x348e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_348e78:
    // 0x348e78: 0xc0d7412  jal         func_35D048
label_348e7c:
    if (ctx->pc == 0x348E7Cu) {
        ctx->pc = 0x348E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E78u;
        // 0x348e7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348E80u;
        goto label_348e80;
    }
    ctx->pc = 0x348E78u;
    SET_GPR_U32(ctx, 31, 0x348E80u);
    ctx->pc = 0x348E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348E78u;
    // 0x348e7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x348E78u, 0x348E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348E80u;
label_348e80:
    // 0x348e80: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x348e80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_348e84:
    // 0x348e84: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x348e84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_348e88:
    // 0x348e88: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x348e88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_348e8c:
    // 0x348e8c: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x348e8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_348e90:
    // 0x348e90: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x348e90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_348e94:
    // 0x348e94: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x348e94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_348e98:
    // 0x348e98: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x348e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_348e9c:
    // 0x348e9c: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x348e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_348ea0:
    // 0x348ea0: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x348ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_348ea4:
    // 0x348ea4: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x348ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_348ea8:
    // 0x348ea8: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x348ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_348eac:
    // 0x348eac: 0x3e00008  jr          $ra
label_348eb0:
    if (ctx->pc == 0x348EB0u) {
        ctx->pc = 0x348EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348EACu;
        // 0x348eb0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348EB4u;
        goto label_348eb4;
    }
    ctx->pc = 0x348EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348EACu;
        // 0x348eb0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348EB4u;
label_348eb4:
    // 0x348eb4: 0x0  nop
    ctx->pc = 0x348eb4u;
    // NOP
    ctx->pc = 0x348eb8u;
}
