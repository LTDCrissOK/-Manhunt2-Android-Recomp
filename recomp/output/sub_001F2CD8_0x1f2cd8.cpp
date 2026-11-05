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

// Function: sub_001F2CD8
// Address: 0x1f2cd8 - 0x1f2e70
void sub_001F2CD8_0x1f2cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2CD8_0x1f2cd8");
#endif

    switch (ctx->pc) {
        case 0x1f2d6cu: goto label_1f2d6c;
        case 0x1f2d9cu: goto label_1f2d9c;
        case 0x1f2dbcu: goto label_1f2dbc;
        case 0x1f2dd0u: goto label_1f2dd0;
        case 0x1f2e48u: goto label_1f2e48;
        default: break;
    }

    ctx->pc = 0x1f2cd8u;

    // 0x1f2cd8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f2cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f2cdc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f2cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f2ce0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1f2ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1f2ce4: 0x2448ee60  addiu       $t0, $v0, -0x11A0
    ctx->pc = 0x1f2ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962784));
    // 0x1f2ce8: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x1f2ce8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x1f2cec: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1f2cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1f2cf0: 0x92239289  lbu         $v1, -0x6D77($s1)
    ctx->pc = 0x1f2cf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F9289u));
    // 0x1f2cf4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f2cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1f2cf8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1f2cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1f2cfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f2cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f2d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f2d04: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1f2d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1f2d08: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1f2d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f2d0c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1f2d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1f2d10: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1f2d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1f2d14: 0x24a5ee70  addiu       $a1, $a1, -0x1190
    ctx->pc = 0x1f2d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962800));
    // 0x1f2d18: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x1f2d18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1f2d1c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1f2d1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d20: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1f2d20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1f2d24: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1f2d24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d28: 0x2c420021  sltiu       $v0, $v0, 0x21
    ctx->pc = 0x1f2d28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x1f2d2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2D2Cu;
    {
        const bool branch_taken_0x1f2d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D2Cu;
        // 0x1f2d30: 0xa2239289  sb          $v1, -0x6D77($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4294939273), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2d2c) {
            ctx->pc = 0x1F2D3Cu;
            goto label_1f2d3c;
        }
    }
    ctx->pc = 0x1F2D34u;
    // 0x1f2d34: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1f2d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1f2d38: 0xa2229289  sb          $v0, -0x6D77($s1)
    ctx->pc = 0x1f2d38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4294939273), (uint8_t)GPR_U32(ctx, 2));
label_1f2d3c:
    // 0x1f2d3c: 0x92229289  lbu         $v0, -0x6D77($s1)
    ctx->pc = 0x1f2d3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294939273)));
    // 0x1f2d40: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1f2d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d44: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1f2d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f2d48: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1f2d48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1f2d4c: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x1f2d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x1f2d50: 0xa20300fc  sb          $v1, 0xFC($s0)
    ctx->pc = 0x1f2d50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 252), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2d54: 0xa2300b  movn        $a2, $a1, $v0
    ctx->pc = 0x1f2d54u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
    // 0x1f2d58: 0x24849c38  addiu       $a0, $a0, -0x63C8
    ctx->pc = 0x1f2d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    // 0x1f2d5c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f2d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f2d60: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1f2d60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d64: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x1F2D64u;
    SET_GPR_U32(ctx, 31, 0x1F2D6Cu);
    ctx->pc = 0x1F2D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2D64u;
    // 0x1f2d68: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1F2D64u, 0x1F2D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2D6Cu;
label_1f2d6c:
    // 0x1f2d6c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1F2D6Cu;
    {
        const bool branch_taken_0x1f2d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D6Cu;
        // 0x1f2d70: 0x93a20029  lbu         $v0, 0x29($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 41)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2d6c) {
            ctx->pc = 0x1F2E48u;
            goto label_1f2e48;
        }
    }
    ctx->pc = 0x1F2D74u;
    // 0x1f2d74: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1f2d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f2d78: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1f2d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f2d7c: 0x0  nop
    ctx->pc = 0x1f2d7cu;
    // NOP
    // 0x1f2d80: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1f2d80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1f2d84: 0x93b20028  lbu         $s2, 0x28($sp)
    ctx->pc = 0x1f2d84u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2d88: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F2D88u;
    {
        const bool branch_taken_0x1f2d88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D88u;
        // 0x1f2d8c: 0x4614a542  mul.s       $f21, $f20, $f20 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2d88) {
            ctx->pc = 0x1F2DBCu;
            goto label_1f2dbc;
        }
    }
    ctx->pc = 0x1F2D90u;
    // 0x1f2d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d94: 0xc07bc7e  jal         func_1EF1F8
    ctx->pc = 0x1F2D94u;
    SET_GPR_U32(ctx, 31, 0x1F2D9Cu);
    ctx->pc = 0x1F2D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2D94u;
    // 0x1f2d98: 0x26050130  addiu       $a1, $s0, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF1F8u, 0x1F2D94u, 0x1F2D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2D9Cu;
label_1f2d9c:
    // 0x1f2d9c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1f2d9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2da0: 0x0  nop
    ctx->pc = 0x1f2da0u;
    // NOP
    // 0x1f2da4: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x1F2DA4u;
    {
        const bool branch_taken_0x1f2da4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F2DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2DA4u;
        // 0x1f2da8: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2da4) {
            ctx->pc = 0x1F2E48u;
            goto label_1f2e48;
        }
    }
    ctx->pc = 0x1F2DACu;
    // 0x1f2dac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f2dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2db0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1f2db0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1f2db4: 0xc07bc8c  jal         func_1EF230
    ctx->pc = 0x1F2DB4u;
    SET_GPR_U32(ctx, 31, 0x1F2DBCu);
    ctx->pc = 0x1F2DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2DB4u;
    // 0x1f2db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF230u, 0x1F2DB4u, 0x1F2DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2DBCu;
label_1f2dbc:
    // 0x1f2dbc: 0xc60d0110  lwc1        $f13, 0x110($s0)
    ctx->pc = 0x1f2dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f2dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2dc4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f2dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2dc8: 0xc07dc70  jal         func_1F71C0
    ctx->pc = 0x1F2DC8u;
    SET_GPR_U32(ctx, 31, 0x1F2DD0u);
    ctx->pc = 0x1F2DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2DC8u;
    // 0x1f2dcc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F71C0u, 0x1F2DC8u, 0x1F2DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2DD0u;
label_1f2dd0:
    // 0x1f2dd0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f2dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f2dd4: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1F2DD4u;
    {
        const bool branch_taken_0x1f2dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2DD4u;
        // 0x1f2dd8: 0xa202010c  sb          $v0, 0x10C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2dd4) {
            ctx->pc = 0x1F2E48u;
            goto label_1f2e48;
        }
    }
    ctx->pc = 0x1F2DDCu;
    // 0x1f2ddc: 0x92289289  lbu         $t0, -0x6D77($s1)
    ctx->pc = 0x1f2ddcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294939273)));
    // 0x1f2de0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2de4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1f2de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2de8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1f2de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f2dec: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1f2decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1f2df0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f2df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2df4: 0x24030168  addiu       $v1, $zero, 0x168
    ctx->pc = 0x1f2df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x1f2df8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1f2df8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f2dfc: 0xa212011c  sb          $s2, 0x11C($s0)
    ctx->pc = 0x1f2dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 18));
    // 0x1f2e00: 0xe6140120  swc1        $f20, 0x120($s0)
    ctx->pc = 0x1f2e00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x1f2e04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e08: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x1f2e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x1f2e0c: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x1f2e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x1f2e10: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x1f2e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x1f2e14: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x1f2e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
    // 0x1f2e18: 0xa2000148  sb          $zero, 0x148($s0)
    ctx->pc = 0x1f2e18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 328), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2e1c: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x1f2e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x1f2e20: 0xa60800f4  sh          $t0, 0xF4($s0)
    ctx->pc = 0x1f2e20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 8));
    // 0x1f2e24: 0xae0500f8  sw          $a1, 0xF8($s0)
    ctx->pc = 0x1f2e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 5));
    // 0x1f2e28: 0xae060104  sw          $a2, 0x104($s0)
    ctx->pc = 0x1f2e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 6));
    // 0x1f2e2c: 0xae030150  sw          $v1, 0x150($s0)
    ctx->pc = 0x1f2e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 3));
    // 0x1f2e30: 0xae020140  sw          $v0, 0x140($s0)
    ctx->pc = 0x1f2e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 2));
    // 0x1f2e34: 0xe600016c  swc1        $f0, 0x16C($s0)
    ctx->pc = 0x1f2e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1f2e38: 0xa2070170  sb          $a3, 0x170($s0)
    ctx->pc = 0x1f2e38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 7));
    // 0x1f2e3c: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x1f2e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x1f2e40: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1F2E40u;
    SET_GPR_U32(ctx, 31, 0x1F2E48u);
    ctx->pc = 0x1F2E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2E40u;
    // 0x1f2e44: 0xae020124  sw          $v0, 0x124($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1F2E40u, 0x1F2E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E48u;
label_1f2e48:
    // 0x1f2e48: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1f2e48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f2e4c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1f2e4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f2e50: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1f2e50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f2e54: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1f2e54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f2e58: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1f2e58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f2e5c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1f2e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f2e60: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x1f2e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f2e64: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1f2e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f2e68: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E68u;
        // 0x1f2e6c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2E70u;
}
