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

// Function: sub_00263C50
// Address: 0x263c50 - 0x263de0
void sub_00263C50_0x263c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263C50_0x263c50");
#endif

    switch (ctx->pc) {
        case 0x263d00u: goto label_263d00;
        case 0x263d14u: goto label_263d14;
        case 0x263d24u: goto label_263d24;
        case 0x263d68u: goto label_263d68;
        case 0x263d7cu: goto label_263d7c;
        case 0x263d8cu: goto label_263d8c;
        case 0x263d98u: goto label_263d98;
        case 0x263da0u: goto label_263da0;
        case 0x263db8u: goto label_263db8;
        default: break;
    }

    ctx->pc = 0x263c50u;

    // 0x263c50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x263c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x263c54: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x263c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x263c58: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x263c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x263c5c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x263c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x263c60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x263c60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c64: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x263c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x263c68: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x263c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x263c6c: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x263c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x263c70: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x263c70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c74: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x263c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x263c78: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x263c78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c7c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x263c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x263c80: 0x8e5100b8  lw          $s1, 0xB8($s2)
    ctx->pc = 0x263c80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x263c84: 0xc4c3000c  lwc1        $f3, 0xC($a2)
    ctx->pc = 0x263c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x263c88: 0xc6200640  lwc1        $f0, 0x640($s1)
    ctx->pc = 0x263c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263c8c: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x263c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263c90: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x263c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x263c94: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x263c94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x263c98: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x263c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x263c9c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x263c9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x263ca0: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x263ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x263ca4: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x263ca4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x263ca8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x263ca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x263cac: 0xa3a00021  sb          $zero, 0x21($sp)
    ctx->pc = 0x263cacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x263cb0: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x263cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
    // 0x263cb4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x263cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x263cb8: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x263cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x263cbc: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x263cbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x263cc0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x263cc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x263cc4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x263cc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x263cc8: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x263cc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x263ccc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x263cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x263cd0: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x263cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x263cd4: 0xa3a00022  sb          $zero, 0x22($sp)
    ctx->pc = 0x263cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x263cd8: 0x8e450274  lw          $a1, 0x274($s2)
    ctx->pc = 0x263cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 628)));
    // 0x263cdc: 0x8e4600d4  lw          $a2, 0xD4($s2)
    ctx->pc = 0x263cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x263ce0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x263ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x263ce4: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x263ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x263ce8: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x263ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x263cec: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x263cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x263cf0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x263cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x263cf4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x263cf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x263cf8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x263CF8u;
    SET_GPR_U32(ctx, 31, 0x263D00u);
    ctx->pc = 0x263CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263CF8u;
    // 0x263cfc: 0xa3a20021  sb          $v0, 0x21($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x263CF8u, 0x263D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263D00u;
label_263d00:
    // 0x263d00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x263d00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d04: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x263d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x263d08: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x263d08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x263d0c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x263D0Cu;
    SET_GPR_U32(ctx, 31, 0x263D14u);
    ctx->pc = 0x263D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263D0Cu;
    // 0x263d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x263D0Cu, 0x263D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263D14u;
label_263d14:
    // 0x263d14: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x263D14u;
    {
        const bool branch_taken_0x263d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263d14) {
            ctx->pc = 0x263D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263D14u;
            // 0x263d18: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263D28u;
            goto label_263d28;
        }
    }
    ctx->pc = 0x263D1Cu;
    // 0x263d1c: 0xc0c4900  jal         func_312400
    ctx->pc = 0x263D1Cu;
    SET_GPR_U32(ctx, 31, 0x263D24u);
    ctx->pc = 0x263D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263D1Cu;
    // 0x263d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x263D1Cu, 0x263D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263D24u;
label_263d24:
    // 0x263d24: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x263d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_263d28:
    // 0x263d28: 0x26090080  addiu       $t1, $s0, 0x80
    ctx->pc = 0x263d28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x263d2c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x263d2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x263d30: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x263d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x263d34: 0xc62f062c  lwc1        $f15, 0x62C($s1)
    ctx->pc = 0x263d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x263d38: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x263d38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d3c: 0x8e470288  lw          $a3, 0x288($s2)
    ctx->pc = 0x263d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 648)));
    // 0x263d40: 0x46007406  mov.s       $f16, $f14
    ctx->pc = 0x263d40u;
    ctx->f[16] = FPU_MOV_S(ctx->f[14]);
    // 0x263d44: 0xc62c05dc  lwc1        $f12, 0x5DC($s1)
    ctx->pc = 0x263d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x263d48: 0x27aa0010  addiu       $t2, $sp, 0x10
    ctx->pc = 0x263d48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x263d4c: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x263d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x263d50: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x263d50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x263d54: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x263d54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x263d58: 0x262b05c0  addiu       $t3, $s1, 0x5C0
    ctx->pc = 0x263d58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    // 0x263d5c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x263d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x263d60: 0xc0d1d7e  jal         func_3475F8
    ctx->pc = 0x263D60u;
    SET_GPR_U32(ctx, 31, 0x263D68u);
    ctx->pc = 0x263D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263D60u;
    // 0x263d64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3475F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3475F8u, 0x263D60u, 0x263D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263D68u;
label_263d68:
    // 0x263d68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x263d68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d6c: 0xc62c0624  lwc1        $f12, 0x624($s1)
    ctx->pc = 0x263d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x263d70: 0xc62d0628  lwc1        $f13, 0x628($s1)
    ctx->pc = 0x263d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x263d74: 0xc0d22de  jal         func_348B78
    ctx->pc = 0x263D74u;
    SET_GPR_U32(ctx, 31, 0x263D7Cu);
    ctx->pc = 0x263D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263D74u;
    // 0x263d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348B78u, 0x263D74u, 0x263D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263D7Cu;
label_263d7c:
    // 0x263d7c: 0x8e260638  lw          $a2, 0x638($s1)
    ctx->pc = 0x263d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1592)));
    // 0x263d80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d84: 0xc0d276a  jal         func_349DA8
    ctx->pc = 0x263D84u;
    SET_GPR_U32(ctx, 31, 0x263D8Cu);
    ctx->pc = 0x263D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263D84u;
    // 0x263d88: 0x8e250630  lw          $a1, 0x630($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349DA8u, 0x263D84u, 0x263D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263D8Cu;
label_263d8c:
    // 0x263d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d90: 0xc0d27cc  jal         func_349F30
    ctx->pc = 0x263D90u;
    SET_GPR_U32(ctx, 31, 0x263D98u);
    ctx->pc = 0x263D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263D90u;
    // 0x263d94: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349F30u, 0x263D90u, 0x263D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263D98u;
label_263d98:
    // 0x263d98: 0xc0d438a  jal         func_350E28
    ctx->pc = 0x263D98u;
    SET_GPR_U32(ctx, 31, 0x263DA0u);
    ctx->pc = 0x263D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263D98u;
    // 0x263d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350E28u, 0x263D98u, 0x263DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263DA0u;
label_263da0:
    // 0x263da0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x263DA0u;
    {
        const bool branch_taken_0x263da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263da0) {
            ctx->pc = 0x263DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263DA0u;
            // 0x263da4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263DBCu;
            goto label_263dbc;
        }
    }
    ctx->pc = 0x263DA8u;
    // 0x263da8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x263DA8u;
    {
        const bool branch_taken_0x263da8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x263DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263DA8u;
        // 0x263dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263da8) {
            ctx->pc = 0x263DB8u;
            goto label_263db8;
        }
    }
    ctx->pc = 0x263DB0u;
    // 0x263db0: 0xc0d1e40  jal         func_347900
    ctx->pc = 0x263DB0u;
    SET_GPR_U32(ctx, 31, 0x263DB8u);
    ctx->pc = 0x263DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263DB0u;
    // 0x263db4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347900u, 0x263DB0u, 0x263DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263DB8u;
label_263db8:
    // 0x263db8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x263db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_263dbc:
    // 0x263dbc: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x263dbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x263dc0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x263dc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x263dc4: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x263dc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x263dc8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x263dc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x263dcc: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x263dccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x263dd0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x263dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x263dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x263DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263DD4u;
        // 0x263dd8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263DDCu;
    // 0x263ddc: 0x0  nop
    ctx->pc = 0x263ddcu;
    // NOP
    ctx->pc = 0x263de0u;
}
