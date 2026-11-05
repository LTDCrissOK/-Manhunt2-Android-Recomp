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

// Function: sub_003B70E0
// Address: 0x3b70e0 - 0x3b72d0
void sub_003B70E0_0x3b70e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B70E0_0x3b70e0");
#endif

    switch (ctx->pc) {
        case 0x3b7100u: goto label_3b7100;
        default: break;
    }

    ctx->pc = 0x3b70e0u;

    // 0x3b70e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b70e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b70e4: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x3b70e4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b70e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b70e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b70ec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3b70ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b70f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b70f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b70f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b70f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b70f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b70f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b70fc: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x3b70fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3b7100:
    // 0x3b7100: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b7100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7104: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b7104u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7108: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b7108u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b710c: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x3b710cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3b7110: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7110u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7114: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b7114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b7118: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7118u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b711c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b711cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7120: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b7120u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7124: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7124u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7128: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x3b7128u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x3b712c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b712cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7130: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x3b7130u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7134: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7134u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7138: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b7138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b713c: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x3b713cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b7140: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b7140u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7144: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7144u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7148: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7148u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b714c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b714cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7150: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x3b7150u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b7154: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b7154u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7158: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b7158u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b715c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b715cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7160: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b7160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b7164: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b7164u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b7168: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x3b7168u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b716c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b716cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7170: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7170u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7174: 0x2442f840  addiu       $v0, $v0, -0x7C0
    ctx->pc = 0x3b7174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965312));
    // 0x3b7178: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b7178u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b717c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b717cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7180: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x3b7180u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7184: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7184u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7188: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b7188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b718c: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x3b718cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x3b7190: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b7190u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b7194: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x3b7194u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7198: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7198u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b719c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b719cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b71a0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b71a0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b71a4: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x3b71a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x3b71a8: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x3b71a8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x3b71ac: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x3b71acu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b71b0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b71b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b71b4: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b71b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b71b8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b71b8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b71bc: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x3b71bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x3b71c0: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b71c0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b71c4: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x3b71c4u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b71c8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b71c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b71cc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b71ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b71d0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b71d0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b71d4: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x3b71d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x3b71d8: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b71d8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b71dc: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x3b71dcu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b71e0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b71e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b71e4: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b71e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b71e8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b71e8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b71ec: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x3b71ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x3b71f0: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x3b71f0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b71f4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b71f4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b71f8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b71f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b71fc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b71fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7200: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x3b7200u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x3b7204: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x3b7204u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x3b7208: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b7208u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b720c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b720cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7210: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b7210u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7214: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b7214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b7218: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x3b7218u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x3b721c: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x3b721cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x3b7220: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b7220u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7224: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7224u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7228: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7228u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b722c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b722cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7230: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x3b7230u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x3b7234: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b7234u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b7238: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b7238u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b723c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b723cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7240: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b7240u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7244: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x3b7244u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x3b7248: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b7248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b724c: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x3b724cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7250: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x3b7250u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3b7254: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x3b7254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x3b7258: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x3b7258u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x3b725c: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x3b725cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b7260: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x3b7260u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x3b7264: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x3b7264u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b7268: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x3b7268u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x3b726c: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x3b726cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x3b7270: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b7270u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b7274: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b7274u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b7278: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b7278u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b727c: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x3b727cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x3b7280: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x3b7280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x3b7284: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B7284u;
    {
        const bool branch_taken_0x3b7284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7284u;
        // 0x3b7288: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7284) {
            ctx->pc = 0x3B7298u;
            goto label_3b7298;
        }
    }
    ctx->pc = 0x3B728Cu;
    // 0x3b728c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B728Cu;
    {
        const bool branch_taken_0x3b728c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B728Cu;
        // 0x3b7290: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b728c) {
            ctx->pc = 0x3B72ACu;
            goto label_3b72ac;
        }
    }
    ctx->pc = 0x3B7294u;
    // 0x3b7294: 0x0  nop
    ctx->pc = 0x3b7294u;
    // NOP
label_3b7298:
    // 0x3b7298: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x3b7298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x3b729c: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x3b729cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b72a0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B72A0u;
    {
        const bool branch_taken_0x3b72a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b72a0) {
            ctx->pc = 0x3B72A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B72A0u;
            // 0x3b72a4: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B72ACu;
            goto label_3b72ac;
        }
    }
    ctx->pc = 0x3B72A8u;
    // 0x3b72a8: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x3b72a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_3b72ac:
    // 0x3b72ac: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3b72acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b72b0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3b72b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3b72b4: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x3B72B4u;
    {
        const bool branch_taken_0x3b72b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B72B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B72B4u;
        // 0x3b72b8: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b72b4) {
            ctx->pc = 0x3B7100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b7100;
        }
    }
    ctx->pc = 0x3B72BCu;
    // 0x3b72bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b72bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b72c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b72c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b72c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b72c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b72c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B72C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B72CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B72C8u;
        // 0x3b72cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B72C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B72D0u;
}
