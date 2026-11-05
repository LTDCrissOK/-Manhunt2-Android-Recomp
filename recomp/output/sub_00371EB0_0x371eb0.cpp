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

// Function: sub_00371EB0
// Address: 0x371eb0 - 0x372168
void sub_00371EB0_0x371eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371EB0_0x371eb0");
#endif

    switch (ctx->pc) {
        case 0x3720c8u: goto label_3720c8;
        case 0x372120u: goto label_372120;
        default: break;
    }

    ctx->pc = 0x371eb0u;

    // 0x371eb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x371eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x371eb4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x371eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x371eb8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x371eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x371ebc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x371ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x371ec0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x371ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x371ec4: 0x2442cc48  addiu       $v0, $v0, -0x33B8
    ctx->pc = 0x371ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954056));
    // 0x371ec8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x371ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x371ecc: 0x3c0b0003  lui         $t3, 0x3
    ctx->pc = 0x371eccu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)3 << 16));
    // 0x371ed0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x371ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x371ed4: 0x340e8000  ori         $t6, $zero, 0x8000
    ctx->pc = 0x371ed4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x371ed8: 0xe7478  dsll        $t6, $t6, 17
    ctx->pc = 0x371ed8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 17);
    // 0x371edc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x371edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x371ee0: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x371ee0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x371ee4: 0x108478  dsll        $s0, $s0, 17
    ctx->pc = 0x371ee4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 17);
    // 0x371ee8: 0x36100261  ori         $s0, $s0, 0x261
    ctx->pc = 0x371ee8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)609);
    // 0x371eec: 0x3413ea80  ori         $s3, $zero, 0xEA80
    ctx->pc = 0x371eecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60032);
    // 0x371ef0: 0x139d38  dsll        $s3, $s3, 20
    ctx->pc = 0x371ef0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 20);
    // 0x371ef4: 0x24140021  addiu       $s4, $zero, 0x21
    ctx->pc = 0x371ef4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x371ef8: 0x8c850044  lw          $a1, 0x44($a0)
    ctx->pc = 0x371ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x371efc: 0x3c0c3f80  lui         $t4, 0x3F80
    ctx->pc = 0x371efcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16256 << 16));
    // 0x371f00: 0x94890050  lhu         $t1, 0x50($a0)
    ctx->pc = 0x371f00u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x371f04: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x371f04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x371f08: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x371f08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x371f0c: 0x3411a156  ori         $s1, $zero, 0xA156
    ctx->pc = 0x371f0cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41302);
    // 0x371f10: 0x118c38  dsll        $s1, $s1, 16
    ctx->pc = 0x371f10u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 16);
    // 0x371f14: 0x36318000  ori         $s1, $s1, 0x8000
    ctx->pc = 0x371f14u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32768);
    // 0x371f18: 0x118ff8  dsll        $s1, $s1, 31
    ctx->pc = 0x371f18u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 31);
    // 0x371f1c: 0x36318001  ori         $s1, $s1, 0x8001
    ctx->pc = 0x371f1cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32769);
    // 0x371f20: 0x358c0008  ori         $t4, $t4, 0x8
    ctx->pc = 0x371f20u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)8);
    // 0x371f24: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x371f24u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x371f28: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x371f28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x371f2c: 0x94d83  sra         $t1, $t1, 22
    ctx->pc = 0x371f2cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 22));
    // 0x371f30: 0x3c0f3f80  lui         $t7, 0x3F80
    ctx->pc = 0x371f30u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16256 << 16));
    // 0x371f34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x371f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x371f38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x371f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x371f3c: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x371f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x371f40: 0x3c0d3f80  lui         $t5, 0x3F80
    ctx->pc = 0x371f40u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)16256 << 16));
    // 0x371f44: 0x8c670038  lw          $a3, 0x38($v1)
    ctx->pc = 0x371f44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x371f48: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x371f48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371f4c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x371f4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371f50: 0x8d050034  lw          $a1, 0x34($t0)
    ctx->pc = 0x371f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x371f54: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x371f54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x371f58: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x371f58u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x371f5c: 0xfceb0010  sd          $t3, 0x10($a3)
    ctx->pc = 0x371f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 11));
    // 0x371f60: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x371f60u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371f64: 0xfce00000  sd          $zero, 0x0($a3)
    ctx->pc = 0x371f64u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
    // 0x371f68: 0x35ad0200  ori         $t5, $t5, 0x200
    ctx->pc = 0x371f68u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)512);
    // 0x371f6c: 0x9482004e  lhu         $v0, 0x4E($a0)
    ctx->pc = 0x371f6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 78)));
    // 0x371f70: 0x8483004c  lh          $v1, 0x4C($a0)
    ctx->pc = 0x371f70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x371f74: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x371f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x371f78: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x371f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x371f7c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x371f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x371f80: 0x6e1825  or          $v1, $v1, $t6
    ctx->pc = 0x371f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 14));
    // 0x371f84: 0xfce30020  sd          $v1, 0x20($a3)
    ctx->pc = 0x371f84u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 32), GPR_U64(ctx, 3));
    // 0x371f88: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x371f88u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371f8c: 0x1d85825  or          $t3, $t6, $t8
    ctx->pc = 0x371f8cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) | GPR_U64(ctx, 24));
    // 0x371f90: 0x94820050  lhu         $v0, 0x50($a0)
    ctx->pc = 0x371f90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x371f94: 0x316b0007  andi        $t3, $t3, 0x7
    ctx->pc = 0x371f94u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)7);
    // 0x371f98: 0x8483004e  lh          $v1, 0x4E($a0)
    ctx->pc = 0x371f98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 78)));
    // 0x371f9c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x371f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x371fa0: 0x21583  sra         $v0, $v0, 22
    ctx->pc = 0x371fa0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x371fa4: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x371fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x371fa8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x371fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x371fac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x371facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x371fb0: 0xfce20030  sd          $v0, 0x30($a3)
    ctx->pc = 0x371fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 48), GPR_U64(ctx, 2));
    // 0x371fb4: 0x9483004e  lhu         $v1, 0x4E($a0)
    ctx->pc = 0x371fb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 78)));
    // 0x371fb8: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x371fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
    // 0x371fbc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x371fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x371fc0: 0xfce30040  sd          $v1, 0x40($a3)
    ctx->pc = 0x371fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 64), GPR_U64(ctx, 3));
    // 0x371fc4: 0x84820050  lh          $v0, 0x50($a0)
    ctx->pc = 0x371fc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x371fc8: 0x84830052  lh          $v1, 0x52($a0)
    ctx->pc = 0x371fc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 82)));
    // 0x371fcc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x371fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x371fd0: 0xfcf00060  sd          $s0, 0x60($a3)
    ctx->pc = 0x371fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 96), GPR_U64(ctx, 16));
    // 0x371fd4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x371fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x371fd8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x371fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x371fdc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x371fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x371fe0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x371fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x371fe4: 0xfce20050  sd          $v0, 0x50($a3)
    ctx->pc = 0x371fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 80), GPR_U64(ctx, 2));
    // 0x371fe8: 0x9483005a  lhu         $v1, 0x5A($a0)
    ctx->pc = 0x371fe8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 90)));
    // 0x371fec: 0x84850040  lh          $a1, 0x40($a0)
    ctx->pc = 0x371fecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x371ff0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x371ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x371ff4: 0x84820058  lh          $v0, 0x58($a0)
    ctx->pc = 0x371ff4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x371ff8: 0x31d83  sra         $v1, $v1, 22
    ctx->pc = 0x371ff8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 22));
    // 0x371ffc: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x371ffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x372000: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x372000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x372004: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x372004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x372008: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x372008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x37200c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x37200cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x372010: 0xb32825  or          $a1, $a1, $s3
    ctx->pc = 0x372010u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 19));
    // 0x372014: 0xfce50070  sd          $a1, 0x70($a3)
    ctx->pc = 0x372014u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 112), GPR_U64(ctx, 5));
    // 0x372018: 0x9082007b  lbu         $v0, 0x7B($a0)
    ctx->pc = 0x372018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 123)));
    // 0x37201c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x37201cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x372020: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x372020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x372024: 0xfce200b0  sd          $v0, 0xB0($a3)
    ctx->pc = 0x372024u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 176), GPR_U64(ctx, 2));
    // 0x372028: 0xfcd10000  sd          $s1, 0x0($a2)
    ctx->pc = 0x372028u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 17));
    // 0x37202c: 0xacca001c  sw          $t2, 0x1C($a2)
    ctx->pc = 0x37202cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 10));
    // 0x372030: 0xaccc0020  sw          $t4, 0x20($a2)
    ctx->pc = 0x372030u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 12));
    // 0x372034: 0xacd20024  sw          $s2, 0x24($a2)
    ctx->pc = 0x372034u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 18));
    // 0x372038: 0xacc9000c  sw          $t1, 0xC($a2)
    ctx->pc = 0x372038u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 9));
    // 0x37203c: 0xacca0010  sw          $t2, 0x10($a2)
    ctx->pc = 0x37203cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 10));
    // 0x372040: 0xacca0014  sw          $t2, 0x14($a2)
    ctx->pc = 0x372040u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 10));
    // 0x372044: 0xacca0018  sw          $t2, 0x18($a2)
    ctx->pc = 0x372044u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 10));
    // 0x372048: 0xaccf0030  sw          $t7, 0x30($a2)
    ctx->pc = 0x372048u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 15));
    // 0x37204c: 0xacc00034  sw          $zero, 0x34($a2)
    ctx->pc = 0x37204cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 0));
    // 0x372050: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x372050u;
    {
        const bool branch_taken_0x372050 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x372050) {
            ctx->pc = 0x372054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372050u;
            // 0x372054: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x372058u;
            goto label_372058;
        }
    }
    ctx->pc = 0x372058u;
label_372058:
    // 0x372058: 0x8482005a  lh          $v0, 0x5A($a0)
    ctx->pc = 0x372058u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 90)));
    // 0x37205c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x37205cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x372060: 0x48001a  div         $zero, $v0, $t0
    ctx->pc = 0x372060u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x372064: 0x1012  mflo        $v0
    ctx->pc = 0x372064u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x372068: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x372068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x37206c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x37206cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372070: 0x6f1821  addu        $v1, $v1, $t7
    ctx->pc = 0x372070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x372074: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x372074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x372078: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x372078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37207c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x37207cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x372080: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x372080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x372084: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x372084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372088: 0xacc30040  sw          $v1, 0x40($a2)
    ctx->pc = 0x372088u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 3));
    // 0x37208c: 0x8482005c  lh          $v0, 0x5C($a0)
    ctx->pc = 0x37208cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x372090: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x372090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x372094: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x372094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x372098: 0xacc20044  sw          $v0, 0x44($a2)
    ctx->pc = 0x372098u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 2));
    // 0x37209c: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x37209cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x3720a0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3720a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3720a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3720a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3720a8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3720a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3720ac: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3720acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3720b0: 0xacc30050  sw          $v1, 0x50($a2)
    ctx->pc = 0x3720b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 3));
    // 0x3720b4: 0x84820052  lh          $v0, 0x52($a0)
    ctx->pc = 0x3720b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 82)));
    // 0x3720b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3720b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3720bc: 0x11600017  beqz        $t3, . + 4 + (0x17 << 2)
    ctx->pc = 0x3720BCu;
    {
        const bool branch_taken_0x3720bc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3720C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3720BCu;
        // 0x3720c0: 0xacc20054  sw          $v0, 0x54($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3720bc) {
            ctx->pc = 0x37211Cu;
            goto label_37211c;
        }
    }
    ctx->pc = 0x3720C4u;
    // 0x3720c4: 0x25c20060  addiu       $v0, $t6, 0x60
    ctx->pc = 0x3720c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 96));
label_3720c8:
    // 0x3720c8: 0x69c30007  ldl         $v1, 0x7($t6)
    ctx->pc = 0x3720c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3720cc: 0x6dc30000  ldr         $v1, 0x0($t6)
    ctx->pc = 0x3720ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3720d0: 0x69c4000f  ldl         $a0, 0xF($t6)
    ctx->pc = 0x3720d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3720d4: 0x6dc40008  ldr         $a0, 0x8($t6)
    ctx->pc = 0x3720d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3720d8: 0x69c50017  ldl         $a1, 0x17($t6)
    ctx->pc = 0x3720d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3720dc: 0x6dc50010  ldr         $a1, 0x10($t6)
    ctx->pc = 0x3720dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3720e0: 0x69c6001f  ldl         $a2, 0x1F($t6)
    ctx->pc = 0x3720e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3720e4: 0x6dc60018  ldr         $a2, 0x18($t6)
    ctx->pc = 0x3720e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3720e8: 0xb3030007  sdl         $v1, 0x7($t8)
    ctx->pc = 0x3720e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3720ec: 0xb7030000  sdr         $v1, 0x0($t8)
    ctx->pc = 0x3720ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3720f0: 0xb304000f  sdl         $a0, 0xF($t8)
    ctx->pc = 0x3720f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3720f4: 0xb7040008  sdr         $a0, 0x8($t8)
    ctx->pc = 0x3720f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3720f8: 0xb3050017  sdl         $a1, 0x17($t8)
    ctx->pc = 0x3720f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3720fc: 0xb7050010  sdr         $a1, 0x10($t8)
    ctx->pc = 0x3720fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x372100: 0xb306001f  sdl         $a2, 0x1F($t8)
    ctx->pc = 0x372100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x372104: 0xb7060018  sdr         $a2, 0x18($t8)
    ctx->pc = 0x372104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x372108: 0x25ce0020  addiu       $t6, $t6, 0x20
    ctx->pc = 0x372108u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 32));
    // 0x37210c: 0x15c2ffee  bne         $t6, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x37210Cu;
    {
        const bool branch_taken_0x37210c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 2));
        ctx->pc = 0x372110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37210Cu;
        // 0x372110: 0x27180020  addiu       $t8, $t8, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37210c) {
            ctx->pc = 0x3720C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3720c8;
        }
    }
    ctx->pc = 0x372114u;
    // 0x372114: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x372114u;
    {
        const bool branch_taken_0x372114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372114u;
        // 0x372118: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372114) {
            ctx->pc = 0x372150u;
            goto label_372150;
        }
    }
    ctx->pc = 0x37211Cu;
label_37211c:
    // 0x37211c: 0x25c20060  addiu       $v0, $t6, 0x60
    ctx->pc = 0x37211cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 96));
label_372120:
    // 0x372120: 0xddc30000  ld          $v1, 0x0($t6)
    ctx->pc = 0x372120u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x372124: 0xddc40008  ld          $a0, 0x8($t6)
    ctx->pc = 0x372124u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x372128: 0xddc50010  ld          $a1, 0x10($t6)
    ctx->pc = 0x372128u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x37212c: 0xddc60018  ld          $a2, 0x18($t6)
    ctx->pc = 0x37212cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x372130: 0xff030000  sd          $v1, 0x0($t8)
    ctx->pc = 0x372130u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 3));
    // 0x372134: 0xff040008  sd          $a0, 0x8($t8)
    ctx->pc = 0x372134u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 4));
    // 0x372138: 0xff050010  sd          $a1, 0x10($t8)
    ctx->pc = 0x372138u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 16), GPR_U64(ctx, 5));
    // 0x37213c: 0xff060018  sd          $a2, 0x18($t8)
    ctx->pc = 0x37213cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 24), GPR_U64(ctx, 6));
    // 0x372140: 0x25ce0020  addiu       $t6, $t6, 0x20
    ctx->pc = 0x372140u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 32));
    // 0x372144: 0x15c2fff6  bne         $t6, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x372144u;
    {
        const bool branch_taken_0x372144 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 2));
        ctx->pc = 0x372148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372144u;
        // 0x372148: 0x27180020  addiu       $t8, $t8, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372144) {
            ctx->pc = 0x372120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372120;
        }
    }
    ctx->pc = 0x37214Cu;
    // 0x37214c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x37214cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_372150:
    // 0x372150: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x372150u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x372154: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x372154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x372158: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x372158u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37215c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x37215cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x372160: 0x3e00008  jr          $ra
    ctx->pc = 0x372160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372160u;
        // 0x372164: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372168u;
}
