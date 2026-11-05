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

// Function: sub_001B5DA8
// Address: 0x1b5da8 - 0x1b6100
void sub_001B5DA8_0x1b5da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5DA8_0x1b5da8");
#endif

    switch (ctx->pc) {
        case 0x1b5dccu: goto label_1b5dcc;
        case 0x1b6024u: goto label_1b6024;
        case 0x1b6070u: goto label_1b6070;
        case 0x1b60d8u: goto label_1b60d8;
        case 0x1b60e4u: goto label_1b60e4;
        default: break;
    }

    ctx->pc = 0x1b5da8u;

    // 0x1b5da8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b5da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b5dac: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1b5dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1b5db0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1b5db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1b5db4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b5db4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5db8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b5db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b5dbc: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x1b5dbcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1b5dc0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1b5dc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1b5dc4: 0xc06d9f6  jal         func_1B67D8
    ctx->pc = 0x1B5DC4u;
    SET_GPR_U32(ctx, 31, 0x1B5DCCu);
    ctx->pc = 0x1B5DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5DC4u;
    // 0x1b5dc8: 0xc62c00bc  lwc1        $f12, 0xBC($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B67D8u, 0x1B5DC4u, 0x1B5DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5DCCu;
label_1b5dcc:
    // 0x1b5dcc: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x1b5dccu;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x1b5dd0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1b5dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5dd4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1b5dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5dd8: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x1b5dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1b5ddc: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x1b5ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x1b5de0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1b5de0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1b5de4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1b5de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5de8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1b5de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1b5dec: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b5decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1b5df0: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1b5df0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1b5df4: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1b5df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1b5df8: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1b5df8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1b5dfc: 0x7e200070  sq          $zero, 0x70($s1)
    ctx->pc = 0x1b5dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), GPR_VEC(ctx, 0));
    // 0x1b5e00: 0xc62300bc  lwc1        $f3, 0xBC($s1)
    ctx->pc = 0x1b5e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b5e04: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1b5e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1b5e08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b5e08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5e0c: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x1b5e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
    // 0x1b5e10: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x1b5e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1b5e14: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1b5e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5e18: 0xc6210080  lwc1        $f1, 0x80($s1)
    ctx->pc = 0x1b5e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5e1c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5E1Cu;
    {
        const bool branch_taken_0x1b5e1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B5E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E1Cu;
        // 0x1b5e20: 0x8c420ff4  lw          $v0, 0xFF4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e1c) {
            ctx->pc = 0x1B5E34u;
            goto label_1b5e34;
        }
    }
    ctx->pc = 0x1B5E24u;
    // 0x1b5e24: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1b5e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1b5e28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b5e28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5e2c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1B5E2Cu;
    {
        const bool branch_taken_0x1b5e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E2Cu;
        // 0x1b5e30: 0xe440001c  swc1        $f0, 0x1C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e2c) {
            ctx->pc = 0x1B5F34u;
            goto label_1b5f34;
        }
    }
    ctx->pc = 0x1B5E34u;
label_1b5e34:
    // 0x1b5e34: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1b5e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1b5e38: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b5e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b5e3c: 0x0  nop
    ctx->pc = 0x1b5e3cu;
    // NOP
    // 0x1b5e40: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x1b5e40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5e44: 0x0  nop
    ctx->pc = 0x1b5e44u;
    // NOP
    // 0x1b5e48: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x1B5E48u;
    {
        const bool branch_taken_0x1b5e48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B5E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E48u;
        // 0x1b5e4c: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e48) {
            ctx->pc = 0x1B5ED0u;
            goto label_1b5ed0;
        }
    }
    ctx->pc = 0x1B5E50u;
    // 0x1b5e50: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x1b5e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5e54: 0x46032081  sub.s       $f2, $f4, $f3
    ctx->pc = 0x1b5e54u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x1b5e58: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1b5e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1b5e5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b5e5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5e60: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x1b5e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x1b5e64: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1b5e64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1b5e68: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b5e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b5e6c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b5e6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b5e70: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1b5e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1b5e74: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1b5e74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b5e78: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b5e78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1b5e7c: 0xe441001c  swc1        $f1, 0x1C($v0)
    ctx->pc = 0x1b5e7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x1b5e80: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x1b5e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1b5e84: 0x8c420334  lw          $v0, 0x334($v0)
    ctx->pc = 0x1b5e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x1b5e88: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x1b5e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x1b5e8c: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B5E8Cu;
    {
        const bool branch_taken_0x1b5e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B5E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E8Cu;
        // 0x1b5e90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e8c) {
            ctx->pc = 0x1B5EB4u;
            goto label_1b5eb4;
        }
    }
    ctx->pc = 0x1B5E94u;
    // 0x1b5e94: 0x8c4201e4  lw          $v0, 0x1E4($v0)
    ctx->pc = 0x1b5e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
    // 0x1b5e98: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1b5e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b5e9c: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1b5e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5ea0: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x1b5ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5ea4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b5ea4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5ea8: 0x0  nop
    ctx->pc = 0x1b5ea8u;
    // NOP
    // 0x1b5eac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B5EACu;
    {
        const bool branch_taken_0x1b5eac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5eac) {
            ctx->pc = 0x1B5EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5EACu;
            // 0x1b5eb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5EB4u;
            goto label_1b5eb4;
        }
    }
    ctx->pc = 0x1B5EB4u;
label_1b5eb4:
    // 0x1b5eb4: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1B5EB4u;
    {
        const bool branch_taken_0x1b5eb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EB4u;
        // 0x1b5eb8: 0x26230050  addiu       $v1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5eb4) {
            ctx->pc = 0x1B5F38u;
            goto label_1b5f38;
        }
    }
    ctx->pc = 0x1B5EBCu;
    // 0x1b5ebc: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x1b5ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1b5ec0: 0x8c440ff8  lw          $a0, 0xFF8($v0)
    ctx->pc = 0x1b5ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x1b5ec4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b5ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b5ec8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1B5EC8u;
    {
        const bool branch_taken_0x1b5ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EC8u;
        // 0x1b5ecc: 0x30630010  andi        $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ec8) {
            ctx->pc = 0x1B5F34u;
            goto label_1b5f34;
        }
    }
    ctx->pc = 0x1B5ED0u;
label_1b5ed0:
    // 0x1b5ed0: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1b5ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x1b5ed4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b5ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5ed8: 0x0  nop
    ctx->pc = 0x1b5ed8u;
    // NOP
    // 0x1b5edc: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1b5edcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5ee0: 0x0  nop
    ctx->pc = 0x1b5ee0u;
    // NOP
    // 0x1b5ee4: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
    ctx->pc = 0x1B5EE4u;
    {
        const bool branch_taken_0x1b5ee4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5ee4) {
            ctx->pc = 0x1B5EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5EE4u;
            // 0x1b5ee8: 0xe441001c  swc1        $f1, 0x1C($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5F34u;
            goto label_1b5f34;
        }
    }
    ctx->pc = 0x1B5EECu;
    // 0x1b5eec: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x1b5eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b5ef0: 0x46041841  sub.s       $f1, $f3, $f4
    ctx->pc = 0x1b5ef0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x1b5ef4: 0x3c013cc3  lui         $at, 0x3CC3
    ctx->pc = 0x1b5ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15555 << 16));
    // 0x1b5ef8: 0x34210c31  ori         $at, $at, 0xC31
    ctx->pc = 0x1b5ef8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3121);
    // 0x1b5efc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b5efcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5f00: 0x0  nop
    ctx->pc = 0x1b5f00u;
    // NOP
    // 0x1b5f04: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b5f04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b5f08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b5f08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b5f0c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1b5f0cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1b5f10: 0xe442001c  swc1        $f2, 0x1C($v0)
    ctx->pc = 0x1b5f10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x1b5f14: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x1b5f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1b5f18: 0x8c640334  lw          $a0, 0x334($v1)
    ctx->pc = 0x1b5f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
    // 0x1b5f1c: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x1b5f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1b5f20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b5f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b5f24: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b5f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b5f28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b5f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b5f2c: 0x286307bc  slti        $v1, $v1, 0x7BC
    ctx->pc = 0x1b5f2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1980) ? 1 : 0);
    // 0x1b5f30: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1b5f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1b5f34:
    // 0x1b5f34: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x1b5f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1b5f38:
    // 0x1b5f38: 0x26220090  addiu       $v0, $s1, 0x90
    ctx->pc = 0x1b5f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1b5f3c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1b5f3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b5f40: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1b5f40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5f44: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b5f44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b5f48: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1b5f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b5f4c: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1b5f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b5f50: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1b5f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b5f54: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1b5f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5f58: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1b5f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5f5c: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x1b5f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b5f60: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x1b5f60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b5f64: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1b5f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b5f68: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1b5f68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b5f6c: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1b5f6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b5f70: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b5f70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5f74: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1b5f74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b5f78: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1b5f78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b5f7c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1b5f7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b5f80: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1b5f80u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1b5f84: 0x4a0003bf  vwaitq
    ctx->pc = 0x1b5f84u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1b5f88: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1b5f88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b5f8c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b5f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b5f90: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1b5f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1b5f94: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x1b5f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x1b5f98: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b5f98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5f9c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1b5f9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(FAST_READ128(0x575B40u));
    // 0x1b5fa0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1b5fa0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1b5fa4: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1b5fa4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b5fa8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1b5fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b5fac: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x1b5facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b5fb0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1b5fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b5fb4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1b5fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5fb8: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1b5fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5fbc: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x1b5fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b5fc0: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1b5fc0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1b5fc4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1b5fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1b5fc8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1b5fc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1b5fcc: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x1b5fccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1b5fd0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b5fd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5fd4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1b5fd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b5fd8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1b5fd8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1b5fdc: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1b5fdcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b5fe0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1b5fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b5fe4: 0xc63400bc  lwc1        $f20, 0xBC($s1)
    ctx->pc = 0x1b5fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b5fe8: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x1b5fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b5fec: 0x0  nop
    ctx->pc = 0x1b5fecu;
    // NOP
    // 0x1b5ff0: 0x0  nop
    ctx->pc = 0x1b5ff0u;
    // NOP
    // 0x1b5ff4: 0x46142d03  div.s       $f20, $f5, $f20
    ctx->pc = 0x1b5ff4u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[5], ctx->f[20]); }
    // 0x1b5ff8: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1b5ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5ffc: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x1b5ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b6000: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1b6000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6004: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1b6004u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1b6008: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1b6008u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1b600c: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x1b600cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1b6010: 0x4600a547  neg.s       $f21, $f20
    ctx->pc = 0x1b6010u;
    ctx->f[21] = FPU_NEG_S(ctx->f[20]);
    // 0x1b6014: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1b6014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1b6018: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1b6018u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1b601c: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x1B601Cu;
    SET_GPR_U32(ctx, 31, 0x1B6024u);
    ctx->pc = 0x1B6020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B601Cu;
    // 0x1b6020: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1B601Cu, 0x1B6024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6024u;
label_1b6024:
    // 0x1b6024: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1b6024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b6028: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1b6028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b602c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1b602cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b6030: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x1b6030u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1b6034: 0xc7a4001c  lwc1        $f4, 0x1C($sp)
    ctx->pc = 0x1b6034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b6038: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b6038u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b603c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1b603cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b6040: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1b6040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1b6044: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x1b6044u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b6048: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1b6048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1b604c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1b604cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1b6050: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1b6050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1b6054: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b6054u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6058: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1b6058u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b605c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b605cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b6060: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b6060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b6064: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1b6064u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1b6068: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x1B6068u;
    SET_GPR_U32(ctx, 31, 0x1B6070u);
    ctx->pc = 0x1B606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6068u;
    // 0x1b606c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1B6068u, 0x1B6070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6070u;
label_1b6070:
    // 0x1b6070: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x1b6070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b6074: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1b6074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6078: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1b6078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b607c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x1b607cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1b6080: 0xc7a4002c  lwc1        $f4, 0x2C($sp)
    ctx->pc = 0x1b6080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b6084: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b6084u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b6088: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1b6088u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b608c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1b608cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1b6090: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x1b6090u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b6094: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1b6094u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1b6098: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1b6098u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1b609c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1b609cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1b60a0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b60a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b60a4: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1b60a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b60a8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b60a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b60ac: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b60acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b60b0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b60b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b60b4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1b60b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b60b8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1b60b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b60bc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1b60bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b60c0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1b60c0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1b60c4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1b60c4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1b60c8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1b60c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b60cc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b60ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b60d0: 0xc08951c  jal         func_225470
    ctx->pc = 0x1B60D0u;
    SET_GPR_U32(ctx, 31, 0x1B60D8u);
    ctx->pc = 0x1B60D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B60D0u;
    // 0x1b60d4: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225470u, 0x1B60D0u, 0x1B60D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B60D8u;
label_1b60d8:
    // 0x1b60d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b60d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b60dc: 0xc0d8e26  jal         func_363898
    ctx->pc = 0x1B60DCu;
    SET_GPR_U32(ctx, 31, 0x1B60E4u);
    ctx->pc = 0x1B60E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B60DCu;
    // 0x1b60e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363898u, 0x1B60DCu, 0x1B60E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B60E4u;
label_1b60e4:
    // 0x1b60e4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1b60e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b60e8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1b60e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1b60ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b60ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b60f0: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x1b60f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b60f4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1b60f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b60f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B60F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B60FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B60F8u;
        // 0x1b60fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B60F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6100u;
}
