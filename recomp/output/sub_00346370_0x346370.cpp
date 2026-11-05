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

// Function: sub_00346370
// Address: 0x346370 - 0x346568
void sub_00346370_0x346370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346370_0x346370");
#endif

    ctx->pc = 0x346370u;

    // 0x346370: 0x8c830118  lw          $v1, 0x118($a0)
    ctx->pc = 0x346370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x346374: 0x54080  sll         $t0, $a1, 2
    ctx->pc = 0x346374u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x346378: 0x908600b4  lbu         $a2, 0xB4($a0)
    ctx->pc = 0x346378u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x34637c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34637cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x346380: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x346380u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x346384: 0x908200b0  lbu         $v0, 0xB0($a0)
    ctx->pc = 0x346384u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x346388: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x346388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34638c: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x34638cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x346390: 0x0  nop
    ctx->pc = 0x346390u;
    // NOP
    // 0x346394: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x346394u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x346398: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x346398u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x34639c: 0x908700b5  lbu         $a3, 0xB5($a0)
    ctx->pc = 0x34639cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 181)));
    // 0x3463a0: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x3463a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3463a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3463a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3463a8: 0x0  nop
    ctx->pc = 0x3463a8u;
    // NOP
    // 0x3463ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3463acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3463b0: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x3463b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3463b4: 0x44873000  mtc1        $a3, $f6
    ctx->pc = 0x3463b4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3463b8: 0x0  nop
    ctx->pc = 0x3463b8u;
    // NOP
    // 0x3463bc: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x3463bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x3463c0: 0x908300b1  lbu         $v1, 0xB1($a0)
    ctx->pc = 0x3463c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 177)));
    // 0x3463c4: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x3463c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x3463c8: 0x0  nop
    ctx->pc = 0x3463c8u;
    // NOP
    // 0x3463cc: 0x0  nop
    ctx->pc = 0x3463ccu;
    // NOP
    // 0x3463d0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3463d0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x3463d4: 0x908600b6  lbu         $a2, 0xB6($a0)
    ctx->pc = 0x3463d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 182)));
    // 0x3463d8: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x3463d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3463dc: 0x908200b2  lbu         $v0, 0xB2($a0)
    ctx->pc = 0x3463dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 178)));
    // 0x3463e0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3463e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3463e4: 0x0  nop
    ctx->pc = 0x3463e4u;
    // NOP
    // 0x3463e8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3463e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3463ec: 0x908700b7  lbu         $a3, 0xB7($a0)
    ctx->pc = 0x3463ecu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 183)));
    // 0x3463f0: 0x908300b3  lbu         $v1, 0xB3($a0)
    ctx->pc = 0x3463f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 179)));
    // 0x3463f4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3463f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3463f8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x3463f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3463fc: 0x0  nop
    ctx->pc = 0x3463fcu;
    // NOP
    // 0x346400: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x346400u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x346404: 0xa92818  mult        $a1, $a1, $t1
    ctx->pc = 0x346404u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x346408: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x346408u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x34640c: 0x44862800  mtc1        $a2, $f5
    ctx->pc = 0x34640cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x346410: 0x0  nop
    ctx->pc = 0x346410u;
    // NOP
    // 0x346414: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x346414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x346418: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x346418u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34641c: 0x8c860124  lw          $a2, 0x124($a0)
    ctx->pc = 0x34641cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x346420: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x346420u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x346424: 0x0  nop
    ctx->pc = 0x346424u;
    // NOP
    // 0x346428: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x346428u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x34642c: 0x44874000  mtc1        $a3, $f8
    ctx->pc = 0x34642cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x346430: 0x0  nop
    ctx->pc = 0x346430u;
    // NOP
    // 0x346434: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x346434u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x346438: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x346438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x34643c: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x34643cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x346440: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x346440u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x346444: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x346444u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x346448: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x346448u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x34644c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x34644cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x346450: 0x304a00ff  andi        $t2, $v0, 0xFF
    ctx->pc = 0x346450u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x346454: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x346454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346458: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x346458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34645c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x34645cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x346460: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x346460u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x346464: 0x46023180  add.s       $f6, $f6, $f2
    ctx->pc = 0x346464u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x346468: 0x46003024  .word       0x46003024                   # cvt.w.s     $f0, $f6 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x346468u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[6]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x34646c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x34646cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x346470: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x346470u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x346474: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x346474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x346478: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x346478u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34647c: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x34647cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346480: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x346480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346484: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x346484u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x346488: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x346488u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x34648c: 0x46042940  add.s       $f5, $f5, $f4
    ctx->pc = 0x34648cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x346490: 0x46002824  .word       0x46002824                   # cvt.w.s     $f0, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x346490u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x346494: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x346494u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x346498: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x346498u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x34649c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x34649cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3464a0: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x3464a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3464a4: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x3464a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3464a8: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x3464a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3464ac: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3464acu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3464b0: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x3464b0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x3464b4: 0x46074200  add.s       $f8, $f8, $f7
    ctx->pc = 0x3464b4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x3464b8: 0x46004024  .word       0x46004024                   # cvt.w.s     $f0, $f8 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3464b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[8]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3464bc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3464bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3464c0: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x3464c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3464c4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3464c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3464c8: 0xa0ca0008  sb          $t2, 0x8($a2)
    ctx->pc = 0x3464c8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 10));
    // 0x3464cc: 0xa0c90009  sb          $t1, 0x9($a2)
    ctx->pc = 0x3464ccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 9), (uint8_t)GPR_U32(ctx, 9));
    // 0x3464d0: 0xa0c7000a  sb          $a3, 0xA($a2)
    ctx->pc = 0x3464d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10), (uint8_t)GPR_U32(ctx, 7));
    // 0x3464d4: 0xa0c3000b  sb          $v1, 0xB($a2)
    ctx->pc = 0x3464d4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x3464d8: 0x8c820124  lw          $v0, 0x124($a0)
    ctx->pc = 0x3464d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x3464dc: 0x93a60000  lbu         $a2, 0x0($sp)
    ctx->pc = 0x3464dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3464e0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3464e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3464e4: 0x93a70001  lbu         $a3, 0x1($sp)
    ctx->pc = 0x3464e4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x3464e8: 0x93a80002  lbu         $t0, 0x2($sp)
    ctx->pc = 0x3464e8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x3464ec: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x3464ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x3464f0: 0x93a30003  lbu         $v1, 0x3($sp)
    ctx->pc = 0x3464f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x3464f4: 0xa0460008  sb          $a2, 0x8($v0)
    ctx->pc = 0x3464f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x3464f8: 0xa043000b  sb          $v1, 0xB($v0)
    ctx->pc = 0x3464f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x3464fc: 0xa0470009  sb          $a3, 0x9($v0)
    ctx->pc = 0x3464fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 7));
    // 0x346500: 0xa048000a  sb          $t0, 0xA($v0)
    ctx->pc = 0x346500u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 8));
    // 0x346504: 0x8c830124  lw          $v1, 0x124($a0)
    ctx->pc = 0x346504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x346508: 0x93a60000  lbu         $a2, 0x0($sp)
    ctx->pc = 0x346508u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34650c: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x34650cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x346510: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x346510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x346514: 0x93a70001  lbu         $a3, 0x1($sp)
    ctx->pc = 0x346514u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x346518: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x346518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x34651c: 0x93a80002  lbu         $t0, 0x2($sp)
    ctx->pc = 0x34651cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x346520: 0xa0660008  sb          $a2, 0x8($v1)
    ctx->pc = 0x346520u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x346524: 0xa062000b  sb          $v0, 0xB($v1)
    ctx->pc = 0x346524u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x346528: 0xa0670009  sb          $a3, 0x9($v1)
    ctx->pc = 0x346528u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 7));
    // 0x34652c: 0xa068000a  sb          $t0, 0xA($v1)
    ctx->pc = 0x34652cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 8));
    // 0x346530: 0x8c820124  lw          $v0, 0x124($a0)
    ctx->pc = 0x346530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x346534: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x346534u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346538: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x346538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x34653c: 0x93a40001  lbu         $a0, 0x1($sp)
    ctx->pc = 0x34653cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x346540: 0x93a60002  lbu         $a2, 0x2($sp)
    ctx->pc = 0x346540u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x346544: 0x24a50048  addiu       $a1, $a1, 0x48
    ctx->pc = 0x346544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
    // 0x346548: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x346548u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x34654c: 0xa0a30008  sb          $v1, 0x8($a1)
    ctx->pc = 0x34654cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x346550: 0xa0a2000b  sb          $v0, 0xB($a1)
    ctx->pc = 0x346550u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x346554: 0xa0a40009  sb          $a0, 0x9($a1)
    ctx->pc = 0x346554u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 4));
    // 0x346558: 0xa0a6000a  sb          $a2, 0xA($a1)
    ctx->pc = 0x346558u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 6));
    // 0x34655c: 0x3e00008  jr          $ra
    ctx->pc = 0x34655Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34655Cu;
        // 0x346560: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34655Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346564u;
    // 0x346564: 0x0  nop
    ctx->pc = 0x346564u;
    // NOP
    ctx->pc = 0x346568u;
}
