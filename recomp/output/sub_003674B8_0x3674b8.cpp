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

// Function: sub_003674B8
// Address: 0x3674b8 - 0x367758
void sub_003674B8_0x3674b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003674B8_0x3674b8");
#endif

    switch (ctx->pc) {
        case 0x36752cu: goto label_36752c;
        case 0x367590u: goto label_367590;
        case 0x3675f8u: goto label_3675f8;
        case 0x367614u: goto label_367614;
        case 0x367628u: goto label_367628;
        case 0x367640u: goto label_367640;
        case 0x367650u: goto label_367650;
        case 0x3676a8u: goto label_3676a8;
        case 0x3676c4u: goto label_3676c4;
        case 0x3676d8u: goto label_3676d8;
        case 0x3676f0u: goto label_3676f0;
        case 0x367700u: goto label_367700;
        case 0x367724u: goto label_367724;
        default: break;
    }

    ctx->pc = 0x3674b8u;

    // 0x3674b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3674b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3674bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3674bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3674c0: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x3674c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x3674c4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3674c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3674c8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3674c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3674cc: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x3674ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x3674d0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3674d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3674d4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3674d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x3674d8: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x3674d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3674dc: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x3674dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x3674e0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3674e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3674e4: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x3674e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x3674e8: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x3674e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x3674ec: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x3674ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x3674f0: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x3674f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x3674f4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3674f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3674f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3674f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3674fc: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x3674fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x367500: 0x3c036c01  lui         $v1, 0x6C01
    ctx->pc = 0x367500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27649 << 16));
    // 0x367504: 0x24420c60  addiu       $v0, $v0, 0xC60
    ctx->pc = 0x367504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3168));
    // 0x367508: 0x2c38025  or          $s0, $s6, $v1
    ctx->pc = 0x367508u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
    // 0x36750c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x36750cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x367510: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x367510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x367514: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x367514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367518: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x367518u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x36751c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36751Cu;
    {
        const bool branch_taken_0x36751c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36751Cu;
        // 0x367520: 0xafa40014  sw          $a0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36751c) {
            ctx->pc = 0x36752Cu;
            goto label_36752c;
        }
    }
    ctx->pc = 0x367524u;
    // 0x367524: 0xc0dc442  jal         func_371108
    ctx->pc = 0x367524u;
    SET_GPR_U32(ctx, 31, 0x36752Cu);
    ctx->pc = 0x367528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367524u;
    // 0x367528: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x367524u, 0x36752Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36752Cu;
label_36752c:
    // 0x36752c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x36752cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x367530: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x367530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
    // 0x367534: 0x344200c5  ori         $v0, $v0, 0xC5
    ctx->pc = 0x367534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)197);
    // 0x367538: 0x10383c  dsll32      $a3, $s0, 0
    ctx->pc = 0x367538u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) << (32 + 0));
    // 0x36753c: 0x34058156  ori         $a1, $zero, 0x8156
    ctx->pc = 0x36753cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33110);
    // 0x367540: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x367540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x367544: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x367544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x367548: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x367548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x36754c: 0x34a58060  ori         $a1, $a1, 0x8060
    ctx->pc = 0x36754cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32864);
    // 0x367550: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x367550u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x367554: 0x24085353  addiu       $t0, $zero, 0x5353
    ctx->pc = 0x367554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x367558: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x367558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x36755c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x36755cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x367560: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x367560u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x367564: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x367564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x367568: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x367568u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
    // 0x36756c: 0x24660018  addiu       $a2, $v1, 0x18
    ctx->pc = 0x36756cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x367570: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x367570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x367574: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x367574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x367578: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x367578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36757c: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x36757cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x367580: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x367580u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367584: 0x7c620008  sq          $v0, 0x8($v1)
    ctx->pc = 0x367584u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 8), GPR_VEC(ctx, 2));
    // 0x367588: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x367588u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x36758c: 0x30a20003  andi        $v0, $a1, 0x3
    ctx->pc = 0x36758cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
label_367590:
    // 0x367590: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x367590u;
    {
        const bool branch_taken_0x367590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x367594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367590u;
        // 0x367594: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367590) {
            ctx->pc = 0x3675A4u;
            goto label_3675a4;
        }
    }
    ctx->pc = 0x367598u;
    // 0x367598: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x367598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x36759c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x36759Cu;
    {
        const bool branch_taken_0x36759c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3675A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36759Cu;
        // 0x3675a0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36759c) {
            ctx->pc = 0x3675ACu;
            goto label_3675ac;
        }
    }
    ctx->pc = 0x3675A4u;
label_3675a4:
    // 0x3675a4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3675a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3675a8: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x3675a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3675ac:
    // 0x3675ac: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x3675ACu;
    {
        const bool branch_taken_0x3675ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3675B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3675ACu;
        // 0x3675b0: 0x3c036d10  lui         $v1, 0x6D10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27920 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3675ac) {
            ctx->pc = 0x367664u;
            goto label_367664;
        }
    }
    ctx->pc = 0x3675B4u;
    // 0x3675b4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3675b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3675b8: 0x2c31825  or          $v1, $s6, $v1
    ctx->pc = 0x3675b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
    // 0x3675bc: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x3675bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3675c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3675c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3675c4: 0x24b40002  addiu       $s4, $a1, 0x2
    ctx->pc = 0x3675c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3675c8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3675c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3675cc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3675ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3675d0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3675d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x3675d4: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x3675d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x3675d8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3675d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3675dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3675dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3675e0: 0x4f100  sll         $fp, $a0, 4
    ctx->pc = 0x3675e0u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3675e4: 0x5a900  sll         $s5, $a1, 4
    ctx->pc = 0x3675e4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3675e8: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3675e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x3675ec: 0x4b900  sll         $s7, $a0, 4
    ctx->pc = 0x3675ecu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3675f0: 0x138040  sll         $s0, $s3, 1
    ctx->pc = 0x3675f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x3675f4: 0x0  nop
    ctx->pc = 0x3675f4u;
    // NOP
label_3675f8:
    // 0x3675f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3675f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3675fc: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x3675fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x367600: 0x27c60008  addiu       $a2, $fp, 0x8
    ctx->pc = 0x367600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x367604: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x367604u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x367608: 0x26710010  addiu       $s1, $s3, 0x10
    ctx->pc = 0x367608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x36760c: 0xc0d9d24  jal         func_367490
    ctx->pc = 0x36760Cu;
    SET_GPR_U32(ctx, 31, 0x367614u);
    ctx->pc = 0x367610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36760Cu;
    // 0x367610: 0x34a50008  ori         $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x367490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367490u, 0x36760Cu, 0x367614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367614u;
label_367614:
    // 0x367614: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x367614u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x367618: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x367618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36761c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x36761cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367620: 0xc0d9d24  jal         func_367490
    ctx->pc = 0x367620u;
    SET_GPR_U32(ctx, 31, 0x367628u);
    ctx->pc = 0x367624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367620u;
    // 0x367624: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367490u, 0x367620u, 0x367628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367628u;
label_367628:
    // 0x367628: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x367628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x36762c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36762cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367630: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x367630u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x367634: 0x26e60008  addiu       $a2, $s7, 0x8
    ctx->pc = 0x367634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x367638: 0xc0d9d24  jal         func_367490
    ctx->pc = 0x367638u;
    SET_GPR_U32(ctx, 31, 0x367640u);
    ctx->pc = 0x36763Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367638u;
    // 0x36763c: 0x36050008  ori         $a1, $s0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x367490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367490u, 0x367638u, 0x367640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367640u;
label_367640:
    // 0x367640: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x367640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367644: 0x112900  sll         $a1, $s1, 4
    ctx->pc = 0x367644u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x367648: 0xc0d9d24  jal         func_367490
    ctx->pc = 0x367648u;
    SET_GPR_U32(ctx, 31, 0x367650u);
    ctx->pc = 0x36764Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367648u;
    // 0x36764c: 0x143100  sll         $a2, $s4, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367490u, 0x367648u, 0x367650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367650u;
label_367650:
    // 0x367650: 0x2a620040  slti        $v0, $s3, 0x40
    ctx->pc = 0x367650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x367654: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x367654u;
    {
        const bool branch_taken_0x367654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x367654) {
            ctx->pc = 0x367658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x367654u;
            // 0x367658: 0x138040  sll         $s0, $s3, 1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3675F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3675f8;
        }
    }
    ctx->pc = 0x36765Cu;
    // 0x36765c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x36765Cu;
    {
        const bool branch_taken_0x36765c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36765Cu;
        // 0x367660: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36765c) {
            ctx->pc = 0x367710u;
            goto label_367710;
        }
    }
    ctx->pc = 0x367664u;
label_367664:
    // 0x367664: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x367664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x367668: 0x3c036d20  lui         $v1, 0x6D20
    ctx->pc = 0x367668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27936 << 16));
    // 0x36766c: 0x2c31825  or          $v1, $s6, $v1
    ctx->pc = 0x36766cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
    // 0x367670: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x367670u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x367674: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x367674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x367678: 0x24b40002  addiu       $s4, $a1, 0x2
    ctx->pc = 0x367678u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x36767c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x36767cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x367680: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x367680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x367684: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x367684u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x367688: 0x26d60020  addiu       $s6, $s6, 0x20
    ctx->pc = 0x367688u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x36768c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x36768cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x367690: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x367690u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367694: 0x4f100  sll         $fp, $a0, 4
    ctx->pc = 0x367694u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x367698: 0x5a900  sll         $s5, $a1, 4
    ctx->pc = 0x367698u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x36769c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x36769cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x3676a0: 0x4b900  sll         $s7, $a0, 4
    ctx->pc = 0x3676a0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3676a4: 0x138040  sll         $s0, $s3, 1
    ctx->pc = 0x3676a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_3676a8:
    // 0x3676a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3676a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3676ac: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x3676acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3676b0: 0x27c60008  addiu       $a2, $fp, 0x8
    ctx->pc = 0x3676b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x3676b4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3676b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3676b8: 0x26710008  addiu       $s1, $s3, 0x8
    ctx->pc = 0x3676b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3676bc: 0xc0d9d24  jal         func_367490
    ctx->pc = 0x3676BCu;
    SET_GPR_U32(ctx, 31, 0x3676C4u);
    ctx->pc = 0x3676C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3676BCu;
    // 0x3676c0: 0x34a50008  ori         $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x367490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367490u, 0x3676BCu, 0x3676C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3676C4u;
label_3676c4:
    // 0x3676c4: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x3676c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x3676c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3676c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3676cc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3676ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3676d0: 0xc0d9d24  jal         func_367490
    ctx->pc = 0x3676D0u;
    SET_GPR_U32(ctx, 31, 0x3676D8u);
    ctx->pc = 0x3676D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3676D0u;
    // 0x3676d4: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367490u, 0x3676D0u, 0x3676D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3676D8u;
label_3676d8:
    // 0x3676d8: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x3676d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x3676dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3676dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3676e0: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x3676e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3676e4: 0x26e60008  addiu       $a2, $s7, 0x8
    ctx->pc = 0x3676e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x3676e8: 0xc0d9d24  jal         func_367490
    ctx->pc = 0x3676E8u;
    SET_GPR_U32(ctx, 31, 0x3676F0u);
    ctx->pc = 0x3676ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3676E8u;
    // 0x3676ec: 0x36050008  ori         $a1, $s0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x367490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367490u, 0x3676E8u, 0x3676F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3676F0u;
label_3676f0:
    // 0x3676f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3676f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3676f4: 0x112900  sll         $a1, $s1, 4
    ctx->pc = 0x3676f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x3676f8: 0xc0d9d24  jal         func_367490
    ctx->pc = 0x3676F8u;
    SET_GPR_U32(ctx, 31, 0x367700u);
    ctx->pc = 0x3676FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3676F8u;
    // 0x3676fc: 0x143100  sll         $a2, $s4, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367490u, 0x3676F8u, 0x367700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367700u;
label_367700:
    // 0x367700: 0x2a620040  slti        $v0, $s3, 0x40
    ctx->pc = 0x367700u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x367704: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x367704u;
    {
        const bool branch_taken_0x367704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x367704) {
            ctx->pc = 0x367708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x367704u;
            // 0x367708: 0x138040  sll         $s0, $s3, 1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3676A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3676a8;
        }
    }
    ctx->pc = 0x36770Cu;
    // 0x36770c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x36770cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_367710:
    // 0x367710: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x367710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x367714: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x367714u;
    {
        const bool branch_taken_0x367714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367714u;
        // 0x367718: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x367714) {
            ctx->pc = 0x367590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367590;
        }
    }
    ctx->pc = 0x36771Cu;
    // 0x36771c: 0xc0dc54a  jal         func_371528
    ctx->pc = 0x36771Cu;
    SET_GPR_U32(ctx, 31, 0x367724u);
    ctx->pc = 0x367720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36771Cu;
    // 0x367720: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371528u, 0x36771Cu, 0x367724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367724u;
label_367724:
    // 0x367724: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x367724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x367728: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x367728u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36772c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x36772cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x367730: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x367730u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x367734: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x367734u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x367738: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x367738u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36773c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x36773cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x367740: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x367740u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x367744: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x367744u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x367748: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x367748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36774c: 0x3e00008  jr          $ra
    ctx->pc = 0x36774Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36774Cu;
        // 0x367750: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36774Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367754u;
    // 0x367754: 0x0  nop
    ctx->pc = 0x367754u;
    // NOP
    ctx->pc = 0x367758u;
}
