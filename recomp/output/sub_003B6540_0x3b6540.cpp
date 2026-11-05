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

// Function: sub_003B6540
// Address: 0x3b6540 - 0x3b6730
void sub_003B6540_0x3b6540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B6540_0x3b6540");
#endif

    switch (ctx->pc) {
        case 0x3b6560u: goto label_3b6560;
        default: break;
    }

    ctx->pc = 0x3b6540u;

    // 0x3b6540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b6540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b6544: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x3b6544u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6548: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b6548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b654c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3b654cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6550: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b6550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b6554: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b6554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6558: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b6558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b655c: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x3b655cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3b6560:
    // 0x3b6560: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b6560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6564: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b6564u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6568: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6568u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b656c: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x3b656cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3b6570: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6570u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6574: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6578: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6578u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b657c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b657cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6580: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b6580u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6584: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6584u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6588: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x3b6588u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x3b658c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b658cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6590: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x3b6590u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6594: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6594u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6598: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b659c: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x3b659cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b65a0: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b65a0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b65a4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b65a4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b65a8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b65a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b65ac: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b65acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b65b0: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x3b65b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b65b4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b65b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b65b8: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b65b8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b65bc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b65bcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b65c0: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b65c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b65c4: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b65c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b65c8: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x3b65c8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b65cc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b65ccu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b65d0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b65d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b65d4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b65d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b65d8: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b65d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b65dc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b65dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b65e0: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x3b65e0u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b65e4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b65e4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b65e8: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b65e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b65ec: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x3b65ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x3b65f0: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b65f0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b65f4: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x3b65f4u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b65f8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b65f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b65fc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b65fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6600: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6600u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6604: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x3b6604u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x3b6608: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x3b6608u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x3b660c: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x3b660cu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6610: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6610u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6614: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6618: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6618u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b661c: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x3b661cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x3b6620: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b6620u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b6624: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x3b6624u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6628: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6628u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b662c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b662cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6630: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6630u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6634: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x3b6634u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x3b6638: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b6638u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b663c: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x3b663cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6640: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6640u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6644: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6648: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6648u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b664c: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x3b664cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x3b6650: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x3b6650u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6654: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6654u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6658: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6658u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b665c: 0x2442f840  addiu       $v0, $v0, -0x7C0
    ctx->pc = 0x3b665cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965312));
    // 0x3b6660: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x3b6660u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x3b6664: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x3b6664u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x3b6668: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b6668u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b666c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b666cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6670: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6670u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6674: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6678: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x3b6678u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x3b667c: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x3b667cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x3b6680: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b6680u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6684: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6684u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6688: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6688u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b668c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b668cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6690: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x3b6690u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x3b6694: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b6694u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b6698: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b6698u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b669c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b669cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b66a0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b66a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b66a4: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x3b66a4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x3b66a8: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b66a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b66ac: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x3b66acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b66b0: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x3b66b0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3b66b4: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x3b66b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x3b66b8: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x3b66b8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x3b66bc: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x3b66bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b66c0: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x3b66c0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x3b66c4: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x3b66c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b66c8: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x3b66c8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x3b66cc: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x3b66ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x3b66d0: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b66d0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b66d4: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b66d4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b66d8: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b66d8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b66dc: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x3b66dcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x3b66e0: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x3b66e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x3b66e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B66E4u;
    {
        const bool branch_taken_0x3b66e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B66E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B66E4u;
        // 0x3b66e8: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b66e4) {
            ctx->pc = 0x3B66F8u;
            goto label_3b66f8;
        }
    }
    ctx->pc = 0x3B66ECu;
    // 0x3b66ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B66ECu;
    {
        const bool branch_taken_0x3b66ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B66F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B66ECu;
        // 0x3b66f0: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b66ec) {
            ctx->pc = 0x3B670Cu;
            goto label_3b670c;
        }
    }
    ctx->pc = 0x3B66F4u;
    // 0x3b66f4: 0x0  nop
    ctx->pc = 0x3b66f4u;
    // NOP
label_3b66f8:
    // 0x3b66f8: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x3b66f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x3b66fc: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x3b66fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b6700: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B6700u;
    {
        const bool branch_taken_0x3b6700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6700) {
            ctx->pc = 0x3B6704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6700u;
            // 0x3b6704: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B670Cu;
            goto label_3b670c;
        }
    }
    ctx->pc = 0x3B6708u;
    // 0x3b6708: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x3b6708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_3b670c:
    // 0x3b670c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3b670cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b6710: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3b6710u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3b6714: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x3B6714u;
    {
        const bool branch_taken_0x3b6714 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6714u;
        // 0x3b6718: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6714) {
            ctx->pc = 0x3B6560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6560;
        }
    }
    ctx->pc = 0x3B671Cu;
    // 0x3b671c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b671cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b6720: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b6720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b6724: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b6724u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b6728: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6728u;
        // 0x3b672c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6730u;
}
