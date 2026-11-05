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

// Function: sub_003B74C0
// Address: 0x3b74c0 - 0x3b76b0
void sub_003B74C0_0x3b74c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B74C0_0x3b74c0");
#endif

    switch (ctx->pc) {
        case 0x3b74e0u: goto label_3b74e0;
        default: break;
    }

    ctx->pc = 0x3b74c0u;

    // 0x3b74c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b74c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b74c4: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x3b74c4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b74c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b74c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b74cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3b74ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b74d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b74d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b74d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b74d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b74d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b74d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b74dc: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x3b74dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3b74e0:
    // 0x3b74e0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b74e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b74e4: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b74e4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b74e8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b74e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b74ec: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x3b74ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3b74f0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b74f0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b74f4: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b74f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b74f8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b74f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b74fc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b74fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7500: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b7500u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7504: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7504u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7508: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x3b7508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x3b750c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b750cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7510: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x3b7510u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7514: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7514u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7518: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b7518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b751c: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x3b751cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b7520: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b7520u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7524: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7524u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7528: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7528u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b752c: 0x2442f840  addiu       $v0, $v0, -0x7C0
    ctx->pc = 0x3b752cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965312));
    // 0x3b7530: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x3b7530u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b7534: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b7534u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7538: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b7538u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b753c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b753cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7540: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b7540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b7544: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b7544u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b7548: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x3b7548u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b754c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b754cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7550: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7550u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7554: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b7554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7558: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b7558u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b755c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b755cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7560: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x3b7560u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7564: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7564u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7568: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b7568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b756c: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x3b756cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x3b7570: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b7570u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b7574: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x3b7574u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7578: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7578u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b757c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b757cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7580: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7580u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7584: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x3b7584u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x3b7588: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x3b7588u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x3b758c: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x3b758cu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7590: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b7590u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7594: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b7594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b7598: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7598u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b759c: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x3b759cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x3b75a0: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b75a0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b75a4: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x3b75a4u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b75a8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b75a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b75ac: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b75acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b75b0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b75b0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b75b4: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x3b75b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x3b75b8: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b75b8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b75bc: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x3b75bcu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b75c0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b75c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b75c4: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b75c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b75c8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b75c8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b75cc: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x3b75ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x3b75d0: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x3b75d0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b75d4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b75d4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b75d8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b75d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b75dc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b75dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b75e0: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x3b75e0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x3b75e4: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x3b75e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x3b75e8: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b75e8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b75ec: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b75ecu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b75f0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b75f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b75f4: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b75f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b75f8: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x3b75f8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x3b75fc: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x3b75fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x3b7600: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b7600u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7604: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7604u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7608: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7608u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b760c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b760cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7610: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x3b7610u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x3b7614: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b7614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b7618: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b7618u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b761c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b761cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7620: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b7620u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7624: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x3b7624u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x3b7628: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b7628u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b762c: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x3b762cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7630: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x3b7630u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3b7634: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x3b7634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x3b7638: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x3b7638u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x3b763c: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x3b763cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b7640: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x3b7640u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x3b7644: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x3b7644u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b7648: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x3b7648u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x3b764c: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x3b764cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x3b7650: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b7650u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b7654: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b7654u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b7658: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b7658u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b765c: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x3b765cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x3b7660: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x3b7660u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x3b7664: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B7664u;
    {
        const bool branch_taken_0x3b7664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7664u;
        // 0x3b7668: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7664) {
            ctx->pc = 0x3B7678u;
            goto label_3b7678;
        }
    }
    ctx->pc = 0x3B766Cu;
    // 0x3b766c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B766Cu;
    {
        const bool branch_taken_0x3b766c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B766Cu;
        // 0x3b7670: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b766c) {
            ctx->pc = 0x3B768Cu;
            goto label_3b768c;
        }
    }
    ctx->pc = 0x3B7674u;
    // 0x3b7674: 0x0  nop
    ctx->pc = 0x3b7674u;
    // NOP
label_3b7678:
    // 0x3b7678: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x3b7678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x3b767c: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x3b767cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b7680: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B7680u;
    {
        const bool branch_taken_0x3b7680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7680) {
            ctx->pc = 0x3B7684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B7680u;
            // 0x3b7684: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B768Cu;
            goto label_3b768c;
        }
    }
    ctx->pc = 0x3B7688u;
    // 0x3b7688: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x3b7688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_3b768c:
    // 0x3b768c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3b768cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b7690: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3b7690u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3b7694: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x3B7694u;
    {
        const bool branch_taken_0x3b7694 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B7698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7694u;
        // 0x3b7698: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7694) {
            ctx->pc = 0x3B74E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b74e0;
        }
    }
    ctx->pc = 0x3B769Cu;
    // 0x3b769c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b769cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b76a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b76a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b76a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b76a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b76a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B76A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B76ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B76A8u;
        // 0x3b76ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B76A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B76B0u;
}
