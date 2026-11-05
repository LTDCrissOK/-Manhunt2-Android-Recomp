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

// Function: sub_00387908
// Address: 0x387908 - 0x387fb0
void sub_00387908_0x387908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387908_0x387908");
#endif

    switch (ctx->pc) {
        case 0x387940u: goto label_387940;
        case 0x3879d8u: goto label_3879d8;
        case 0x387a68u: goto label_387a68;
        case 0x387af8u: goto label_387af8;
        case 0x387b88u: goto label_387b88;
        case 0x387c18u: goto label_387c18;
        case 0x387ca0u: goto label_387ca0;
        case 0x387d30u: goto label_387d30;
        case 0x387dc0u: goto label_387dc0;
        case 0x387e50u: goto label_387e50;
        case 0x387ed0u: goto label_387ed0;
        case 0x387f00u: goto label_387f00;
        case 0x387f98u: goto label_387f98;
        default: break;
    }

    ctx->pc = 0x387908u;

    // 0x387908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x387908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38790c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x38790cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x387910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x387914: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x387914u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387918: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x387918u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38791c: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x38791cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x387920: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x387920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x387924: 0x2463ffde  addiu       $v1, $v1, -0x22
    ctx->pc = 0x387924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967262));
    // 0x387928: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x387928u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x38792c: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x38792cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x387930: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x387930u;
    {
        const bool branch_taken_0x387930 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x387934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387930u;
        // 0x387934: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387930) {
            ctx->pc = 0x387994u;
            goto label_387994;
        }
    }
    ctx->pc = 0x387938u;
    // 0x387938: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x387938u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x38793c: 0xdcc90008  ld          $t1, 0x8($a2)
    ctx->pc = 0x38793cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 8)));
label_387940:
    // 0x387940: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x387940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x387944: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x387944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x387948: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x387948u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x38794c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x38794cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x387950: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x387950u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x387954: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x387954u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x387958: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x387958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x38795c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x38795cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x387960: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x387960u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x387964: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x387964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x387968: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x387968u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x38796c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38796Cu;
    {
        const bool branch_taken_0x38796c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38796Cu;
        // 0x387970: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38796c) {
            ctx->pc = 0x38797Cu;
            goto label_38797c;
        }
    }
    ctx->pc = 0x387974u;
    // 0x387974: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x387974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x387978: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x387978u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_38797c:
    // 0x38797c: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x38797cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x387980: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x387980u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x387984: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x387984u;
    {
        const bool branch_taken_0x387984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x387988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387984u;
        // 0x387988: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387984) {
            ctx->pc = 0x387940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387940;
        }
    }
    ctx->pc = 0x38798Cu;
    // 0x38798c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38798Cu;
    {
        const bool branch_taken_0x38798c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38798Cu;
        // 0x387990: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38798c) {
            ctx->pc = 0x38799Cu;
            goto label_38799c;
        }
    }
    ctx->pc = 0x387994u;
label_387994:
    // 0x387994: 0xdcc90008  ld          $t1, 0x8($a2)
    ctx->pc = 0x387994u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x387998: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x387998u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_38799c:
    // 0x38799c: 0x65270022  daddiu      $a3, $t1, 0x22
    ctx->pc = 0x38799cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)34);
    // 0x3879a0: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x3879a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3879a4: 0x22f7e  dsrl32      $a1, $v0, 29
    ctx->pc = 0x3879a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 29));
    // 0x3879a8: 0xfcc70008  sd          $a3, 0x8($a2)
    ctx->pc = 0x3879a8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 7));
    // 0x3879ac: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x3879acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x3879b0: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x3879b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x3879b4: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x3879b4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x3879b8: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x3879b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3879bc: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3879BCu;
    {
        const bool branch_taken_0x3879bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3879C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3879BCu;
        // 0x3879c0: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3879bc) {
            ctx->pc = 0x387A2Cu;
            goto label_387a2c;
        }
    }
    ctx->pc = 0x3879C4u;
    // 0x3879c4: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x3879c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x3879c8: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3879c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3879cc: 0x57882  srl         $t7, $a1, 2
    ctx->pc = 0x3879ccu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x3879d0: 0x57780  sll         $t6, $a1, 30
    ctx->pc = 0x3879d0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 5), 30));
    // 0x3879d4: 0x0  nop
    ctx->pc = 0x3879d4u;
    // NOP
label_3879d8:
    // 0x3879d8: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x3879d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x3879dc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x3879dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x3879e0: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x3879e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3879e4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3879e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3879e8: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x3879e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3879ec: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x3879ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3879f0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x3879f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x3879f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3879f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3879f8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3879f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3879fc: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x3879fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x387a00: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x387a00u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x387a04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x387A04u;
    {
        const bool branch_taken_0x387a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A04u;
        // 0x387a08: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387a04) {
            ctx->pc = 0x387A14u;
            goto label_387a14;
        }
    }
    ctx->pc = 0x387A0Cu;
    // 0x387a0c: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x387a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x387a10: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x387a10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_387a14:
    // 0x387a14: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x387a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x387a18: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x387a18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x387a1c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x387A1Cu;
    {
        const bool branch_taken_0x387a1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x387A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A1Cu;
        // 0x387a20: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387a1c) {
            ctx->pc = 0x3879D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3879d8;
        }
    }
    ctx->pc = 0x387A24u;
    // 0x387a24: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x387A24u;
    {
        const bool branch_taken_0x387a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A24u;
        // 0x387a28: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387a24) {
            ctx->pc = 0x387A3Cu;
            goto label_387a3c;
        }
    }
    ctx->pc = 0x387A2Cu;
label_387a2c:
    // 0x387a2c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x387a2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387a30: 0x57882  srl         $t7, $a1, 2
    ctx->pc = 0x387a30u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x387a34: 0x57780  sll         $t6, $a1, 30
    ctx->pc = 0x387a34u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 5), 30));
    // 0x387a38: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x387a38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_387a3c:
    // 0x387a3c: 0x65250003  daddiu      $a1, $t1, 0x3
    ctx->pc = 0x387a3cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)3);
    // 0x387a40: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x387a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x387a44: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x387a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x387a48: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x387a48u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x387a4c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x387a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x387a50: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x387a50u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x387a54: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x387a54u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x387a58: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x387A58u;
    {
        const bool branch_taken_0x387a58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x387A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A58u;
        // 0x387a5c: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387a58) {
            ctx->pc = 0x387ABCu;
            goto label_387abc;
        }
    }
    ctx->pc = 0x387A60u;
    // 0x387a60: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x387a60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x387a64: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x387a64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_387a68:
    // 0x387a68: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x387a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x387a6c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x387a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x387a70: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x387a70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x387a74: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x387a74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x387a78: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x387a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x387a7c: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x387a7cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x387a80: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x387a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x387a84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x387a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x387a88: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x387a88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x387a8c: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x387a8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x387a90: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x387a90u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x387a94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x387A94u;
    {
        const bool branch_taken_0x387a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A94u;
        // 0x387a98: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387a94) {
            ctx->pc = 0x387AA4u;
            goto label_387aa4;
        }
    }
    ctx->pc = 0x387A9Cu;
    // 0x387a9c: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x387a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x387aa0: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x387aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_387aa4:
    // 0x387aa4: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x387aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x387aa8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x387aa8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x387aac: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x387AACu;
    {
        const bool branch_taken_0x387aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x387AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387AACu;
        // 0x387ab0: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387aac) {
            ctx->pc = 0x387A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387a68;
        }
    }
    ctx->pc = 0x387AB4u;
    // 0x387ab4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x387AB4u;
    {
        const bool branch_taken_0x387ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387AB4u;
        // 0x387ab8: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387ab4) {
            ctx->pc = 0x387AC4u;
            goto label_387ac4;
        }
    }
    ctx->pc = 0x387ABCu;
label_387abc:
    // 0x387abc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x387abcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387ac0: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x387ac0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_387ac4:
    // 0x387ac4: 0x65250001  daddiu      $a1, $t1, 0x1
    ctx->pc = 0x387ac4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x387ac8: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x387ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x387acc: 0x23c7e  dsrl32      $a3, $v0, 17
    ctx->pc = 0x387accu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 17));
    // 0x387ad0: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x387ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x387ad4: 0x2463fff1  addiu       $v1, $v1, -0xF
    ctx->pc = 0x387ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
    // 0x387ad8: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x387ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x387adc: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x387adcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x387ae0: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x387ae0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x387ae4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x387AE4u;
    {
        const bool branch_taken_0x387ae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x387AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387AE4u;
        // 0x387ae8: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387ae4) {
            ctx->pc = 0x387B4Cu;
            goto label_387b4c;
        }
    }
    ctx->pc = 0x387AECu;
    // 0x387aec: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x387aecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x387af0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x387af0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387af4: 0x75bc0  sll         $t3, $a3, 15
    ctx->pc = 0x387af4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 15));
label_387af8:
    // 0x387af8: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x387af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x387afc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x387afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x387b00: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x387b00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x387b04: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x387b04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x387b08: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x387b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x387b0c: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x387b0cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x387b10: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x387b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x387b14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x387b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x387b18: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x387b18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x387b1c: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x387b1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x387b20: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x387b20u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x387b24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x387B24u;
    {
        const bool branch_taken_0x387b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B24u;
        // 0x387b28: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387b24) {
            ctx->pc = 0x387B34u;
            goto label_387b34;
        }
    }
    ctx->pc = 0x387B2Cu;
    // 0x387b2c: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x387b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x387b30: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x387b30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_387b34:
    // 0x387b34: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x387b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x387b38: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x387b38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x387b3c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x387B3Cu;
    {
        const bool branch_taken_0x387b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x387B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B3Cu;
        // 0x387b40: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387b3c) {
            ctx->pc = 0x387AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387af8;
        }
    }
    ctx->pc = 0x387B44u;
    // 0x387b44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x387B44u;
    {
        const bool branch_taken_0x387b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B44u;
        // 0x387b48: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387b44) {
            ctx->pc = 0x387B58u;
            goto label_387b58;
        }
    }
    ctx->pc = 0x387B4Cu;
label_387b4c:
    // 0x387b4c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x387b4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387b50: 0x75bc0  sll         $t3, $a3, 15
    ctx->pc = 0x387b50u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 15));
    // 0x387b54: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x387b54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_387b58:
    // 0x387b58: 0x6525000f  daddiu      $a1, $t1, 0xF
    ctx->pc = 0x387b58u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)15);
    // 0x387b5c: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x387b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x387b60: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x387b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x387b64: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x387b64u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x387b68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x387b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x387b6c: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x387b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x387b70: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x387b70u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x387b74: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x387B74u;
    {
        const bool branch_taken_0x387b74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x387B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B74u;
        // 0x387b78: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387b74) {
            ctx->pc = 0x387BDCu;
            goto label_387bdc;
        }
    }
    ctx->pc = 0x387B7Cu;
    // 0x387b7c: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x387b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x387b80: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x387b80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387b84: 0x0  nop
    ctx->pc = 0x387b84u;
    // NOP
label_387b88:
    // 0x387b88: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x387b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x387b8c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x387b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x387b90: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x387b90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x387b94: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x387b94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x387b98: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x387b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x387b9c: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x387b9cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x387ba0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x387ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x387ba4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x387ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x387ba8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x387ba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x387bac: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x387bacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x387bb0: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x387bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x387bb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x387BB4u;
    {
        const bool branch_taken_0x387bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387BB4u;
        // 0x387bb8: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387bb4) {
            ctx->pc = 0x387BC4u;
            goto label_387bc4;
        }
    }
    ctx->pc = 0x387BBCu;
    // 0x387bbc: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x387bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x387bc0: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x387bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_387bc4:
    // 0x387bc4: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x387bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x387bc8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x387bc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x387bcc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x387BCCu;
    {
        const bool branch_taken_0x387bcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x387BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387BCCu;
        // 0x387bd0: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387bcc) {
            ctx->pc = 0x387B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387b88;
        }
    }
    ctx->pc = 0x387BD4u;
    // 0x387bd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x387BD4u;
    {
        const bool branch_taken_0x387bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387BD4u;
        // 0x387bd8: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387bd4) {
            ctx->pc = 0x387BE4u;
            goto label_387be4;
        }
    }
    ctx->pc = 0x387BDCu;
label_387bdc:
    // 0x387bdc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x387bdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387be0: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x387be0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_387be4:
    // 0x387be4: 0x65250001  daddiu      $a1, $t1, 0x1
    ctx->pc = 0x387be4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x387be8: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x387be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x387bec: 0x2c47e  dsrl32      $t8, $v0, 17
    ctx->pc = 0x387becu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 2) >> (32 + 17));
    // 0x387bf0: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x387bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x387bf4: 0x2463fff1  addiu       $v1, $v1, -0xF
    ctx->pc = 0x387bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
    // 0x387bf8: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x387bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x387bfc: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x387bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x387c00: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x387c00u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x387c04: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x387C04u;
    {
        const bool branch_taken_0x387c04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x387C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C04u;
        // 0x387c08: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387c04) {
            ctx->pc = 0x387C6Cu;
            goto label_387c6c;
        }
    }
    ctx->pc = 0x387C0Cu;
    // 0x387c0c: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x387c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x387c10: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x387c10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387c14: 0x0  nop
    ctx->pc = 0x387c14u;
    // NOP
label_387c18:
    // 0x387c18: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x387c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x387c1c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x387c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x387c20: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x387c20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x387c24: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x387c24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x387c28: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x387c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x387c2c: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x387c2cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x387c30: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x387c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x387c34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x387c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x387c38: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x387c38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x387c3c: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x387c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x387c40: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x387c40u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x387c44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x387C44u;
    {
        const bool branch_taken_0x387c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C44u;
        // 0x387c48: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387c44) {
            ctx->pc = 0x387C54u;
            goto label_387c54;
        }
    }
    ctx->pc = 0x387C4Cu;
    // 0x387c4c: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x387c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x387c50: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x387c50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_387c54:
    // 0x387c54: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x387c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x387c58: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x387c58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x387c5c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x387C5Cu;
    {
        const bool branch_taken_0x387c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x387C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C5Cu;
        // 0x387c60: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387c5c) {
            ctx->pc = 0x387C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387c18;
        }
    }
    ctx->pc = 0x387C64u;
    // 0x387c64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x387C64u;
    {
        const bool branch_taken_0x387c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C64u;
        // 0x387c68: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387c64) {
            ctx->pc = 0x387C74u;
            goto label_387c74;
        }
    }
    ctx->pc = 0x387C6Cu;
label_387c6c:
    // 0x387c6c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x387c6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387c70: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x387c70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_387c74:
    // 0x387c74: 0x6525000f  daddiu      $a1, $t1, 0xF
    ctx->pc = 0x387c74u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)15);
    // 0x387c78: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x387c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x387c7c: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x387c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x387c80: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x387c80u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x387c84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x387c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x387c88: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x387c88u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x387c8c: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x387c8cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x387c90: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x387C90u;
    {
        const bool branch_taken_0x387c90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x387C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C90u;
        // 0x387c94: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387c90) {
            ctx->pc = 0x387CF4u;
            goto label_387cf4;
        }
    }
    ctx->pc = 0x387C98u;
    // 0x387c98: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x387c98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x387c9c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x387c9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_387ca0:
    // 0x387ca0: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x387ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x387ca4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x387ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x387ca8: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x387ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x387cac: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x387cacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x387cb0: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x387cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x387cb4: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x387cb4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x387cb8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x387cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x387cbc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x387cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x387cc0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x387cc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x387cc4: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x387cc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x387cc8: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x387cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x387ccc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x387CCCu;
    {
        const bool branch_taken_0x387ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387CCCu;
        // 0x387cd0: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387ccc) {
            ctx->pc = 0x387CDCu;
            goto label_387cdc;
        }
    }
    ctx->pc = 0x387CD4u;
    // 0x387cd4: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x387cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x387cd8: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x387cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_387cdc:
    // 0x387cdc: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x387cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x387ce0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x387ce0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x387ce4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x387CE4u;
    {
        const bool branch_taken_0x387ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x387CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387CE4u;
        // 0x387ce8: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387ce4) {
            ctx->pc = 0x387CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387ca0;
        }
    }
    ctx->pc = 0x387CECu;
    // 0x387cec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x387CECu;
    {
        const bool branch_taken_0x387cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387CECu;
        // 0x387cf0: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387cec) {
            ctx->pc = 0x387CFCu;
            goto label_387cfc;
        }
    }
    ctx->pc = 0x387CF4u;
label_387cf4:
    // 0x387cf4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x387cf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387cf8: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x387cf8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_387cfc:
    // 0x387cfc: 0x65250001  daddiu      $a1, $t1, 0x1
    ctx->pc = 0x387cfcu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x387d00: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x387d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x387d04: 0x255fe  dsrl32      $t2, $v0, 23
    ctx->pc = 0x387d04u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) >> (32 + 23));
    // 0x387d08: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x387d08u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x387d0c: 0x2463fff7  addiu       $v1, $v1, -0x9
    ctx->pc = 0x387d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967287));
    // 0x387d10: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x387d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x387d14: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x387d14u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x387d18: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x387d18u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x387d1c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x387D1Cu;
    {
        const bool branch_taken_0x387d1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x387D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D1Cu;
        // 0x387d20: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387d1c) {
            ctx->pc = 0x387D84u;
            goto label_387d84;
        }
    }
    ctx->pc = 0x387D24u;
    // 0x387d24: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x387d24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x387d28: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x387d28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387d2c: 0x0  nop
    ctx->pc = 0x387d2cu;
    // NOP
label_387d30:
    // 0x387d30: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x387d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x387d34: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x387d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x387d38: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x387d38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x387d3c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x387d3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x387d40: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x387d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x387d44: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x387d44u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x387d48: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x387d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x387d4c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x387d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x387d50: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x387d50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x387d54: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x387d54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x387d58: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x387d58u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x387d5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x387D5Cu;
    {
        const bool branch_taken_0x387d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D5Cu;
        // 0x387d60: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387d5c) {
            ctx->pc = 0x387D6Cu;
            goto label_387d6c;
        }
    }
    ctx->pc = 0x387D64u;
    // 0x387d64: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x387d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x387d68: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x387d68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_387d6c:
    // 0x387d6c: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x387d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x387d70: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x387d70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x387d74: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x387D74u;
    {
        const bool branch_taken_0x387d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x387D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D74u;
        // 0x387d78: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387d74) {
            ctx->pc = 0x387D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387d30;
        }
    }
    ctx->pc = 0x387D7Cu;
    // 0x387d7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x387D7Cu;
    {
        const bool branch_taken_0x387d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D7Cu;
        // 0x387d80: 0xadaa0000  sw          $t2, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387d7c) {
            ctx->pc = 0x387D8Cu;
            goto label_387d8c;
        }
    }
    ctx->pc = 0x387D84u;
label_387d84:
    // 0x387d84: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x387d84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387d88: 0xadaa0000  sw          $t2, 0x0($t5)
    ctx->pc = 0x387d88u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 10));
label_387d8c:
    // 0x387d8c: 0x65250009  daddiu      $a1, $t1, 0x9
    ctx->pc = 0x387d8cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)9);
    // 0x387d90: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x387d90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x387d94: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x387d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x387d98: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x387d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x387d9c: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x387d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x387da0: 0x2463ffe2  addiu       $v1, $v1, -0x1E
    ctx->pc = 0x387da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967266));
    // 0x387da4: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x387da4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x387da8: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x387da8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x387dac: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x387DACu;
    {
        const bool branch_taken_0x387dac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x387DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387DACu;
        // 0x387db0: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387dac) {
            ctx->pc = 0x387E14u;
            goto label_387e14;
        }
    }
    ctx->pc = 0x387DB4u;
    // 0x387db4: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x387db4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x387db8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x387db8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387dbc: 0x0  nop
    ctx->pc = 0x387dbcu;
    // NOP
label_387dc0:
    // 0x387dc0: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x387dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x387dc4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x387dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x387dc8: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x387dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x387dcc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x387dccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x387dd0: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x387dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x387dd4: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x387dd4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x387dd8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x387dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x387ddc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x387ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x387de0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x387de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x387de4: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x387de4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x387de8: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x387de8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x387dec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x387DECu;
    {
        const bool branch_taken_0x387dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387DECu;
        // 0x387df0: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387dec) {
            ctx->pc = 0x387DFCu;
            goto label_387dfc;
        }
    }
    ctx->pc = 0x387DF4u;
    // 0x387df4: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x387df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x387df8: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x387df8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_387dfc:
    // 0x387dfc: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x387dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x387e00: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x387e00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x387e04: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x387E04u;
    {
        const bool branch_taken_0x387e04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x387E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387E04u;
        // 0x387e08: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387e04) {
            ctx->pc = 0x387DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387dc0;
        }
    }
    ctx->pc = 0x387E0Cu;
    // 0x387e0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x387E0Cu;
    {
        const bool branch_taken_0x387e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387E0Cu;
        // 0x387e10: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387e0c) {
            ctx->pc = 0x387E1Cu;
            goto label_387e1c;
        }
    }
    ctx->pc = 0x387E14u;
label_387e14:
    // 0x387e14: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x387e14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387e18: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x387e18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_387e1c:
    // 0x387e1c: 0x6525001e  daddiu      $a1, $t1, 0x1E
    ctx->pc = 0x387e1cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)30);
    // 0x387e20: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x387e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x387e24: 0x2677e  dsrl32      $t4, $v0, 29
    ctx->pc = 0x387e24u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) >> (32 + 29));
    // 0x387e28: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x387e28u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x387e2c: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x387e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x387e30: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x387e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x387e34: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x387e34u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x387e38: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x387e38u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x387e3c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x387E3Cu;
    {
        const bool branch_taken_0x387e3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x387E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387E3Cu;
        // 0x387e40: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387e3c) {
            ctx->pc = 0x387EA4u;
            goto label_387ea4;
        }
    }
    ctx->pc = 0x387E44u;
    // 0x387e44: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x387e44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x387e48: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x387e48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387e4c: 0x0  nop
    ctx->pc = 0x387e4cu;
    // NOP
label_387e50:
    // 0x387e50: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x387e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x387e54: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x387e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x387e58: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x387e58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x387e5c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x387e5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x387e60: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x387e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x387e64: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x387e64u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x387e68: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x387e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x387e6c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x387e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x387e70: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x387e70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x387e74: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x387e74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x387e78: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x387e78u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x387e7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x387E7Cu;
    {
        const bool branch_taken_0x387e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387E7Cu;
        // 0x387e80: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387e7c) {
            ctx->pc = 0x387E8Cu;
            goto label_387e8c;
        }
    }
    ctx->pc = 0x387E84u;
    // 0x387e84: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x387e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x387e88: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x387e88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_387e8c:
    // 0x387e8c: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x387e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x387e90: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x387e90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x387e94: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x387E94u;
    {
        const bool branch_taken_0x387e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x387E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387E94u;
        // 0x387e98: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387e94) {
            ctx->pc = 0x387E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387e50;
        }
    }
    ctx->pc = 0x387E9Cu;
    // 0x387e9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x387E9Cu;
    {
        const bool branch_taken_0x387e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387E9Cu;
        // 0x387ea0: 0x1cb1025  or          $v0, $t6, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387e9c) {
            ctx->pc = 0x387EACu;
            goto label_387eac;
        }
    }
    ctx->pc = 0x387EA4u;
label_387ea4:
    // 0x387ea4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x387ea4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387ea8: 0x1cb1025  or          $v0, $t6, $t3
    ctx->pc = 0x387ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 11));
label_387eac:
    // 0x387eac: 0x65230003  daddiu      $v1, $t1, 0x3
    ctx->pc = 0x387eacu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)3);
    // 0x387eb0: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x387eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x387eb4: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x387eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x387eb8: 0xada20004  sw          $v0, 0x4($t5)
    ctx->pc = 0x387eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 2));
    // 0x387ebc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x387ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387ec0: 0x1180002a  beqz        $t4, . + 4 + (0x2A << 2)
    ctx->pc = 0x387EC0u;
    {
        const bool branch_taken_0x387ec0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x387EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387EC0u;
        // 0x387ec4: 0xadaf0008  sw          $t7, 0x8($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387ec0) {
            ctx->pc = 0x387F6Cu;
            goto label_387f6c;
        }
    }
    ctx->pc = 0x387EC8u;
    // 0x387ec8: 0x240b0038  addiu       $t3, $zero, 0x38
    ctx->pc = 0x387ec8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x387ecc: 0x0  nop
    ctx->pc = 0x387eccu;
    // NOP
label_387ed0:
    // 0x387ed0: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x387ed0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x387ed4: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x387ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x387ed8: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x387ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x387edc: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x387edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x387ee0: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x387ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x387ee4: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x387ee4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x387ee8: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x387EE8u;
    {
        const bool branch_taken_0x387ee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x387EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387EE8u;
        // 0x387eec: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387ee8) {
            ctx->pc = 0x387F50u;
            goto label_387f50;
        }
    }
    ctx->pc = 0x387EF0u;
    // 0x387ef0: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x387ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x387ef4: 0x24aa0001  addiu       $t2, $a1, 0x1
    ctx->pc = 0x387ef4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x387ef8: 0xdcc90008  ld          $t1, 0x8($a2)
    ctx->pc = 0x387ef8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x387efc: 0x0  nop
    ctx->pc = 0x387efcu;
    // NOP
label_387f00:
    // 0x387f00: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x387f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x387f04: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x387f04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x387f08: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x387f08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x387f0c: 0xdcc50000  ld          $a1, 0x0($a2)
    ctx->pc = 0x387f0cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x387f10: 0x1671023  subu        $v0, $t3, $a3
    ctx->pc = 0x387f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x387f14: 0x442014  dsllv       $a0, $a0, $v0
    ctx->pc = 0x387f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x387f18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x387f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x387f1c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x387f1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x387f20: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x387f20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x387f24: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x387f24u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x387f28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x387F28u;
    {
        const bool branch_taken_0x387f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387F28u;
        // 0x387f2c: 0xacc30014  sw          $v1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387f28) {
            ctx->pc = 0x387F38u;
            goto label_387f38;
        }
    }
    ctx->pc = 0x387F30u;
    // 0x387f30: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x387f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x387f34: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x387f34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_387f38:
    // 0x387f38: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x387f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x387f3c: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x387f3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x387f40: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x387F40u;
    {
        const bool branch_taken_0x387f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x387F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387F40u;
        // 0x387f44: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387f40) {
            ctx->pc = 0x387F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387f00;
        }
    }
    ctx->pc = 0x387F48u;
    // 0x387f48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x387F48u;
    {
        const bool branch_taken_0x387f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387F48u;
        // 0x387f4c: 0x65230008  daddiu      $v1, $t1, 0x8 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x387f48) {
            ctx->pc = 0x387F5Cu;
            goto label_387f5c;
        }
    }
    ctx->pc = 0x387F50u;
label_387f50:
    // 0x387f50: 0xdcc90008  ld          $t1, 0x8($a2)
    ctx->pc = 0x387f50u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x387f54: 0x24aa0001  addiu       $t2, $a1, 0x1
    ctx->pc = 0x387f54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x387f58: 0x65230008  daddiu      $v1, $t1, 0x8
    ctx->pc = 0x387f58u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)8);
label_387f5c:
    // 0x387f5c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x387f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387f60: 0xac102b  sltu        $v0, $a1, $t4
    ctx->pc = 0x387f60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x387f64: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x387F64u;
    {
        const bool branch_taken_0x387f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387F64u;
        // 0x387f68: 0xfcc30008  sd          $v1, 0x8($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387f64) {
            ctx->pc = 0x387ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387ed0;
        }
    }
    ctx->pc = 0x387F6Cu;
label_387f6c:
    // 0x387f6c: 0x9cc20004  lwu         $v0, 0x4($a2)
    ctx->pc = 0x387f6cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x387f70: 0x240301bb  addiu       $v1, $zero, 0x1BB
    ctx->pc = 0x387f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 443));
    // 0x387f74: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x387f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x387f78: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x387f78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x387f7c: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x387F7Cu;
    {
        const bool branch_taken_0x387f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x387f7c) {
            ctx->pc = 0x387F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387F7Cu;
            // 0x387f80: 0xada0000c  sw          $zero, 0xC($t5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387FA0u;
            goto label_387fa0;
        }
    }
    ctx->pc = 0x387F84u;
    // 0x387f84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x387f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x387f88: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x387f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387f8c: 0xada2000c  sw          $v0, 0xC($t5)
    ctx->pc = 0x387f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 2));
    // 0x387f90: 0xc0e1dce  jal         func_387738
    ctx->pc = 0x387F90u;
    SET_GPR_U32(ctx, 31, 0x387F98u);
    ctx->pc = 0x387F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387F90u;
    // 0x387f94: 0x1a0282d  daddu       $a1, $t5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387738u, 0x387F90u, 0x387F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387F98u;
label_387f98:
    // 0x387f98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x387F98u;
    {
        const bool branch_taken_0x387f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387F98u;
        // 0x387f9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387f98) {
            ctx->pc = 0x387FA4u;
            goto label_387fa4;
        }
    }
    ctx->pc = 0x387FA0u;
label_387fa0:
    // 0x387fa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x387fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_387fa4:
    // 0x387fa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x387fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x387fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x387FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387FA8u;
        // 0x387fac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387FB0u;
}
