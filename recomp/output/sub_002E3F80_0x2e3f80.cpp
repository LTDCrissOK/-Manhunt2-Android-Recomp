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

// Function: sub_002E3F80
// Address: 0x2e3f80 - 0x2e40f8
void sub_002E3F80_0x2e3f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3F80_0x2e3f80");
#endif

    switch (ctx->pc) {
        case 0x2e3fe8u: goto label_2e3fe8;
        case 0x2e4030u: goto label_2e4030;
        case 0x2e406cu: goto label_2e406c;
        case 0x2e40a0u: goto label_2e40a0;
        default: break;
    }

    ctx->pc = 0x2e3f80u;

    // 0x2e3f80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e3f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e3f84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e3f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e3f88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e3f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e3f8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e3f8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3f90: 0xe7ba0050  swc1        $f26, 0x50($sp)
    ctx->pc = 0x2e3f90u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2e3f94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e3f94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3f98: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x2e3f98u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2e3f9c: 0x46006686  mov.s       $f26, $f12
    ctx->pc = 0x2e3f9cu;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
    // 0x2e3fa0: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x2e3fa0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2e3fa4: 0x46007646  mov.s       $f25, $f14
    ctx->pc = 0x2e3fa4u;
    ctx->f[25] = FPU_MOV_S(ctx->f[14]);
    // 0x2e3fa8: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x2e3fa8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2e3fac: 0x46007e06  mov.s       $f24, $f15
    ctx->pc = 0x2e3facu;
    ctx->f[24] = FPU_MOV_S(ctx->f[15]);
    // 0x2e3fb0: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2e3fb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e3fb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e3fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e3fb8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e3fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2e3fbc: 0xe7bb0058  swc1        $f27, 0x58($sp)
    ctx->pc = 0x2e3fbcu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2e3fc0: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x2e3fc0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2e3fc4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2e3fc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e3fc8: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2e3fc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2e3fcc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e3fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e3fd0: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2E3FD0u;
    {
        const bool branch_taken_0x2e3fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3FD0u;
        // 0x2e3fd4: 0x46006d46  mov.s       $f21, $f13 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3fd0) {
            ctx->pc = 0x2E40BCu;
            goto label_2e40bc;
        }
    }
    ctx->pc = 0x2E3FD8u;
    // 0x2e3fd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e3fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e3fdc: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2e3fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2e3fe0: 0x4600b6c6  mov.s       $f27, $f22
    ctx->pc = 0x2e3fe0u;
    ctx->f[27] = FPU_MOV_S(ctx->f[22]);
    // 0x2e3fe4: 0x0  nop
    ctx->pc = 0x2e3fe4u;
    // NOP
label_2e3fe8:
    // 0x2e3fe8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2e3fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2e3fec: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x2e3fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2e3ff0: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E3FF0u;
    {
        const bool branch_taken_0x2e3ff0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2E3FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3FF0u;
        // 0x2e3ff4: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3ff0) {
            ctx->pc = 0x2E400Cu;
            goto label_2e400c;
        }
    }
    ctx->pc = 0x2E3FF8u;
    // 0x2e3ff8: 0x44916800  mtc1        $s1, $f13
    ctx->pc = 0x2e3ff8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e3ffc: 0x0  nop
    ctx->pc = 0x2e3ffcu;
    // NOP
    // 0x2e4000: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2e4000u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2e4004: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E4004u;
    {
        const bool branch_taken_0x2e4004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4004) {
            ctx->pc = 0x2E4028u;
            goto label_2e4028;
        }
    }
    ctx->pc = 0x2E400Cu;
label_2e400c:
    // 0x2e400c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2e400cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2e4010: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x2e4010u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x2e4014: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e4014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e4018: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e4018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e401c: 0x0  nop
    ctx->pc = 0x2e401cu;
    // NOP
    // 0x2e4020: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2e4020u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2e4024: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x2e4024u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_2e4028:
    // 0x2e4028: 0xc0e41ea  jal         func_3907A8
    ctx->pc = 0x2E4028u;
    SET_GPR_U32(ctx, 31, 0x2E4030u);
    ctx->pc = 0x2E402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4028u;
    // 0x2e402c: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3907A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3907A8u, 0x2E4028u, 0x2E4030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4030u;
label_2e4030:
    // 0x2e4030: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2e4030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4034: 0x461b0836  c.le.s      $f1, $f27
    ctx->pc = 0x2e4034u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e4038: 0x0  nop
    ctx->pc = 0x2e4038u;
    // NOP
    // 0x2e403c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2E403Cu;
    {
        const bool branch_taken_0x2e403c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E4040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E403Cu;
        // 0x2e4040: 0x4600d502  mul.s       $f20, $f26, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e403c) {
            ctx->pc = 0x2E4074u;
            goto label_2e4074;
        }
    }
    ctx->pc = 0x2E4044u;
    // 0x2e4044: 0x0  nop
    ctx->pc = 0x2e4044u;
    // NOP
    // 0x2e4048: 0x0  nop
    ctx->pc = 0x2e4048u;
    // NOP
    // 0x2e404c: 0x4615b883  div.s       $f2, $f23, $f21
    ctx->pc = 0x2e404cu;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[23], ctx->f[21]); }
    // 0x2e4050: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2e4050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4054: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2e4054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2e4058: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2e4058u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2e405c: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x2e405cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2e4060: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x2e4060u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2e4064: 0xc0b8f70  jal         func_2E3DC0
    ctx->pc = 0x2E4064u;
    SET_GPR_U32(ctx, 31, 0x2E406Cu);
    ctx->pc = 0x2E4068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4064u;
    // 0x2e4068: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3DC0u, 0x2E4064u, 0x2E406Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E406Cu;
label_2e406c:
    // 0x2e406c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2e406cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2e4070: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2e4070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2e4074:
    // 0x2e4074: 0xc60e000c  lwc1        $f14, 0xC($s0)
    ctx->pc = 0x2e4074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2e4078: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e4078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e407c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2e407cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4080: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x2e4080u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
    // 0x2e4084: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x2e4084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e4088: 0x0  nop
    ctx->pc = 0x2e4088u;
    // NOP
    // 0x2e408c: 0x0  nop
    ctx->pc = 0x2e408cu;
    // NOP
    // 0x2e4090: 0x46007383  div.s       $f14, $f14, $f0
    ctx->pc = 0x2e4090u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = FPU_DIV_S(ctx->f[14], ctx->f[0]); }
    // 0x2e4094: 0xc60d0008  lwc1        $f13, 0x8($s0)
    ctx->pc = 0x2e4094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e4098: 0xc0b8fa8  jal         func_2E3EA0
    ctx->pc = 0x2E4098u;
    SET_GPR_U32(ctx, 31, 0x2E40A0u);
    ctx->pc = 0x2E409Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4098u;
    // 0x2e409c: 0x460ebb81  sub.s       $f14, $f23, $f14 (Delay Slot)
    ctx->f[14] = FPU_SUB_S(ctx->f[23], ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3EA0u, 0x2E4098u, 0x2E40A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E40A0u;
label_2e40a0:
    // 0x2e40a0: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2e40a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e40a4: 0x46180841  sub.s       $f1, $f1, $f24
    ctx->pc = 0x2e40a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[24]);
    // 0x2e40a8: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x2e40a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2e40ac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e40acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e40b0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2e40b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e40b4: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x2E40B4u;
    {
        const bool branch_taken_0x2e40b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E40B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E40B4u;
        // 0x2e40b8: 0x4600b580  add.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e40b4) {
            ctx->pc = 0x2E3FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3fe8;
        }
    }
    ctx->pc = 0x2E40BCu;
label_2e40bc:
    // 0x2e40bc: 0x4600b006  mov.s       $f0, $f22
    ctx->pc = 0x2e40bcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[22]);
    // 0x2e40c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e40c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e40c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e40c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e40c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e40c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e40cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e40ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e40d0: 0xc7bb0058  lwc1        $f27, 0x58($sp)
    ctx->pc = 0x2e40d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2e40d4: 0xc7ba0050  lwc1        $f26, 0x50($sp)
    ctx->pc = 0x2e40d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2e40d8: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x2e40d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2e40dc: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x2e40dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2e40e0: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x2e40e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2e40e4: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x2e40e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e40e8: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x2e40e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e40ec: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2e40ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e40f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E40F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E40F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E40F0u;
        // 0x2e40f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E40F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E40F8u;
}
