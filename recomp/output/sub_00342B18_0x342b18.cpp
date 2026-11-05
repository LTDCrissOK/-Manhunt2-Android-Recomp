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

// Function: sub_00342B18
// Address: 0x342b18 - 0x343280
void sub_00342B18_0x342b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342B18_0x342b18");
#endif

    switch (ctx->pc) {
        case 0x342c68u: goto label_342c68;
        case 0x342cb8u: goto label_342cb8;
        case 0x342e04u: goto label_342e04;
        case 0x342e18u: goto label_342e18;
        case 0x342e20u: goto label_342e20;
        case 0x342e28u: goto label_342e28;
        case 0x342e34u: goto label_342e34;
        case 0x342e44u: goto label_342e44;
        case 0x34311cu: goto label_34311c;
        case 0x34314cu: goto label_34314c;
        case 0x343158u: goto label_343158;
        case 0x3431ecu: goto label_3431ec;
        default: break;
    }

    ctx->pc = 0x342b18u;

    // 0x342b18: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x342b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x342b1c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x342b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x342b20: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x342b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
    // 0x342b24: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x342b24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342b28: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x342b28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x342b2c: 0xe7bb0198  swc1        $f27, 0x198($sp)
    ctx->pc = 0x342b2cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x342b30: 0x26c20010  addiu       $v0, $s6, 0x10
    ctx->pc = 0x342b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x342b34: 0xe7b80180  swc1        $f24, 0x180($sp)
    ctx->pc = 0x342b34u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x342b38: 0x460066c6  mov.s       $f27, $f12
    ctx->pc = 0x342b38u;
    ctx->f[27] = FPU_MOV_S(ctx->f[12]);
    // 0x342b3c: 0xe7b70178  swc1        $f23, 0x178($sp)
    ctx->pc = 0x342b3cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x342b40: 0x46007606  mov.s       $f24, $f14
    ctx->pc = 0x342b40u;
    ctx->f[24] = FPU_MOV_S(ctx->f[14]);
    // 0x342b44: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x342b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x342b48: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x342b48u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x342b4c: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x342b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x342b50: 0x4618b880  add.s       $f2, $f23, $f24
    ctx->pc = 0x342b50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[23], ctx->f[24]);
    // 0x342b54: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x342b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x342b58: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x342b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x342b5c: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x342b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x342b60: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x342b60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x342b64: 0xffb50138  sd          $s5, 0x138($sp)
    ctx->pc = 0x342b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 21));
    // 0x342b68: 0xffb70148  sd          $s7, 0x148($sp)
    ctx->pc = 0x342b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 23));
    // 0x342b6c: 0xffbe0150  sd          $fp, 0x150($sp)
    ctx->pc = 0x342b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 30));
    // 0x342b70: 0xffbf0158  sd          $ra, 0x158($sp)
    ctx->pc = 0x342b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 31));
    // 0x342b74: 0xe7bc01a0  swc1        $f28, 0x1A0($sp)
    ctx->pc = 0x342b74u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x342b78: 0xe7ba0190  swc1        $f26, 0x190($sp)
    ctx->pc = 0x342b78u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x342b7c: 0xe7b90188  swc1        $f25, 0x188($sp)
    ctx->pc = 0x342b7cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x342b80: 0xe7b60170  swc1        $f22, 0x170($sp)
    ctx->pc = 0x342b80u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x342b84: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x342b84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x342b88: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x342b88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x342b8c: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x342b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x342b90: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x342b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x342b94: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x342b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x342b98: 0xc6c50010  lwc1        $f5, 0x10($s6)
    ctx->pc = 0x342b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x342b9c: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x342b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x342ba0: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x342ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x342ba4: 0xafa400e4  sw          $a0, 0xE4($sp)
    ctx->pc = 0x342ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 4));
    // 0x342ba8: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x342ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342bac: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x342bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x342bb0: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x342bb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x342bb4: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x342bb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x342bb8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x342bb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x342bbc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x342bbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x342bc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x342bc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x342bc4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x342bc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x342bc8: 0x0  nop
    ctx->pc = 0x342bc8u;
    // NOP
    // 0x342bcc: 0x45010197  bc1t        . + 4 + (0x197 << 2)
    ctx->pc = 0x342BCCu;
    {
        const bool branch_taken_0x342bcc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x342BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342BCCu;
        // 0x342bd0: 0xafa500e0  sw          $a1, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342bcc) {
            ctx->pc = 0x34322Cu;
            goto label_34322c;
        }
    }
    ctx->pc = 0x342BD4u;
    // 0x342bd4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x342bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x342bd8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x342bd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x342bdc: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x342bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x342be0: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x342BE0u;
    {
        const bool branch_taken_0x342be0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x342BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342BE0u;
        // 0x342be4: 0x46172840  add.s       $f1, $f5, $f23 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x342be0) {
            ctx->pc = 0x342BF4u;
            goto label_342bf4;
        }
    }
    ctx->pc = 0x342BE8u;
    // 0x342be8: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x342be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x342bec: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x342becu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x342bf0: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x342bf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
label_342bf4:
    // 0x342bf4: 0x46172801  sub.s       $f0, $f5, $f23
    ctx->pc = 0x342bf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[23]);
    // 0x342bf8: 0x461720c0  add.s       $f3, $f4, $f23
    ctx->pc = 0x342bf8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[23]);
    // 0x342bfc: 0x46172081  sub.s       $f2, $f4, $f23
    ctx->pc = 0x342bfcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[23]);
    // 0x342c00: 0x46000924  .word       0x46000924                   # cvt.w.s     $f4, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342c00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x342c04: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x342c04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x342c08: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342c08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x342c0c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x342c0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x342c10: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342c10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x342c14: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x342c14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x342c18: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342c18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x342c1c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x342c1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x342c20: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x342c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x342c24: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x342c24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x342c28: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x342c28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x342c2c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x342c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x342c30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x342c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x342c34: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x342c34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x342c38: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x342c38u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x342c3c: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x342c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x342c40: 0x5ac03  sra         $s5, $a1, 16
    ctx->pc = 0x342c40u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 5), 16));
    // 0x342c44: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x342c44u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x342c48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x342c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x342c4c: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x342c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x342c50: 0x460fe702  mul.s       $f28, $f28, $f15
    ctx->pc = 0x342c50u;
    ctx->f[28] = FPU_MUL_S(ctx->f[28], ctx->f[15]);
    // 0x342c54: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x342c54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x342c58: 0x14400174  bnez        $v0, . + 4 + (0x174 << 2)
    ctx->pc = 0x342C58u;
    {
        const bool branch_taken_0x342c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x342C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342C58u;
        // 0x342c5c: 0xafa300f4  sw          $v1, 0xF4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342c58) {
            ctx->pc = 0x34322Cu;
            goto label_34322c;
        }
    }
    ctx->pc = 0x342C60u;
    // 0x342c60: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x342c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x342c64: 0x0  nop
    ctx->pc = 0x342c64u;
    // NOP
label_342c68:
    // 0x342c68: 0x8fb300f0  lw          $s3, 0xF0($sp)
    ctx->pc = 0x342c68u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x342c6c: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x342c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x342c70: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x342c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x342c74: 0x73102a  slt         $v0, $v1, $s3
    ctx->pc = 0x342c74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x342c78: 0x54400168  bnel        $v0, $zero, . + 4 + (0x168 << 2)
    ctx->pc = 0x342C78u;
    {
        const bool branch_taken_0x342c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x342c78) {
            ctx->pc = 0x342C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342C78u;
            // 0x342c7c: 0x8fb50100  lw          $s5, 0x100($sp) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34321Cu;
            goto label_34321c;
        }
    }
    ctx->pc = 0x342C80u;
    // 0x342c80: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x342c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x342c84: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x342c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x342c88: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x342c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x342c8c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x342c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x342c90: 0x27be0080  addiu       $fp, $sp, 0x80
    ctx->pc = 0x342c90u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x342c94: 0xafa400f8  sw          $a0, 0xF8($sp)
    ctx->pc = 0x342c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 4));
    // 0x342c98: 0x27b70090  addiu       $s7, $sp, 0x90
    ctx->pc = 0x342c98u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x342c9c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x342c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x342ca0: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x342ca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x342ca4: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x342ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x342ca8: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x342ca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x342cac: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x342cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x342cb0: 0xafa600fc  sw          $a2, 0xFC($sp)
    ctx->pc = 0x342cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 6));
    // 0x342cb4: 0x2b31026  xor         $v0, $s5, $s3
    ctx->pc = 0x342cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 19));
label_342cb8:
    // 0x342cb8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x342cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x342cbc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x342cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x342cc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x342cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x342cc4: 0x1040014f  beqz        $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x342CC4u;
    {
        const bool branch_taken_0x342cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342CC4u;
        // 0x342cc8: 0x8fa200e8  lw          $v0, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342cc4) {
            ctx->pc = 0x343204u;
            goto label_343204;
        }
    }
    ctx->pc = 0x342CCCu;
    // 0x342ccc: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x342cccu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x342cd0: 0x0  nop
    ctx->pc = 0x342cd0u;
    // NOP
    // 0x342cd4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x342cd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x342cd8: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x342cd8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342cdc: 0x0  nop
    ctx->pc = 0x342cdcu;
    // NOP
    // 0x342ce0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x342ce0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x342ce4: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x342ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x342ce8: 0x4617b902  mul.s       $f4, $f23, $f23
    ctx->pc = 0x342ce8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
    // 0x342cec: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x342cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342cf0: 0x46000946  mov.s       $f5, $f1
    ctx->pc = 0x342cf0u;
    ctx->f[5] = FPU_MOV_S(ctx->f[1]);
    // 0x342cf4: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x342cf4u;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
    // 0x342cf8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x342cf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x342cfc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x342cfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x342d00: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x342d00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x342d04: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x342d04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x342d08: 0x460008c0  add.s       $f3, $f1, $f0
    ctx->pc = 0x342d08u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x342d0c: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x342d0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x342d10: 0x0  nop
    ctx->pc = 0x342d10u;
    // NOP
    // 0x342d14: 0x4500013b  bc1f        . + 4 + (0x13B << 2)
    ctx->pc = 0x342D14u;
    {
        const bool branch_taken_0x342d14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x342D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D14u;
        // 0x342d18: 0x3a442  srl         $s4, $v1, 17 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 3), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342d14) {
            ctx->pc = 0x343204u;
            goto label_343204;
        }
    }
    ctx->pc = 0x342D1Cu;
    // 0x342d1c: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x342d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x342d20: 0x4618c082  mul.s       $f2, $f24, $f24
    ctx->pc = 0x342d20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[24], ctx->f[24]);
    // 0x342d24: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x342d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342d28: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x342d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x342d2c: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x342d2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x342d30: 0x46013041  sub.s       $f1, $f6, $f1
    ctx->pc = 0x342d30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x342d34: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x342d34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x342d38: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x342d38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x342d3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x342d3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x342d40: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x342d40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x342d44: 0x0  nop
    ctx->pc = 0x342d44u;
    // NOP
    // 0x342d48: 0x4500012f  bc1f        . + 4 + (0x12F << 2)
    ctx->pc = 0x342D48u;
    {
        const bool branch_taken_0x342d48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x342D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D48u;
        // 0x342d4c: 0x8fa300f4  lw          $v1, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342d48) {
            ctx->pc = 0x343208u;
            goto label_343208;
        }
    }
    ctx->pc = 0x342D50u;
    // 0x342d50: 0x0  nop
    ctx->pc = 0x342d50u;
    // NOP
    // 0x342d54: 0x0  nop
    ctx->pc = 0x342d54u;
    // NOP
    // 0x342d58: 0x46000004  c1          0x4
    ctx->pc = 0x342d58u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x342d5c: 0x4616c082  mul.s       $f2, $f24, $f22
    ctx->pc = 0x342d5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[24], ctx->f[22]);
    // 0x342d60: 0x0  nop
    ctx->pc = 0x342d60u;
    // NOP
    // 0x342d64: 0x0  nop
    ctx->pc = 0x342d64u;
    // NOP
    // 0x342d68: 0x460300c4  c1          0x300C4
    ctx->pc = 0x342d68u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x342d6c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x342d6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x342d70: 0x0  nop
    ctx->pc = 0x342d70u;
    // NOP
    // 0x342d74: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x342D74u;
    {
        const bool branch_taken_0x342d74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x342d74) {
            ctx->pc = 0x342D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342D74u;
            // 0x342d78: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x342D8Cu;
            goto label_342d8c;
        }
    }
    ctx->pc = 0x342D7Cu;
    // 0x342d7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x342d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x342d80: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x342d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x342d84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x342D84u;
    {
        const bool branch_taken_0x342d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x342d84) {
            ctx->pc = 0x342D9Cu;
            goto label_342d9c;
        }
    }
    ctx->pc = 0x342D8Cu;
label_342d8c:
    // 0x342d8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x342d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x342d90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x342d90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x342d94: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x342d94u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x342d98: 0x46000d41  sub.s       $f21, $f1, $f0
    ctx->pc = 0x342d98u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_342d9c:
    // 0x342d9c: 0x0  nop
    ctx->pc = 0x342d9cu;
    // NOP
    // 0x342da0: 0x0  nop
    ctx->pc = 0x342da0u;
    // NOP
    // 0x342da4: 0x46171803  div.s       $f0, $f3, $f23
    ctx->pc = 0x342da4u;
    { if (ctx->f[23] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[23]); }
    // 0x342da8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x342da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x342dac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x342dacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x342db0: 0x3c013f16  lui         $at, 0x3F16
    ctx->pc = 0x342db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16150 << 16));
    // 0x342db4: 0x34219697  ori         $at, $at, 0x9697
    ctx->pc = 0x342db4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38551);
    // 0x342db8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x342db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x342dbc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x342dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x342dc0: 0xc6c20020  lwc1        $f2, 0x20($s6)
    ctx->pc = 0x342dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342dc4: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x342dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
    // 0x342dc8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x342dc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x342dcc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x342dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x342dd0: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x342dd0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x342dd4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x342dd4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x342dd8: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x342dd8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x342ddc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x342ddcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x342de0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x342de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x342de4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x342de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x342de8: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x342de8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x342dec: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x342decu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x342df0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x342df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x342df4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x342df4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x342df8: 0x4600e002  mul.s       $f0, $f28, $f0
    ctx->pc = 0x342df8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[28], ctx->f[0]);
    // 0x342dfc: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x342DFCu;
    SET_GPR_U32(ctx, 31, 0x342E04u);
    ctx->pc = 0x342E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342DFCu;
    // 0x342e00: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x342DFCu, 0x342E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342E04u;
label_342e04:
    // 0x342e04: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x342e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x342e08: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x342e08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x342e0c: 0x8c92bd48  lw          $s2, -0x42B8($a0)
    ctx->pc = 0x342e0cu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x342e10: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x342E10u;
    SET_GPR_U32(ctx, 31, 0x342E18u);
    ctx->pc = 0x342E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342E10u;
    // 0x342e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x342E10u, 0x342E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342E18u;
label_342e18:
    // 0x342e18: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x342E18u;
    SET_GPR_U32(ctx, 31, 0x342E20u);
    ctx->pc = 0x342E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342E18u;
    // 0x342e1c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x342E18u, 0x342E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342E20u;
label_342e20:
    // 0x342e20: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x342E20u;
    SET_GPR_U32(ctx, 31, 0x342E28u);
    ctx->pc = 0x342E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342E20u;
    // 0x342e24: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x342E20u, 0x342E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342E28u;
label_342e28:
    // 0x342e28: 0x8e500100  lw          $s0, 0x100($s2)
    ctx->pc = 0x342e28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x342e2c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x342E2Cu;
    SET_GPR_U32(ctx, 31, 0x342E34u);
    ctx->pc = 0x342E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342E2Cu;
    // 0x342e30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x342E2Cu, 0x342E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342E34u;
label_342e34:
    // 0x342e34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x342E34u;
    {
        const bool branch_taken_0x342e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E34u;
        // 0x342e38: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342e34) {
            ctx->pc = 0x342E48u;
            goto label_342e48;
        }
    }
    ctx->pc = 0x342E3Cu;
    // 0x342e3c: 0xc0c4900  jal         func_312400
    ctx->pc = 0x342E3Cu;
    SET_GPR_U32(ctx, 31, 0x342E44u);
    ctx->pc = 0x342E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342E3Cu;
    // 0x342e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x342E3Cu, 0x342E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342E44u;
label_342e44:
    // 0x342e44: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x342e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_342e48:
    // 0x342e48: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x342e48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x342e4c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x342e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x342e50: 0x26030090  addiu       $v1, $s0, 0x90
    ctx->pc = 0x342e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x342e54: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x342e54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x342e58: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x342e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x342e5c: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x342e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x342e60: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x342e60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x342e64: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x342e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x342e68: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x342e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x342e6c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x342e6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x342e70: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x342e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x342e74: 0xc64000e0  lwc1        $f0, 0xE0($s2)
    ctx->pc = 0x342e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342e78: 0x0  nop
    ctx->pc = 0x342e78u;
    // NOP
    // 0x342e7c: 0x4600d143  div.s       $f5, $f26, $f0
    ctx->pc = 0x342e7cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[26], ctx->f[0]); }
    // 0x342e80: 0x44062800  mfc1        $a2, $f5
    ctx->pc = 0x342e80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x342e84: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x342e84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x342e88: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x342e88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x342e8c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x342e8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x342e90: 0xfa210040  sqc2        $vf1, 0x40($s1)
    ctx->pc = 0x342e90u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x342e94: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x342e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x342e98: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x342e98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x342e9c: 0x0  nop
    ctx->pc = 0x342e9cu;
    // NOP
    // 0x342ea0: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x342ea0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x342ea4: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x342ea4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x342ea8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x342ea8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x342eac: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x342eacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x342eb0: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x342eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x342eb4: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x342eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x342eb8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x342eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x342ebc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x342ebcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x342ec0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x342ec0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x342ec4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x342ec4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x342ec8: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x342ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x342ecc: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x342eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342ed0: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x342ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x342ed4: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x342ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342ed8: 0xc7a300dc  lwc1        $f3, 0xDC($sp)
    ctx->pc = 0x342ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x342edc: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x342edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x342ee0: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x342ee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x342ee4: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x342ee4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x342ee8: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x342ee8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x342eec: 0x8fa600fc  lw          $a2, 0xFC($sp)
    ctx->pc = 0x342eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x342ef0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x342ef0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x342ef4: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x342ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x342ef8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x342ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342efc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x342efcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342f00: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x342f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x342f04: 0xc7a400a8  lwc1        $f4, 0xA8($sp)
    ctx->pc = 0x342f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x342f08: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x342f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x342f0c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x342f0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x342f10: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x342f10u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x342f14: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x342f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342f18: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x342f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x342f1c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x342f1cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x342f20: 0xc6e20004  lwc1        $f2, 0x4($s7)
    ctx->pc = 0x342f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342f24: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x342f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x342f28: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x342f28u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x342f2c: 0xc6e20008  lwc1        $f2, 0x8($s7)
    ctx->pc = 0x342f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342f30: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x342f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x342f34: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x342f34u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x342f38: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x342f38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x342f3c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x342f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x342f40: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x342f40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x342f44: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x342f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x342f48: 0xc64100e4  lwc1        $f1, 0xE4($s2)
    ctx->pc = 0x342f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x342f4c: 0x0  nop
    ctx->pc = 0x342f4cu;
    // NOP
    // 0x342f50: 0x4601d143  div.s       $f5, $f26, $f1
    ctx->pc = 0x342f50u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[26], ctx->f[1]); }
    // 0x342f54: 0x44042800  mfc1        $a0, $f5
    ctx->pc = 0x342f54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x342f58: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x342f58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x342f5c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x342f5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x342f60: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x342f60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x342f64: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x342f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x342f68: 0x4406b000  mfc1        $a2, $f22
    ctx->pc = 0x342f68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x342f6c: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x342f6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x342f70: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x342f70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x342f74: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x342f74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x342f78: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x342f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x342f7c: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x342f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x342f80: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x342f80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x342f84: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x342f84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x342f88: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x342f88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x342f8c: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x342f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x342f90: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x342f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342f94: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x342f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x342f98: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x342f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342f9c: 0xc7a300dc  lwc1        $f3, 0xDC($sp)
    ctx->pc = 0x342f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x342fa0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x342fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x342fa4: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x342fa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x342fa8: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x342fa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x342fac: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x342facu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x342fb0: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x342fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x342fb4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x342fb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x342fb8: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x342fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x342fbc: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x342fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342fc0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x342fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342fc4: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x342fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x342fc8: 0xc7a400a8  lwc1        $f4, 0xA8($sp)
    ctx->pc = 0x342fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x342fcc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x342fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x342fd0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x342fd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x342fd4: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x342fd4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x342fd8: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x342fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342fdc: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x342fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x342fe0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x342fe0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x342fe4: 0xc6e20004  lwc1        $f2, 0x4($s7)
    ctx->pc = 0x342fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342fe8: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x342fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x342fec: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x342fecu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x342ff0: 0xc6e20008  lwc1        $f2, 0x8($s7)
    ctx->pc = 0x342ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342ff4: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x342ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x342ff8: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x342ff8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x342ffc: 0x46160840  add.s       $f1, $f1, $f22
    ctx->pc = 0x342ffcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
    // 0x343000: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x343000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x343004: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x343004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x343008: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x343008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34300c: 0x4601b041  sub.s       $f1, $f22, $f1
    ctx->pc = 0x34300cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
    // 0x343010: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x343010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x343014: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x343014u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x343018: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x343018u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x34301c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x34301cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x343020: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x343020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x343024: 0xc7c30000  lwc1        $f3, 0x0($fp)
    ctx->pc = 0x343024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x343028: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x343028u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x34302c: 0xc6e20004  lwc1        $f2, 0x4($s7)
    ctx->pc = 0x34302cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x343030: 0xc7c30004  lwc1        $f3, 0x4($fp)
    ctx->pc = 0x343030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x343034: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x343034u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x343038: 0xc6e20008  lwc1        $f2, 0x8($s7)
    ctx->pc = 0x343038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34303c: 0xc7c30008  lwc1        $f3, 0x8($fp)
    ctx->pc = 0x34303cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x343040: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x343040u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x343044: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x343044u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x343048: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x343048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34304c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x34304cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x343050: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x343050u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343054: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x343054u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x343058: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x343058u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x34305c: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x34305cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x343060: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x343060u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x343064: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x343064u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x343068: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x343068u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34306c: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x34306cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x343070: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x343070u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x343074: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x343074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x343078: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x343078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34307c: 0x4603a034  c.lt.s      $f20, $f3
    ctx->pc = 0x34307cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x343080: 0x0  nop
    ctx->pc = 0x343080u;
    // NOP
    // 0x343084: 0x45020060  bc1fl       . + 4 + (0x60 << 2)
    ctx->pc = 0x343084u;
    {
        const bool branch_taken_0x343084 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x343084) {
            ctx->pc = 0x343088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343084u;
            // 0x343088: 0x8fa300f4  lw          $v1, 0xF4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343208u;
            goto label_343208;
        }
    }
    ctx->pc = 0x34308Cu;
    // 0x34308c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x34308cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x343090: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x343090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343094: 0x0  nop
    ctx->pc = 0x343094u;
    // NOP
    // 0x343098: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x343098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34309c: 0x0  nop
    ctx->pc = 0x34309cu;
    // NOP
    // 0x3430a0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3430A0u;
    {
        const bool branch_taken_0x3430a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3430A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3430A0u;
        // 0x3430a4: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3430a0) {
            ctx->pc = 0x3430B4u;
            goto label_3430b4;
        }
    }
    ctx->pc = 0x3430A8u;
    // 0x3430a8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3430a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3430ac: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x3430acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x3430b0: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x3430b0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_3430b4:
    // 0x3430b4: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x3430b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x3430b8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3430b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3430bc: 0x0  nop
    ctx->pc = 0x3430bcu;
    // NOP
    // 0x3430c0: 0x0  nop
    ctx->pc = 0x3430c0u;
    // NOP
    // 0x3430c4: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x3430c4u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x3430c8: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x3430c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x3430cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3430ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3430d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3430d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3430d4: 0x0  nop
    ctx->pc = 0x3430d4u;
    // NOP
    // 0x3430d8: 0x0  nop
    ctx->pc = 0x3430d8u;
    // NOP
    // 0x3430dc: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x3430dcu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x3430e0: 0x0  nop
    ctx->pc = 0x3430e0u;
    // NOP
    // 0x3430e4: 0x0  nop
    ctx->pc = 0x3430e4u;
    // NOP
    // 0x3430e8: 0x46030d03  div.s       $f20, $f1, $f3
    ctx->pc = 0x3430e8u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x3430ec: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x3430ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3430f0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3430F0u;
    {
        const bool branch_taken_0x3430f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3430F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3430F0u;
        // 0x3430f4: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3430f0) {
            ctx->pc = 0x343124u;
            goto label_343124;
        }
    }
    ctx->pc = 0x3430F8u;
    // 0x3430f8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3430f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3430fc: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x3430fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x343100: 0x2484c5c8  addiu       $a0, $a0, -0x3A38
    ctx->pc = 0x343100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952392));
    // 0x343104: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x343104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343108: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x343108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x34310c: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x34310cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x343110: 0x46196302  mul.s       $f12, $f12, $f25
    ctx->pc = 0x343110u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[25]);
    // 0x343114: 0xc0da658  jal         func_369960
    ctx->pc = 0x343114u;
    SET_GPR_U32(ctx, 31, 0x34311Cu);
    ctx->pc = 0x343118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343114u;
    // 0x343118: 0x460cdb02  mul.s       $f12, $f27, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[27], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x369960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369960u, 0x343114u, 0x34311Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34311Cu;
label_34311c:
    // 0x34311c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x34311Cu;
    {
        const bool branch_taken_0x34311c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34311Cu;
        // 0x343120: 0xc7ac0008  lwc1        $f12, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34311c) {
            ctx->pc = 0x343150u;
            goto label_343150;
        }
    }
    ctx->pc = 0x343124u;
label_343124:
    // 0x343124: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x343124u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x343128: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x343128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x34312c: 0x24c6c5c8  addiu       $a2, $a2, -0x3A38
    ctx->pc = 0x34312cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952392));
    // 0x343130: 0x4600d807  neg.s       $f0, $f27
    ctx->pc = 0x343130u;
    ctx->f[0] = FPU_NEG_S(ctx->f[27]);
    // 0x343134: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x343134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x343138: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x343138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34313c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x34313cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343140: 0x46196302  mul.s       $f12, $f12, $f25
    ctx->pc = 0x343140u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[25]);
    // 0x343144: 0xc0da658  jal         func_369960
    ctx->pc = 0x343144u;
    SET_GPR_U32(ctx, 31, 0x34314Cu);
    ctx->pc = 0x343148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343144u;
    // 0x343148: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x369960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369960u, 0x343144u, 0x34314Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34314Cu;
label_34314c:
    // 0x34314c: 0xc7ac0008  lwc1        $f12, 0x8($sp)
    ctx->pc = 0x34314cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_343150:
    // 0x343150: 0xc0da65c  jal         func_369970
    ctx->pc = 0x343150u;
    SET_GPR_U32(ctx, 31, 0x343158u);
    ctx->pc = 0x343154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343150u;
    // 0x343154: 0x8fa400e0  lw          $a0, 0xE0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369970u, 0x343150u, 0x343158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343158u;
label_343158:
    // 0x343158: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x343158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x34315c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x34315cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x343160: 0x2463c5c8  addiu       $v1, $v1, -0x3A38
    ctx->pc = 0x343160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952392));
    // 0x343164: 0x2484ac50  addiu       $a0, $a0, -0x53B0
    ctx->pc = 0x343164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945872));
    // 0x343168: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x343168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x34316c: 0xc48e001c  lwc1        $f14, 0x1C($a0)
    ctx->pc = 0x34316cu;
    { uint32_t bits = FAST_READ32(0x6BAC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x343170: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x343170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x343174: 0xc6c10038  lwc1        $f1, 0x38($s6)
    ctx->pc = 0x343174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x343178: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x343178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34317c: 0xc6c2003c  lwc1        $f2, 0x3C($s6)
    ctx->pc = 0x34317cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x343180: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x343180u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x343184: 0x3c06004c  lui         $a2, 0x4C
    ctx->pc = 0x343184u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
    // 0x343188: 0x46146b42  mul.s       $f13, $f13, $f20
    ctx->pc = 0x343188u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[20]);
    // 0x34318c: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x34318cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x343190: 0xc6c00040  lwc1        $f0, 0x40($s6)
    ctx->pc = 0x343190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x343194: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x343194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x343198: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x343198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34319c: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x34319cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x3431a0: 0x24c6f250  addiu       $a2, $a2, -0xDB0
    ctx->pc = 0x3431a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963792));
    // 0x3431a4: 0x460e6b82  mul.s       $f14, $f13, $f14
    ctx->pc = 0x3431a4u;
    ctx->f[14] = FPU_MUL_S(ctx->f[13], ctx->f[14]);
    // 0x3431a8: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x3431a8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    // 0x3431ac: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3431acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x3431b0: 0x8cc801b8  lw          $t0, 0x1B8($a2)
    ctx->pc = 0x3431b0u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x4BF408u));
    // 0x3431b4: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x3431b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x3431b8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x3431b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3431bc: 0x46167302  mul.s       $f12, $f14, $f22
    ctx->pc = 0x3431bcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[14], ctx->f[22]);
    // 0x3431c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3431c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3431c4: 0x46166b42  mul.s       $f13, $f13, $f22
    ctx->pc = 0x3431c4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[22]);
    // 0x3431c8: 0x46000964  .word       0x46000964                   # cvt.w.s     $f5, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3431c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x3431cc: 0x44042800  mfc1        $a0, $f5
    ctx->pc = 0x3431ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3431d0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3431d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3431d4: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x3431d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3431d8: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3431d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3431dc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3431dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3431e0: 0x460c2301  sub.s       $f12, $f4, $f12
    ctx->pc = 0x3431e0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[4], ctx->f[12]);
    // 0x3431e4: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x3431E4u;
    SET_GPR_U32(ctx, 31, 0x3431ECu);
    ctx->pc = 0x3431E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3431E4u;
    // 0x3431e8: 0x460d1b41  sub.s       $f13, $f3, $f13 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[3], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x3431E4u, 0x3431ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3431ECu;
label_3431ec:
    // 0x3431ec: 0x3c01454c  lui         $at, 0x454C
    ctx->pc = 0x3431ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17740 << 16));
    // 0x3431f0: 0x3421c000  ori         $at, $at, 0xC000
    ctx->pc = 0x3431f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49152);
    // 0x3431f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3431f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3431f8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3431f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3431fc: 0x2442ca60  addiu       $v0, $v0, -0x35A0
    ctx->pc = 0x3431fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953568));
    // 0x343200: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x343200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BCA6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BCA6Cu, _value); } while (0); }
label_343204:
    // 0x343204: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x343204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_343208:
    // 0x343208: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x343208u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x34320c: 0x73102a  slt         $v0, $v1, $s3
    ctx->pc = 0x34320cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x343210: 0x1040fea9  beqz        $v0, . + 4 + (-0x157 << 2)
    ctx->pc = 0x343210u;
    {
        const bool branch_taken_0x343210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343210u;
        // 0x343214: 0x2b31026  xor         $v0, $s5, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343210) {
            ctx->pc = 0x342CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342cb8;
        }
    }
    ctx->pc = 0x343218u;
    // 0x343218: 0x8fb50100  lw          $s5, 0x100($sp)
    ctx->pc = 0x343218u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_34321c:
    // 0x34321c: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x34321cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x343220: 0x95102a  slt         $v0, $a0, $s5
    ctx->pc = 0x343220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x343224: 0x1040fe90  beqz        $v0, . + 4 + (-0x170 << 2)
    ctx->pc = 0x343224u;
    {
        const bool branch_taken_0x343224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343224u;
        // 0x343228: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343224) {
            ctx->pc = 0x342C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342c68;
        }
    }
    ctx->pc = 0x34322Cu;
label_34322c:
    // 0x34322c: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x34322cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x343230: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x343230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x343234: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x343234u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x343238: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x343238u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34323c: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x34323cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x343240: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x343240u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x343244: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x343244u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x343248: 0xdfb70148  ld          $s7, 0x148($sp)
    ctx->pc = 0x343248u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x34324c: 0xdfbe0150  ld          $fp, 0x150($sp)
    ctx->pc = 0x34324cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x343250: 0xdfbf0158  ld          $ra, 0x158($sp)
    ctx->pc = 0x343250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x343254: 0xc7bc01a0  lwc1        $f28, 0x1A0($sp)
    ctx->pc = 0x343254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x343258: 0xc7bb0198  lwc1        $f27, 0x198($sp)
    ctx->pc = 0x343258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x34325c: 0xc7ba0190  lwc1        $f26, 0x190($sp)
    ctx->pc = 0x34325cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x343260: 0xc7b90188  lwc1        $f25, 0x188($sp)
    ctx->pc = 0x343260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x343264: 0xc7b80180  lwc1        $f24, 0x180($sp)
    ctx->pc = 0x343264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x343268: 0xc7b70178  lwc1        $f23, 0x178($sp)
    ctx->pc = 0x343268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x34326c: 0xc7b60170  lwc1        $f22, 0x170($sp)
    ctx->pc = 0x34326cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x343270: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x343270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x343274: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x343274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x343278: 0x3e00008  jr          $ra
    ctx->pc = 0x343278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343278u;
        // 0x34327c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343280u;
}
