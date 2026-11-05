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

// Function: sub_00354720
// Address: 0x354720 - 0x354940
void sub_00354720_0x354720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354720_0x354720");
#endif

    switch (ctx->pc) {
        case 0x3547d8u: goto label_3547d8;
        default: break;
    }

    ctx->pc = 0x354720u;

    // 0x354720: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x354720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x354724: 0x3c0f006c  lui         $t7, 0x6C
    ctx->pc = 0x354724u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)108 << 16));
    // 0x354728: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x354728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35472c: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x35472cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x354730: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x354730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x354734: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x354734u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x354738: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x354738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35473c: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x35473cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x354740: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x354740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x354744: 0x3c12006c  lui         $s2, 0x6C
    ctx->pc = 0x354744u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)108 << 16));
    // 0x354748: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x354748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x35474c: 0x3c0e006c  lui         $t6, 0x6C
    ctx->pc = 0x35474cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)108 << 16));
    // 0x354750: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x354750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x354754: 0x3c0b006c  lui         $t3, 0x6C
    ctx->pc = 0x354754u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)108 << 16));
    // 0x354758: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x354758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x35475c: 0x3c0c006c  lui         $t4, 0x6C
    ctx->pc = 0x35475cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)108 << 16));
    // 0x354760: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x354760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x354764: 0x3c09006c  lui         $t1, 0x6C
    ctx->pc = 0x354764u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)108 << 16));
    // 0x354768: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x354768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x35476c: 0x3c0a006c  lui         $t2, 0x6C
    ctx->pc = 0x35476cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)108 << 16));
    // 0x354770: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x354770u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x354774: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x354774u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
    // 0x354778: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x354778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x35477c: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x35477cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x354780: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x354780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x354784: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x354784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x354788: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x354788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x35478c: 0x2477d4f8  addiu       $s7, $v1, -0x2B08
    ctx->pc = 0x35478cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956280));
    // 0x354790: 0x245e2c58  addiu       $fp, $v0, 0x2C58
    ctx->pc = 0x354790u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 11352));
    // 0x354794: 0x2496edf8  addiu       $s6, $a0, -0x1208
    ctx->pc = 0x354794u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962680));
    // 0x354798: 0x24b5d518  addiu       $s5, $a1, -0x2AE8
    ctx->pc = 0x354798u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956312));
    // 0x35479c: 0x24d4edd8  addiu       $s4, $a2, -0x1228
    ctx->pc = 0x35479cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962648));
    // 0x3547a0: 0x24f3d4d8  addiu       $s3, $a3, -0x2B28
    ctx->pc = 0x3547a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956248));
    // 0x3547a4: 0x2519eeb8  addiu       $t9, $t0, -0x1148
    ctx->pc = 0x3547a4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962872));
    // 0x3547a8: 0x2529d5b8  addiu       $t1, $t1, -0x2A48
    ctx->pc = 0x3547a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294956472));
    // 0x3547ac: 0x254aee98  addiu       $t2, $t2, -0x1168
    ctx->pc = 0x3547acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294962840));
    // 0x3547b0: 0x256bd598  addiu       $t3, $t3, -0x2A68
    ctx->pc = 0x3547b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956440));
    // 0x3547b4: 0x258cee78  addiu       $t4, $t4, -0x1188
    ctx->pc = 0x3547b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294962808));
    // 0x3547b8: 0x25add578  addiu       $t5, $t5, -0x2A88
    ctx->pc = 0x3547b8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294956408));
    // 0x3547bc: 0x25ceee58  addiu       $t6, $t6, -0x11A8
    ctx->pc = 0x3547bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294962776));
    // 0x3547c0: 0x25efd558  addiu       $t7, $t7, -0x2AA8
    ctx->pc = 0x3547c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294956376));
    // 0x3547c4: 0x2610ee38  addiu       $s0, $s0, -0x11C8
    ctx->pc = 0x3547c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962744));
    // 0x3547c8: 0x2631d538  addiu       $s1, $s1, -0x2AC8
    ctx->pc = 0x3547c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956344));
    // 0x3547cc: 0x2652ee18  addiu       $s2, $s2, -0x11E8
    ctx->pc = 0x3547ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962712));
    // 0x3547d0: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x3547d0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3547d4: 0x0  nop
    ctx->pc = 0x3547d4u;
    // NOP
label_3547d8:
    // 0x3547d8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x3547d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3547dc: 0x31e4021  addu        $t0, $t8, $fp
    ctx->pc = 0x3547dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 30)));
    // 0x3547e0: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x3547e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x3547e4: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x3547e4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x3547e8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x3547e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3547ec: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x3547ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x3547f0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x3547f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3547f4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3547f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3547f8: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x3547f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3547fc: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x3547fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x354800: 0x8f250000  lw          $a1, 0x0($t9)
    ctx->pc = 0x354800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x354804: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x354804u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x354808: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x354808u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x35480c: 0x27390004  addiu       $t9, $t9, 0x4
    ctx->pc = 0x35480cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4));
    // 0x354810: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x354810u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x354814: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x354814u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x354818: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x354818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x35481c: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x35481cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x354820: 0xe5e10000  swc1        $f1, 0x0($t7)
    ctx->pc = 0x354820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
    // 0x354824: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x354824u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x354828: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x354828u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x35482c: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x35482cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x354830: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x354830u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x354834: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x354834u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x354838: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x354838u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x35483c: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x35483cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x354840: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x354840u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x354844: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x354844u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x354848: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x354848u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
    // 0x35484c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x35484cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x354850: 0xaee70000  sw          $a3, 0x0($s7)
    ctx->pc = 0x354850u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 7));
    // 0x354854: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x354854u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x354858: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x354858u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x35485c: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x35485cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x354860: 0x2b020007  slti        $v0, $t8, 0x7
    ctx->pc = 0x354860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x354864: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x354864u;
    {
        const bool branch_taken_0x354864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x354868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354864u;
        // 0x354868: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354864) {
            ctx->pc = 0x3547D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3547d8;
        }
    }
    ctx->pc = 0x35486Cu;
    // 0x35486c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x35486cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x354870: 0x2442cb28  addiu       $v0, $v0, -0x34D8
    ctx->pc = 0x354870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953768));
    // 0x354874: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x354874u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x66CBD4u));
    // 0x354878: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x354878u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x66CBE8u));
    // 0x35487c: 0x8c4500d4  lw          $a1, 0xD4($v0)
    ctx->pc = 0x35487cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x66CBFCu));
    // 0x354880: 0xc4400098  lwc1        $f0, 0x98($v0)
    ctx->pc = 0x354880u;
    { uint32_t bits = FAST_READ32(0x66CBC0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354884: 0xc441009c  lwc1        $f1, 0x9C($v0)
    ctx->pc = 0x354884u;
    { uint32_t bits = FAST_READ32(0x66CBC4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x354888: 0x8c4600b0  lw          $a2, 0xB0($v0)
    ctx->pc = 0x354888u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x66CBD8u));
    // 0x35488c: 0x8c4700c4  lw          $a3, 0xC4($v0)
    ctx->pc = 0x35488cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x66CBECu));
    // 0x354890: 0x8c4800d8  lw          $t0, 0xD8($v0)
    ctx->pc = 0x354890u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x66CC00u));
    // 0x354894: 0xc44200a0  lwc1        $f2, 0xA0($v0)
    ctx->pc = 0x354894u;
    { uint32_t bits = FAST_READ32(0x66CBC8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x354898: 0x8c4900b4  lw          $t1, 0xB4($v0)
    ctx->pc = 0x354898u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x66CBDCu));
    // 0x35489c: 0x8c4a00c8  lw          $t2, 0xC8($v0)
    ctx->pc = 0x35489cu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x66CBF0u));
    // 0x3548a0: 0x8c4b00dc  lw          $t3, 0xDC($v0)
    ctx->pc = 0x3548a0u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x66CC04u));
    // 0x3548a4: 0xc44300a4  lwc1        $f3, 0xA4($v0)
    ctx->pc = 0x3548a4u;
    { uint32_t bits = FAST_READ32(0x66CBCCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3548a8: 0x8c4c00b8  lw          $t4, 0xB8($v0)
    ctx->pc = 0x3548a8u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x66CBE0u));
    // 0x3548ac: 0x8c4d00cc  lw          $t5, 0xCC($v0)
    ctx->pc = 0x3548acu;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x66CBF4u));
    // 0x3548b0: 0x8c4e00e0  lw          $t6, 0xE0($v0)
    ctx->pc = 0x3548b0u;
    SET_GPR_S32(ctx, 14, (int32_t)FAST_READ32(0x66CC08u));
    // 0x3548b4: 0xc44400a8  lwc1        $f4, 0xA8($v0)
    ctx->pc = 0x3548b4u;
    { uint32_t bits = FAST_READ32(0x66CBD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3548b8: 0xac4300fc  sw          $v1, 0xFC($v0)
    ctx->pc = 0x3548b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x66CC24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CC24u, _value); } while (0);
    // 0x3548bc: 0xac440110  sw          $a0, 0x110($v0)
    ctx->pc = 0x3548bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x66CC38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CC38u, _value); } while (0);
    // 0x3548c0: 0xac450124  sw          $a1, 0x124($v0)
    ctx->pc = 0x3548c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x66CC4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CC4Cu, _value); } while (0);
    // 0x3548c4: 0xe44000e8  swc1        $f0, 0xE8($v0)
    ctx->pc = 0x3548c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x66CC10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CC10u, _value); } while (0); }
    // 0x3548c8: 0xe44100ec  swc1        $f1, 0xEC($v0)
    ctx->pc = 0x3548c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x66CC14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CC14u, _value); } while (0); }
    // 0x3548cc: 0xac460100  sw          $a2, 0x100($v0)
    ctx->pc = 0x3548ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x66CC28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CC28u, _value); } while (0);
    // 0x3548d0: 0xac470114  sw          $a3, 0x114($v0)
    ctx->pc = 0x3548d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x66CC3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CC3Cu, _value); } while (0);
    // 0x3548d4: 0xac480128  sw          $t0, 0x128($v0)
    ctx->pc = 0x3548d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x66CC50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CC50u, _value); } while (0);
    // 0x3548d8: 0xe44200f0  swc1        $f2, 0xF0($v0)
    ctx->pc = 0x3548d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x66CC18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CC18u, _value); } while (0); }
    // 0x3548dc: 0xac490104  sw          $t1, 0x104($v0)
    ctx->pc = 0x3548dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x66CC2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CC2Cu, _value); } while (0);
    // 0x3548e0: 0xac4a0118  sw          $t2, 0x118($v0)
    ctx->pc = 0x3548e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x66CC40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CC40u, _value); } while (0);
    // 0x3548e4: 0xac4b012c  sw          $t3, 0x12C($v0)
    ctx->pc = 0x3548e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x66CC54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CC54u, _value); } while (0);
    // 0x3548e8: 0xe44300f4  swc1        $f3, 0xF4($v0)
    ctx->pc = 0x3548e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x66CC1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CC1Cu, _value); } while (0); }
    // 0x3548ec: 0xac4c0108  sw          $t4, 0x108($v0)
    ctx->pc = 0x3548ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x66CC30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CC30u, _value); } while (0);
    // 0x3548f0: 0xac4d011c  sw          $t5, 0x11C($v0)
    ctx->pc = 0x3548f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x66CC44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CC44u, _value); } while (0);
    // 0x3548f4: 0xac4e0130  sw          $t6, 0x130($v0)
    ctx->pc = 0x3548f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x66CC58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CC58u, _value); } while (0);
    // 0x3548f8: 0xe44400f8  swc1        $f4, 0xF8($v0)
    ctx->pc = 0x3548f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x66CC20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CC20u, _value); } while (0); }
    // 0x3548fc: 0x8c4400bc  lw          $a0, 0xBC($v0)
    ctx->pc = 0x3548fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x66CBE4u));
    // 0x354900: 0x8c4500d0  lw          $a1, 0xD0($v0)
    ctx->pc = 0x354900u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x66CBF8u));
    // 0x354904: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x354904u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x66CC0Cu));
    // 0x354908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x354908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35490c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35490cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x354910: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x354910u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354914: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x354914u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x354918: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x354918u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35491c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x35491cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x354920: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x354920u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x354924: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x354924u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x354928: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x354928u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35492c: 0xac44010c  sw          $a0, 0x10C($v0)
    ctx->pc = 0x35492cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x66CC34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CC34u, _value); } while (0);
    // 0x354930: 0xac430134  sw          $v1, 0x134($v0)
    ctx->pc = 0x354930u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x66CC5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CC5Cu, _value); } while (0);
    // 0x354934: 0xac450120  sw          $a1, 0x120($v0)
    ctx->pc = 0x354934u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x66CC48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CC48u, _value); } while (0);
    // 0x354938: 0x3e00008  jr          $ra
    ctx->pc = 0x354938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354938u;
        // 0x35493c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354940u;
}
