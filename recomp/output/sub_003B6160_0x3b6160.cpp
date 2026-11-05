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

// Function: sub_003B6160
// Address: 0x3b6160 - 0x3b6350
void sub_003B6160_0x3b6160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B6160_0x3b6160");
#endif

    switch (ctx->pc) {
        case 0x3b6180u: goto label_3b6180;
        default: break;
    }

    ctx->pc = 0x3b6160u;

    // 0x3b6160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b6160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b6164: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x3b6164u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6168: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b6168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b616c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3b616cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6170: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b6170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b6174: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b6174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6178: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b6178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b617c: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x3b617cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3b6180:
    // 0x3b6180: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b6180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6184: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b6184u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6188: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6188u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b618c: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x3b618cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3b6190: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6190u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6194: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6198: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6198u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b619c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b619cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b61a0: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b61a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b61a4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b61a4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b61a8: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x3b61a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x3b61ac: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b61acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b61b0: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x3b61b0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b61b4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b61b4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b61b8: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b61b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b61bc: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x3b61bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b61c0: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b61c0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b61c4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b61c4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b61c8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b61c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b61cc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b61ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b61d0: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x3b61d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b61d4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b61d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b61d8: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b61d8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b61dc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b61dcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b61e0: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b61e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b61e4: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b61e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b61e8: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x3b61e8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b61ec: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b61ecu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b61f0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b61f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b61f4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b61f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b61f8: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b61f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b61fc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b61fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6200: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x3b6200u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6204: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6204u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6208: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b620c: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x3b620cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x3b6210: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b6210u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b6214: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x3b6214u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6218: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6218u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b621c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b621cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6220: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6220u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6224: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x3b6224u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x3b6228: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x3b6228u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x3b622c: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x3b622cu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6230: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6230u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6234: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6238: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6238u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b623c: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x3b623cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x3b6240: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b6240u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b6244: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x3b6244u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6248: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6248u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b624c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b624cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6250: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6250u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6254: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x3b6254u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x3b6258: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b6258u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b625c: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x3b625cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6260: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6260u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6264: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6268: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6268u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b626c: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x3b626cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x3b6270: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x3b6270u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6274: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6274u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6278: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6278u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b627c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b627cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6280: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x3b6280u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x3b6284: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x3b6284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x3b6288: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b6288u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b628c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b628cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6290: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6290u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6294: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6298: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x3b6298u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x3b629c: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x3b629cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x3b62a0: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b62a0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b62a4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b62a4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b62a8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b62a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b62ac: 0x2442f840  addiu       $v0, $v0, -0x7C0
    ctx->pc = 0x3b62acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965312));
    // 0x3b62b0: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x3b62b0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x3b62b4: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b62b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b62b8: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b62b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b62bc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b62bcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b62c0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b62c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b62c4: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x3b62c4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x3b62c8: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b62c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b62cc: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x3b62ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b62d0: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x3b62d0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3b62d4: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x3b62d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x3b62d8: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x3b62d8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x3b62dc: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x3b62dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b62e0: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x3b62e0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x3b62e4: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x3b62e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b62e8: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x3b62e8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x3b62ec: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x3b62ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x3b62f0: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b62f0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b62f4: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b62f4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b62f8: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b62f8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b62fc: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x3b62fcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x3b6300: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x3b6300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x3b6304: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B6304u;
    {
        const bool branch_taken_0x3b6304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6304u;
        // 0x3b6308: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6304) {
            ctx->pc = 0x3B6318u;
            goto label_3b6318;
        }
    }
    ctx->pc = 0x3B630Cu;
    // 0x3b630c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B630Cu;
    {
        const bool branch_taken_0x3b630c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B630Cu;
        // 0x3b6310: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b630c) {
            ctx->pc = 0x3B632Cu;
            goto label_3b632c;
        }
    }
    ctx->pc = 0x3B6314u;
    // 0x3b6314: 0x0  nop
    ctx->pc = 0x3b6314u;
    // NOP
label_3b6318:
    // 0x3b6318: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x3b6318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x3b631c: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x3b631cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b6320: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B6320u;
    {
        const bool branch_taken_0x3b6320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6320) {
            ctx->pc = 0x3B6324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6320u;
            // 0x3b6324: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B632Cu;
            goto label_3b632c;
        }
    }
    ctx->pc = 0x3B6328u;
    // 0x3b6328: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x3b6328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_3b632c:
    // 0x3b632c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3b632cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b6330: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3b6330u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3b6334: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x3B6334u;
    {
        const bool branch_taken_0x3b6334 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6334u;
        // 0x3b6338: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6334) {
            ctx->pc = 0x3B6180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6180;
        }
    }
    ctx->pc = 0x3B633Cu;
    // 0x3b633c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b633cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b6340: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b6340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b6344: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b6344u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b6348: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6348u;
        // 0x3b634c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6350u;
}
