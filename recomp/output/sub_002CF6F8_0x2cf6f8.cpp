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

// Function: sub_002CF6F8
// Address: 0x2cf6f8 - 0x2cf858
void sub_002CF6F8_0x2cf6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF6F8_0x2cf6f8");
#endif

    switch (ctx->pc) {
        case 0x2cf770u: goto label_2cf770;
        default: break;
    }

    ctx->pc = 0x2cf6f8u;

    // 0x2cf6f8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2cf6f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf6fc: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x2cf6fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf700: 0x8d23005c  lw          $v1, 0x5C($t1)
    ctx->pc = 0x2cf700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 92)));
    // 0x2cf704: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x2cf704u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf708: 0x8d260058  lw          $a2, 0x58($t1)
    ctx->pc = 0x2cf708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 88)));
    // 0x2cf70c: 0x8d220054  lw          $v0, 0x54($t1)
    ctx->pc = 0x2cf70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 84)));
    // 0x2cf710: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2cf710u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2cf714: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cf714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cf718: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CF718u;
    {
        const bool branch_taken_0x2cf718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf718) {
            ctx->pc = 0x2CF71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF718u;
            // 0x2cf71c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF720u;
            goto label_2cf720;
        }
    }
    ctx->pc = 0x2CF720u;
label_2cf720:
    // 0x2cf720: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2cf720u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cf724: 0x8d240008  lw          $a0, 0x8($t1)
    ctx->pc = 0x2cf724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2cf728: 0x442c0  sll         $t0, $a0, 11
    ctx->pc = 0x2cf728u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x2cf72c: 0x2810  mfhi        $a1
    ctx->pc = 0x2cf72cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2cf730: 0x18c00046  blez        $a2, . + 4 + (0x46 << 2)
    ctx->pc = 0x2CF730u;
    {
        const bool branch_taken_0x2cf730 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2CF734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF730u;
        // 0x2cf734: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf730) {
            ctx->pc = 0x2CF84Cu;
            goto label_2cf84c;
        }
    }
    ctx->pc = 0x2CF738u;
    // 0x2cf738: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2cf738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2cf73c: 0x8d240050  lw          $a0, 0x50($t1)
    ctx->pc = 0x2cf73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x2cf740: 0x1421018  mult        $v0, $t2, $v0
    ctx->pc = 0x2cf740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2cf744: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x2cf744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cf748: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x2cf748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2cf74c: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x2CF74Cu;
    {
        const bool branch_taken_0x2cf74c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf74c) {
            ctx->pc = 0x2CF84Cu;
            goto label_2cf84c;
        }
    }
    ctx->pc = 0x2CF754u;
    // 0x2cf754: 0x8d670014  lw          $a3, 0x14($t3)
    ctx->pc = 0x2cf754u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x2cf758: 0x10e0003c  beqz        $a3, . + 4 + (0x3C << 2)
    ctx->pc = 0x2CF758u;
    {
        const bool branch_taken_0x2cf758 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF758u;
        // 0x2cf75c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf758) {
            ctx->pc = 0x2CF84Cu;
            goto label_2cf84c;
        }
    }
    ctx->pc = 0x2CF760u;
    // 0x2cf760: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x2cf760u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cf764: 0x2418ffff  addiu       $t8, $zero, -0x1
    ctx->pc = 0x2cf764u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cf768: 0x240f0018  addiu       $t7, $zero, 0x18
    ctx->pc = 0x2cf768u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2cf76c: 0x0  nop
    ctx->pc = 0x2cf76cu;
    // NOP
label_2cf770:
    // 0x2cf770: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x2cf770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2cf774: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CF774u;
    {
        const bool branch_taken_0x2cf774 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf774) {
            ctx->pc = 0x2CF778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF774u;
            // 0x2cf778: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF77Cu;
            goto label_2cf77c;
        }
    }
    ctx->pc = 0x2CF77Cu;
label_2cf77c:
    // 0x2cf77c: 0x8d650010  lw          $a1, 0x10($t3)
    ctx->pc = 0x2cf77cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x2cf780: 0x881021  addu        $v0, $a0, $t0
    ctx->pc = 0x2cf780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2cf784: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2cf784u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2cf788: 0x48001a  div         $zero, $v0, $t0
    ctx->pc = 0x2cf788u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cf78c: 0x1810  mfhi        $v1
    ctx->pc = 0x2cf78cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2cf790: 0x67182a  slt         $v1, $v1, $a3
    ctx->pc = 0x2cf790u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2cf794: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2CF794u;
    {
        const bool branch_taken_0x2cf794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF794u;
        // 0x2cf798: 0xa71021  addu        $v0, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf794) {
            ctx->pc = 0x2CF804u;
            goto label_2cf804;
        }
    }
    ctx->pc = 0x2CF79Cu;
    // 0x2cf79c: 0x510d0001  beql        $t0, $t5, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CF79Cu;
    {
        const bool branch_taken_0x2cf79c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 13));
        if (branch_taken_0x2cf79c) {
            ctx->pc = 0x2CF7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF79Cu;
            // 0x2cf7a0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF7A4u;
            goto label_2cf7a4;
        }
    }
    ctx->pc = 0x2CF7A4u;
label_2cf7a4:
    // 0x2cf7a4: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x2cf7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2cf7a8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2cf7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cf7ac: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x2cf7acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cf7b0: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x2cf7b0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2cf7b4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2cf7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cf7b8: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x2cf7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2cf7bc: 0x88001a  div         $zero, $a0, $t0
    ctx->pc = 0x2cf7bcu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cf7c0: 0xacc50014  sw          $a1, 0x14($a2)
    ctx->pc = 0x2cf7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
    // 0x2cf7c4: 0x1810  mfhi        $v1
    ctx->pc = 0x2cf7c4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2cf7c8: 0x14a0000f  bnez        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2CF7C8u;
    {
        const bool branch_taken_0x2cf7c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF7C8u;
        // 0x2cf7cc: 0xacc30010  sw          $v1, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf7c8) {
            ctx->pc = 0x2CF808u;
            goto label_2cf808;
        }
    }
    ctx->pc = 0x2CF7D0u;
    // 0x2cf7d0: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2cf7d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cf7d4: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CF7D4u;
    {
        const bool branch_taken_0x2cf7d4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2cf7d4) {
            ctx->pc = 0x2CF7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF7D4u;
            // 0x2cf7d8: 0x8d220058  lw          $v0, 0x58($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF7F0u;
            goto label_2cf7f0;
        }
    }
    ctx->pc = 0x2CF7DCu;
    // 0x2cf7dc: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x2cf7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x2cf7e0: 0xfccc0000  sd          $t4, 0x0($a2)
    ctx->pc = 0x2cf7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 12));
    // 0x2cf7e4: 0xfccc0008  sd          $t4, 0x8($a2)
    ctx->pc = 0x2cf7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 12));
    // 0x2cf7e8: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x2cf7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x2cf7ec: 0x8d220058  lw          $v0, 0x58($t1)
    ctx->pc = 0x2cf7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 88)));
label_2cf7f0:
    // 0x2cf7f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2cf7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2cf7f4: 0x302182a  slt         $v1, $t8, $v0
    ctx->pc = 0x2cf7f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cf7f8: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x2cf7f8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2cf7fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CF7FCu;
    {
        const bool branch_taken_0x2cf7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF7FCu;
        // 0x2cf800: 0xad220058  sw          $v0, 0x58($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf7fc) {
            ctx->pc = 0x2CF808u;
            goto label_2cf808;
        }
    }
    ctx->pc = 0x2CF804u;
label_2cf804:
    // 0x2cf804: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x2cf804u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cf808:
    // 0x2cf808: 0x8d230054  lw          $v1, 0x54($t1)
    ctx->pc = 0x2cf808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 84)));
    // 0x2cf80c: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x2cf80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2cf810: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2cf810u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cf814: 0x506d0001  beql        $v1, $t5, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CF814u;
    {
        const bool branch_taken_0x2cf814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 13));
        if (branch_taken_0x2cf814) {
            ctx->pc = 0x2CF818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF814u;
            // 0x2cf818: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF81Cu;
            goto label_2cf81c;
        }
    }
    ctx->pc = 0x2CF81Cu;
label_2cf81c:
    // 0x2cf81c: 0x2010  mfhi        $a0
    ctx->pc = 0x2cf81cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2cf820: 0x11c0000a  beqz        $t6, . + 4 + (0xA << 2)
    ctx->pc = 0x2CF820u;
    {
        const bool branch_taken_0x2cf820 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF820u;
        // 0x2cf824: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf820) {
            ctx->pc = 0x2CF84Cu;
            goto label_2cf84c;
        }
    }
    ctx->pc = 0x2CF828u;
    // 0x2cf828: 0x14f1018  mult        $v0, $t2, $t7
    ctx->pc = 0x2cf828u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2cf82c: 0x8d230050  lw          $v1, 0x50($t1)
    ctx->pc = 0x2cf82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x2cf830: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x2cf830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cf834: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x2cf834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2cf838: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF838u;
    {
        const bool branch_taken_0x2cf838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf838) {
            ctx->pc = 0x2CF84Cu;
            goto label_2cf84c;
        }
    }
    ctx->pc = 0x2CF840u;
    // 0x2cf840: 0x8d620014  lw          $v0, 0x14($t3)
    ctx->pc = 0x2cf840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x2cf844: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x2CF844u;
    {
        const bool branch_taken_0x2cf844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF844u;
        // 0x2cf848: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf844) {
            ctx->pc = 0x2CF770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf770;
        }
    }
    ctx->pc = 0x2CF84Cu;
label_2cf84c:
    // 0x2cf84c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF84Cu;
        // 0x2cf850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF854u;
    // 0x2cf854: 0x0  nop
    ctx->pc = 0x2cf854u;
    // NOP
    ctx->pc = 0x2cf858u;
}
