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

// Function: sub_003537B8
// Address: 0x3537b8 - 0x353fd8
void sub_003537B8_0x3537b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003537B8_0x3537b8");
#endif

    switch (ctx->pc) {
        case 0x3537fcu: goto label_3537fc;
        case 0x353908u: goto label_353908;
        case 0x353994u: goto label_353994;
        case 0x35399cu: goto label_35399c;
        case 0x353a18u: goto label_353a18;
        case 0x353a20u: goto label_353a20;
        case 0x353ab8u: goto label_353ab8;
        case 0x353b4cu: goto label_353b4c;
        case 0x353c0cu: goto label_353c0c;
        case 0x353c94u: goto label_353c94;
        case 0x353cb4u: goto label_353cb4;
        case 0x353d24u: goto label_353d24;
        case 0x353fa0u: goto label_353fa0;
        case 0x353fa8u: goto label_353fa8;
        default: break;
    }

    ctx->pc = 0x3537b8u;

    // 0x3537b8: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x3537b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x3537bc: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3537bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x3537c0: 0x9062c510  lbu         $v0, -0x3AF0($v1)
    ctx->pc = 0x3537c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5BC510u));
    // 0x3537c4: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x3537c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x3537c8: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x3537c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x3537cc: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x3537ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x3537d0: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x3537d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x3537d4: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x3537d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x3537d8: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x3537d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x3537dc: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x3537dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x3537e0: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x3537e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x3537e4: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x3537e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x3537e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3537E8u;
    {
        const bool branch_taken_0x3537e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3537ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3537E8u;
        // 0x3537ec: 0xffbf00c8  sd          $ra, 0xC8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3537e8) {
            ctx->pc = 0x3537FCu;
            goto label_3537fc;
        }
    }
    ctx->pc = 0x3537F0u;
    // 0x3537f0: 0xa060c510  sb          $zero, -0x3AF0($v1)
    ctx->pc = 0x3537f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294952208), (uint8_t)GPR_U32(ctx, 0));
    // 0x3537f4: 0xc0d5160  jal         func_354580
    ctx->pc = 0x3537F4u;
    SET_GPR_U32(ctx, 31, 0x3537FCu);
    ctx->pc = 0x3537F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3537F4u;
    // 0x3537f8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354580u, 0x3537F4u, 0x3537FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3537FCu;
label_3537fc:
    // 0x3537fc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3537fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x353800: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x353800u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353804: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x353804u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x353808: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x353808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x35380c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35380Cu;
    {
        const bool branch_taken_0x35380c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x353810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35380Cu;
        // 0x353810: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35380c) {
            ctx->pc = 0x353828u;
            goto label_353828;
        }
    }
    ctx->pc = 0x353814u;
    // 0x353814: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x353814u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x353818: 0x0  nop
    ctx->pc = 0x353818u;
    // NOP
    // 0x35381c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x35381cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x353820: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x353820u;
    {
        const bool branch_taken_0x353820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353820) {
            ctx->pc = 0x353840u;
            goto label_353840;
        }
    }
    ctx->pc = 0x353828u;
label_353828:
    // 0x353828: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x353828u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x35382c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x35382cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x353830: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x353830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x353834: 0x0  nop
    ctx->pc = 0x353834u;
    // NOP
    // 0x353838: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x353838u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x35383c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x35383cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_353840:
    // 0x353840: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x353840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x353844: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x353844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353848: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x353848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x35384c: 0xc4412d00  lwc1        $f1, 0x2D00($v0)
    ctx->pc = 0x35384cu;
    { uint32_t bits = FAST_READ32(0x482D00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353850: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x353850u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353854: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x353854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x353858: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x353858u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
    // 0x35385c: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x35385cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
    // 0x353860: 0x3c1e0048  lui         $fp, 0x48
    ctx->pc = 0x353860u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)72 << 16));
    // 0x353864: 0x3c110048  lui         $s1, 0x48
    ctx->pc = 0x353864u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
    // 0x353868: 0x3c120048  lui         $s2, 0x48
    ctx->pc = 0x353868u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
    // 0x35386c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x35386cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x353870: 0x0  nop
    ctx->pc = 0x353870u;
    // NOP
    // 0x353874: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x353874u;
    {
        const bool branch_taken_0x353874 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x353878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353874u;
        // 0x353878: 0x3c170048  lui         $s7, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353874) {
            ctx->pc = 0x35395Cu;
            goto label_35395c;
        }
    }
    ctx->pc = 0x35387Cu;
    // 0x35387c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x35387cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x353880: 0x96842c56  lhu         $a0, 0x2C56($s4)
    ctx->pc = 0x353880u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 11350)));
    // 0x353884: 0x84622d08  lh          $v0, 0x2D08($v1)
    ctx->pc = 0x353884u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x482D08u));
    // 0x353888: 0x94652d08  lhu         $a1, 0x2D08($v1)
    ctx->pc = 0x353888u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x482D08u));
    // 0x35388c: 0x4410032  bgez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x35388Cu;
    {
        const bool branch_taken_0x35388c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x353890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35388Cu;
        // 0x353890: 0xa6a42c54  sh          $a0, 0x2C54($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 11348), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35388c) {
            ctx->pc = 0x353958u;
            goto label_353958;
        }
    }
    ctx->pc = 0x353894u;
    // 0x353894: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x353894u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x353898: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x353898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x35389c: 0x8cc22d04  lw          $v0, 0x2D04($a2)
    ctx->pc = 0x35389cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482D04u));
    // 0x3538a0: 0x2467c910  addiu       $a3, $v1, -0x36F0
    ctx->pc = 0x3538a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953232));
    // 0x3538a4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3538a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3538a8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3538a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3538ac: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x3538acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3538b0: 0x24a52c58  addiu       $a1, $a1, 0x2C58
    ctx->pc = 0x3538b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11352));
    // 0x3538b4: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x3538b4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3538b8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3538b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3538bc: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x3538bcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x3538c0: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x3538c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x3538c4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3538c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3538c8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3538c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3538cc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3538ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3538d0: 0xacc32d04  sw          $v1, 0x2D04($a2)
    ctx->pc = 0x3538d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 11524), GPR_U32(ctx, 3));
    // 0x3538d4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3538d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3538d8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x3538d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3538dc: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x3538dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3538e0: 0xa6832c56  sh          $v1, 0x2C56($s4)
    ctx->pc = 0x3538e0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 11350), (uint16_t)GPR_U32(ctx, 3));
    // 0x3538e4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x3538e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x3538e8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3538e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3538ec: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3538ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3538f0: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3538F0u;
    {
        const bool branch_taken_0x3538f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3538F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3538F0u;
        // 0x3538f4: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3538f0) {
            ctx->pc = 0x35395Cu;
            goto label_35395c;
        }
    }
    ctx->pc = 0x3538F8u;
    // 0x3538f8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3538f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3538fc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3538fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353900: 0x8cc22d04  lw          $v0, 0x2D04($a2)
    ctx->pc = 0x353900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11524)));
    // 0x353904: 0x0  nop
    ctx->pc = 0x353904u;
    // NOP
label_353908:
    // 0x353908: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x353908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35390c: 0x104182a  slt         $v1, $t0, $a0
    ctx->pc = 0x35390cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x353910: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x353910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x353914: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x353914u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x353918: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x353918u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x35391c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x35391cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x353920: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x353920u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x353924: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x353924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x353928: 0xacc42d04  sw          $a0, 0x2D04($a2)
    ctx->pc = 0x353928u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 11524), GPR_U32(ctx, 4));
    // 0x35392c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x35392cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x353930: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x353930u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x353934: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x353934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x353938: 0xa4e42c56  sh          $a0, 0x2C56($a3)
    ctx->pc = 0x353938u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 11350), (uint16_t)GPR_U32(ctx, 4));
    // 0x35393c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x35393cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x353940: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x353940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x353944: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x353944u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x353948: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x353948u;
    {
        const bool branch_taken_0x353948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353948u;
        // 0x35394c: 0x8cc22d04  lw          $v0, 0x2D04($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353948) {
            ctx->pc = 0x353908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353908;
        }
    }
    ctx->pc = 0x353950u;
    // 0x353950: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x353950u;
    {
        const bool branch_taken_0x353950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353950u;
        // 0x353954: 0x8fc22b44  lw          $v0, 0x2B44($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353950) {
            ctx->pc = 0x353960u;
            goto label_353960;
        }
    }
    ctx->pc = 0x353958u;
label_353958:
    // 0x353958: 0xa6852c56  sh          $a1, 0x2C56($s4)
    ctx->pc = 0x353958u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 11350), (uint16_t)GPR_U32(ctx, 5));
label_35395c:
    // 0x35395c: 0x8fc22b44  lw          $v0, 0x2B44($fp)
    ctx->pc = 0x35395cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11076)));
label_353960:
    // 0x353960: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x353960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353964: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x353964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353968: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x353968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35396c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x35396cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x353970: 0xe6602d00  swc1        $f0, 0x2D00($s3)
    ctx->pc = 0x353970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 11520), bits); }
    // 0x353974: 0x38430003  xori        $v1, $v0, 0x3
    ctx->pc = 0x353974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x353978: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x353978u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x35397c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35397Cu;
    {
        const bool branch_taken_0x35397c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x353980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35397Cu;
        // 0x353980: 0x3200b  movn        $a0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35397c) {
            ctx->pc = 0x35398Cu;
            goto label_35398c;
        }
    }
    ctx->pc = 0x353984u;
    // 0x353984: 0x10800072  beqz        $a0, . + 4 + (0x72 << 2)
    ctx->pc = 0x353984u;
    {
        const bool branch_taken_0x353984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x353988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353984u;
        // 0x353988: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353984) {
            ctx->pc = 0x353B50u;
            goto label_353b50;
        }
    }
    ctx->pc = 0x35398Cu;
label_35398c:
    // 0x35398c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x35398Cu;
    SET_GPR_U32(ctx, 31, 0x353994u);
    ctx->pc = 0x353990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35398Cu;
    // 0x353990: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35398Cu, 0x353994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353994u;
label_353994:
    // 0x353994: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x353994u;
    SET_GPR_U32(ctx, 31, 0x35399Cu);
    ctx->pc = 0x353998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353994u;
    // 0x353998: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x353994u, 0x35399Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35399Cu;
label_35399c:
    // 0x35399c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x35399Cu;
    {
        const bool branch_taken_0x35399c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3539A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35399Cu;
        // 0x3539a0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35399c) {
            ctx->pc = 0x3539D8u;
            goto label_3539d8;
        }
    }
    ctx->pc = 0x3539A4u;
    // 0x3539a4: 0x8c43bd50  lw          $v1, -0x42B0($v0)
    ctx->pc = 0x3539a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    // 0x3539a8: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x3539a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x3539ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3539acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3539b0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x3539b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x3539b4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3539b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3539b8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3539b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3539bc: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3539bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3539c0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3539c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x3539c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3539c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3539c8: 0x0  nop
    ctx->pc = 0x3539c8u;
    // NOP
    // 0x3539cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3539ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3539d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3539D0u;
    {
        const bool branch_taken_0x3539d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3539D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3539D0u;
        // 0x3539d4: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3539d0) {
            ctx->pc = 0x3539F0u;
            goto label_3539f0;
        }
    }
    ctx->pc = 0x3539D8u;
label_3539d8:
    // 0x3539d8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3539d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3539dc: 0x8c44bd48  lw          $a0, -0x42B8($v0)
    ctx->pc = 0x3539dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x3539e0: 0x8c830100  lw          $v1, 0x100($a0)
    ctx->pc = 0x3539e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x3539e4: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x3539e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x3539e8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3539e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3539ec: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3539ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_3539f0:
    // 0x3539f0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3539f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3539f4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x3539f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3539f8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x3539f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3539fc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3539fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x353a00: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x353a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x353a04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x353a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x353a08: 0x0  nop
    ctx->pc = 0x353a08u;
    // NOP
    // 0x353a0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x353a0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x353a10: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x353A10u;
    SET_GPR_U32(ctx, 31, 0x353A18u);
    ctx->pc = 0x353A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353A10u;
    // 0x353a14: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x353A10u, 0x353A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353A18u;
label_353a18:
    // 0x353a18: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x353A18u;
    SET_GPR_U32(ctx, 31, 0x353A20u);
    ctx->pc = 0x353A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353A18u;
    // 0x353a1c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x353A18u, 0x353A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353A20u;
label_353a20:
    // 0x353a20: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x353a20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x353a24: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x353a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x353a28: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x353a28u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353a2c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x353a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x353a30: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x353a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x353a34: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x353a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x353a38: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x353a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x353a3c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x353a3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x353a40: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x353a40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x353a44: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x353a44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x353a48: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x353a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x353a4c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x353a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x353a50: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x353a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x353a54: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x353a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x353a58: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x353a58u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x353a5c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x353a5cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x353a60: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x353a60u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x353a64: 0x0  nop
    ctx->pc = 0x353a64u;
    // NOP
    // 0x353a68: 0x0  nop
    ctx->pc = 0x353a68u;
    // NOP
    // 0x353a6c: 0x46010084  c1          0x10084
    ctx->pc = 0x353a6cu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x353a70: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x353a70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x353a74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x353a74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353a78: 0x0  nop
    ctx->pc = 0x353a78u;
    // NOP
    // 0x353a7c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x353a7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x353a80: 0x0  nop
    ctx->pc = 0x353a80u;
    // NOP
    // 0x353a84: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x353A84u;
    {
        const bool branch_taken_0x353a84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x353A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353A84u;
        // 0x353a88: 0xe7a20070  swc1        $f2, 0x70($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x353a84) {
            ctx->pc = 0x353AB0u;
            goto label_353ab0;
        }
    }
    ctx->pc = 0x353A8Cu;
    // 0x353a8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x353a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x353a90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x353a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353a94: 0x0  nop
    ctx->pc = 0x353a94u;
    // NOP
    // 0x353a98: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x353a98u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x353a9c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x353a9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x353aa0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x353aa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x353aa4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x353aa4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x353aa8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x353aa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x353aac: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x353aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_353ab0:
    // 0x353ab0: 0xc0779a4  jal         func_1DE690
    ctx->pc = 0x353AB0u;
    SET_GPR_U32(ctx, 31, 0x353AB8u);
    ctx->pc = 0x353AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353AB0u;
    // 0x353ab4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE690u, 0x353AB0u, 0x353AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353AB8u;
label_353ab8:
    // 0x353ab8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x353AB8u;
    {
        const bool branch_taken_0x353ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353ab8) {
            ctx->pc = 0x353AE8u;
            goto label_353ae8;
        }
    }
    ctx->pc = 0x353AC0u;
    // 0x353ac0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x353AC0u;
    {
        const bool branch_taken_0x353ac0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x353AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353AC0u;
        // 0x353ac4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353ac0) {
            ctx->pc = 0x353AD4u;
            goto label_353ad4;
        }
    }
    ctx->pc = 0x353AC8u;
    // 0x353ac8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x353ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x353acc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x353ACCu;
    {
        const bool branch_taken_0x353acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353ACCu;
        // 0x353ad0: 0xa0622d10  sb          $v0, 0x2D10($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 11536), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353acc) {
            ctx->pc = 0x353B0Cu;
            goto label_353b0c;
        }
    }
    ctx->pc = 0x353AD4u;
label_353ad4:
    // 0x353ad4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x353ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x353ad8: 0xa0622d11  sb          $v0, 0x2D11($v1)
    ctx->pc = 0x353ad8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x482D11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x482D11u, _value); } while (0);
    // 0x353adc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x353adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353ae0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x353AE0u;
    {
        const bool branch_taken_0x353ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353AE0u;
        // 0x353ae4: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353ae0) {
            ctx->pc = 0x353B10u;
            goto label_353b10;
        }
    }
    ctx->pc = 0x353AE8u;
label_353ae8:
    // 0x353ae8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x353AE8u;
    {
        const bool branch_taken_0x353ae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x353AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353AE8u;
        // 0x353aec: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353ae8) {
            ctx->pc = 0x353B00u;
            goto label_353b00;
        }
    }
    ctx->pc = 0x353AF0u;
    // 0x353af0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x353af0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x353af4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x353af4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353af8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x353AF8u;
    {
        const bool branch_taken_0x353af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353AF8u;
        // 0x353afc: 0xa0402d10  sb          $zero, 0x2D10($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 11536), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353af8) {
            ctx->pc = 0x353B10u;
            goto label_353b10;
        }
    }
    ctx->pc = 0x353B00u;
label_353b00:
    // 0x353b00: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x353b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x353b04: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x353b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x353b08: 0xa0402d11  sb          $zero, 0x2D11($v0)
    ctx->pc = 0x353b08u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482D11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x482D11u, _value); } while (0);
label_353b0c:
    // 0x353b0c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x353b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_353b10:
    // 0x353b10: 0x90622d10  lbu         $v0, 0x2D10($v1)
    ctx->pc = 0x353b10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11536)));
    // 0x353b14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x353b14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353b18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x353B18u;
    {
        const bool branch_taken_0x353b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353B18u;
        // 0x353b1c: 0x26242b58  addiu       $a0, $s1, 0x2B58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353b18) {
            ctx->pc = 0x353B28u;
            goto label_353b28;
        }
    }
    ctx->pc = 0x353B20u;
    // 0x353b20: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x353b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x353b24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x353b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_353b28:
    // 0x353b28: 0x90a22d11  lbu         $v0, 0x2D11($a1)
    ctx->pc = 0x353b28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 11537)));
    // 0x353b2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x353B2Cu;
    {
        const bool branch_taken_0x353b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353B2Cu;
        // 0x353b30: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x353b2c) {
            ctx->pc = 0x353B44u;
            goto label_353b44;
        }
    }
    ctx->pc = 0x353B34u;
    // 0x353b34: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x353b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x353b38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x353b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353b3c: 0x0  nop
    ctx->pc = 0x353b3cu;
    // NOP
    // 0x353b40: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x353b40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_353b44:
    // 0x353b44: 0xc0d5748  jal         func_355D20
    ctx->pc = 0x353B44u;
    SET_GPR_U32(ctx, 31, 0x353B4Cu);
    ctx->pc = 0x353B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353B44u;
    // 0x353b48: 0xe6212b58  swc1        $f1, 0x2B58($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11096), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x355D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355D20u, 0x353B44u, 0x353B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353B4Cu;
label_353b4c:
    // 0x353b4c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x353b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_353b50:
    // 0x353b50: 0xc6232b58  lwc1        $f3, 0x2B58($s1)
    ctx->pc = 0x353b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x353b54: 0xc4822be4  lwc1        $f2, 0x2BE4($a0)
    ctx->pc = 0x353b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x353b58: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x353b58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x353b5c: 0x0  nop
    ctx->pc = 0x353b5cu;
    // NOP
    // 0x353b60: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x353B60u;
    {
        const bool branch_taken_0x353b60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x353B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353B60u;
        // 0x353b64: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353b60) {
            ctx->pc = 0x353B98u;
            goto label_353b98;
        }
    }
    ctx->pc = 0x353B68u;
    // 0x353b68: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x353b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x353b6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x353b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x353b70: 0xc4a02b30  lwc1        $f0, 0x2B30($a1)
    ctx->pc = 0x353b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353b74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x353b74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x353b78: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x353b78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x353b7c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x353b7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x353b80: 0x0  nop
    ctx->pc = 0x353b80u;
    // NOP
    // 0x353b84: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x353B84u;
    {
        const bool branch_taken_0x353b84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x353b84) {
            ctx->pc = 0x353B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353B84u;
            // 0x353b88: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x353B8Cu;
            goto label_353b8c;
        }
    }
    ctx->pc = 0x353B8Cu;
label_353b8c:
    // 0x353b8c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x353b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x353b90: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x353B90u;
    {
        const bool branch_taken_0x353b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353B90u;
        // 0x353b94: 0xe4402be4  swc1        $f0, 0x2BE4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 11236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x353b90) {
            ctx->pc = 0x353BC8u;
            goto label_353bc8;
        }
    }
    ctx->pc = 0x353B98u;
label_353b98:
    // 0x353b98: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x353b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x353b9c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x353b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x353ba0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x353ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x353ba4: 0xc4802b30  lwc1        $f0, 0x2B30($a0)
    ctx->pc = 0x353ba4u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353ba8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x353ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x353bac: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x353bacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x353bb0: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x353bb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x353bb4: 0x0  nop
    ctx->pc = 0x353bb4u;
    // NOP
    // 0x353bb8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x353BB8u;
    {
        const bool branch_taken_0x353bb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x353bb8) {
            ctx->pc = 0x353BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353BB8u;
            // 0x353bbc: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x353BC0u;
            goto label_353bc0;
        }
    }
    ctx->pc = 0x353BC0u;
label_353bc0:
    // 0x353bc0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x353bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x353bc4: 0xe4a02be4  swc1        $f0, 0x2BE4($a1)
    ctx->pc = 0x353bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x482BE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482BE4u, _value); } while (0); }
label_353bc8:
    // 0x353bc8: 0x86832c56  lh          $v1, 0x2C56($s4)
    ctx->pc = 0x353bc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 11350)));
    // 0x353bcc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x353bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x353bd0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x353BD0u;
    {
        const bool branch_taken_0x353bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x353BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353BD0u;
        // 0x353bd4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353bd0) {
            ctx->pc = 0x353BE4u;
            goto label_353be4;
        }
    }
    ctx->pc = 0x353BD8u;
    // 0x353bd8: 0x86a22c54  lh          $v0, 0x2C54($s5)
    ctx->pc = 0x353bd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 11348)));
    // 0x353bdc: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x353BDCu;
    {
        const bool branch_taken_0x353bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x353BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353BDCu;
        // 0x353be0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353bdc) {
            ctx->pc = 0x353BF8u;
            goto label_353bf8;
        }
    }
    ctx->pc = 0x353BE4u;
label_353be4:
    // 0x353be4: 0x14620043  bne         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x353BE4u;
    {
        const bool branch_taken_0x353be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x353BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353BE4u;
        // 0x353be8: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353be4) {
            ctx->pc = 0x353CF4u;
            goto label_353cf4;
        }
    }
    ctx->pc = 0x353BECu;
    // 0x353bec: 0x86a22c54  lh          $v0, 0x2C54($s5)
    ctx->pc = 0x353becu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 11348)));
    // 0x353bf0: 0x14430040  bne         $v0, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x353BF0u;
    {
        const bool branch_taken_0x353bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x353BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353BF0u;
        // 0x353bf4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353bf0) {
            ctx->pc = 0x353CF4u;
            goto label_353cf4;
        }
    }
    ctx->pc = 0x353BF8u;
label_353bf8:
    // 0x353bf8: 0x92422b94  lbu         $v0, 0x2B94($s2)
    ctx->pc = 0x353bf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11156)));
    // 0x353bfc: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x353BFCu;
    {
        const bool branch_taken_0x353bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353bfc) {
            ctx->pc = 0x353CACu;
            goto label_353cac;
        }
    }
    ctx->pc = 0x353C04u;
    // 0x353c04: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x353C04u;
    SET_GPR_U32(ctx, 31, 0x353C0Cu);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x353C04u, 0x353C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353C0Cu;
label_353c0c:
    // 0x353c0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x353c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x353c10: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x353c10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x353c14: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x353C14u;
    {
        const bool branch_taken_0x353c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353C14u;
        // 0x353c18: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353c14) {
            ctx->pc = 0x353C6Cu;
            goto label_353c6c;
        }
    }
    ctx->pc = 0x353C1Cu;
    // 0x353c1c: 0x8fc32b44  lw          $v1, 0x2B44($fp)
    ctx->pc = 0x353c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11076)));
    // 0x353c20: 0x8c872d18  lw          $a3, 0x2D18($a0)
    ctx->pc = 0x353c20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11544)));
    // 0x353c24: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x353c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x353c28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x353c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353c2c: 0x24090096  addiu       $t1, $zero, 0x96
    ctx->pc = 0x353c2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x353c30: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x353c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x353c34: 0x8ec62b00  lw          $a2, 0x2B00($s6)
    ctx->pc = 0x353c34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11008)));
    // 0x353c38: 0x43202a  slt         $a0, $v0, $v1
    ctx->pc = 0x353c38u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x353c3c: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x353c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x353c40: 0x64280a  movz        $a1, $v1, $a0
    ctx->pc = 0x353c40u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x353c44: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x353c44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x353c48: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x353c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x353c4c: 0xa2402b94  sb          $zero, 0x2B94($s2)
    ctx->pc = 0x353c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11156), (uint8_t)GPR_U32(ctx, 0));
    // 0x353c50: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x353c50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x353c54: 0xad052d1c  sw          $a1, 0x2D1C($t0)
    ctx->pc = 0x353c54u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 11548), GPR_U32(ctx, 5));
    // 0x353c58: 0xa0e02be0  sb          $zero, 0x2BE0($a3)
    ctx->pc = 0x353c58u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 11232), (uint8_t)GPR_U32(ctx, 0));
    // 0x353c5c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x353c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x353c60: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x353c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x353c64: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x353C64u;
    {
        const bool branch_taken_0x353c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353C64u;
        // 0x353c68: 0xac462d0c  sw          $a2, 0x2D0C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11532), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353c64) {
            ctx->pc = 0x353CFCu;
            goto label_353cfc;
        }
    }
    ctx->pc = 0x353C6Cu;
label_353c6c:
    // 0x353c6c: 0x3c120048  lui         $s2, 0x48
    ctx->pc = 0x353c6cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
    // 0x353c70: 0x8ec22b00  lw          $v0, 0x2B00($s6)
    ctx->pc = 0x353c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11008)));
    // 0x353c74: 0x8e432d20  lw          $v1, 0x2D20($s2)
    ctx->pc = 0x353c74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482D20u));
    // 0x353c78: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x353c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x353c7c: 0x2c420033  sltiu       $v0, $v0, 0x33
    ctx->pc = 0x353c7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x353c80: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x353C80u;
    {
        const bool branch_taken_0x353c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x353C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353C80u;
        // 0x353c84: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353c80) {
            ctx->pc = 0x353D00u;
            goto label_353d00;
        }
    }
    ctx->pc = 0x353C88u;
    // 0x353c88: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x353c88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x353c8c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x353C8Cu;
    SET_GPR_U32(ctx, 31, 0x353C94u);
    ctx->pc = 0x353C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353C8Cu;
    // 0x353c90: 0x92112be0  lbu         $s1, 0x2BE0($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11232)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x353C8Cu, 0x353C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353C94u;
label_353c94:
    // 0x353c94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x353c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x353c98: 0x12220018  beq         $s1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x353C98u;
    {
        const bool branch_taken_0x353c98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x353C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353C98u;
        // 0x353c9c: 0xa2022be0  sb          $v0, 0x2BE0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11232), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353c98) {
            ctx->pc = 0x353CFCu;
            goto label_353cfc;
        }
    }
    ctx->pc = 0x353CA0u;
    // 0x353ca0: 0x8ec22b00  lw          $v0, 0x2B00($s6)
    ctx->pc = 0x353ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11008)));
    // 0x353ca4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x353CA4u;
    {
        const bool branch_taken_0x353ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353CA4u;
        // 0x353ca8: 0xae422d20  sw          $v0, 0x2D20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 11552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353ca4) {
            ctx->pc = 0x353CFCu;
            goto label_353cfc;
        }
    }
    ctx->pc = 0x353CACu;
label_353cac:
    // 0x353cac: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x353CACu;
    SET_GPR_U32(ctx, 31, 0x353CB4u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x353CACu, 0x353CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353CB4u;
label_353cb4:
    // 0x353cb4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x353cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x353cb8: 0x2c4200c8  sltiu       $v0, $v0, 0xC8
    ctx->pc = 0x353cb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)200) ? 1 : 0);
    // 0x353cbc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x353CBCu;
    {
        const bool branch_taken_0x353cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353CBCu;
        // 0x353cc0: 0x8fc62b44  lw          $a2, 0x2B44($fp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353cbc) {
            ctx->pc = 0x353CECu;
            goto label_353cec;
        }
    }
    ctx->pc = 0x353CC4u;
    // 0x353cc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x353cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353cc8: 0x8ec72b00  lw          $a3, 0x2B00($s6)
    ctx->pc = 0x353cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11008)));
    // 0x353ccc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x353cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x353cd0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x353cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x353cd4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x353cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x353cd8: 0xac462d18  sw          $a2, 0x2D18($v0)
    ctx->pc = 0x353cd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x482D18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482D18u, _value); } while (0);
    // 0x353cdc: 0xa0652be0  sb          $a1, 0x2BE0($v1)
    ctx->pc = 0x353cdcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x482BE0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x482BE0u, _value); } while (0);
    // 0x353ce0: 0xac872d20  sw          $a3, 0x2D20($a0)
    ctx->pc = 0x353ce0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x482D20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482D20u, _value); } while (0);
    // 0x353ce4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x353CE4u;
    {
        const bool branch_taken_0x353ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353CE4u;
        // 0x353ce8: 0xa2452b94  sb          $a1, 0x2B94($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 11156), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353ce4) {
            ctx->pc = 0x353CFCu;
            goto label_353cfc;
        }
    }
    ctx->pc = 0x353CECu;
label_353cec:
    // 0x353cec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x353CECu;
    {
        const bool branch_taken_0x353cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353CECu;
        // 0x353cf0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353cec) {
            ctx->pc = 0x353CF8u;
            goto label_353cf8;
        }
    }
    ctx->pc = 0x353CF4u;
label_353cf4:
    // 0x353cf4: 0xa2402b94  sb          $zero, 0x2B94($s2)
    ctx->pc = 0x353cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11156), (uint8_t)GPR_U32(ctx, 0));
label_353cf8:
    // 0x353cf8: 0xa0402be0  sb          $zero, 0x2BE0($v0)
    ctx->pc = 0x353cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11232), (uint8_t)GPR_U32(ctx, 0));
label_353cfc:
    // 0x353cfc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x353cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_353d00:
    // 0x353d00: 0x8c832d0c  lw          $v1, 0x2D0C($a0)
    ctx->pc = 0x353d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11532)));
    // 0x353d04: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x353D04u;
    {
        const bool branch_taken_0x353d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x353D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353D04u;
        // 0x353d08: 0x8ec22b00  lw          $v0, 0x2B00($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353d04) {
            ctx->pc = 0x353D2Cu;
            goto label_353d2c;
        }
    }
    ctx->pc = 0x353D0Cu;
    // 0x353d0c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x353d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x353d10: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x353D10u;
    {
        const bool branch_taken_0x353d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353D10u;
        // 0x353d14: 0x86a22c54  lh          $v0, 0x2C54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 11348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353d10) {
            ctx->pc = 0x353D30u;
            goto label_353d30;
        }
    }
    ctx->pc = 0x353D18u;
    // 0x353d18: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x353d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x353d1c: 0xc07f67a  jal         func_1FD9E8
    ctx->pc = 0x353D1Cu;
    SET_GPR_U32(ctx, 31, 0x353D24u);
    ctx->pc = 0x353D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353D1Cu;
    // 0x353d20: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9E8u, 0x353D1Cu, 0x353D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353D24u;
label_353d24:
    // 0x353d24: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x353d24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x353d28: 0xaca02d0c  sw          $zero, 0x2D0C($a1)
    ctx->pc = 0x353d28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482D0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482D0Cu, _value); } while (0);
label_353d2c:
    // 0x353d2c: 0x86a22c54  lh          $v0, 0x2C54($s5)
    ctx->pc = 0x353d2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 11348)));
label_353d30:
    // 0x353d30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x353d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x353d34: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x353D34u;
    {
        const bool branch_taken_0x353d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x353D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353D34u;
        // 0x353d38: 0x86822c56  lh          $v0, 0x2C56($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 11350)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353d34) {
            ctx->pc = 0x353D74u;
            goto label_353d74;
        }
    }
    ctx->pc = 0x353D3Cu;
    // 0x353d3c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x353D3Cu;
    {
        const bool branch_taken_0x353d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x353D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353D3Cu;
        // 0x353d40: 0xc6612d00  lwc1        $f1, 0x2D00($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 11520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x353d3c) {
            ctx->pc = 0x353D58u;
            goto label_353d58;
        }
    }
    ctx->pc = 0x353D44u;
    // 0x353d44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x353d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x353d48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x353d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353d4c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x353d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x353d50: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x353D50u;
    {
        const bool branch_taken_0x353d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353D50u;
        // 0x353d54: 0xe4402d24  swc1        $f0, 0x2D24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 11556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x353d50) {
            ctx->pc = 0x353D90u;
            goto label_353d90;
        }
    }
    ctx->pc = 0x353D58u;
label_353d58:
    // 0x353d58: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x353d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x353d5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x353d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x353d60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x353d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353d64: 0x0  nop
    ctx->pc = 0x353d64u;
    // NOP
    // 0x353d68: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x353d68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x353d6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x353D6Cu;
    {
        const bool branch_taken_0x353d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353D6Cu;
        // 0x353d70: 0xe4802d24  swc1        $f0, 0x2D24($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x353d6c) {
            ctx->pc = 0x353D90u;
            goto label_353d90;
        }
    }
    ctx->pc = 0x353D74u;
label_353d74:
    // 0x353d74: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x353D74u;
    {
        const bool branch_taken_0x353d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x353D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353D74u;
        // 0x353d78: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353d74) {
            ctx->pc = 0x353D8Cu;
            goto label_353d8c;
        }
    }
    ctx->pc = 0x353D7Cu;
    // 0x353d7c: 0xc6602d00  lwc1        $f0, 0x2D00($s3)
    ctx->pc = 0x353d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 11520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353d80: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x353d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x353d84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x353D84u;
    {
        const bool branch_taken_0x353d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353D84u;
        // 0x353d88: 0xe4a02d24  swc1        $f0, 0x2D24($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 11556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x353d84) {
            ctx->pc = 0x353D90u;
            goto label_353d90;
        }
    }
    ctx->pc = 0x353D8Cu;
label_353d8c:
    // 0x353d8c: 0xac402d24  sw          $zero, 0x2D24($v0)
    ctx->pc = 0x353d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11556), GPR_U32(ctx, 0));
label_353d90:
    // 0x353d90: 0x96a22c54  lhu         $v0, 0x2C54($s5)
    ctx->pc = 0x353d90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 11348)));
    // 0x353d94: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x353d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x353d98: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x353d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x353d9c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x353D9Cu;
    {
        const bool branch_taken_0x353d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353D9Cu;
        // 0x353da0: 0xc6612d00  lwc1        $f1, 0x2D00($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 11520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x353d9c) {
            ctx->pc = 0x353DBCu;
            goto label_353dbc;
        }
    }
    ctx->pc = 0x353DA4u;
    // 0x353da4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x353da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x353da8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x353da8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353dac: 0x0  nop
    ctx->pc = 0x353dacu;
    // NOP
    // 0x353db0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x353db0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x353db4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x353DB4u;
    {
        const bool branch_taken_0x353db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353DB4u;
        // 0x353db8: 0xe6e02d14  swc1        $f0, 0x2D14($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 11540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x353db4) {
            ctx->pc = 0x353DC0u;
            goto label_353dc0;
        }
    }
    ctx->pc = 0x353DBCu;
label_353dbc:
    // 0x353dbc: 0xaee02d14  sw          $zero, 0x2D14($s7)
    ctx->pc = 0x353dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 11540), GPR_U32(ctx, 0));
label_353dc0:
    // 0x353dc0: 0x96832c56  lhu         $v1, 0x2C56($s4)
    ctx->pc = 0x353dc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 11350)));
    // 0x353dc4: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x353dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x353dc8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x353dc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x353dcc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x353DCCu;
    {
        const bool branch_taken_0x353dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353DCCu;
        // 0x353dd0: 0xc6e02d14  lwc1        $f0, 0x2D14($s7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 11540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x353dcc) {
            ctx->pc = 0x353DE0u;
            goto label_353de0;
        }
    }
    ctx->pc = 0x353DD4u;
    // 0x353dd4: 0xc6612d00  lwc1        $f1, 0x2D00($s3)
    ctx->pc = 0x353dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 11520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353dd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x353dd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x353ddc: 0xe6e02d14  swc1        $f0, 0x2D14($s7)
    ctx->pc = 0x353ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 11540), bits); }
label_353de0:
    // 0x353de0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x353de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x353de4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x353de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x353de8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x353de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353dec: 0xc4822be4  lwc1        $f2, 0x2BE4($a0)
    ctx->pc = 0x353decu;
    { uint32_t bits = FAST_READ32(0x482BE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x353df0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x353df0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x353df4: 0xc6e12d14  lwc1        $f1, 0x2D14($s7)
    ctx->pc = 0x353df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 11540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353df8: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x353df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x353dfc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x353dfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x353e00: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x353e00u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x353e04: 0xe4a12d28  swc1        $f1, 0x2D28($a1)
    ctx->pc = 0x353e04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 11560), bits); }
    // 0x353e08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x353e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x353e0c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x353e0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x353e10: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x353E10u;
    {
        const bool branch_taken_0x353e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x353E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353E10u;
        // 0x353e14: 0xe6e12d14  swc1        $f1, 0x2D14($s7) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 11540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x353e10) {
            ctx->pc = 0x353E30u;
            goto label_353e30;
        }
    }
    ctx->pc = 0x353E18u;
    // 0x353e18: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x353e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x353e1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x353e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353e20: 0x0  nop
    ctx->pc = 0x353e20u;
    // NOP
    // 0x353e24: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x353e24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x353e28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x353E28u;
    {
        const bool branch_taken_0x353e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353E28u;
        // 0x353e2c: 0xe6e02d14  swc1        $f0, 0x2D14($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 11540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x353e28) {
            ctx->pc = 0x353E3Cu;
            goto label_353e3c;
        }
    }
    ctx->pc = 0x353E30u;
label_353e30:
    // 0x353e30: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x353e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x353e34: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x353E34u;
    {
        const bool branch_taken_0x353e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x353e34) {
            ctx->pc = 0x353E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353E34u;
            // 0x353e38: 0xe6e12d14  swc1        $f1, 0x2D14($s7) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 11540), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x353E3Cu;
            goto label_353e3c;
        }
    }
    ctx->pc = 0x353E3Cu;
label_353e3c:
    // 0x353e3c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x353e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x353e40: 0xc6e02d14  lwc1        $f0, 0x2D14($s7)
    ctx->pc = 0x353e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 11540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353e44: 0xc441c8d4  lwc1        $f1, -0x372C($v0)
    ctx->pc = 0x353e44u;
    { uint32_t bits = FAST_READ32(0x3FC8D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353e48: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x353e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x353e4c: 0x86a22c54  lh          $v0, 0x2C54($s5)
    ctx->pc = 0x353e4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 11348)));
    // 0x353e50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x353e50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x353e54: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x353E54u;
    {
        const bool branch_taken_0x353e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x353E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353E54u;
        // 0x353e58: 0xe6e02d14  swc1        $f0, 0x2D14($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 11540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x353e54) {
            ctx->pc = 0x353E68u;
            goto label_353e68;
        }
    }
    ctx->pc = 0x353E5Cu;
    // 0x353e5c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x353e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x353e60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x353E60u;
    {
        const bool branch_taken_0x353e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353E60u;
        // 0x353e64: 0xac802cb4  sw          $zero, 0x2CB4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 11444), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353e60) {
            ctx->pc = 0x353E84u;
            goto label_353e84;
        }
    }
    ctx->pc = 0x353E68u;
label_353e68:
    // 0x353e68: 0xc6612d00  lwc1        $f1, 0x2D00($s3)
    ctx->pc = 0x353e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 11520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353e6c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x353e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x353e70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x353e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x353e74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x353e74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353e78: 0x0  nop
    ctx->pc = 0x353e78u;
    // NOP
    // 0x353e7c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x353e7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x353e80: 0xe4a02cb4  swc1        $f0, 0x2CB4($a1)
    ctx->pc = 0x353e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x482CB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482CB4u, _value); } while (0); }
label_353e84:
    // 0x353e84: 0x86832c56  lh          $v1, 0x2C56($s4)
    ctx->pc = 0x353e84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 11350)));
    // 0x353e88: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x353e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x353e8c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x353E8Cu;
    {
        const bool branch_taken_0x353e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x353E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353E8Cu;
        // 0x353e90: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353e8c) {
            ctx->pc = 0x353EA4u;
            goto label_353ea4;
        }
    }
    ctx->pc = 0x353E94u;
    // 0x353e94: 0xc6612d00  lwc1        $f1, 0x2D00($s3)
    ctx->pc = 0x353e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 11520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353e98: 0xc4402cb4  lwc1        $f0, 0x2CB4($v0)
    ctx->pc = 0x353e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353e9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x353e9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x353ea0: 0xe4402cb4  swc1        $f0, 0x2CB4($v0)
    ctx->pc = 0x353ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 11444), bits); }
label_353ea4:
    // 0x353ea4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x353ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x353ea8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x353ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x353eac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x353eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353eb0: 0xc4812cb4  lwc1        $f1, 0x2CB4($a0)
    ctx->pc = 0x353eb0u;
    { uint32_t bits = FAST_READ32(0x482CB4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353eb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x353eb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x353eb8: 0x0  nop
    ctx->pc = 0x353eb8u;
    // NOP
    // 0x353ebc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x353EBCu;
    {
        const bool branch_taken_0x353ebc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x353EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353EBCu;
        // 0x353ec0: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353ebc) {
            ctx->pc = 0x353EDCu;
            goto label_353edc;
        }
    }
    ctx->pc = 0x353EC4u;
    // 0x353ec4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x353ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x353ec8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x353ec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353ecc: 0x0  nop
    ctx->pc = 0x353eccu;
    // NOP
    // 0x353ed0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x353ed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x353ed4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x353ED4u;
    {
        const bool branch_taken_0x353ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353ED4u;
        // 0x353ed8: 0xe4802cb4  swc1        $f0, 0x2CB4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x353ed4) {
            ctx->pc = 0x353EECu;
            goto label_353eec;
        }
    }
    ctx->pc = 0x353EDCu;
label_353edc:
    // 0x353edc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x353edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x353ee0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x353ee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353ee4: 0x0  nop
    ctx->pc = 0x353ee4u;
    // NOP
    // 0x353ee8: 0xe4a02cb4  swc1        $f0, 0x2CB4($a1)
    ctx->pc = 0x353ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 11444), bits); }
label_353eec:
    // 0x353eec: 0x86a32c54  lh          $v1, 0x2C54($s5)
    ctx->pc = 0x353eecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 11348)));
    // 0x353ef0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x353ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x353ef4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x353EF4u;
    {
        const bool branch_taken_0x353ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x353EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353EF4u;
        // 0x353ef8: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353ef4) {
            ctx->pc = 0x353F04u;
            goto label_353f04;
        }
    }
    ctx->pc = 0x353EFCu;
    // 0x353efc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x353EFCu;
    {
        const bool branch_taken_0x353efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353EFCu;
        // 0x353f00: 0xac402cb0  sw          $zero, 0x2CB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353efc) {
            ctx->pc = 0x353F20u;
            goto label_353f20;
        }
    }
    ctx->pc = 0x353F04u;
label_353f04:
    // 0x353f04: 0xc6612d00  lwc1        $f1, 0x2D00($s3)
    ctx->pc = 0x353f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 11520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353f08: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x353f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x353f0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x353f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x353f10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x353f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353f14: 0x0  nop
    ctx->pc = 0x353f14u;
    // NOP
    // 0x353f18: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x353f18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x353f1c: 0xe4802cb0  swc1        $f0, 0x2CB0($a0)
    ctx->pc = 0x353f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x482CB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482CB0u, _value); } while (0); }
label_353f20:
    // 0x353f20: 0x86832c56  lh          $v1, 0x2C56($s4)
    ctx->pc = 0x353f20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 11350)));
    // 0x353f24: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x353f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x353f28: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x353F28u;
    {
        const bool branch_taken_0x353f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x353F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353F28u;
        // 0x353f2c: 0x86a22c54  lh          $v0, 0x2C54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 11348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353f28) {
            ctx->pc = 0x353F48u;
            goto label_353f48;
        }
    }
    ctx->pc = 0x353F30u;
    // 0x353f30: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x353f30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x353f34: 0xc6612d00  lwc1        $f1, 0x2D00($s3)
    ctx->pc = 0x353f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 11520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353f38: 0xc4a02cb0  lwc1        $f0, 0x2CB0($a1)
    ctx->pc = 0x353f38u;
    { uint32_t bits = FAST_READ32(0x482CB0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353f3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x353f3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x353f40: 0xe4a02cb0  swc1        $f0, 0x2CB0($a1)
    ctx->pc = 0x353f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x482CB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482CB0u, _value); } while (0); }
    // 0x353f44: 0x86a22c54  lh          $v0, 0x2C54($s5)
    ctx->pc = 0x353f44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 11348)));
label_353f48:
    // 0x353f48: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x353f48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x353f4c: 0xc6622d00  lwc1        $f2, 0x2D00($s3)
    ctx->pc = 0x353f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 11520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x353f50: 0x24a4c8b8  addiu       $a0, $a1, -0x3748
    ctx->pc = 0x353f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953144));
    // 0x353f54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x353f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x353f58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x353f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x353f5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x353f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x353f60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x353f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x353f64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x353f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x353f68: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x353f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x353f6c: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x353f6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x353f70: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x353f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x353f74: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x353f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x353f78: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x353f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x353f7c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x353f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x353f80: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x353f80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x353f84: 0xc4452be4  lwc1        $f5, 0x2BE4($v0)
    ctx->pc = 0x353f84u;
    { uint32_t bits = FAST_READ32(0x482BE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x353f88: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x353f88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x353f8c: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x353f8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x353f90: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x353f90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x353f94: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x353f94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x353f98: 0xc0d526c  jal         func_3549B0
    ctx->pc = 0x353F98u;
    SET_GPR_U32(ctx, 31, 0x353FA0u);
    ctx->pc = 0x353F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353F98u;
    // 0x353f9c: 0xe4802b90  swc1        $f0, 0x2B90($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3549B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3549B0u, 0x353F98u, 0x353FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353FA0u;
label_353fa0:
    // 0x353fa0: 0xc0d4ff6  jal         func_353FD8
    ctx->pc = 0x353FA0u;
    SET_GPR_U32(ctx, 31, 0x353FA8u);
    ctx->pc = 0x353FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353FD8u, 0x353FA0u, 0x353FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353FA8u;
label_353fa8:
    // 0x353fa8: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x353fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x353fac: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x353facu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x353fb0: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x353fb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x353fb4: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x353fb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x353fb8: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x353fb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x353fbc: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x353fbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x353fc0: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x353fc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x353fc4: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x353fc4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x353fc8: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x353fc8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x353fcc: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x353fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x353fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x353FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353FD0u;
        // 0x353fd4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353FD8u;
}
