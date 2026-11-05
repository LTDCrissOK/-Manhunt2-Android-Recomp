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

// Function: sub_002C1228
// Address: 0x2c1228 - 0x2c1568
void sub_002C1228_0x2c1228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1228_0x2c1228");
#endif

    switch (ctx->pc) {
        case 0x2c1258u: goto label_2c1258;
        case 0x2c13e8u: goto label_2c13e8;
        case 0x2c1480u: goto label_2c1480;
        case 0x2c1508u: goto label_2c1508;
        default: break;
    }

    ctx->pc = 0x2c1228u;

    // 0x2c1228: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2c1228u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c122c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c122cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c1230: 0x90e60004  lbu         $a2, 0x4($a3)
    ctx->pc = 0x2c1230u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c1234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c1234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1238: 0x80e40004  lb          $a0, 0x4($a3)
    ctx->pc = 0x2c1238u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c123c: 0x14820017  bne         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C123Cu;
    {
        const bool branch_taken_0x2c123c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C1240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C123Cu;
        // 0x2c1240: 0xe7ac0000  swc1        $f12, 0x0($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c123c) {
            ctx->pc = 0x2C129Cu;
            goto label_2c129c;
        }
    }
    ctx->pc = 0x2C1244u;
    // 0x2c1244: 0x80e20005  lb          $v0, 0x5($a3)
    ctx->pc = 0x2c1244u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2c1248: 0x184000c1  blez        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x2C1248u;
    {
        const bool branch_taken_0x2c1248 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1248u;
        // 0x2c124c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1248) {
            ctx->pc = 0x2C1550u;
            goto label_2c1550;
        }
    }
    ctx->pc = 0x2C1250u;
    // 0x2c1250: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x2c1250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x2c1254: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c1254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c1258:
    // 0x2c1258: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x2c1258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2c125c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2c125cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c1260: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c1260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2c1264: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c1264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c1268: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c1268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c126c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2c126cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c1270: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2c1270u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1274: 0x0  nop
    ctx->pc = 0x2c1274u;
    // NOP
    // 0x2c1278: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c1278u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c127c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c127cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c1280: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2c1280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2c1284: 0x80e20005  lb          $v0, 0x5($a3)
    ctx->pc = 0x2c1284u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2c1288: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2c1288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c128c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2C128Cu;
    {
        const bool branch_taken_0x2c128c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C128Cu;
        // 0x2c1290: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c128c) {
            ctx->pc = 0x2C1258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1258;
        }
    }
    ctx->pc = 0x2C1294u;
    // 0x2c1294: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x2C1294u;
    {
        const bool branch_taken_0x2c1294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1294) {
            ctx->pc = 0x2C1550u;
            goto label_2c1550;
        }
    }
    ctx->pc = 0x2C129Cu;
label_2c129c:
    // 0x2c129c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x2c129cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2c12a0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2c12a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2c12a4: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2c12a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2c12a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c12a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c12ac: 0x3a0582d  daddu       $t3, $sp, $zero
    ctx->pc = 0x2c12acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c12b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c12b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c12b4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2c12b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c12b8: 0x9443fffe  lhu         $v1, -0x2($v0)
    ctx->pc = 0x2c12b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967294)));
    // 0x2c12bc: 0x27a90004  addiu       $t1, $sp, 0x4
    ctx->pc = 0x2c12bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2c12c0: 0x27aa0008  addiu       $t2, $sp, 0x8
    ctx->pc = 0x2c12c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2c12c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c12c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c12c8: 0x0  nop
    ctx->pc = 0x2c12c8u;
    // NOP
    // 0x2c12cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c12ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c12d0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C12D0u;
    {
        const bool branch_taken_0x2c12d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C12D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C12D0u;
        // 0x2c12d4: 0x46010082  mul.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c12d0) {
            ctx->pc = 0x2C12F0u;
            goto label_2c12f0;
        }
    }
    ctx->pc = 0x2C12D8u;
    // 0x2c12d8: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x2c12d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c12dc: 0x0  nop
    ctx->pc = 0x2c12dcu;
    // NOP
    // 0x2c12e0: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x2C12E0u;
    {
        const bool branch_taken_0x2c12e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c12e0) {
            ctx->pc = 0x2C12E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C12E0u;
            // 0x2c12e4: 0xad200000  sw          $zero, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1320u;
            goto label_2c1320;
        }
    }
    ctx->pc = 0x2C12E8u;
    // 0x2c12e8: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2C12E8u;
    {
        const bool branch_taken_0x2c12e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C12ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C12E8u;
        // 0x2c12ec: 0xa0e60006  sb          $a2, 0x6($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c12e8) {
            ctx->pc = 0x2C1430u;
            goto label_2c1430;
        }
    }
    ctx->pc = 0x2C12F0u;
label_2c12f0:
    // 0x2c12f0: 0x0  nop
    ctx->pc = 0x2c12f0u;
    // NOP
    // 0x2c12f4: 0x0  nop
    ctx->pc = 0x2c12f4u;
    // NOP
    // 0x2c12f8: 0x46026043  div.s       $f1, $f12, $f2
    ctx->pc = 0x2c12f8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[12], ctx->f[2]); }
    // 0x2c12fc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c12fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2c1300: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2c1300u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2c1304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1308: 0x0  nop
    ctx->pc = 0x2c1308u;
    // NOP
    // 0x2c130c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c130cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c1310: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2c1310u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c1314: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2c1314u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2c1318: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x2c1318u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c131c: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x2c131cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
label_2c1320:
    // 0x2c1320: 0x80e30006  lb          $v1, 0x6($a3)
    ctx->pc = 0x2c1320u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x2c1324: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C1324u;
    {
        const bool branch_taken_0x2c1324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1324u;
        // 0x2c1328: 0xad400000  sw          $zero, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1324) {
            ctx->pc = 0x2C13A4u;
            goto label_2c13a4;
        }
    }
    ctx->pc = 0x2C132Cu;
    // 0x2c132c: 0x80e20004  lb          $v0, 0x4($a3)
    ctx->pc = 0x2c132cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c1330: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2c1330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c1334: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C1334u;
    {
        const bool branch_taken_0x2c1334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1334u;
        // 0x2c1338: 0x31840  sll         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1334) {
            ctx->pc = 0x2C13A4u;
            goto label_2c13a4;
        }
    }
    ctx->pc = 0x2C133Cu;
    // 0x2c133c: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x2c133cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2c1340: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2c1340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2c1344: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c1344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1348: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c1348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c134c: 0x9462fffe  lhu         $v0, -0x2($v1)
    ctx->pc = 0x2c134cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x2c1350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1354: 0x0  nop
    ctx->pc = 0x2c1354u;
    // NOP
    // 0x2c1358: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c1358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c135c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c135cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c1360: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x2c1360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x2c1364: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2c1364u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c1368: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c136c: 0x0  nop
    ctx->pc = 0x2c136cu;
    // NOP
    // 0x2c1370: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c1370u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c1374: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x2c1374u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c1378: 0xe5420000  swc1        $f2, 0x0($t2)
    ctx->pc = 0x2c1378u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2c137c: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x2c137cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1380: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x2c1380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1384: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c1384u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1388: 0x0  nop
    ctx->pc = 0x2c1388u;
    // NOP
    // 0x2c138c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2C138Cu;
    {
        const bool branch_taken_0x2c138c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c138c) {
            ctx->pc = 0x2C1390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C138Cu;
            // 0x2c1390: 0xa0e00006  sb          $zero, 0x6($a3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C13A8u;
            goto label_2c13a8;
        }
    }
    ctx->pc = 0x2C1394u;
    // 0x2c1394: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2c1394u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1398: 0x0  nop
    ctx->pc = 0x2c1398u;
    // NOP
    // 0x2c139c: 0x45030025  bc1tl       . + 4 + (0x25 << 2)
    ctx->pc = 0x2C139Cu;
    {
        const bool branch_taken_0x2c139c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c139c) {
            ctx->pc = 0x2C13A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C139Cu;
            // 0x2c13a0: 0x80e30006  lb          $v1, 0x6($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1434u;
            goto label_2c1434;
        }
    }
    ctx->pc = 0x2C13A4u;
label_2c13a4:
    // 0x2c13a4: 0xa0e00006  sb          $zero, 0x6($a3)
    ctx->pc = 0x2c13a4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 0));
label_2c13a8:
    // 0x2c13a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c13a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c13ac: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x2c13acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2c13b0: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2c13b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2c13b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c13b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c13b8: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x2c13b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2c13bc: 0x80e60004  lb          $a2, 0x4($a3)
    ctx->pc = 0x2c13bcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c13c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c13c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c13c4: 0x0  nop
    ctx->pc = 0x2c13c4u;
    // NOP
    // 0x2c13c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c13c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c13cc: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x2c13ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2c13d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c13d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c13d4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C13D4u;
    {
        const bool branch_taken_0x2c13d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C13D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C13D4u;
        // 0x2c13d8: 0xe5200000  swc1        $f0, 0x0($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c13d4) {
            ctx->pc = 0x2C1428u;
            goto label_2c1428;
        }
    }
    ctx->pc = 0x2C13DCu;
    // 0x2c13dc: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x2c13dcu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x2c13e0: 0x25030002  addiu       $v1, $t0, 0x2
    ctx->pc = 0x2c13e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2c13e4: 0x0  nop
    ctx->pc = 0x2c13e4u;
    // NOP
label_2c13e8:
    // 0x2c13e8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2c13e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c13ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c13ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c13f0: 0x0  nop
    ctx->pc = 0x2c13f0u;
    // NOP
    // 0x2c13f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c13f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c13f8: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x2c13f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c13fc: 0xe5410000  swc1        $f1, 0x0($t2)
    ctx->pc = 0x2c13fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2c1400: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x2c1400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1404: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c1404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1408: 0x0  nop
    ctx->pc = 0x2c1408u;
    // NOP
    // 0x2c140c: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2C140Cu;
    {
        const bool branch_taken_0x2c140c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c140c) {
            ctx->pc = 0x2C1410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C140Cu;
            // 0x2c1410: 0xa0e40006  sb          $a0, 0x6($a3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1430u;
            goto label_2c1430;
        }
    }
    ctx->pc = 0x2C1414u;
    // 0x2c1414: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2c1414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c1418: 0xe5210000  swc1        $f1, 0x0($t1)
    ctx->pc = 0x2c1418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x2c141c: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x2c141cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2c1420: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2C1420u;
    {
        const bool branch_taken_0x2c1420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1420u;
        // 0x2c1424: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1420) {
            ctx->pc = 0x2C13E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c13e8;
        }
    }
    ctx->pc = 0x2C1428u;
label_2c1428:
    // 0x2c1428: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x2c1428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c142c: 0xa0e20006  sb          $v0, 0x6($a3)
    ctx->pc = 0x2c142cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 2));
label_2c1430:
    // 0x2c1430: 0x80e30006  lb          $v1, 0x6($a3)
    ctx->pc = 0x2c1430u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
label_2c1434:
    // 0x2c1434: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x2C1434u;
    {
        const bool branch_taken_0x2c1434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1434) {
            ctx->pc = 0x2C1550u;
            goto label_2c1550;
        }
    }
    ctx->pc = 0x2C143Cu;
    // 0x2c143c: 0x80e20004  lb          $v0, 0x4($a3)
    ctx->pc = 0x2c143cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c1440: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2c1440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c1444: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2C1444u;
    {
        const bool branch_taken_0x2c1444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1444u;
        // 0x2c1448: 0xc7a20004  lwc1        $f2, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1444) {
            ctx->pc = 0x2C14F0u;
            goto label_2c14f0;
        }
    }
    ctx->pc = 0x2C144Cu;
    // 0x2c144c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2c144cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1450: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2c1450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1454: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2c1454u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2c1458: 0x80e20005  lb          $v0, 0x5($a3)
    ctx->pc = 0x2c1458u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2c145c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2c145cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2c1460: 0x0  nop
    ctx->pc = 0x2c1460u;
    // NOP
    // 0x2c1464: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x2c1464u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2c1468: 0x18400039  blez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2C1468u;
    {
        const bool branch_taken_0x2c1468 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1468u;
        // 0x2c146c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1468) {
            ctx->pc = 0x2C1550u;
            goto label_2c1550;
        }
    }
    ctx->pc = 0x2C1470u;
    // 0x2c1470: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x2c1470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x2c1474: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c1474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c1478: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2c1478u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c147c: 0x0  nop
    ctx->pc = 0x2c147cu;
    // NOP
label_2c1480:
    // 0x2c1480: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x2c1480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2c1484: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2c1484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c1488: 0x80e30006  lb          $v1, 0x6($a3)
    ctx->pc = 0x2c1488u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x2c148c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c148cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2c1490: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c1490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c1494: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c1494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c1498: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2c1498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2c149c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c149cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c14a0: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x2c14a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c14a4: 0x8464fffe  lh          $a0, -0x2($v1)
    ctx->pc = 0x2c14a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x2c14a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c14a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c14ac: 0x0  nop
    ctx->pc = 0x2c14acu;
    // NOP
    // 0x2c14b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c14b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c14b4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2c14b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c14b8: 0x0  nop
    ctx->pc = 0x2c14b8u;
    // NOP
    // 0x2c14bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c14bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c14c0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2c14c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c14c4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c14c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c14c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c14c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c14cc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2c14ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2c14d0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c14d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c14d4: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x2c14d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2c14d8: 0x80e20005  lb          $v0, 0x5($a3)
    ctx->pc = 0x2c14d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2c14dc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2c14dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c14e0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2C14E0u;
    {
        const bool branch_taken_0x2c14e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C14E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C14E0u;
        // 0x2c14e4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c14e0) {
            ctx->pc = 0x2C1480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1480;
        }
    }
    ctx->pc = 0x2C14E8u;
    // 0x2c14e8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2C14E8u;
    {
        const bool branch_taken_0x2c14e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c14e8) {
            ctx->pc = 0x2C1550u;
            goto label_2c1550;
        }
    }
    ctx->pc = 0x2C14F0u;
label_2c14f0:
    // 0x2c14f0: 0x80e20005  lb          $v0, 0x5($a3)
    ctx->pc = 0x2c14f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2c14f4: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C14F4u;
    {
        const bool branch_taken_0x2c14f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C14F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C14F4u;
        // 0x2c14f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c14f4) {
            ctx->pc = 0x2C1550u;
            goto label_2c1550;
        }
    }
    ctx->pc = 0x2C14FCu;
    // 0x2c14fc: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x2c14fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x2c1500: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c1500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1504: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2c1504u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c1508:
    // 0x2c1508: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x2c1508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2c150c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2c150cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c1510: 0x80e30004  lb          $v1, 0x4($a3)
    ctx->pc = 0x2c1510u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c1514: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c1514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2c1518: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c1518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c151c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c151cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c1520: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2c1520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2c1524: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c1524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c1528: 0x8462fffe  lh          $v0, -0x2($v1)
    ctx->pc = 0x2c1528u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x2c152c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c152cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1530: 0x0  nop
    ctx->pc = 0x2c1530u;
    // NOP
    // 0x2c1534: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c1534u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c1538: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c1538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c153c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x2c153cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2c1540: 0x80e20005  lb          $v0, 0x5($a3)
    ctx->pc = 0x2c1540u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2c1544: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2c1544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c1548: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2C1548u;
    {
        const bool branch_taken_0x2c1548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1548u;
        // 0x2c154c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1548) {
            ctx->pc = 0x2C1508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1508;
        }
    }
    ctx->pc = 0x2C1550u;
label_2c1550:
    // 0x2c1550: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1550u;
        // 0x2c1554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1558u;
    // 0x2c1558: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2c1558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c155c: 0x0  nop
    ctx->pc = 0x2c155cu;
    // NOP
    // 0x2c1560: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2c1560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1564: 0x0  nop
    ctx->pc = 0x2c1564u;
    // NOP
    ctx->pc = 0x2c1568u;
}
