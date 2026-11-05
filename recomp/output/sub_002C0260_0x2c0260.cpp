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

// Function: sub_002C0260
// Address: 0x2c0260 - 0x2c0538
void sub_002C0260_0x2c0260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0260_0x2c0260");
#endif

    switch (ctx->pc) {
        case 0x2c0288u: goto label_2c0288;
        case 0x2c0408u: goto label_2c0408;
        case 0x2c0498u: goto label_2c0498;
        case 0x2c04f8u: goto label_2c04f8;
        default: break;
    }

    ctx->pc = 0x2c0260u;

    // 0x2c0260: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2c0260u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0264: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c0264u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c0268: 0x90e60004  lbu         $a2, 0x4($a3)
    ctx->pc = 0x2c0268u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c026c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c026cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0270: 0x80e40004  lb          $a0, 0x4($a3)
    ctx->pc = 0x2c0270u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c0274: 0x14820011  bne         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C0274u;
    {
        const bool branch_taken_0x2c0274 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C0278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0274u;
        // 0x2c0278: 0xe7ac0000  swc1        $f12, 0x0($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0274) {
            ctx->pc = 0x2C02BCu;
            goto label_2c02bc;
        }
    }
    ctx->pc = 0x2C027Cu;
    // 0x2c027c: 0x80e20005  lb          $v0, 0x5($a3)
    ctx->pc = 0x2c027cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2c0280: 0x184000ab  blez        $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x2C0280u;
    {
        const bool branch_taken_0x2c0280 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C0284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0280u;
        // 0x2c0284: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0280) {
            ctx->pc = 0x2C0530u;
            goto label_2c0530;
        }
    }
    ctx->pc = 0x2C0288u;
label_2c0288:
    // 0x2c0288: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x2c0288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2c028c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2c028cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c0290: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c0290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2c0294: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c0294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c0298: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c0298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c029c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2c029cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c02a0: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2c02a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2c02a4: 0x80e20005  lb          $v0, 0x5($a3)
    ctx->pc = 0x2c02a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2c02a8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2c02a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c02ac: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2C02ACu;
    {
        const bool branch_taken_0x2c02ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C02B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C02ACu;
        // 0x2c02b0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c02ac) {
            ctx->pc = 0x2C0288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0288;
        }
    }
    ctx->pc = 0x2C02B4u;
    // 0x2c02b4: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x2C02B4u;
    {
        const bool branch_taken_0x2c02b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c02b4) {
            ctx->pc = 0x2C0530u;
            goto label_2c0530;
        }
    }
    ctx->pc = 0x2C02BCu;
label_2c02bc:
    // 0x2c02bc: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x2c02bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2c02c0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2c02c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2c02c4: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2c02c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2c02c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c02c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c02cc: 0x3a0582d  daddu       $t3, $sp, $zero
    ctx->pc = 0x2c02ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c02d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c02d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c02d4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2c02d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c02d8: 0x9443fffe  lhu         $v1, -0x2($v0)
    ctx->pc = 0x2c02d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967294)));
    // 0x2c02dc: 0x27a90004  addiu       $t1, $sp, 0x4
    ctx->pc = 0x2c02dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2c02e0: 0x27aa0008  addiu       $t2, $sp, 0x8
    ctx->pc = 0x2c02e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2c02e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c02e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c02e8: 0x0  nop
    ctx->pc = 0x2c02e8u;
    // NOP
    // 0x2c02ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c02ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c02f0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C02F0u;
    {
        const bool branch_taken_0x2c02f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C02F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C02F0u;
        // 0x2c02f4: 0x46010082  mul.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c02f0) {
            ctx->pc = 0x2C0310u;
            goto label_2c0310;
        }
    }
    ctx->pc = 0x2C02F8u;
    // 0x2c02f8: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x2c02f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c02fc: 0x0  nop
    ctx->pc = 0x2c02fcu;
    // NOP
    // 0x2c0300: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x2C0300u;
    {
        const bool branch_taken_0x2c0300 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0300) {
            ctx->pc = 0x2C0304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0300u;
            // 0x2c0304: 0xad200000  sw          $zero, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0340u;
            goto label_2c0340;
        }
    }
    ctx->pc = 0x2C0308u;
    // 0x2c0308: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2C0308u;
    {
        const bool branch_taken_0x2c0308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0308u;
        // 0x2c030c: 0xa0e60006  sb          $a2, 0x6($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0308) {
            ctx->pc = 0x2C0450u;
            goto label_2c0450;
        }
    }
    ctx->pc = 0x2C0310u;
label_2c0310:
    // 0x2c0310: 0x0  nop
    ctx->pc = 0x2c0310u;
    // NOP
    // 0x2c0314: 0x0  nop
    ctx->pc = 0x2c0314u;
    // NOP
    // 0x2c0318: 0x46026043  div.s       $f1, $f12, $f2
    ctx->pc = 0x2c0318u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[12], ctx->f[2]); }
    // 0x2c031c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c031cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2c0320: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2c0320u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2c0324: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0328: 0x0  nop
    ctx->pc = 0x2c0328u;
    // NOP
    // 0x2c032c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c032cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c0330: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2c0330u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c0334: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2c0334u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2c0338: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x2c0338u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c033c: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x2c033cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
label_2c0340:
    // 0x2c0340: 0x80e30006  lb          $v1, 0x6($a3)
    ctx->pc = 0x2c0340u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x2c0344: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C0344u;
    {
        const bool branch_taken_0x2c0344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0344u;
        // 0x2c0348: 0xad400000  sw          $zero, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0344) {
            ctx->pc = 0x2C03C4u;
            goto label_2c03c4;
        }
    }
    ctx->pc = 0x2C034Cu;
    // 0x2c034c: 0x80e20004  lb          $v0, 0x4($a3)
    ctx->pc = 0x2c034cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c0350: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2c0350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c0354: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C0354u;
    {
        const bool branch_taken_0x2c0354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0354u;
        // 0x2c0358: 0x31840  sll         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0354) {
            ctx->pc = 0x2C03C4u;
            goto label_2c03c4;
        }
    }
    ctx->pc = 0x2C035Cu;
    // 0x2c035c: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x2c035cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2c0360: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2c0360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2c0364: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c0364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c0368: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c0368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c036c: 0x9462fffe  lhu         $v0, -0x2($v1)
    ctx->pc = 0x2c036cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x2c0370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0374: 0x0  nop
    ctx->pc = 0x2c0374u;
    // NOP
    // 0x2c0378: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c0378u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c037c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c037cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c0380: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x2c0380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x2c0384: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2c0384u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c0388: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c038c: 0x0  nop
    ctx->pc = 0x2c038cu;
    // NOP
    // 0x2c0390: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c0390u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c0394: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x2c0394u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c0398: 0xe5420000  swc1        $f2, 0x0($t2)
    ctx->pc = 0x2c0398u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2c039c: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x2c039cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c03a0: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x2c03a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c03a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c03a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c03a8: 0x0  nop
    ctx->pc = 0x2c03a8u;
    // NOP
    // 0x2c03ac: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2C03ACu;
    {
        const bool branch_taken_0x2c03ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c03ac) {
            ctx->pc = 0x2C03B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C03ACu;
            // 0x2c03b0: 0xa0e00006  sb          $zero, 0x6($a3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C03C8u;
            goto label_2c03c8;
        }
    }
    ctx->pc = 0x2C03B4u;
    // 0x2c03b4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2c03b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c03b8: 0x0  nop
    ctx->pc = 0x2c03b8u;
    // NOP
    // 0x2c03bc: 0x45030025  bc1tl       . + 4 + (0x25 << 2)
    ctx->pc = 0x2C03BCu;
    {
        const bool branch_taken_0x2c03bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c03bc) {
            ctx->pc = 0x2C03C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C03BCu;
            // 0x2c03c0: 0x80e30006  lb          $v1, 0x6($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0454u;
            goto label_2c0454;
        }
    }
    ctx->pc = 0x2C03C4u;
label_2c03c4:
    // 0x2c03c4: 0xa0e00006  sb          $zero, 0x6($a3)
    ctx->pc = 0x2c03c4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 0));
label_2c03c8:
    // 0x2c03c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c03c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c03cc: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x2c03ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2c03d0: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2c03d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2c03d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c03d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c03d8: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x2c03d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2c03dc: 0x80e60004  lb          $a2, 0x4($a3)
    ctx->pc = 0x2c03dcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c03e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c03e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c03e4: 0x0  nop
    ctx->pc = 0x2c03e4u;
    // NOP
    // 0x2c03e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c03e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c03ec: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x2c03ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2c03f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c03f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c03f4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C03F4u;
    {
        const bool branch_taken_0x2c03f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C03F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C03F4u;
        // 0x2c03f8: 0xe5200000  swc1        $f0, 0x0($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c03f4) {
            ctx->pc = 0x2C0448u;
            goto label_2c0448;
        }
    }
    ctx->pc = 0x2C03FCu;
    // 0x2c03fc: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x2c03fcu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x2c0400: 0x25030002  addiu       $v1, $t0, 0x2
    ctx->pc = 0x2c0400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2c0404: 0x0  nop
    ctx->pc = 0x2c0404u;
    // NOP
label_2c0408:
    // 0x2c0408: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2c0408u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c040c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c040cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0410: 0x0  nop
    ctx->pc = 0x2c0410u;
    // NOP
    // 0x2c0414: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c0414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c0418: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x2c0418u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c041c: 0xe5410000  swc1        $f1, 0x0($t2)
    ctx->pc = 0x2c041cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2c0420: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x2c0420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0424: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c0424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0428: 0x0  nop
    ctx->pc = 0x2c0428u;
    // NOP
    // 0x2c042c: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2C042Cu;
    {
        const bool branch_taken_0x2c042c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c042c) {
            ctx->pc = 0x2C0430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C042Cu;
            // 0x2c0430: 0xa0e40006  sb          $a0, 0x6($a3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0450u;
            goto label_2c0450;
        }
    }
    ctx->pc = 0x2C0434u;
    // 0x2c0434: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2c0434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c0438: 0xe5210000  swc1        $f1, 0x0($t1)
    ctx->pc = 0x2c0438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x2c043c: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x2c043cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2c0440: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2C0440u;
    {
        const bool branch_taken_0x2c0440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0440u;
        // 0x2c0444: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0440) {
            ctx->pc = 0x2C0408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0408;
        }
    }
    ctx->pc = 0x2C0448u;
label_2c0448:
    // 0x2c0448: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x2c0448u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c044c: 0xa0e20006  sb          $v0, 0x6($a3)
    ctx->pc = 0x2c044cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 2));
label_2c0450:
    // 0x2c0450: 0x80e30006  lb          $v1, 0x6($a3)
    ctx->pc = 0x2c0450u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
label_2c0454:
    // 0x2c0454: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2C0454u;
    {
        const bool branch_taken_0x2c0454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0454) {
            ctx->pc = 0x2C0530u;
            goto label_2c0530;
        }
    }
    ctx->pc = 0x2C045Cu;
    // 0x2c045c: 0x80e20004  lb          $v0, 0x4($a3)
    ctx->pc = 0x2c045cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c0460: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2c0460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c0464: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C0464u;
    {
        const bool branch_taken_0x2c0464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0464u;
        // 0x2c0468: 0xc7a20004  lwc1        $f2, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0464) {
            ctx->pc = 0x2C04E8u;
            goto label_2c04e8;
        }
    }
    ctx->pc = 0x2C046Cu;
    // 0x2c046c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2c046cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0470: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2c0470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0474: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2c0474u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2c0478: 0x80e20005  lb          $v0, 0x5($a3)
    ctx->pc = 0x2c0478u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2c047c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2c047cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2c0480: 0x0  nop
    ctx->pc = 0x2c0480u;
    // NOP
    // 0x2c0484: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x2c0484u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2c0488: 0x18400029  blez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2C0488u;
    {
        const bool branch_taken_0x2c0488 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0488u;
        // 0x2c048c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0488) {
            ctx->pc = 0x2C0530u;
            goto label_2c0530;
        }
    }
    ctx->pc = 0x2C0490u;
    // 0x2c0490: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2c0490u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0494: 0x0  nop
    ctx->pc = 0x2c0494u;
    // NOP
label_2c0498:
    // 0x2c0498: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x2c0498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2c049c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2c049cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c04a0: 0x80e30006  lb          $v1, 0x6($a3)
    ctx->pc = 0x2c04a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x2c04a4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c04a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2c04a8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c04a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c04ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c04acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c04b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c04b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c04b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c04b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c04b8: 0xc461fffc  lwc1        $f1, -0x4($v1)
    ctx->pc = 0x2c04b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c04bc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2c04bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c04c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c04c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c04c4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2c04c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c04c8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c04c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c04cc: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x2c04ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2c04d0: 0x80e20005  lb          $v0, 0x5($a3)
    ctx->pc = 0x2c04d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2c04d4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2c04d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c04d8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2C04D8u;
    {
        const bool branch_taken_0x2c04d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C04DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C04D8u;
        // 0x2c04dc: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c04d8) {
            ctx->pc = 0x2C0498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0498;
        }
    }
    ctx->pc = 0x2C04E0u;
    // 0x2c04e0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2C04E0u;
    {
        const bool branch_taken_0x2c04e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c04e0) {
            ctx->pc = 0x2C0530u;
            goto label_2c0530;
        }
    }
    ctx->pc = 0x2C04E8u;
label_2c04e8:
    // 0x2c04e8: 0x80e20005  lb          $v0, 0x5($a3)
    ctx->pc = 0x2c04e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2c04ec: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C04ECu;
    {
        const bool branch_taken_0x2c04ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C04F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C04ECu;
        // 0x2c04f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c04ec) {
            ctx->pc = 0x2C0530u;
            goto label_2c0530;
        }
    }
    ctx->pc = 0x2C04F4u;
    // 0x2c04f4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2c04f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c04f8:
    // 0x2c04f8: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x2c04f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2c04fc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2c04fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c0500: 0x80e30004  lb          $v1, 0x4($a3)
    ctx->pc = 0x2c0500u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c0504: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c0504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2c0508: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c0508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c050c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c050cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0510: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c0510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c0514: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c0514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c0518: 0xc460fffc  lwc1        $f0, -0x4($v1)
    ctx->pc = 0x2c0518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c051c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x2c051cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2c0520: 0x80e20005  lb          $v0, 0x5($a3)
    ctx->pc = 0x2c0520u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2c0524: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2c0524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c0528: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2C0528u;
    {
        const bool branch_taken_0x2c0528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0528u;
        // 0x2c052c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0528) {
            ctx->pc = 0x2C04F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c04f8;
        }
    }
    ctx->pc = 0x2C0530u;
label_2c0530:
    // 0x2c0530: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0530u;
        // 0x2c0534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0538u;
}
