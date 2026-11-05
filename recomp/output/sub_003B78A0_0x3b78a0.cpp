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

// Function: sub_003B78A0
// Address: 0x3b78a0 - 0x3b7a90
void sub_003B78A0_0x3b78a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B78A0_0x3b78a0");
#endif

    switch (ctx->pc) {
        case 0x3b78c0u: goto label_3b78c0;
        default: break;
    }

    ctx->pc = 0x3b78a0u;

    // 0x3b78a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b78a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b78a4: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x3b78a4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b78a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b78a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b78ac: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3b78acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b78b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b78b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b78b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b78b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b78b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b78b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b78bc: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x3b78bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3b78c0:
    // 0x3b78c0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b78c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b78c4: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b78c4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b78c8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b78c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b78cc: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x3b78ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3b78d0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b78d0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b78d4: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b78d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b78d8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b78d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b78dc: 0x2442f840  addiu       $v0, $v0, -0x7C0
    ctx->pc = 0x3b78dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965312));
    // 0x3b78e0: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b78e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b78e4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b78e4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b78e8: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x3b78e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x3b78ec: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b78ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b78f0: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x3b78f0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b78f4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b78f4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b78f8: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b78f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b78fc: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x3b78fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b7900: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b7900u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7904: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7904u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7908: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7908u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b790c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b790cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7910: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x3b7910u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b7914: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b7914u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7918: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b7918u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b791c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b791cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7920: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b7920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b7924: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b7924u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b7928: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x3b7928u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b792c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b792cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7930: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7930u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7934: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b7934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7938: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b7938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b793c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b793cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7940: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x3b7940u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7944: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7944u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7948: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b7948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b794c: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x3b794cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x3b7950: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b7950u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b7954: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x3b7954u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7958: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7958u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b795c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b795cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7960: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7960u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7964: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x3b7964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x3b7968: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x3b7968u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x3b796c: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x3b796cu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7970: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b7970u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7974: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b7974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b7978: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7978u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b797c: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x3b797cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x3b7980: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b7980u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b7984: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x3b7984u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7988: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7988u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b798c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b798cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7990: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7990u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7994: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x3b7994u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x3b7998: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b7998u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b799c: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x3b799cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b79a0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b79a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b79a4: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b79a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b79a8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b79a8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b79ac: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x3b79acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x3b79b0: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x3b79b0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b79b4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b79b4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b79b8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b79b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b79bc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b79bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b79c0: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x3b79c0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x3b79c4: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x3b79c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x3b79c8: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b79c8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b79cc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b79ccu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b79d0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b79d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b79d4: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b79d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b79d8: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x3b79d8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x3b79dc: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x3b79dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x3b79e0: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b79e0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b79e4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b79e4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b79e8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b79e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b79ec: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b79ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b79f0: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x3b79f0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x3b79f4: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b79f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b79f8: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b79f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b79fc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b79fcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7a00: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b7a00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7a04: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x3b7a04u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x3b7a08: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b7a08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b7a0c: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x3b7a0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7a10: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x3b7a10u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3b7a14: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x3b7a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x3b7a18: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x3b7a18u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x3b7a1c: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x3b7a1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b7a20: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x3b7a20u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x3b7a24: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x3b7a24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b7a28: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x3b7a28u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x3b7a2c: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x3b7a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x3b7a30: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b7a30u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b7a34: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b7a34u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b7a38: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b7a38u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b7a3c: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x3b7a3cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x3b7a40: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x3b7a40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x3b7a44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B7A44u;
    {
        const bool branch_taken_0x3b7a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A44u;
        // 0x3b7a48: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7a44) {
            ctx->pc = 0x3B7A58u;
            goto label_3b7a58;
        }
    }
    ctx->pc = 0x3B7A4Cu;
    // 0x3b7a4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B7A4Cu;
    {
        const bool branch_taken_0x3b7a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A4Cu;
        // 0x3b7a50: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7a4c) {
            ctx->pc = 0x3B7A6Cu;
            goto label_3b7a6c;
        }
    }
    ctx->pc = 0x3B7A54u;
    // 0x3b7a54: 0x0  nop
    ctx->pc = 0x3b7a54u;
    // NOP
label_3b7a58:
    // 0x3b7a58: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x3b7a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x3b7a5c: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x3b7a5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b7a60: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B7A60u;
    {
        const bool branch_taken_0x3b7a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7a60) {
            ctx->pc = 0x3B7A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B7A60u;
            // 0x3b7a64: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B7A6Cu;
            goto label_3b7a6c;
        }
    }
    ctx->pc = 0x3B7A68u;
    // 0x3b7a68: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x3b7a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_3b7a6c:
    // 0x3b7a6c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3b7a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b7a70: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3b7a70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3b7a74: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x3B7A74u;
    {
        const bool branch_taken_0x3b7a74 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B7A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A74u;
        // 0x3b7a78: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7a74) {
            ctx->pc = 0x3B78C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b78c0;
        }
    }
    ctx->pc = 0x3B7A7Cu;
    // 0x3b7a7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b7a7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b7a80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b7a80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b7a84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b7a84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b7a88: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A88u;
        // 0x3b7a8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7A90u;
}
