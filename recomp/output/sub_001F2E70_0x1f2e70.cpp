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

// Function: sub_001F2E70
// Address: 0x1f2e70 - 0x1f30f8
void sub_001F2E70_0x1f2e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2E70_0x1f2e70");
#endif

    switch (ctx->pc) {
        case 0x1f2f20u: goto label_1f2f20;
        case 0x1f2f38u: goto label_1f2f38;
        case 0x1f2f54u: goto label_1f2f54;
        case 0x1f2fc0u: goto label_1f2fc0;
        case 0x1f2fd8u: goto label_1f2fd8;
        case 0x1f301cu: goto label_1f301c;
        case 0x1f303cu: goto label_1f303c;
        case 0x1f3050u: goto label_1f3050;
        case 0x1f30c8u: goto label_1f30c8;
        default: break;
    }

    ctx->pc = 0x1f2e70u;

    // 0x1f2e70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f2e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f2e74: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1f2e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1f2e78: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1f2e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1f2e7c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1f2e7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1f2e80: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1f2e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1f2e84: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1f2e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1f2e88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f2e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e8c: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1f2e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1f2e90: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f2e90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e94: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1f2e94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1f2e98: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1f2e98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e9c: 0x8c52bd50  lw          $s2, -0x42B0($v0)
    ctx->pc = 0x1f2e9cu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x1f2ea0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1f2ea0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1f2ea4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1f2ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1f2ea8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1f2ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1f2eac: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1f2eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1f2eb0: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1f2eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1f2eb4: 0x12400084  beqz        $s2, . + 4 + (0x84 << 2)
    ctx->pc = 0x1F2EB4u;
    {
        const bool branch_taken_0x1f2eb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EB4u;
        // 0x1f2eb8: 0xe7b50078  swc1        $f21, 0x78($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2eb4) {
            ctx->pc = 0x1F30C8u;
            goto label_1f30c8;
        }
    }
    ctx->pc = 0x1F2EBCu;
    // 0x1f2ebc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1f2ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1f2ec0: 0x9043928a  lbu         $v1, -0x6D76($v0)
    ctx->pc = 0x1f2ec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F928Au));
    // 0x1f2ec4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1f2ec4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ec8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f2ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f2ecc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f2eccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f2ed0: 0x2c84001d  sltiu       $a0, $a0, 0x1D
    ctx->pc = 0x1f2ed0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
    // 0x1f2ed4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2ED4u;
    {
        const bool branch_taken_0x1f2ed4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2ED4u;
        // 0x1f2ed8: 0xa043928a  sb          $v1, -0x6D76($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294939274), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ed4) {
            ctx->pc = 0x1F2EE4u;
            goto label_1f2ee4;
        }
    }
    ctx->pc = 0x1F2EDCu;
    // 0x1f2edc: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1f2edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1f2ee0: 0xa2c2928a  sb          $v0, -0x6D76($s6)
    ctx->pc = 0x1f2ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 4294939274), (uint8_t)GPR_U32(ctx, 2));
label_1f2ee4:
    // 0x1f2ee4: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x1f2ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x1f2ee8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f2ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f2eec: 0x24649c38  addiu       $a0, $v1, -0x63C8
    ctx->pc = 0x1f2eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941752));
    // 0x1f2ef0: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x1f2ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1f2ef4: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2EF4u;
    {
        const bool branch_taken_0x1f2ef4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F2EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EF4u;
        // 0x1f2ef8: 0xa20200fc  sb          $v0, 0xFC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 252), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ef4) {
            ctx->pc = 0x1F2F08u;
            goto label_1f2f08;
        }
    }
    ctx->pc = 0x1F2EFCu;
    // 0x1f2efc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f2efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f2f00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2F00u;
    {
        const bool branch_taken_0x1f2f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F00u;
        // 0x1f2f04: 0x2446ee80  addiu       $a2, $v0, -0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f00) {
            ctx->pc = 0x1F2F10u;
            goto label_1f2f10;
        }
    }
    ctx->pc = 0x1F2F08u;
label_1f2f08:
    // 0x1f2f08: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f2f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f2f0c: 0x2446ee88  addiu       $a2, $v0, -0x1178
    ctx->pc = 0x1f2f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962824));
label_1f2f10:
    // 0x1f2f10: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1f2f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f2f14: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1f2f14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2f18: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x1F2F18u;
    SET_GPR_U32(ctx, 31, 0x1F2F20u);
    ctx->pc = 0x1F2F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2F18u;
    // 0x1f2f1c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1F2F18u, 0x1F2F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F20u;
label_1f2f20:
    // 0x1f2f20: 0x93a30028  lbu         $v1, 0x28($sp)
    ctx->pc = 0x1f2f20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2f24: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f2f24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f2f28: 0x0  nop
    ctx->pc = 0x1f2f28u;
    // NOP
    // 0x1f2f2c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1f2f2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1f2f30: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x1F2F30u;
    SET_GPR_U32(ctx, 31, 0x1F2F38u);
    ctx->pc = 0x1F2F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2F30u;
    // 0x1f2f34: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x1F2F30u, 0x1F2F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F38u;
label_1f2f38:
    // 0x1f2f38: 0x93a30029  lbu         $v1, 0x29($sp)
    ctx->pc = 0x1f2f38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 41)));
    // 0x1f2f3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f2f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2f40: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x1f2f40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f2f44: 0x0  nop
    ctx->pc = 0x1f2f44u;
    // NOP
    // 0x1f2f48: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x1f2f48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x1f2f4c: 0xc0ba564  jal         func_2E9590
    ctx->pc = 0x1F2F4Cu;
    SET_GPR_U32(ctx, 31, 0x1F2F54u);
    ctx->pc = 0x1F2F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2F4Cu;
    // 0x1f2f50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9590u, 0x1F2F4Cu, 0x1F2F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F54u;
label_1f2f54:
    // 0x1f2f54: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1f2f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1f2f58: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1f2f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f2f5c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1f2f5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2f60: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1f2f60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f2f64: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x1f2f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x1f2f68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f2f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f2f6c: 0xc441166c  lwc1        $f1, 0x166C($v0)
    ctx->pc = 0x1f2f6cu;
    { uint32_t bits = FAST_READ32(0x499AECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2f70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f2f70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f2f74: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f2f74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2f78: 0x0  nop
    ctx->pc = 0x1f2f78u;
    // NOP
    // 0x1f2f7c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x1F2F7Cu;
    {
        const bool branch_taken_0x1f2f7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f2f7c) {
            ctx->pc = 0x1F2FD0u;
            goto label_1f2fd0;
        }
    }
    ctx->pc = 0x1F2F84u;
    // 0x1f2f84: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F2F84u;
    {
        const bool branch_taken_0x1f2f84 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1F2F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F84u;
        // 0x1f2f88: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f84) {
            ctx->pc = 0x1F2FA0u;
            goto label_1f2fa0;
        }
    }
    ctx->pc = 0x1F2F8Cu;
    // 0x1f2f8c: 0x44916000  mtc1        $s1, $f12
    ctx->pc = 0x1f2f8cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f2f90: 0x0  nop
    ctx->pc = 0x1f2f90u;
    // NOP
    // 0x1f2f94: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1f2f94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1f2f98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F2F98u;
    {
        const bool branch_taken_0x1f2f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2f98) {
            ctx->pc = 0x1F2FB8u;
            goto label_1f2fb8;
        }
    }
    ctx->pc = 0x1F2FA0u;
label_1f2fa0:
    // 0x1f2fa0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1f2fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1f2fa4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f2fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1f2fa8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f2fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f2fac: 0x0  nop
    ctx->pc = 0x1f2facu;
    // NOP
    // 0x1f2fb0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1f2fb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1f2fb4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1f2fb4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1f2fb8:
    // 0x1f2fb8: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x1F2FB8u;
    SET_GPR_U32(ctx, 31, 0x1F2FC0u);
    ctx->pc = 0x1F2FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2FB8u;
    // 0x1f2fbc: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x1F2FB8u, 0x1F2FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2FC0u;
label_1f2fc0:
    // 0x1f2fc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f2fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2fc4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1f2fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1f2fc8: 0x2e220100  sltiu       $v0, $s1, 0x100
    ctx->pc = 0x1f2fc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1f2fcc: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x1f2fccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_1f2fd0:
    // 0x1f2fd0: 0xc0ba564  jal         func_2E9590
    ctx->pc = 0x1F2FD0u;
    SET_GPR_U32(ctx, 31, 0x1F2FD8u);
    ctx->pc = 0x1F2FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2FD0u;
    // 0x1f2fd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9590u, 0x1F2FD0u, 0x1F2FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2FD8u;
label_1f2fd8:
    // 0x1f2fd8: 0x26620480  addiu       $v0, $s3, 0x480
    ctx->pc = 0x1f2fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1152));
    // 0x1f2fdc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1f2fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f2fe0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f2fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f2fe4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f2fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f2fe8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f2fe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f2fec: 0xc4411670  lwc1        $f1, 0x1670($v0)
    ctx->pc = 0x1f2fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2ff0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f2ff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f2ff4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f2ff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2ff8: 0x0  nop
    ctx->pc = 0x1f2ff8u;
    // NOP
    // 0x1f2ffc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F2FFCu;
    {
        const bool branch_taken_0x1f2ffc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f2ffc) {
            ctx->pc = 0x1F3000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2FFCu;
            // 0x1f3000: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
            ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3004u;
            goto label_1f3004;
        }
    }
    ctx->pc = 0x1F3004u;
label_1f3004:
    // 0x1f3004: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1f3004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1f3008: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F3008u;
    {
        const bool branch_taken_0x1f3008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3008u;
        // 0x1f300c: 0x4615ad02  mul.s       $f20, $f21, $f21 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3008) {
            ctx->pc = 0x1F303Cu;
            goto label_1f303c;
        }
    }
    ctx->pc = 0x1F3010u;
    // 0x1f3010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3014: 0xc07bc7e  jal         func_1EF1F8
    ctx->pc = 0x1F3014u;
    SET_GPR_U32(ctx, 31, 0x1F301Cu);
    ctx->pc = 0x1F3018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3014u;
    // 0x1f3018: 0x26050130  addiu       $a1, $s0, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF1F8u, 0x1F3014u, 0x1F301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F301Cu;
label_1f301c:
    // 0x1f301c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1f301cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3020: 0x0  nop
    ctx->pc = 0x1f3020u;
    // NOP
    // 0x1f3024: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x1F3024u;
    {
        const bool branch_taken_0x1f3024 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F3028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3024u;
        // 0x1f3028: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3024) {
            ctx->pc = 0x1F30C8u;
            goto label_1f30c8;
        }
    }
    ctx->pc = 0x1F302Cu;
    // 0x1f302c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f302cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3030: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1f3030u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1f3034: 0xc07bc8c  jal         func_1EF230
    ctx->pc = 0x1F3034u;
    SET_GPR_U32(ctx, 31, 0x1F303Cu);
    ctx->pc = 0x1F3038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3034u;
    // 0x1f3038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF230u, 0x1F3034u, 0x1F303Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F303Cu;
label_1f303c:
    // 0x1f303c: 0xc60d0110  lwc1        $f13, 0x110($s0)
    ctx->pc = 0x1f303cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f3040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3044: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x1f3044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1f3048: 0xc07dc70  jal         func_1F71C0
    ctx->pc = 0x1F3048u;
    SET_GPR_U32(ctx, 31, 0x1F3050u);
    ctx->pc = 0x1F304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3048u;
    // 0x1f304c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F71C0u, 0x1F3048u, 0x1F3050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3050u;
label_1f3050:
    // 0x1f3050: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f3050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f3054: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1F3054u;
    {
        const bool branch_taken_0x1f3054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3054u;
        // 0x1f3058: 0xa202010c  sb          $v0, 0x10C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3054) {
            ctx->pc = 0x1F30C8u;
            goto label_1f30c8;
        }
    }
    ctx->pc = 0x1F305Cu;
    // 0x1f305c: 0x92c8928a  lbu         $t0, -0x6D76($s6)
    ctx->pc = 0x1f305cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 4294939274)));
    // 0x1f3060: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f3060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3064: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1f3064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3068: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1f3068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f306c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1f306cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1f3070: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f3070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3074: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x1f3074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x1f3078: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1f3078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f307c: 0xa211011c  sb          $s1, 0x11C($s0)
    ctx->pc = 0x1f307cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 17));
    // 0x1f3080: 0xe6150120  swc1        $f21, 0x120($s0)
    ctx->pc = 0x1f3080u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x1f3084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3088: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x1f3088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x1f308c: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x1f308cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x1f3090: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x1f3090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x1f3094: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x1f3094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
    // 0x1f3098: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x1f3098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
    // 0x1f309c: 0xa2000148  sb          $zero, 0x148($s0)
    ctx->pc = 0x1f309cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 328), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f30a0: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x1f30a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x1f30a4: 0xa60800f4  sh          $t0, 0xF4($s0)
    ctx->pc = 0x1f30a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 8));
    // 0x1f30a8: 0xae0500f8  sw          $a1, 0xF8($s0)
    ctx->pc = 0x1f30a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 5));
    // 0x1f30ac: 0xae060104  sw          $a2, 0x104($s0)
    ctx->pc = 0x1f30acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 6));
    // 0x1f30b0: 0xae020150  sw          $v0, 0x150($s0)
    ctx->pc = 0x1f30b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
    // 0x1f30b4: 0xae030124  sw          $v1, 0x124($s0)
    ctx->pc = 0x1f30b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
    // 0x1f30b8: 0xe600016c  swc1        $f0, 0x16C($s0)
    ctx->pc = 0x1f30b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1f30bc: 0xa2070170  sb          $a3, 0x170($s0)
    ctx->pc = 0x1f30bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 7));
    // 0x1f30c0: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1F30C0u;
    SET_GPR_U32(ctx, 31, 0x1F30C8u);
    ctx->pc = 0x1F30C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F30C0u;
    // 0x1f30c4: 0xae030114  sw          $v1, 0x114($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1F30C0u, 0x1F30C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F30C8u;
label_1f30c8:
    // 0x1f30c8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1f30c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f30cc: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1f30ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f30d0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1f30d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f30d4: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1f30d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f30d8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1f30d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f30dc: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1f30dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f30e0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1f30e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f30e4: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1f30e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f30e8: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1f30e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f30ec: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1f30ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f30f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F30F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F30F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F30F0u;
        // 0x1f30f4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F30F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F30F8u;
}
