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

// Function: sub_003B6920
// Address: 0x3b6920 - 0x3b6b10
void sub_003B6920_0x3b6920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B6920_0x3b6920");
#endif

    switch (ctx->pc) {
        case 0x3b6940u: goto label_3b6940;
        default: break;
    }

    ctx->pc = 0x3b6920u;

    // 0x3b6920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b6920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b6924: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x3b6924u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6928: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b6928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b692c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3b692cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6930: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b6930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b6934: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b6934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6938: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b6938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b693c: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x3b693cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3b6940:
    // 0x3b6940: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b6940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6944: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b6944u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6948: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6948u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b694c: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x3b694cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3b6950: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6950u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6954: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6958: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6958u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b695c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b695cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6960: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b6960u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6964: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6964u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6968: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x3b6968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x3b696c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b696cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6970: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x3b6970u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6974: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6974u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6978: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b697c: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x3b697cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b6980: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b6980u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6984: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6984u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6988: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6988u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b698c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b698cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6990: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x3b6990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b6994: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6994u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6998: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b6998u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b699c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b699cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b69a0: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b69a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b69a4: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b69a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b69a8: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x3b69a8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b69ac: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b69acu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b69b0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b69b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b69b4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b69b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b69b8: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b69b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b69bc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b69bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b69c0: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x3b69c0u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b69c4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b69c4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b69c8: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b69c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b69cc: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x3b69ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x3b69d0: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b69d0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b69d4: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x3b69d4u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b69d8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b69d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b69dc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b69dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b69e0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b69e0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b69e4: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x3b69e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x3b69e8: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x3b69e8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x3b69ec: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x3b69ecu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b69f0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b69f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b69f4: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b69f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b69f8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b69f8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b69fc: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x3b69fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x3b6a00: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b6a00u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b6a04: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x3b6a04u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6a08: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6a08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6a0c: 0x2442f840  addiu       $v0, $v0, -0x7C0
    ctx->pc = 0x3b6a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965312));
    // 0x3b6a10: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6a10u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6a14: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x3b6a14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x3b6a18: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b6a18u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b6a1c: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x3b6a1cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6a20: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6a20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6a24: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6a28: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6a28u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6a2c: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x3b6a2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x3b6a30: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x3b6a30u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6a34: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6a34u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6a38: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6a38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6a3c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b6a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6a40: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x3b6a40u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x3b6a44: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x3b6a44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x3b6a48: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b6a48u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6a4c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6a4cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6a50: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6a50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6a54: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6a58: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x3b6a58u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x3b6a5c: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x3b6a5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x3b6a60: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b6a60u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6a64: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6a64u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6a68: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6a68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6a6c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b6a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6a70: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x3b6a70u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x3b6a74: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b6a74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b6a78: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b6a78u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6a7c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6a7cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6a80: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6a80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6a84: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x3b6a84u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x3b6a88: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b6a88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b6a8c: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x3b6a8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6a90: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x3b6a90u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3b6a94: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x3b6a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x3b6a98: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x3b6a98u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x3b6a9c: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x3b6a9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b6aa0: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x3b6aa0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x3b6aa4: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x3b6aa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b6aa8: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x3b6aa8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x3b6aac: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x3b6aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x3b6ab0: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b6ab0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b6ab4: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b6ab4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b6ab8: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b6ab8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b6abc: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x3b6abcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x3b6ac0: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x3b6ac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x3b6ac4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B6AC4u;
    {
        const bool branch_taken_0x3b6ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6AC4u;
        // 0x3b6ac8: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6ac4) {
            ctx->pc = 0x3B6AD8u;
            goto label_3b6ad8;
        }
    }
    ctx->pc = 0x3B6ACCu;
    // 0x3b6acc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B6ACCu;
    {
        const bool branch_taken_0x3b6acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6ACCu;
        // 0x3b6ad0: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6acc) {
            ctx->pc = 0x3B6AECu;
            goto label_3b6aec;
        }
    }
    ctx->pc = 0x3B6AD4u;
    // 0x3b6ad4: 0x0  nop
    ctx->pc = 0x3b6ad4u;
    // NOP
label_3b6ad8:
    // 0x3b6ad8: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x3b6ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x3b6adc: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x3b6adcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b6ae0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B6AE0u;
    {
        const bool branch_taken_0x3b6ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6ae0) {
            ctx->pc = 0x3B6AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6AE0u;
            // 0x3b6ae4: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6AECu;
            goto label_3b6aec;
        }
    }
    ctx->pc = 0x3B6AE8u;
    // 0x3b6ae8: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x3b6ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_3b6aec:
    // 0x3b6aec: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3b6aecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b6af0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3b6af0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3b6af4: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x3B6AF4u;
    {
        const bool branch_taken_0x3b6af4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6AF4u;
        // 0x3b6af8: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6af4) {
            ctx->pc = 0x3B6940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6940;
        }
    }
    ctx->pc = 0x3B6AFCu;
    // 0x3b6afc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b6afcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b6b00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b6b00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b6b04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b6b04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b6b08: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6B08u;
        // 0x3b6b0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6B10u;
}
