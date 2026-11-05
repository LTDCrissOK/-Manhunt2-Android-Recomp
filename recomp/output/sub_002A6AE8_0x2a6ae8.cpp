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

// Function: sub_002A6AE8
// Address: 0x2a6ae8 - 0x2a6d70
void sub_002A6AE8_0x2a6ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6AE8_0x2a6ae8");
#endif

    switch (ctx->pc) {
        case 0x2a6ae8u: goto label_2a6ae8;
        case 0x2a6aecu: goto label_2a6aec;
        case 0x2a6af0u: goto label_2a6af0;
        case 0x2a6af4u: goto label_2a6af4;
        case 0x2a6af8u: goto label_2a6af8;
        case 0x2a6afcu: goto label_2a6afc;
        case 0x2a6b00u: goto label_2a6b00;
        case 0x2a6b04u: goto label_2a6b04;
        case 0x2a6b08u: goto label_2a6b08;
        case 0x2a6b0cu: goto label_2a6b0c;
        case 0x2a6b10u: goto label_2a6b10;
        case 0x2a6b14u: goto label_2a6b14;
        case 0x2a6b18u: goto label_2a6b18;
        case 0x2a6b1cu: goto label_2a6b1c;
        case 0x2a6b20u: goto label_2a6b20;
        case 0x2a6b24u: goto label_2a6b24;
        case 0x2a6b28u: goto label_2a6b28;
        case 0x2a6b2cu: goto label_2a6b2c;
        case 0x2a6b30u: goto label_2a6b30;
        case 0x2a6b34u: goto label_2a6b34;
        case 0x2a6b38u: goto label_2a6b38;
        case 0x2a6b3cu: goto label_2a6b3c;
        case 0x2a6b40u: goto label_2a6b40;
        case 0x2a6b44u: goto label_2a6b44;
        case 0x2a6b48u: goto label_2a6b48;
        case 0x2a6b4cu: goto label_2a6b4c;
        case 0x2a6b50u: goto label_2a6b50;
        case 0x2a6b54u: goto label_2a6b54;
        case 0x2a6b58u: goto label_2a6b58;
        case 0x2a6b5cu: goto label_2a6b5c;
        case 0x2a6b60u: goto label_2a6b60;
        case 0x2a6b64u: goto label_2a6b64;
        case 0x2a6b68u: goto label_2a6b68;
        case 0x2a6b6cu: goto label_2a6b6c;
        case 0x2a6b70u: goto label_2a6b70;
        case 0x2a6b74u: goto label_2a6b74;
        case 0x2a6b78u: goto label_2a6b78;
        case 0x2a6b7cu: goto label_2a6b7c;
        case 0x2a6b80u: goto label_2a6b80;
        case 0x2a6b84u: goto label_2a6b84;
        case 0x2a6b88u: goto label_2a6b88;
        case 0x2a6b8cu: goto label_2a6b8c;
        case 0x2a6b90u: goto label_2a6b90;
        case 0x2a6b94u: goto label_2a6b94;
        case 0x2a6b98u: goto label_2a6b98;
        case 0x2a6b9cu: goto label_2a6b9c;
        case 0x2a6ba0u: goto label_2a6ba0;
        case 0x2a6ba4u: goto label_2a6ba4;
        case 0x2a6ba8u: goto label_2a6ba8;
        case 0x2a6bacu: goto label_2a6bac;
        case 0x2a6bb0u: goto label_2a6bb0;
        case 0x2a6bb4u: goto label_2a6bb4;
        case 0x2a6bb8u: goto label_2a6bb8;
        case 0x2a6bbcu: goto label_2a6bbc;
        case 0x2a6bc0u: goto label_2a6bc0;
        case 0x2a6bc4u: goto label_2a6bc4;
        case 0x2a6bc8u: goto label_2a6bc8;
        case 0x2a6bccu: goto label_2a6bcc;
        case 0x2a6bd0u: goto label_2a6bd0;
        case 0x2a6bd4u: goto label_2a6bd4;
        case 0x2a6bd8u: goto label_2a6bd8;
        case 0x2a6bdcu: goto label_2a6bdc;
        case 0x2a6be0u: goto label_2a6be0;
        case 0x2a6be4u: goto label_2a6be4;
        case 0x2a6be8u: goto label_2a6be8;
        case 0x2a6becu: goto label_2a6bec;
        case 0x2a6bf0u: goto label_2a6bf0;
        case 0x2a6bf4u: goto label_2a6bf4;
        case 0x2a6bf8u: goto label_2a6bf8;
        case 0x2a6bfcu: goto label_2a6bfc;
        case 0x2a6c00u: goto label_2a6c00;
        case 0x2a6c04u: goto label_2a6c04;
        case 0x2a6c08u: goto label_2a6c08;
        case 0x2a6c0cu: goto label_2a6c0c;
        case 0x2a6c10u: goto label_2a6c10;
        case 0x2a6c14u: goto label_2a6c14;
        case 0x2a6c18u: goto label_2a6c18;
        case 0x2a6c1cu: goto label_2a6c1c;
        case 0x2a6c20u: goto label_2a6c20;
        case 0x2a6c24u: goto label_2a6c24;
        case 0x2a6c28u: goto label_2a6c28;
        case 0x2a6c2cu: goto label_2a6c2c;
        case 0x2a6c30u: goto label_2a6c30;
        case 0x2a6c34u: goto label_2a6c34;
        case 0x2a6c38u: goto label_2a6c38;
        case 0x2a6c3cu: goto label_2a6c3c;
        case 0x2a6c40u: goto label_2a6c40;
        case 0x2a6c44u: goto label_2a6c44;
        case 0x2a6c48u: goto label_2a6c48;
        case 0x2a6c4cu: goto label_2a6c4c;
        case 0x2a6c50u: goto label_2a6c50;
        case 0x2a6c54u: goto label_2a6c54;
        case 0x2a6c58u: goto label_2a6c58;
        case 0x2a6c5cu: goto label_2a6c5c;
        case 0x2a6c60u: goto label_2a6c60;
        case 0x2a6c64u: goto label_2a6c64;
        case 0x2a6c68u: goto label_2a6c68;
        case 0x2a6c6cu: goto label_2a6c6c;
        case 0x2a6c70u: goto label_2a6c70;
        case 0x2a6c74u: goto label_2a6c74;
        case 0x2a6c78u: goto label_2a6c78;
        case 0x2a6c7cu: goto label_2a6c7c;
        case 0x2a6c80u: goto label_2a6c80;
        case 0x2a6c84u: goto label_2a6c84;
        case 0x2a6c88u: goto label_2a6c88;
        case 0x2a6c8cu: goto label_2a6c8c;
        case 0x2a6c90u: goto label_2a6c90;
        case 0x2a6c94u: goto label_2a6c94;
        case 0x2a6c98u: goto label_2a6c98;
        case 0x2a6c9cu: goto label_2a6c9c;
        case 0x2a6ca0u: goto label_2a6ca0;
        case 0x2a6ca4u: goto label_2a6ca4;
        case 0x2a6ca8u: goto label_2a6ca8;
        case 0x2a6cacu: goto label_2a6cac;
        case 0x2a6cb0u: goto label_2a6cb0;
        case 0x2a6cb4u: goto label_2a6cb4;
        case 0x2a6cb8u: goto label_2a6cb8;
        case 0x2a6cbcu: goto label_2a6cbc;
        case 0x2a6cc0u: goto label_2a6cc0;
        case 0x2a6cc4u: goto label_2a6cc4;
        case 0x2a6cc8u: goto label_2a6cc8;
        case 0x2a6cccu: goto label_2a6ccc;
        case 0x2a6cd0u: goto label_2a6cd0;
        case 0x2a6cd4u: goto label_2a6cd4;
        case 0x2a6cd8u: goto label_2a6cd8;
        case 0x2a6cdcu: goto label_2a6cdc;
        case 0x2a6ce0u: goto label_2a6ce0;
        case 0x2a6ce4u: goto label_2a6ce4;
        case 0x2a6ce8u: goto label_2a6ce8;
        case 0x2a6cecu: goto label_2a6cec;
        case 0x2a6cf0u: goto label_2a6cf0;
        case 0x2a6cf4u: goto label_2a6cf4;
        case 0x2a6cf8u: goto label_2a6cf8;
        case 0x2a6cfcu: goto label_2a6cfc;
        case 0x2a6d00u: goto label_2a6d00;
        case 0x2a6d04u: goto label_2a6d04;
        case 0x2a6d08u: goto label_2a6d08;
        case 0x2a6d0cu: goto label_2a6d0c;
        case 0x2a6d10u: goto label_2a6d10;
        case 0x2a6d14u: goto label_2a6d14;
        case 0x2a6d18u: goto label_2a6d18;
        case 0x2a6d1cu: goto label_2a6d1c;
        case 0x2a6d20u: goto label_2a6d20;
        case 0x2a6d24u: goto label_2a6d24;
        case 0x2a6d28u: goto label_2a6d28;
        case 0x2a6d2cu: goto label_2a6d2c;
        case 0x2a6d30u: goto label_2a6d30;
        case 0x2a6d34u: goto label_2a6d34;
        case 0x2a6d38u: goto label_2a6d38;
        case 0x2a6d3cu: goto label_2a6d3c;
        case 0x2a6d40u: goto label_2a6d40;
        case 0x2a6d44u: goto label_2a6d44;
        case 0x2a6d48u: goto label_2a6d48;
        case 0x2a6d4cu: goto label_2a6d4c;
        case 0x2a6d50u: goto label_2a6d50;
        case 0x2a6d54u: goto label_2a6d54;
        case 0x2a6d58u: goto label_2a6d58;
        case 0x2a6d5cu: goto label_2a6d5c;
        case 0x2a6d60u: goto label_2a6d60;
        case 0x2a6d64u: goto label_2a6d64;
        case 0x2a6d68u: goto label_2a6d68;
        case 0x2a6d6cu: goto label_2a6d6c;
        default: break;
    }

    ctx->pc = 0x2a6ae8u;

label_2a6ae8:
    // 0x2a6ae8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a6ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a6aec:
    // 0x2a6aec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a6aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2a6af0:
    // 0x2a6af0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a6af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2a6af4:
    // 0x2a6af4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a6af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a6af8:
    // 0x2a6af8: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x2a6af8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2a6afc:
    // 0x2a6afc: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2a6afcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2a6b00:
    // 0x2a6b00: 0x92020210  lbu         $v0, 0x210($s0)
    ctx->pc = 0x2a6b00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 528)));
label_2a6b04:
    // 0x2a6b04: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2a6b08:
    if (ctx->pc == 0x2A6B08u) {
        ctx->pc = 0x2A6B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6B04u;
        // 0x2a6b08: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6B0Cu;
        goto label_2a6b0c;
    }
    ctx->pc = 0x2A6B04u;
    {
        const bool branch_taken_0x2a6b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6B04u;
        // 0x2a6b08: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6b04) {
            ctx->pc = 0x2A6B6Cu;
            goto label_2a6b6c;
        }
    }
    ctx->pc = 0x2A6B0Cu;
label_2a6b0c:
    // 0x2a6b0c: 0xc0dc10e  jal         func_370438
label_2a6b10:
    if (ctx->pc == 0x2A6B10u) {
        ctx->pc = 0x2A6B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6B0Cu;
        // 0x2a6b10: 0xa2000210  sb          $zero, 0x210($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 528), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6B14u;
        goto label_2a6b14;
    }
    ctx->pc = 0x2A6B0Cu;
    SET_GPR_U32(ctx, 31, 0x2A6B14u);
    ctx->pc = 0x2A6B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6B0Cu;
    // 0x2a6b10: 0xa2000210  sb          $zero, 0x210($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 528), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2A6B0Cu, 0x2A6B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6B14u;
label_2a6b14:
    // 0x2a6b14: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2a6b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2a6b18:
    // 0x2a6b18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a6b18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a6b1c:
    // 0x2a6b1c: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2a6b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_2a6b20:
    // 0x2a6b20: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a6b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2a6b24:
    // 0x2a6b24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a6b24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a6b28:
    // 0x2a6b28: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2a6b28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a6b2c:
    // 0x2a6b2c: 0x0  nop
    ctx->pc = 0x2a6b2cu;
    // NOP
label_2a6b30:
    // 0x2a6b30: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_2a6b34:
    if (ctx->pc == 0x2A6B34u) {
        ctx->pc = 0x2A6B38u;
        goto label_2a6b38;
    }
    ctx->pc = 0x2A6B30u;
    {
        const bool branch_taken_0x2a6b30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a6b30) {
            ctx->pc = 0x2A6B58u;
            goto label_2a6b58;
        }
    }
    ctx->pc = 0x2A6B38u;
label_2a6b38:
    // 0x2a6b38: 0xc0dc10e  jal         func_370438
label_2a6b3c:
    if (ctx->pc == 0x2A6B3Cu) {
        ctx->pc = 0x2A6B40u;
        goto label_2a6b40;
    }
    ctx->pc = 0x2A6B38u;
    SET_GPR_U32(ctx, 31, 0x2A6B40u);
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2A6B38u, 0x2A6B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6B40u;
label_2a6b40:
    // 0x2a6b40: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2a6b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2a6b44:
    // 0x2a6b44: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a6b44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2a6b48:
    // 0x2a6b48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a6b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a6b4c:
    // 0x2a6b4c: 0x8e020298  lw          $v0, 0x298($s0)
    ctx->pc = 0x2a6b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
label_2a6b50:
    // 0x2a6b50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a6b50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a6b54:
    // 0x2a6b54: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x2a6b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
label_2a6b58:
    // 0x2a6b58: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2a6b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_2a6b5c:
    // 0x2a6b5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a6b5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6b60:
    // 0x2a6b60: 0x0  nop
    ctx->pc = 0x2a6b60u;
    // NOP
label_2a6b64:
    // 0x2a6b64: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2a6b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
label_2a6b68:
    // 0x2a6b68: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2a6b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_2a6b6c:
    // 0x2a6b6c: 0xc60102d0  lwc1        $f1, 0x2D0($s0)
    ctx->pc = 0x2a6b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6b70:
    // 0x2a6b70: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x2a6b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6b74:
    // 0x2a6b74: 0xc60202d4  lwc1        $f2, 0x2D4($s0)
    ctx->pc = 0x2a6b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a6b78:
    // 0x2a6b78: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2a6b78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2a6b7c:
    // 0x2a6b7c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2a6b7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2a6b80:
    // 0x2a6b80: 0xe60102d0  swc1        $f1, 0x2D0($s0)
    ctx->pc = 0x2a6b80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
label_2a6b84:
    // 0x2a6b84: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x2a6b84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a6b88:
    // 0x2a6b88: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x2a6b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6b8c:
    // 0x2a6b8c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2a6b8cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2a6b90:
    // 0x2a6b90: 0x45000039  bc1f        . + 4 + (0x39 << 2)
label_2a6b94:
    if (ctx->pc == 0x2A6B94u) {
        ctx->pc = 0x2A6B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6B90u;
        // 0x2a6b94: 0xe60202d4  swc1        $f2, 0x2D4($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6B98u;
        goto label_2a6b98;
    }
    ctx->pc = 0x2A6B90u;
    {
        const bool branch_taken_0x2a6b90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A6B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6B90u;
        // 0x2a6b94: 0xe60202d4  swc1        $f2, 0x2D4($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6b90) {
            ctx->pc = 0x2A6C78u;
            goto label_2a6c78;
        }
    }
    ctx->pc = 0x2A6B98u;
label_2a6b98:
    // 0x2a6b98: 0xc0dc10e  jal         func_370438
label_2a6b9c:
    if (ctx->pc == 0x2A6B9Cu) {
        ctx->pc = 0x2A6BA0u;
        goto label_2a6ba0;
    }
    ctx->pc = 0x2A6B98u;
    SET_GPR_U32(ctx, 31, 0x2A6BA0u);
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2A6B98u, 0x2A6BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6BA0u;
label_2a6ba0:
    // 0x2a6ba0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2a6ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2a6ba4:
    // 0x2a6ba4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a6ba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a6ba8:
    // 0x2a6ba8: 0x8e020298  lw          $v0, 0x298($s0)
    ctx->pc = 0x2a6ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
label_2a6bac:
    // 0x2a6bac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2a6bb0:
    if (ctx->pc == 0x2A6BB0u) {
        ctx->pc = 0x2A6BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6BACu;
        // 0x2a6bb0: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6BB4u;
        goto label_2a6bb4;
    }
    ctx->pc = 0x2A6BACu;
    {
        const bool branch_taken_0x2a6bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6BACu;
        // 0x2a6bb0: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6bac) {
            ctx->pc = 0x2A6BB8u;
            goto label_2a6bb8;
        }
    }
    ctx->pc = 0x2A6BB4u;
label_2a6bb4:
    // 0x2a6bb4: 0xa0400188  sb          $zero, 0x188($v0)
    ctx->pc = 0x2a6bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 392), (uint8_t)GPR_U32(ctx, 0));
label_2a6bb8:
    // 0x2a6bb8: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x2a6bb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a6bbc:
    // 0x2a6bbc: 0x0  nop
    ctx->pc = 0x2a6bbcu;
    // NOP
label_2a6bc0:
    // 0x2a6bc0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2a6bc4:
    if (ctx->pc == 0x2A6BC4u) {
        ctx->pc = 0x2A6BC8u;
        goto label_2a6bc8;
    }
    ctx->pc = 0x2A6BC0u;
    {
        const bool branch_taken_0x2a6bc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a6bc0) {
            ctx->pc = 0x2A6BD8u;
            goto label_2a6bd8;
        }
    }
    ctx->pc = 0x2A6BC8u;
label_2a6bc8:
    // 0x2a6bc8: 0xc0dc10e  jal         func_370438
label_2a6bcc:
    if (ctx->pc == 0x2A6BCCu) {
        ctx->pc = 0x2A6BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6BC8u;
        // 0x2a6bcc: 0xae0002a0  sw          $zero, 0x2A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6BD0u;
        goto label_2a6bd0;
    }
    ctx->pc = 0x2A6BC8u;
    SET_GPR_U32(ctx, 31, 0x2A6BD0u);
    ctx->pc = 0x2A6BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6BC8u;
    // 0x2a6bcc: 0xae0002a0  sw          $zero, 0x2A0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2A6BC8u, 0x2A6BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6BD0u;
label_2a6bd0:
    // 0x2a6bd0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a6bd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2a6bd4:
    // 0x2a6bd4: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2a6bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
label_2a6bd8:
    // 0x2a6bd8: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2a6bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_2a6bdc:
    // 0x2a6bdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a6bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6be0:
    // 0x2a6be0: 0x0  nop
    ctx->pc = 0x2a6be0u;
    // NOP
label_2a6be4:
    // 0x2a6be4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2a6be4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a6be8:
    // 0x2a6be8: 0x0  nop
    ctx->pc = 0x2a6be8u;
    // NOP
label_2a6bec:
    // 0x2a6bec: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2a6bf0:
    if (ctx->pc == 0x2A6BF0u) {
        ctx->pc = 0x2A6BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6BECu;
        // 0x2a6bf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6BF4u;
        goto label_2a6bf4;
    }
    ctx->pc = 0x2A6BECu;
    {
        const bool branch_taken_0x2a6bec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A6BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6BECu;
        // 0x2a6bf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6bec) {
            ctx->pc = 0x2A6C08u;
            goto label_2a6c08;
        }
    }
    ctx->pc = 0x2A6BF4u;
label_2a6bf4:
    // 0x2a6bf4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2a6bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_2a6bf8:
    // 0x2a6bf8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a6bf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2a6bfc:
    // 0x2a6bfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a6bfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6c00:
    // 0x2a6c00: 0xae0202a0  sw          $v0, 0x2A0($s0)
    ctx->pc = 0x2a6c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 2));
label_2a6c04:
    // 0x2a6c04: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2a6c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
label_2a6c08:
    // 0x2a6c08: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x2a6c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_2a6c0c:
    // 0x2a6c0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a6c0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6c10:
    // 0x2a6c10: 0x0  nop
    ctx->pc = 0x2a6c10u;
    // NOP
label_2a6c14:
    // 0x2a6c14: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2a6c14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a6c18:
    // 0x2a6c18: 0x0  nop
    ctx->pc = 0x2a6c18u;
    // NOP
label_2a6c1c:
    // 0x2a6c1c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2a6c20:
    if (ctx->pc == 0x2A6C20u) {
        ctx->pc = 0x2A6C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C1Cu;
        // 0x2a6c20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6C24u;
        goto label_2a6c24;
    }
    ctx->pc = 0x2A6C1Cu;
    {
        const bool branch_taken_0x2a6c1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A6C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C1Cu;
        // 0x2a6c20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6c1c) {
            ctx->pc = 0x2A6C38u;
            goto label_2a6c38;
        }
    }
    ctx->pc = 0x2A6C24u;
label_2a6c24:
    // 0x2a6c24: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2a6c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_2a6c28:
    // 0x2a6c28: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a6c28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2a6c2c:
    // 0x2a6c2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a6c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6c30:
    // 0x2a6c30: 0xae0202a0  sw          $v0, 0x2A0($s0)
    ctx->pc = 0x2a6c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 2));
label_2a6c34:
    // 0x2a6c34: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2a6c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
label_2a6c38:
    // 0x2a6c38: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x2a6c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
label_2a6c3c:
    // 0x2a6c3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a6c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6c40:
    // 0x2a6c40: 0x0  nop
    ctx->pc = 0x2a6c40u;
    // NOP
label_2a6c44:
    // 0x2a6c44: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2a6c44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a6c48:
    // 0x2a6c48: 0x0  nop
    ctx->pc = 0x2a6c48u;
    // NOP
label_2a6c4c:
    // 0x2a6c4c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2a6c50:
    if (ctx->pc == 0x2A6C50u) {
        ctx->pc = 0x2A6C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C4Cu;
        // 0x2a6c50: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6C54u;
        goto label_2a6c54;
    }
    ctx->pc = 0x2A6C4Cu;
    {
        const bool branch_taken_0x2a6c4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A6C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C4Cu;
        // 0x2a6c50: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6c4c) {
            ctx->pc = 0x2A6C78u;
            goto label_2a6c78;
        }
    }
    ctx->pc = 0x2A6C54u;
label_2a6c54:
    // 0x2a6c54: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2a6c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2a6c58:
    // 0x2a6c58: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a6c58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2a6c5c:
    // 0x2a6c5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a6c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6c60:
    // 0x2a6c60: 0x8e030298  lw          $v1, 0x298($s0)
    ctx->pc = 0x2a6c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
label_2a6c64:
    // 0x2a6c64: 0xae0202a0  sw          $v0, 0x2A0($s0)
    ctx->pc = 0x2a6c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 2));
label_2a6c68:
    // 0x2a6c68: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2a6c6c:
    if (ctx->pc == 0x2A6C6Cu) {
        ctx->pc = 0x2A6C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C68u;
        // 0x2a6c6c: 0xe60002d0  swc1        $f0, 0x2D0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6C70u;
        goto label_2a6c70;
    }
    ctx->pc = 0x2A6C68u;
    {
        const bool branch_taken_0x2a6c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C68u;
        // 0x2a6c6c: 0xe60002d0  swc1        $f0, 0x2D0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6c68) {
            ctx->pc = 0x2A6C78u;
            goto label_2a6c78;
        }
    }
    ctx->pc = 0x2A6C70u;
label_2a6c70:
    // 0x2a6c70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a6c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6c74:
    // 0x2a6c74: 0xa0620188  sb          $v0, 0x188($v1)
    ctx->pc = 0x2a6c74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 392), (uint8_t)GPR_U32(ctx, 2));
label_2a6c78:
    // 0x2a6c78: 0xc0a9b5c  jal         func_2A6D70
label_2a6c7c:
    if (ctx->pc == 0x2A6C7Cu) {
        ctx->pc = 0x2A6C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C78u;
        // 0x2a6c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6C80u;
        goto label_2a6c80;
    }
    ctx->pc = 0x2A6C78u;
    SET_GPR_U32(ctx, 31, 0x2A6C80u);
    ctx->pc = 0x2A6C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6C78u;
    // 0x2a6c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6D70u, 0x2A6C78u, 0x2A6C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6C80u;
label_2a6c80:
    // 0x2a6c80: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a6c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2a6c84:
    // 0x2a6c84: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_2a6c88:
    if (ctx->pc == 0x2A6C88u) {
        ctx->pc = 0x2A6C8Cu;
        goto label_2a6c8c;
    }
    ctx->pc = 0x2A6C84u;
    {
        const bool branch_taken_0x2a6c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6c84) {
            ctx->pc = 0x2A6D04u;
            goto label_2a6d04;
        }
    }
    ctx->pc = 0x2A6C8Cu;
label_2a6c8c:
    // 0x2a6c8c: 0x8e0202b4  lw          $v0, 0x2B4($s0)
    ctx->pc = 0x2a6c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
label_2a6c90:
    // 0x2a6c90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2a6c94:
    if (ctx->pc == 0x2A6C94u) {
        ctx->pc = 0x2A6C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C90u;
        // 0x2a6c94: 0x260302b4  addiu       $v1, $s0, 0x2B4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 692));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6C98u;
        goto label_2a6c98;
    }
    ctx->pc = 0x2A6C90u;
    {
        const bool branch_taken_0x2a6c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C90u;
        // 0x2a6c94: 0x260302b4  addiu       $v1, $s0, 0x2B4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 692));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6c90) {
            ctx->pc = 0x2A6CB0u;
            goto label_2a6cb0;
        }
    }
    ctx->pc = 0x2A6C98u;
label_2a6c98:
    // 0x2a6c98: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2a6c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a6c9c:
    // 0x2a6c9c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2a6c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a6ca0:
    // 0x2a6ca0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a6ca0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a6ca4:
    // 0x2a6ca4: 0x0  nop
    ctx->pc = 0x2a6ca4u;
    // NOP
label_2a6ca8:
    // 0x2a6ca8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2a6cac:
    if (ctx->pc == 0x2A6CACu) {
        ctx->pc = 0x2A6CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6CA8u;
        // 0x2a6cac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6CB0u;
        goto label_2a6cb0;
    }
    ctx->pc = 0x2A6CA8u;
    {
        const bool branch_taken_0x2a6ca8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A6CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6CA8u;
        // 0x2a6cac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6ca8) {
            ctx->pc = 0x2A6CB4u;
            goto label_2a6cb4;
        }
    }
    ctx->pc = 0x2A6CB0u;
label_2a6cb0:
    // 0x2a6cb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a6cb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a6cb4:
    // 0x2a6cb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a6cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2a6cb8:
    // 0x2a6cb8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2a6cbc:
    if (ctx->pc == 0x2A6CBCu) {
        ctx->pc = 0x2A6CC0u;
        goto label_2a6cc0;
    }
    ctx->pc = 0x2A6CB8u;
    {
        const bool branch_taken_0x2a6cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6cb8) {
            ctx->pc = 0x2A6D04u;
            goto label_2a6d04;
        }
    }
    ctx->pc = 0x2A6CC0u;
label_2a6cc0:
    // 0x2a6cc0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2a6cc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2a6cc4:
    // 0x2a6cc4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2a6cc8:
    if (ctx->pc == 0x2A6CC8u) {
        ctx->pc = 0x2A6CCCu;
        goto label_2a6ccc;
    }
    ctx->pc = 0x2A6CC4u;
    {
        const bool branch_taken_0x2a6cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6cc4) {
            ctx->pc = 0x2A6CE8u;
            goto label_2a6ce8;
        }
    }
    ctx->pc = 0x2A6CCCu;
label_2a6ccc:
    // 0x2a6ccc: 0xc0a9c26  jal         func_2A7098
label_2a6cd0:
    if (ctx->pc == 0x2A6CD0u) {
        ctx->pc = 0x2A6CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6CCCu;
        // 0x2a6cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6CD4u;
        goto label_2a6cd4;
    }
    ctx->pc = 0x2A6CCCu;
    SET_GPR_U32(ctx, 31, 0x2A6CD4u);
    ctx->pc = 0x2A6CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6CCCu;
    // 0x2a6cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7098u, 0x2A6CCCu, 0x2A6CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6CD4u;
label_2a6cd4:
    // 0x2a6cd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2a6cd8:
    if (ctx->pc == 0x2A6CD8u) {
        ctx->pc = 0x2A6CDCu;
        goto label_2a6cdc;
    }
    ctx->pc = 0x2A6CD4u;
    {
        const bool branch_taken_0x2a6cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6cd4) {
            ctx->pc = 0x2A6CE8u;
            goto label_2a6ce8;
        }
    }
    ctx->pc = 0x2A6CDCu;
label_2a6cdc:
    // 0x2a6cdc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a6cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2a6ce0:
    // 0x2a6ce0: 0xc0a70f8  jal         func_29C3E0
label_2a6ce4:
    if (ctx->pc == 0x2A6CE4u) {
        ctx->pc = 0x2A6CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6CE0u;
        // 0x2a6ce4: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6CE8u;
        goto label_2a6ce8;
    }
    ctx->pc = 0x2A6CE0u;
    SET_GPR_U32(ctx, 31, 0x2A6CE8u);
    ctx->pc = 0x2A6CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6CE0u;
    // 0x2a6ce4: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C3E0u, 0x2A6CE0u, 0x2A6CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6CE8u;
label_2a6ce8:
    // 0x2a6ce8: 0xc0a9c22  jal         func_2A7088
label_2a6cec:
    if (ctx->pc == 0x2A6CECu) {
        ctx->pc = 0x2A6CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6CE8u;
        // 0x2a6cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6CF0u;
        goto label_2a6cf0;
    }
    ctx->pc = 0x2A6CE8u;
    SET_GPR_U32(ctx, 31, 0x2A6CF0u);
    ctx->pc = 0x2A6CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6CE8u;
    // 0x2a6cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7088u, 0x2A6CE8u, 0x2A6CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6CF0u;
label_2a6cf0:
    // 0x2a6cf0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2a6cf4:
    if (ctx->pc == 0x2A6CF4u) {
        ctx->pc = 0x2A6CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6CF0u;
        // 0x2a6cf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6CF8u;
        goto label_2a6cf8;
    }
    ctx->pc = 0x2A6CF0u;
    {
        const bool branch_taken_0x2a6cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6CF0u;
        // 0x2a6cf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6cf0) {
            ctx->pc = 0x2A6CFCu;
            goto label_2a6cfc;
        }
    }
    ctx->pc = 0x2A6CF8u;
label_2a6cf8:
    // 0x2a6cf8: 0xa20202b0  sb          $v0, 0x2B0($s0)
    ctx->pc = 0x2a6cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 688), (uint8_t)GPR_U32(ctx, 2));
label_2a6cfc:
    // 0x2a6cfc: 0x10000015  b           . + 4 + (0x15 << 2)
label_2a6d00:
    if (ctx->pc == 0x2A6D00u) {
        ctx->pc = 0x2A6D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6CFCu;
        // 0x2a6d00: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6D04u;
        goto label_2a6d04;
    }
    ctx->pc = 0x2A6CFCu;
    {
        const bool branch_taken_0x2a6cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6CFCu;
        // 0x2a6d00: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6cfc) {
            ctx->pc = 0x2A6D54u;
            goto label_2a6d54;
        }
    }
    ctx->pc = 0x2A6D04u;
label_2a6d04:
    // 0x2a6d04: 0xc0a9b80  jal         func_2A6E00
label_2a6d08:
    if (ctx->pc == 0x2A6D08u) {
        ctx->pc = 0x2A6D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D04u;
        // 0x2a6d08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6D0Cu;
        goto label_2a6d0c;
    }
    ctx->pc = 0x2A6D04u;
    SET_GPR_U32(ctx, 31, 0x2A6D0Cu);
    ctx->pc = 0x2A6D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6D04u;
    // 0x2a6d08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6E00u, 0x2A6D04u, 0x2A6D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6D0Cu;
label_2a6d0c:
    // 0x2a6d0c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_2a6d10:
    if (ctx->pc == 0x2A6D10u) {
        ctx->pc = 0x2A6D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D0Cu;
        // 0x2a6d10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6D14u;
        goto label_2a6d14;
    }
    ctx->pc = 0x2A6D0Cu;
    {
        const bool branch_taken_0x2a6d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6d0c) {
            ctx->pc = 0x2A6D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6D0Cu;
            // 0x2a6d10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6D58u;
            goto label_2a6d58;
        }
    }
    ctx->pc = 0x2A6D14u;
label_2a6d14:
    // 0x2a6d14: 0xc0a9c26  jal         func_2A7098
label_2a6d18:
    if (ctx->pc == 0x2A6D18u) {
        ctx->pc = 0x2A6D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D14u;
        // 0x2a6d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6D1Cu;
        goto label_2a6d1c;
    }
    ctx->pc = 0x2A6D14u;
    SET_GPR_U32(ctx, 31, 0x2A6D1Cu);
    ctx->pc = 0x2A6D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6D14u;
    // 0x2a6d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7098u, 0x2A6D14u, 0x2A6D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6D1Cu;
label_2a6d1c:
    // 0x2a6d1c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_2a6d20:
    if (ctx->pc == 0x2A6D20u) {
        ctx->pc = 0x2A6D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D1Cu;
        // 0x2a6d20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6D24u;
        goto label_2a6d24;
    }
    ctx->pc = 0x2A6D1Cu;
    {
        const bool branch_taken_0x2a6d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6d1c) {
            ctx->pc = 0x2A6D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6D1Cu;
            // 0x2a6d20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6D58u;
            goto label_2a6d58;
        }
    }
    ctx->pc = 0x2A6D24u;
label_2a6d24:
    // 0x2a6d24: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a6d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2a6d28:
    // 0x2a6d28: 0xc0a71d2  jal         func_29C748
label_2a6d2c:
    if (ctx->pc == 0x2A6D2Cu) {
        ctx->pc = 0x2A6D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D28u;
        // 0x2a6d2c: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6D30u;
        goto label_2a6d30;
    }
    ctx->pc = 0x2A6D28u;
    SET_GPR_U32(ctx, 31, 0x2A6D30u);
    ctx->pc = 0x2A6D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6D28u;
    // 0x2a6d2c: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C748u, 0x2A6D28u, 0x2A6D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6D30u;
label_2a6d30:
    // 0x2a6d30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a6d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6d34:
    // 0x2a6d34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a6d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a6d38:
    // 0x2a6d38: 0x8c820264  lw          $v0, 0x264($a0)
    ctx->pc = 0x2a6d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 612)));
label_2a6d3c:
    // 0x2a6d3c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_2a6d40:
    if (ctx->pc == 0x2A6D40u) {
        ctx->pc = 0x2A6D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D3Cu;
        // 0x2a6d40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6D44u;
        goto label_2a6d44;
    }
    ctx->pc = 0x2A6D3Cu;
    {
        const bool branch_taken_0x2a6d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A6D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D3Cu;
        // 0x2a6d40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6d3c) {
            ctx->pc = 0x2A6D58u;
            goto label_2a6d58;
        }
    }
    ctx->pc = 0x2A6D44u;
label_2a6d44:
    // 0x2a6d44: 0x8c830278  lw          $v1, 0x278($a0)
    ctx->pc = 0x2a6d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
label_2a6d48:
    // 0x2a6d48: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2a6d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2a6d4c:
    // 0x2a6d4c: 0x40f809  jalr        $v0
label_2a6d50:
    if (ctx->pc == 0x2A6D50u) {
        ctx->pc = 0x2A6D54u;
        goto label_2a6d54;
    }
    ctx->pc = 0x2A6D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A6D54u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6D4Cu, 0x2A6D54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A6D54u;
label_2a6d54:
    // 0x2a6d54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a6d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a6d58:
    // 0x2a6d58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a6d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2a6d5c:
    // 0x2a6d5c: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x2a6d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2a6d60:
    // 0x2a6d60: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2a6d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2a6d64:
    // 0x2a6d64: 0x3e00008  jr          $ra
label_2a6d68:
    if (ctx->pc == 0x2A6D68u) {
        ctx->pc = 0x2A6D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D64u;
        // 0x2a6d68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6D6Cu;
        goto label_2a6d6c;
    }
    ctx->pc = 0x2A6D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D64u;
        // 0x2a6d68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6D6Cu;
label_2a6d6c:
    // 0x2a6d6c: 0x0  nop
    ctx->pc = 0x2a6d6cu;
    // NOP
    ctx->pc = 0x2a6d70u;
}
