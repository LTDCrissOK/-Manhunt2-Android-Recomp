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

// Function: sub_003B5F70
// Address: 0x3b5f70 - 0x3b6160
void sub_003B5F70_0x3b5f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5F70_0x3b5f70");
#endif

    switch (ctx->pc) {
        case 0x3b5f90u: goto label_3b5f90;
        default: break;
    }

    ctx->pc = 0x3b5f70u;

    // 0x3b5f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b5f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b5f74: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x3b5f74u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5f78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b5f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b5f7c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3b5f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5f80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b5f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b5f84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b5f84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5f88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b5f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b5f8c: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x3b5f8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3b5f90:
    // 0x3b5f90: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b5f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5f94: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b5f94u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b5f98: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b5f98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b5f9c: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x3b5f9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3b5fa0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b5fa0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b5fa4: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b5fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b5fa8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b5fa8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b5fac: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b5facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b5fb0: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b5fb0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b5fb4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b5fb4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b5fb8: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x3b5fb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x3b5fbc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b5fbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b5fc0: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x3b5fc0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b5fc4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b5fc4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b5fc8: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b5fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b5fcc: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x3b5fccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b5fd0: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b5fd0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b5fd4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b5fd4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b5fd8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b5fd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b5fdc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b5fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b5fe0: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x3b5fe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b5fe4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b5fe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b5fe8: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b5fe8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b5fec: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b5fecu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b5ff0: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b5ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b5ff4: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b5ff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b5ff8: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x3b5ff8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b5ffc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b5ffcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6000: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6000u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6004: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b6004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6008: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b6008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b600c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b600cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6010: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x3b6010u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6014: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6014u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6018: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b601c: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x3b601cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x3b6020: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b6020u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b6024: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x3b6024u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6028: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6028u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b602c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b602cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6030: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6030u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6034: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x3b6034u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x3b6038: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x3b6038u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x3b603c: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x3b603cu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6040: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6040u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6044: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6048: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6048u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b604c: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x3b604cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x3b6050: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b6050u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b6054: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x3b6054u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6058: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6058u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b605c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b605cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6060: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6060u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6064: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x3b6064u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x3b6068: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b6068u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b606c: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x3b606cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6070: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6070u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6074: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6078: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6078u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b607c: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x3b607cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x3b6080: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x3b6080u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6084: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6084u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6088: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6088u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b608c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b608cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6090: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x3b6090u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x3b6094: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x3b6094u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x3b6098: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b6098u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b609c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b609cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b60a0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b60a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b60a4: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b60a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b60a8: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x3b60a8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x3b60ac: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x3b60acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x3b60b0: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b60b0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b60b4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b60b4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b60b8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b60b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b60bc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b60bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b60c0: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x3b60c0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x3b60c4: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b60c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b60c8: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b60c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b60cc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b60ccu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b60d0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b60d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b60d4: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x3b60d4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x3b60d8: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b60d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b60dc: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x3b60dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b60e0: 0x8446f8c0  lh          $a2, -0x740($v0)
    ctx->pc = 0x3b60e0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294965440)));
    // 0x3b60e4: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x3b60e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x3b60e8: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x3b60e8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x3b60ec: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x3b60ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b60f0: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x3b60f0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x3b60f4: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x3b60f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b60f8: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x3b60f8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x3b60fc: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x3b60fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x3b6100: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b6100u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b6104: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b6104u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b6108: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b6108u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b610c: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x3b610cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x3b6110: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x3b6110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x3b6114: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B6114u;
    {
        const bool branch_taken_0x3b6114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6114u;
        // 0x3b6118: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6114) {
            ctx->pc = 0x3B6128u;
            goto label_3b6128;
        }
    }
    ctx->pc = 0x3B611Cu;
    // 0x3b611c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B611Cu;
    {
        const bool branch_taken_0x3b611c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B611Cu;
        // 0x3b6120: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b611c) {
            ctx->pc = 0x3B613Cu;
            goto label_3b613c;
        }
    }
    ctx->pc = 0x3B6124u;
    // 0x3b6124: 0x0  nop
    ctx->pc = 0x3b6124u;
    // NOP
label_3b6128:
    // 0x3b6128: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x3b6128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x3b612c: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x3b612cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b6130: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B6130u;
    {
        const bool branch_taken_0x3b6130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6130) {
            ctx->pc = 0x3B6134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6130u;
            // 0x3b6134: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B613Cu;
            goto label_3b613c;
        }
    }
    ctx->pc = 0x3B6138u;
    // 0x3b6138: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x3b6138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_3b613c:
    // 0x3b613c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3b613cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b6140: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3b6140u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3b6144: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x3B6144u;
    {
        const bool branch_taken_0x3b6144 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6144u;
        // 0x3b6148: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6144) {
            ctx->pc = 0x3B5F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b5f90;
        }
    }
    ctx->pc = 0x3B614Cu;
    // 0x3b614c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b614cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b6150: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b6150u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b6154: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b6154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b6158: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6158u;
        // 0x3b615c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6160u;
}
