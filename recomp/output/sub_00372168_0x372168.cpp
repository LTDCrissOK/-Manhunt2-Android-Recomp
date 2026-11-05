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

// Function: sub_00372168
// Address: 0x372168 - 0x372628
void sub_00372168_0x372168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372168_0x372168");
#endif

    ctx->pc = 0x372168u;

    // 0x372168: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x372168u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37216c: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x37216cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372170: 0x8546005a  lh          $a2, 0x5A($t2)
    ctx->pc = 0x372170u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 90)));
    // 0x372174: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x372174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x372178: 0x8543005e  lh          $v1, 0x5E($t2)
    ctx->pc = 0x372178u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 94)));
    // 0x37217c: 0x24c5003f  addiu       $a1, $a2, 0x3F
    ctx->pc = 0x37217cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x372180: 0x24c2007e  addiu       $v0, $a2, 0x7E
    ctx->pc = 0x372180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 126));
    // 0x372184: 0xe5202a  slt         $a0, $a3, $a1
    ctx->pc = 0x372184u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x372188: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x372188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x37218c: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x37218cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x372190: 0x8544005c  lh          $a0, 0x5C($t2)
    ctx->pc = 0x372190u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 92)));
    // 0x372194: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x372194u;
    {
        const bool branch_taken_0x372194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x372198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372194u;
        // 0x372198: 0x23183  sra         $a2, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372194) {
            ctx->pc = 0x3721B4u;
            goto label_3721b4;
        }
    }
    ctx->pc = 0x37219Cu;
    // 0x37219c: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x37219cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x3721a0: 0x2483007e  addiu       $v1, $a0, 0x7E
    ctx->pc = 0x3721a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 126));
    // 0x3721a4: 0xe2202a  slt         $a0, $a3, $v0
    ctx->pc = 0x3721a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3721a8: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x3721a8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x3721ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3721ACu;
    {
        const bool branch_taken_0x3721ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3721B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3721ACu;
        // 0x3721b0: 0x32183  sra         $a0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3721ac) {
            ctx->pc = 0x3721CCu;
            goto label_3721cc;
        }
    }
    ctx->pc = 0x3721B4u;
label_3721b4:
    // 0x3721b4: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x3721b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x3721b8: 0x2483003e  addiu       $v1, $a0, 0x3E
    ctx->pc = 0x3721b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 62));
    // 0x3721bc: 0xe2202a  slt         $a0, $a3, $v0
    ctx->pc = 0x3721bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3721c0: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x3721c0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x3721c4: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x3721c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x3721c8: 0x32403  sra         $a0, $v1, 16
    ctx->pc = 0x3721c8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 16));
label_3721cc:
    // 0x3721cc: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x3721ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3721d0: 0x8547005a  lh          $a3, 0x5A($t2)
    ctx->pc = 0x3721d0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 90)));
    // 0x3721d4: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x3721d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3721d8: 0x85460058  lh          $a2, 0x58($t2)
    ctx->pc = 0x3721d8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x3721dc: 0x24e5003f  addiu       $a1, $a3, 0x3F
    ctx->pc = 0x3721dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
    // 0x3721e0: 0x24e2007e  addiu       $v0, $a3, 0x7E
    ctx->pc = 0x3721e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 126));
    // 0x3721e4: 0x125182a  slt         $v1, $t1, $a1
    ctx->pc = 0x3721e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3721e8: 0x30c60002  andi        $a2, $a2, 0x2
    ctx->pc = 0x3721e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x3721ec: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3721ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3721f0: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x3721f0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x3721f4: 0x47443  sra         $t6, $a0, 17
    ctx->pc = 0x3721f4u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 4), 17));
    // 0x3721f8: 0x23983  sra         $a3, $v0, 6
    ctx->pc = 0x3721f8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 6));
    // 0x3721fc: 0x8544005c  lh          $a0, 0x5C($t2)
    ctx->pc = 0x3721fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 92)));
    // 0x372200: 0x9548005a  lhu         $t0, 0x5A($t2)
    ctx->pc = 0x372200u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 90)));
    // 0x372204: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x372204u;
    {
        const bool branch_taken_0x372204 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x372208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372204u;
        // 0x372208: 0x954c005c  lhu         $t4, 0x5C($t2) (Delay Slot)
        SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372204) {
            ctx->pc = 0x372224u;
            goto label_372224;
        }
    }
    ctx->pc = 0x37220Cu;
    // 0x37220c: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x37220cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x372210: 0x2483007e  addiu       $v1, $a0, 0x7E
    ctx->pc = 0x372210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 126));
    // 0x372214: 0x122202a  slt         $a0, $t1, $v0
    ctx->pc = 0x372214u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x372218: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x372218u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x37221c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37221Cu;
    {
        const bool branch_taken_0x37221c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37221Cu;
        // 0x372220: 0x32183  sra         $a0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37221c) {
            ctx->pc = 0x37223Cu;
            goto label_37223c;
        }
    }
    ctx->pc = 0x372224u;
label_372224:
    // 0x372224: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x372224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x372228: 0x2483003e  addiu       $v1, $a0, 0x3E
    ctx->pc = 0x372228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 62));
    // 0x37222c: 0x122202a  slt         $a0, $t1, $v0
    ctx->pc = 0x37222cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x372230: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x372230u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x372234: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x372234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x372238: 0x32403  sra         $a0, $v1, 16
    ctx->pc = 0x372238u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 16));
label_37223c:
    // 0x37223c: 0x8d430044  lw          $v1, 0x44($t2)
    ctx->pc = 0x37223cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 68)));
    // 0x372240: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x372240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x372244: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x372244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x372248: 0xe43018  mult        $a2, $a3, $a0
    ctx->pc = 0x372248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x37224c: 0x652818  mult        $a1, $v1, $a1
    ctx->pc = 0x37224cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x372250: 0x2442cc48  addiu       $v0, $v0, -0x33B8
    ctx->pc = 0x372250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954056));
    // 0x372254: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x372254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x372258: 0xc4c00  sll         $t1, $t4, 16
    ctx->pc = 0x372258u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x37225c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x37225cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x372260: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x372260u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x372264: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x372264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x372268: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x372268u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x37226c: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x37226cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x372270: 0x84583  sra         $t0, $t0, 22
    ctx->pc = 0x372270u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 22));
    // 0x372274: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x372274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372278: 0x8c8b0024  lw          $t3, 0x24($a0)
    ctx->pc = 0x372278u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x37227c: 0x8cef0028  lw          $t7, 0x28($a3)
    ctx->pc = 0x37227cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x372280: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x372280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372284: 0x8c4c002c  lw          $t4, 0x2C($v0)
    ctx->pc = 0x372284u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x372288: 0x62c43  sra         $a1, $a2, 17
    ctx->pc = 0x372288u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 17));
    // 0x37228c: 0x84670040  lh          $a3, 0x40($v1)
    ctx->pc = 0x37228cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x372290: 0xad600010  sw          $zero, 0x10($t3)
    ctx->pc = 0x372290u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 0));
    // 0x372294: 0xad600014  sw          $zero, 0x14($t3)
    ctx->pc = 0x372294u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
    // 0x372298: 0xad600018  sw          $zero, 0x18($t3)
    ctx->pc = 0x372298u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 0));
    // 0x37229c: 0xad60001c  sw          $zero, 0x1C($t3)
    ctx->pc = 0x37229cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 0));
    // 0x3722a0: 0xad600028  sw          $zero, 0x28($t3)
    ctx->pc = 0x3722a0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 40), GPR_U32(ctx, 0));
    // 0x3722a4: 0xad600038  sw          $zero, 0x38($t3)
    ctx->pc = 0x3722a4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 56), GPR_U32(ctx, 0));
    // 0x3722a8: 0x95420058  lhu         $v0, 0x58($t2)
    ctx->pc = 0x3722a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x3722ac: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3722acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3722b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3722B0u;
    {
        const bool branch_taken_0x3722b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3722B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3722B0u;
        // 0x3722b4: 0x93403  sra         $a2, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3722b0) {
            ctx->pc = 0x3722CCu;
            goto label_3722cc;
        }
    }
    ctx->pc = 0x3722B8u;
    // 0x3722b8: 0x8d430078  lw          $v1, 0x78($t2)
    ctx->pc = 0x3722b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 120)));
    // 0x3722bc: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x3722bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
    // 0x3722c0: 0x3442f8f8  ori         $v0, $v0, 0xF8F8
    ctx->pc = 0x3722c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63736);
    // 0x3722c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3722c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3722c8: 0xad430078  sw          $v1, 0x78($t2)
    ctx->pc = 0x3722c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 120), GPR_U32(ctx, 3));
label_3722cc:
    // 0x3722cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3722ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3722d0: 0x51a20009  beql        $t5, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3722D0u;
    {
        const bool branch_taken_0x3722d0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 2));
        if (branch_taken_0x3722d0) {
            ctx->pc = 0x3722D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3722D0u;
            // 0x3722d4: 0xdd420058  ld          $v0, 0x58($t2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 10), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3722F8u;
            goto label_3722f8;
        }
    }
    ctx->pc = 0x3722D8u;
    // 0x3722d8: 0x11a00099  beqz        $t5, . + 4 + (0x99 << 2)
    ctx->pc = 0x3722D8u;
    {
        const bool branch_taken_0x3722d8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3722DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3722D8u;
        // 0x3722dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3722d8) {
            ctx->pc = 0x372540u;
            goto label_372540;
        }
    }
    ctx->pc = 0x3722E0u;
    // 0x3722e0: 0x11a20037  beq         $t5, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x3722E0u;
    {
        const bool branch_taken_0x3722e0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 2));
        ctx->pc = 0x3722E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3722E0u;
        // 0x3722e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3722e0) {
            ctx->pc = 0x3723C0u;
            goto label_3723c0;
        }
    }
    ctx->pc = 0x3722E8u;
    // 0x3722e8: 0x51a2005c  beql        $t5, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x3722E8u;
    {
        const bool branch_taken_0x3722e8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 2));
        if (branch_taken_0x3722e8) {
            ctx->pc = 0x3722ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3722E8u;
            // 0x3722ec: 0x91430078  lbu         $v1, 0x78($t2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37245Cu;
            goto label_37245c;
        }
    }
    ctx->pc = 0x3722F0u;
    // 0x3722f0: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x3722F0u;
    {
        const bool branch_taken_0x3722f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3722f0) {
            ctx->pc = 0x372540u;
            goto label_372540;
        }
    }
    ctx->pc = 0x3722F8u;
label_3722f8:
    // 0x3722f8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x3722f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3722fc: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x3722fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x372300: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x372300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x372304: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x372304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x372308: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x372308u;
    {
        const bool branch_taken_0x372308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372308u;
        // 0x37230c: 0x9542005c  lhu         $v0, 0x5C($t2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372308) {
            ctx->pc = 0x372318u;
            goto label_372318;
        }
    }
    ctx->pc = 0x372310u;
    // 0x372310: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x372310u;
    {
        const bool branch_taken_0x372310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372310u;
        // 0x372314: 0x3042007f  andi        $v0, $v0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x372310) {
            ctx->pc = 0x37231Cu;
            goto label_37231c;
        }
    }
    ctx->pc = 0x372318u;
label_372318:
    // 0x372318: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x372318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_37231c:
    // 0x37231c: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x37231cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x372320: 0x50800014  beql        $a0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x372320u;
    {
        const bool branch_taken_0x372320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x372320) {
            ctx->pc = 0x372324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372320u;
            // 0x372324: 0x8543004c  lh          $v1, 0x4C($t2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372374u;
            goto label_372374;
        }
    }
    ctx->pc = 0x372328u;
    // 0x372328: 0x8542005e  lh          $v0, 0x5E($t2)
    ctx->pc = 0x372328u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 94)));
    // 0x37232c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x37232cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x372330: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x372330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x372334: 0x8543004c  lh          $v1, 0x4C($t2)
    ctx->pc = 0x372334u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 76)));
    // 0x372338: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x372338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x37233c: 0x8546005c  lh          $a2, 0x5C($t2)
    ctx->pc = 0x37233cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 92)));
    // 0x372340: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x372340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x372344: 0xfd830010  sd          $v1, 0x10($t4)
    ctx->pc = 0x372344u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 3));
    // 0x372348: 0x9542005a  lhu         $v0, 0x5A($t2)
    ctx->pc = 0x372348u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 90)));
    // 0x37234c: 0x85430058  lh          $v1, 0x58($t2)
    ctx->pc = 0x37234cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x372350: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x372350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x372354: 0x21583  sra         $v0, $v0, 22
    ctx->pc = 0x372354u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x372358: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x372358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x37235c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x37235cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x372360: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x372360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x372364: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x372364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x372368: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x372368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x37236c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x37236Cu;
    {
        const bool branch_taken_0x37236c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37236Cu;
        // 0x372370: 0xfd820020  sd          $v0, 0x20($t4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 12), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37236c) {
            ctx->pc = 0x372540u;
            goto label_372540;
        }
    }
    ctx->pc = 0x372374u;
label_372374:
    // 0x372374: 0x8542005e  lh          $v0, 0x5E($t2)
    ctx->pc = 0x372374u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 94)));
    // 0x372378: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x372378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x37237c: 0x9544005c  lhu         $a0, 0x5C($t2)
    ctx->pc = 0x37237cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 92)));
    // 0x372380: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x372380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x372384: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x372384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x372388: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x372388u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x37238c: 0xfd830010  sd          $v1, 0x10($t4)
    ctx->pc = 0x37238cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 3));
    // 0x372390: 0x43443  sra         $a2, $a0, 17
    ctx->pc = 0x372390u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 17));
    // 0x372394: 0x9542005a  lhu         $v0, 0x5A($t2)
    ctx->pc = 0x372394u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 90)));
    // 0x372398: 0x8544004c  lh          $a0, 0x4C($t2)
    ctx->pc = 0x372398u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 76)));
    // 0x37239c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37239cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3723a0: 0x85430058  lh          $v1, 0x58($t2)
    ctx->pc = 0x3723a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x3723a4: 0x21583  sra         $v0, $v0, 22
    ctx->pc = 0x3723a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x3723a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3723a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3723ac: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x3723acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x3723b0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3723b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3723b4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3723b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3723b8: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x3723B8u;
    {
        const bool branch_taken_0x3723b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3723BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3723B8u;
        // 0x3723bc: 0xfd840020  sd          $a0, 0x20($t4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 12), 32), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3723b8) {
            ctx->pc = 0x372540u;
            goto label_372540;
        }
    }
    ctx->pc = 0x3723C0u;
label_3723c0:
    // 0x3723c0: 0xdd420058  ld          $v0, 0x58($t2)
    ctx->pc = 0x3723c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x3723c4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x3723c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3723c8: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x3723c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x3723cc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3723ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3723d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3723d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3723d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3723D4u;
    {
        const bool branch_taken_0x3723d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3723D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3723D4u;
        // 0x3723d8: 0x9542005c  lhu         $v0, 0x5C($t2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3723d4) {
            ctx->pc = 0x3723E4u;
            goto label_3723e4;
        }
    }
    ctx->pc = 0x3723DCu;
    // 0x3723dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3723DCu;
    {
        const bool branch_taken_0x3723dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3723E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3723DCu;
        // 0x3723e0: 0x3042007f  andi        $v0, $v0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3723dc) {
            ctx->pc = 0x3723E8u;
            goto label_3723e8;
        }
    }
    ctx->pc = 0x3723E4u;
label_3723e4:
    // 0x3723e4: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x3723e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_3723e8:
    // 0x3723e8: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x3723e8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3723ec: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x3723ECu;
    {
        const bool branch_taken_0x3723ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3723F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3723ECu;
        // 0x3723f0: 0x8542005e  lh          $v0, 0x5E($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 94)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3723ec) {
            ctx->pc = 0x372418u;
            goto label_372418;
        }
    }
    ctx->pc = 0x3723F4u;
    // 0x3723f4: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x3723f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3723f8: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x3723f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x3723fc: 0x8543004c  lh          $v1, 0x4C($t2)
    ctx->pc = 0x3723fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 76)));
    // 0x372400: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x372400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x372404: 0x8546005c  lh          $a2, 0x5C($t2)
    ctx->pc = 0x372404u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 92)));
    // 0x372408: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x372408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37240c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x37240cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x372410: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x372410u;
    {
        const bool branch_taken_0x372410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372410u;
        // 0x372414: 0xfd830010  sd          $v1, 0x10($t4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372410) {
            ctx->pc = 0x372434u;
            goto label_372434;
        }
    }
    ctx->pc = 0x372418u;
label_372418:
    // 0x372418: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x372418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x37241c: 0x9544005c  lhu         $a0, 0x5C($t2)
    ctx->pc = 0x37241cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 92)));
    // 0x372420: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x372420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x372424: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x372424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x372428: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x372428u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x37242c: 0xfd830010  sd          $v1, 0x10($t4)
    ctx->pc = 0x37242cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 3));
    // 0x372430: 0x43443  sra         $a2, $a0, 17
    ctx->pc = 0x372430u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 17));
label_372434:
    // 0x372434: 0x9542005a  lhu         $v0, 0x5A($t2)
    ctx->pc = 0x372434u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 90)));
    // 0x372438: 0x85430058  lh          $v1, 0x58($t2)
    ctx->pc = 0x372438u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x37243c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37243cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x372440: 0x21583  sra         $v0, $v0, 22
    ctx->pc = 0x372440u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x372444: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x372444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x372448: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x372448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x37244c: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x37244cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x372450: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x372450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x372454: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x372454u;
    {
        const bool branch_taken_0x372454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372454u;
        // 0x372458: 0xfd820020  sd          $v0, 0x20($t4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 12), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372454) {
            ctx->pc = 0x372540u;
            goto label_372540;
        }
    }
    ctx->pc = 0x37245Cu;
label_37245c:
    // 0x37245c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x37245cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x372460: 0x420bc  dsll32      $a0, $a0, 2
    ctx->pc = 0x372460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 2));
    // 0x372464: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x372464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x372468: 0x8546005c  lh          $a2, 0x5C($t2)
    ctx->pc = 0x372468u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 92)));
    // 0x37246c: 0xad630010  sw          $v1, 0x10($t3)
    ctx->pc = 0x37246cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 3));
    // 0x372470: 0x91420079  lbu         $v0, 0x79($t2)
    ctx->pc = 0x372470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 121)));
    // 0x372474: 0xad620014  sw          $v0, 0x14($t3)
    ctx->pc = 0x372474u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 2));
    // 0x372478: 0x9143007a  lbu         $v1, 0x7A($t2)
    ctx->pc = 0x372478u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 122)));
    // 0x37247c: 0xad60001c  sw          $zero, 0x1C($t3)
    ctx->pc = 0x37247cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 0));
    // 0x372480: 0xad630018  sw          $v1, 0x18($t3)
    ctx->pc = 0x372480u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 3));
    // 0x372484: 0xdd420058  ld          $v0, 0x58($t2)
    ctx->pc = 0x372484u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x372488: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x372488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x37248c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37248Cu;
    {
        const bool branch_taken_0x37248c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x372490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37248Cu;
        // 0x372490: 0x9542005c  lhu         $v0, 0x5C($t2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37248c) {
            ctx->pc = 0x37249Cu;
            goto label_37249c;
        }
    }
    ctx->pc = 0x372494u;
    // 0x372494: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x372494u;
    {
        const bool branch_taken_0x372494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372494u;
        // 0x372498: 0x3042003f  andi        $v0, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x372494) {
            ctx->pc = 0x3724A0u;
            goto label_3724a0;
        }
    }
    ctx->pc = 0x37249Cu;
label_37249c:
    // 0x37249c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x37249cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_3724a0:
    // 0x3724a0: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x3724a0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3724a4: 0xdd420058  ld          $v0, 0x58($t2)
    ctx->pc = 0x3724a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x3724a8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x3724a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3724ac: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x3724acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x3724b0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3724b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3724b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3724b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3724b8: 0x54430014  bnel        $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3724B8u;
    {
        const bool branch_taken_0x3724b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3724b8) {
            ctx->pc = 0x3724BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3724B8u;
            // 0x3724bc: 0x9542005a  lhu         $v0, 0x5A($t2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 90)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37250Cu;
            goto label_37250c;
        }
    }
    ctx->pc = 0x3724C0u;
    // 0x3724c0: 0x54800012  bnel        $a0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3724C0u;
    {
        const bool branch_taken_0x3724c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3724c0) {
            ctx->pc = 0x3724C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3724C0u;
            // 0x3724c4: 0x9542005a  lhu         $v0, 0x5A($t2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 90)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37250Cu;
            goto label_37250c;
        }
    }
    ctx->pc = 0x3724C8u;
    // 0x3724c8: 0x8d430078  lw          $v1, 0x78($t2)
    ctx->pc = 0x3724c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 120)));
    // 0x3724cc: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x3724ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x3724d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3724d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3724d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3724d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3724d8: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3724D8u;
    {
        const bool branch_taken_0x3724d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3724DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3724D8u;
        // 0x3724dc: 0x9542005a  lhu         $v0, 0x5A($t2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 90)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3724d8) {
            ctx->pc = 0x37250Cu;
            goto label_37250c;
        }
    }
    ctx->pc = 0x3724E0u;
    // 0x3724e0: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x3724e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x3724e4: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x3724e4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x3724e8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3724e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3724ec: 0x21583  sra         $v0, $v0, 22
    ctx->pc = 0x3724ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x3724f0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3724f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3724f4: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x3724f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3724f8: 0xfd820020  sd          $v0, 0x20($t4)
    ctx->pc = 0x3724f8u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 32), GPR_U64(ctx, 2));
    // 0x3724fc: 0x8543004c  lh          $v1, 0x4C($t2)
    ctx->pc = 0x3724fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 76)));
    // 0x372500: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x372500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x372504: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x372504u;
    {
        const bool branch_taken_0x372504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372504u;
        // 0x372508: 0xfd830010  sd          $v1, 0x10($t4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372504) {
            ctx->pc = 0x372540u;
            goto label_372540;
        }
    }
    ctx->pc = 0x37250Cu;
label_37250c:
    // 0x37250c: 0x85430058  lh          $v1, 0x58($t2)
    ctx->pc = 0x37250cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x372510: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x372510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x372514: 0x21583  sra         $v0, $v0, 22
    ctx->pc = 0x372514u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x372518: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x372518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x37251c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x37251cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x372520: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x372520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x372524: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x372524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x372528: 0xfd820020  sd          $v0, 0x20($t4)
    ctx->pc = 0x372528u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 32), GPR_U64(ctx, 2));
    // 0x37252c: 0x8543005e  lh          $v1, 0x5E($t2)
    ctx->pc = 0x37252cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 94)));
    // 0x372530: 0x8542004c  lh          $v0, 0x4C($t2)
    ctx->pc = 0x372530u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 76)));
    // 0x372534: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x372534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x372538: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x372538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37253c: 0xfd820010  sd          $v0, 0x10($t4)
    ctx->pc = 0x37253cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 2));
label_372540:
    // 0x372540: 0x11a00037  beqz        $t5, . + 4 + (0x37 << 2)
    ctx->pc = 0x372540u;
    {
        const bool branch_taken_0x372540 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x372544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372540u;
        // 0x372544: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372540) {
            ctx->pc = 0x372620u;
            goto label_372620;
        }
    }
    ctx->pc = 0x372548u;
    // 0x372548: 0xfd800030  sd          $zero, 0x30($t4)
    ctx->pc = 0x372548u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 48), GPR_U64(ctx, 0));
    // 0x37254c: 0xfd820000  sd          $v0, 0x0($t4)
    ctx->pc = 0x37254cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    // 0x372550: 0x3404c00d  ori         $a0, $zero, 0xC00D
    ctx->pc = 0x372550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49165);
    // 0x372554: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x372554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x372558: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x372558u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
    // 0x37255c: 0xfd800040  sd          $zero, 0x40($t4)
    ctx->pc = 0x37255cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 64), GPR_U64(ctx, 0));
    // 0x372560: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x372560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x372564: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x372564u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x372568: 0x8543005c  lh          $v1, 0x5C($t2)
    ctx->pc = 0x372568u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 92)));
    // 0x37256c: 0x8542005a  lh          $v0, 0x5A($t2)
    ctx->pc = 0x37256cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 90)));
    // 0x372570: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x372570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x372574: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x372574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x372578: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x372578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x37257c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x37257cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x372580: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x372580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x372584: 0xfd820050  sd          $v0, 0x50($t4)
    ctx->pc = 0x372584u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 80), GPR_U64(ctx, 2));
    // 0x372588: 0xfd640000  sd          $a0, 0x0($t3)
    ctx->pc = 0x372588u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 4));
    // 0x37258c: 0xad68000c  sw          $t0, 0xC($t3)
    ctx->pc = 0x37258cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 8));
    // 0x372590: 0xad650030  sw          $a1, 0x30($t3)
    ctx->pc = 0x372590u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 48), GPR_U32(ctx, 5));
    // 0x372594: 0xad660034  sw          $a2, 0x34($t3)
    ctx->pc = 0x372594u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 52), GPR_U32(ctx, 6));
    // 0x372598: 0xad600020  sw          $zero, 0x20($t3)
    ctx->pc = 0x372598u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 0));
    // 0x37259c: 0xad600024  sw          $zero, 0x24($t3)
    ctx->pc = 0x37259cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 36), GPR_U32(ctx, 0));
    // 0x3725a0: 0x69620007  ldl         $v0, 0x7($t3)
    ctx->pc = 0x3725a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3725a4: 0x6d620000  ldr         $v0, 0x0($t3)
    ctx->pc = 0x3725a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3725a8: 0x6963000f  ldl         $v1, 0xF($t3)
    ctx->pc = 0x3725a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3725ac: 0x6d630008  ldr         $v1, 0x8($t3)
    ctx->pc = 0x3725acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3725b0: 0x69640017  ldl         $a0, 0x17($t3)
    ctx->pc = 0x3725b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3725b4: 0x6d640010  ldr         $a0, 0x10($t3)
    ctx->pc = 0x3725b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3725b8: 0x6965001f  ldl         $a1, 0x1F($t3)
    ctx->pc = 0x3725b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3725bc: 0x6d650018  ldr         $a1, 0x18($t3)
    ctx->pc = 0x3725bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3725c0: 0xb1e20007  sdl         $v0, 0x7($t7)
    ctx->pc = 0x3725c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3725c4: 0xb5e20000  sdr         $v0, 0x0($t7)
    ctx->pc = 0x3725c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3725c8: 0xb1e3000f  sdl         $v1, 0xF($t7)
    ctx->pc = 0x3725c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3725cc: 0xb5e30008  sdr         $v1, 0x8($t7)
    ctx->pc = 0x3725ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3725d0: 0xb1e40017  sdl         $a0, 0x17($t7)
    ctx->pc = 0x3725d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3725d4: 0xb5e40010  sdr         $a0, 0x10($t7)
    ctx->pc = 0x3725d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3725d8: 0xb1e5001f  sdl         $a1, 0x1F($t7)
    ctx->pc = 0x3725d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3725dc: 0xb5e50018  sdr         $a1, 0x18($t7)
    ctx->pc = 0x3725dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3725e0: 0x69620027  ldl         $v0, 0x27($t3)
    ctx->pc = 0x3725e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3725e4: 0x6d620020  ldr         $v0, 0x20($t3)
    ctx->pc = 0x3725e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3725e8: 0x6963002f  ldl         $v1, 0x2F($t3)
    ctx->pc = 0x3725e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3725ec: 0x6d630028  ldr         $v1, 0x28($t3)
    ctx->pc = 0x3725ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3725f0: 0x69640037  ldl         $a0, 0x37($t3)
    ctx->pc = 0x3725f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3725f4: 0x6d640030  ldr         $a0, 0x30($t3)
    ctx->pc = 0x3725f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3725f8: 0x6965003f  ldl         $a1, 0x3F($t3)
    ctx->pc = 0x3725f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3725fc: 0x6d650038  ldr         $a1, 0x38($t3)
    ctx->pc = 0x3725fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x372600: 0xb1e20027  sdl         $v0, 0x27($t7)
    ctx->pc = 0x372600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x372604: 0xb5e20020  sdr         $v0, 0x20($t7)
    ctx->pc = 0x372604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x372608: 0xb1e3002f  sdl         $v1, 0x2F($t7)
    ctx->pc = 0x372608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37260c: 0xb5e30028  sdr         $v1, 0x28($t7)
    ctx->pc = 0x37260cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x372610: 0xb1e40037  sdl         $a0, 0x37($t7)
    ctx->pc = 0x372610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x372614: 0xb5e40030  sdr         $a0, 0x30($t7)
    ctx->pc = 0x372614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x372618: 0xb1e5003f  sdl         $a1, 0x3F($t7)
    ctx->pc = 0x372618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37261c: 0xb5e50038  sdr         $a1, 0x38($t7)
    ctx->pc = 0x37261cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_372620:
    // 0x372620: 0x3e00008  jr          $ra
    ctx->pc = 0x372620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372628u;
}
