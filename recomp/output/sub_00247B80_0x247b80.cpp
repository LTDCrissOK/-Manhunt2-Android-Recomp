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

// Function: sub_00247B80
// Address: 0x247b80 - 0x247d70
void sub_00247B80_0x247b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247B80_0x247b80");
#endif

    switch (ctx->pc) {
        case 0x247b80u: goto label_247b80;
        case 0x247b84u: goto label_247b84;
        case 0x247b88u: goto label_247b88;
        case 0x247b8cu: goto label_247b8c;
        case 0x247b90u: goto label_247b90;
        case 0x247b94u: goto label_247b94;
        case 0x247b98u: goto label_247b98;
        case 0x247b9cu: goto label_247b9c;
        case 0x247ba0u: goto label_247ba0;
        case 0x247ba4u: goto label_247ba4;
        case 0x247ba8u: goto label_247ba8;
        case 0x247bacu: goto label_247bac;
        case 0x247bb0u: goto label_247bb0;
        case 0x247bb4u: goto label_247bb4;
        case 0x247bb8u: goto label_247bb8;
        case 0x247bbcu: goto label_247bbc;
        case 0x247bc0u: goto label_247bc0;
        case 0x247bc4u: goto label_247bc4;
        case 0x247bc8u: goto label_247bc8;
        case 0x247bccu: goto label_247bcc;
        case 0x247bd0u: goto label_247bd0;
        case 0x247bd4u: goto label_247bd4;
        case 0x247bd8u: goto label_247bd8;
        case 0x247bdcu: goto label_247bdc;
        case 0x247be0u: goto label_247be0;
        case 0x247be4u: goto label_247be4;
        case 0x247be8u: goto label_247be8;
        case 0x247becu: goto label_247bec;
        case 0x247bf0u: goto label_247bf0;
        case 0x247bf4u: goto label_247bf4;
        case 0x247bf8u: goto label_247bf8;
        case 0x247bfcu: goto label_247bfc;
        case 0x247c00u: goto label_247c00;
        case 0x247c04u: goto label_247c04;
        case 0x247c08u: goto label_247c08;
        case 0x247c0cu: goto label_247c0c;
        case 0x247c10u: goto label_247c10;
        case 0x247c14u: goto label_247c14;
        case 0x247c18u: goto label_247c18;
        case 0x247c1cu: goto label_247c1c;
        case 0x247c20u: goto label_247c20;
        case 0x247c24u: goto label_247c24;
        case 0x247c28u: goto label_247c28;
        case 0x247c2cu: goto label_247c2c;
        case 0x247c30u: goto label_247c30;
        case 0x247c34u: goto label_247c34;
        case 0x247c38u: goto label_247c38;
        case 0x247c3cu: goto label_247c3c;
        case 0x247c40u: goto label_247c40;
        case 0x247c44u: goto label_247c44;
        case 0x247c48u: goto label_247c48;
        case 0x247c4cu: goto label_247c4c;
        case 0x247c50u: goto label_247c50;
        case 0x247c54u: goto label_247c54;
        case 0x247c58u: goto label_247c58;
        case 0x247c5cu: goto label_247c5c;
        case 0x247c60u: goto label_247c60;
        case 0x247c64u: goto label_247c64;
        case 0x247c68u: goto label_247c68;
        case 0x247c6cu: goto label_247c6c;
        case 0x247c70u: goto label_247c70;
        case 0x247c74u: goto label_247c74;
        case 0x247c78u: goto label_247c78;
        case 0x247c7cu: goto label_247c7c;
        case 0x247c80u: goto label_247c80;
        case 0x247c84u: goto label_247c84;
        case 0x247c88u: goto label_247c88;
        case 0x247c8cu: goto label_247c8c;
        case 0x247c90u: goto label_247c90;
        case 0x247c94u: goto label_247c94;
        case 0x247c98u: goto label_247c98;
        case 0x247c9cu: goto label_247c9c;
        case 0x247ca0u: goto label_247ca0;
        case 0x247ca4u: goto label_247ca4;
        case 0x247ca8u: goto label_247ca8;
        case 0x247cacu: goto label_247cac;
        case 0x247cb0u: goto label_247cb0;
        case 0x247cb4u: goto label_247cb4;
        case 0x247cb8u: goto label_247cb8;
        case 0x247cbcu: goto label_247cbc;
        case 0x247cc0u: goto label_247cc0;
        case 0x247cc4u: goto label_247cc4;
        case 0x247cc8u: goto label_247cc8;
        case 0x247cccu: goto label_247ccc;
        case 0x247cd0u: goto label_247cd0;
        case 0x247cd4u: goto label_247cd4;
        case 0x247cd8u: goto label_247cd8;
        case 0x247cdcu: goto label_247cdc;
        case 0x247ce0u: goto label_247ce0;
        case 0x247ce4u: goto label_247ce4;
        case 0x247ce8u: goto label_247ce8;
        case 0x247cecu: goto label_247cec;
        case 0x247cf0u: goto label_247cf0;
        case 0x247cf4u: goto label_247cf4;
        case 0x247cf8u: goto label_247cf8;
        case 0x247cfcu: goto label_247cfc;
        case 0x247d00u: goto label_247d00;
        case 0x247d04u: goto label_247d04;
        case 0x247d08u: goto label_247d08;
        case 0x247d0cu: goto label_247d0c;
        case 0x247d10u: goto label_247d10;
        case 0x247d14u: goto label_247d14;
        case 0x247d18u: goto label_247d18;
        case 0x247d1cu: goto label_247d1c;
        case 0x247d20u: goto label_247d20;
        case 0x247d24u: goto label_247d24;
        case 0x247d28u: goto label_247d28;
        case 0x247d2cu: goto label_247d2c;
        case 0x247d30u: goto label_247d30;
        case 0x247d34u: goto label_247d34;
        case 0x247d38u: goto label_247d38;
        case 0x247d3cu: goto label_247d3c;
        case 0x247d40u: goto label_247d40;
        case 0x247d44u: goto label_247d44;
        case 0x247d48u: goto label_247d48;
        case 0x247d4cu: goto label_247d4c;
        case 0x247d50u: goto label_247d50;
        case 0x247d54u: goto label_247d54;
        case 0x247d58u: goto label_247d58;
        case 0x247d5cu: goto label_247d5c;
        case 0x247d60u: goto label_247d60;
        case 0x247d64u: goto label_247d64;
        case 0x247d68u: goto label_247d68;
        case 0x247d6cu: goto label_247d6c;
        default: break;
    }

    ctx->pc = 0x247b80u;

label_247b80:
    // 0x247b80: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x247b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_247b84:
    // 0x247b84: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x247b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
label_247b88:
    // 0x247b88: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x247b88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_247b8c:
    // 0x247b8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x247b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_247b90:
    // 0x247b90: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x247b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
label_247b94:
    // 0x247b94: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x247b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_247b98:
    // 0x247b98: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x247b98u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_247b9c:
    // 0x247b9c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x247b9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_247ba0:
    // 0x247ba0: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x247ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_247ba4:
    // 0x247ba4: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x247ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_247ba8:
    // 0x247ba8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x247ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_247bac:
    // 0x247bac: 0x40f809  jalr        $v0
label_247bb0:
    if (ctx->pc == 0x247BB0u) {
        ctx->pc = 0x247BB4u;
        goto label_247bb4;
    }
    ctx->pc = 0x247BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x247BB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247BACu, 0x247BB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247BB4u;
label_247bb4:
    // 0x247bb4: 0xc0f6a96  jal         func_3DAA58
label_247bb8:
    if (ctx->pc == 0x247BB8u) {
        ctx->pc = 0x247BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247BB4u;
        // 0x247bb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247BBCu;
        goto label_247bbc;
    }
    ctx->pc = 0x247BB4u;
    SET_GPR_U32(ctx, 31, 0x247BBCu);
    ctx->pc = 0x247BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247BB4u;
    // 0x247bb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x247BB4u, 0x247BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247BBCu;
label_247bbc:
    // 0x247bbc: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x247bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_247bc0:
    // 0x247bc0: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x247bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_247bc4:
    // 0x247bc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x247bc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247bc8:
    // 0x247bc8: 0xc0c3290  jal         func_30CA40
label_247bcc:
    if (ctx->pc == 0x247BCCu) {
        ctx->pc = 0x247BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247BC8u;
        // 0x247bcc: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247BD0u;
        goto label_247bd0;
    }
    ctx->pc = 0x247BC8u;
    SET_GPR_U32(ctx, 31, 0x247BD0u);
    ctx->pc = 0x247BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247BC8u;
    // 0x247bcc: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CA40u, 0x247BC8u, 0x247BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247BD0u;
label_247bd0:
    // 0x247bd0: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x247bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_247bd4:
    // 0x247bd4: 0xc6150374  lwc1        $f21, 0x374($s0)
    ctx->pc = 0x247bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_247bd8:
    // 0x247bd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x247bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_247bdc:
    // 0x247bdc: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x247bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_247be0:
    // 0x247be0: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x247be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247be4:
    // 0x247be4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x247be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_247be8:
    // 0x247be8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x247be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_247bec:
    // 0x247bec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x247becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_247bf0:
    // 0x247bf0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x247bf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_247bf4:
    // 0x247bf4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x247bf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_247bf8:
    // 0x247bf8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x247bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247bfc:
    // 0x247bfc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x247bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_247c00:
    // 0x247c00: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x247c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_247c04:
    // 0x247c04: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x247c04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_247c08:
    // 0x247c08: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x247c08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_247c0c:
    // 0x247c0c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x247c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_247c10:
    // 0x247c10: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x247c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_247c14:
    // 0x247c14: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x247c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_247c18:
    // 0x247c18: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x247c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_247c1c:
    // 0x247c1c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x247c1cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_247c20:
    // 0x247c20: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x247c20u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_247c24:
    // 0x247c24: 0x4604259c  madd.s      $f22, $f4, $f4
    ctx->pc = 0x247c24u;
    ctx->f[22] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_247c28:
    // 0x247c28: 0x46160584  c1          0x160584
    ctx->pc = 0x247c28u;
    ctx->f[22] = FPU_SQRT_S(ctx->f[0]);
label_247c2c:
    // 0x247c2c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x247c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_247c30:
    // 0x247c30: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x247c30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_247c34:
    // 0x247c34: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x247c34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_247c38:
    // 0x247c38: 0x0  nop
    ctx->pc = 0x247c38u;
    // NOP
label_247c3c:
    // 0x247c3c: 0x4614ad02  mul.s       $f20, $f21, $f20
    ctx->pc = 0x247c3cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
label_247c40:
    // 0x247c40: 0xc0e3f98  jal         func_38FE60
label_247c44:
    if (ctx->pc == 0x247C44u) {
        ctx->pc = 0x247C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C40u;
        // 0x247c44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x247C48u;
        goto label_247c48;
    }
    ctx->pc = 0x247C40u;
    SET_GPR_U32(ctx, 31, 0x247C48u);
    ctx->pc = 0x247C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247C40u;
    // 0x247c44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x247C40u, 0x247C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247C48u;
label_247c48:
    // 0x247c48: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x247c48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_247c4c:
    // 0x247c4c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x247c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_247c50:
    // 0x247c50: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x247c50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_247c54:
    // 0x247c54: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x247c54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_247c58:
    // 0x247c58: 0xc0e3f1c  jal         func_38FC70
label_247c5c:
    if (ctx->pc == 0x247C5Cu) {
        ctx->pc = 0x247C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C58u;
        // 0x247c5c: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x247C60u;
        goto label_247c60;
    }
    ctx->pc = 0x247C58u;
    SET_GPR_U32(ctx, 31, 0x247C60u);
    ctx->pc = 0x247C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247C58u;
    // 0x247c5c: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x247C58u, 0x247C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247C60u;
label_247c60:
    // 0x247c60: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x247c60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_247c64:
    // 0x247c64: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x247c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_247c68:
    // 0x247c68: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x247c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_247c6c:
    // 0x247c6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x247c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_247c70:
    // 0x247c70: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x247c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_247c74:
    // 0x247c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247c78:
    // 0x247c78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x247c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_247c7c:
    // 0x247c7c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x247c7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_247c80:
    // 0x247c80: 0x4602ad40  add.s       $f21, $f21, $f2
    ctx->pc = 0x247c80u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
label_247c84:
    // 0x247c84: 0xc09568e  jal         func_255A38
label_247c88:
    if (ctx->pc == 0x247C88u) {
        ctx->pc = 0x247C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C84u;
        // 0x247c88: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x247C8Cu;
        goto label_247c8c;
    }
    ctx->pc = 0x247C84u;
    SET_GPR_U32(ctx, 31, 0x247C8Cu);
    ctx->pc = 0x247C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247C84u;
    // 0x247c88: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x255A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255A38u, 0x247C84u, 0x247C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247C8Cu;
label_247c8c:
    // 0x247c8c: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x247c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_247c90:
    // 0x247c90: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x247c90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_247c94:
    // 0x247c94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247c98:
    // 0x247c98: 0x8c6201c8  lw          $v0, 0x1C8($v1)
    ctx->pc = 0x247c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
label_247c9c:
    // 0x247c9c: 0x40f809  jalr        $v0
label_247ca0:
    if (ctx->pc == 0x247CA0u) {
        ctx->pc = 0x247CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C9Cu;
        // 0x247ca0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247CA4u;
        goto label_247ca4;
    }
    ctx->pc = 0x247C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x247CA4u);
        ctx->pc = 0x247CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C9Cu;
        // 0x247ca0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247C9Cu, 0x247CA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247CA4u;
label_247ca4:
    // 0x247ca4: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x247ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_247ca8:
    // 0x247ca8: 0x24060481  addiu       $a2, $zero, 0x481
    ctx->pc = 0x247ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1153));
label_247cac:
    // 0x247cac: 0xc069712  jal         func_1A5C48
label_247cb0:
    if (ctx->pc == 0x247CB0u) {
        ctx->pc = 0x247CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247CACu;
        // 0x247cb0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247CB4u;
        goto label_247cb4;
    }
    ctx->pc = 0x247CACu;
    SET_GPR_U32(ctx, 31, 0x247CB4u);
    ctx->pc = 0x247CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247CACu;
    // 0x247cb0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x247CACu, 0x247CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247CB4u;
label_247cb4:
    // 0x247cb4: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x247cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_247cb8:
    // 0x247cb8: 0xc06a05e  jal         func_1A8178
label_247cbc:
    if (ctx->pc == 0x247CBCu) {
        ctx->pc = 0x247CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247CB8u;
        // 0x247cbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247CC0u;
        goto label_247cc0;
    }
    ctx->pc = 0x247CB8u;
    SET_GPR_U32(ctx, 31, 0x247CC0u);
    ctx->pc = 0x247CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247CB8u;
    // 0x247cbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x247CB8u, 0x247CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247CC0u;
label_247cc0:
    // 0x247cc0: 0xc06a328  jal         func_1A8CA0
label_247cc4:
    if (ctx->pc == 0x247CC4u) {
        ctx->pc = 0x247CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247CC0u;
        // 0x247cc4: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247CC8u;
        goto label_247cc8;
    }
    ctx->pc = 0x247CC0u;
    SET_GPR_U32(ctx, 31, 0x247CC8u);
    ctx->pc = 0x247CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247CC0u;
    // 0x247cc4: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x247CC0u, 0x247CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247CC8u;
label_247cc8:
    // 0x247cc8: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x247cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_247ccc:
    // 0x247ccc: 0xc0757d2  jal         func_1D5F48
label_247cd0:
    if (ctx->pc == 0x247CD0u) {
        ctx->pc = 0x247CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247CCCu;
        // 0x247cd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247CD4u;
        goto label_247cd4;
    }
    ctx->pc = 0x247CCCu;
    SET_GPR_U32(ctx, 31, 0x247CD4u);
    ctx->pc = 0x247CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247CCCu;
    // 0x247cd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F48u, 0x247CCCu, 0x247CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247CD4u;
label_247cd4:
    // 0x247cd4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x247cd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_247cd8:
    // 0x247cd8: 0xc07a8b2  jal         func_1EA2C8
label_247cdc:
    if (ctx->pc == 0x247CDCu) {
        ctx->pc = 0x247CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247CD8u;
        // 0x247cdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247CE0u;
        goto label_247ce0;
    }
    ctx->pc = 0x247CD8u;
    SET_GPR_U32(ctx, 31, 0x247CE0u);
    ctx->pc = 0x247CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247CD8u;
    // 0x247cdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x247CD8u, 0x247CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247CE0u;
label_247ce0:
    // 0x247ce0: 0xc0f6a96  jal         func_3DAA58
label_247ce4:
    if (ctx->pc == 0x247CE4u) {
        ctx->pc = 0x247CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247CE0u;
        // 0x247ce4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247CE8u;
        goto label_247ce8;
    }
    ctx->pc = 0x247CE0u;
    SET_GPR_U32(ctx, 31, 0x247CE8u);
    ctx->pc = 0x247CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247CE0u;
    // 0x247ce4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x247CE0u, 0x247CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247CE8u;
label_247ce8:
    // 0x247ce8: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x247ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_247cec:
    // 0x247cec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x247cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_247cf0:
    // 0x247cf0: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x247cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_247cf4:
    // 0x247cf4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x247cf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_247cf8:
    // 0x247cf8: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x247cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_247cfc:
    // 0x247cfc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x247cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_247d00:
    // 0x247d00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x247d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_247d04:
    // 0x247d04: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x247d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_247d08:
    // 0x247d08: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x247d08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_247d0c:
    // 0x247d0c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x247d0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_247d10:
    // 0x247d10: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x247d10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_247d14:
    // 0x247d14: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x247d14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_247d18:
    // 0x247d18: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x247d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_247d1c:
    // 0x247d1c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x247d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_247d20:
    // 0x247d20: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x247d20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_247d24:
    // 0x247d24: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x247d24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_247d28:
    // 0x247d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247d2c:
    // 0x247d2c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x247d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_247d30:
    // 0x247d30: 0xc092b00  jal         func_24AC00
label_247d34:
    if (ctx->pc == 0x247D34u) {
        ctx->pc = 0x247D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D30u;
        // 0x247d34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247D38u;
        goto label_247d38;
    }
    ctx->pc = 0x247D30u;
    SET_GPR_U32(ctx, 31, 0x247D38u);
    ctx->pc = 0x247D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247D30u;
    // 0x247d34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AC00u, 0x247D30u, 0x247D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247D38u;
label_247d38:
    // 0x247d38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_247d3c:
    if (ctx->pc == 0x247D3Cu) {
        ctx->pc = 0x247D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D38u;
        // 0x247d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247D40u;
        goto label_247d40;
    }
    ctx->pc = 0x247D38u;
    {
        const bool branch_taken_0x247d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D38u;
        // 0x247d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247d38) {
            ctx->pc = 0x247D4Cu;
            goto label_247d4c;
        }
    }
    ctx->pc = 0x247D40u;
label_247d40:
    // 0x247d40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x247d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_247d44:
    // 0x247d44: 0xc091e26  jal         func_247898
label_247d48:
    if (ctx->pc == 0x247D48u) {
        ctx->pc = 0x247D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D44u;
        // 0x247d48: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247D4Cu;
        goto label_247d4c;
    }
    ctx->pc = 0x247D44u;
    SET_GPR_U32(ctx, 31, 0x247D4Cu);
    ctx->pc = 0x247D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247D44u;
    // 0x247d48: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247898u, 0x247D44u, 0x247D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247D4Cu;
label_247d4c:
    // 0x247d4c: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x247d4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_247d50:
    // 0x247d50: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x247d50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_247d54:
    // 0x247d54: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x247d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_247d58:
    // 0x247d58: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x247d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_247d5c:
    // 0x247d5c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x247d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_247d60:
    // 0x247d60: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x247d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_247d64:
    // 0x247d64: 0x3e00008  jr          $ra
label_247d68:
    if (ctx->pc == 0x247D68u) {
        ctx->pc = 0x247D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D64u;
        // 0x247d68: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247D6Cu;
        goto label_247d6c;
    }
    ctx->pc = 0x247D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D64u;
        // 0x247d68: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247D6Cu;
label_247d6c:
    // 0x247d6c: 0x0  nop
    ctx->pc = 0x247d6cu;
    // NOP
    ctx->pc = 0x247d70u;
}
