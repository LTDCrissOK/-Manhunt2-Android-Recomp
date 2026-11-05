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

// Function: sub_00387738
// Address: 0x387738 - 0x387908
void sub_00387738_0x387738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387738_0x387738");
#endif

    switch (ctx->pc) {
        case 0x387768u: goto label_387768;
        case 0x3877f0u: goto label_3877f0;
        case 0x387870u: goto label_387870;
        case 0x387890u: goto label_387890;
        default: break;
    }

    ctx->pc = 0x387738u;

    // 0x387738: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x387738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38773c: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x38773cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x387740: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x387740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x387744: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x387744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x387748: 0x2463ffc8  addiu       $v1, $v1, -0x38
    ctx->pc = 0x387748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967240));
    // 0x38774c: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x38774cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x387750: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x387750u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x387754: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x387754u;
    {
        const bool branch_taken_0x387754 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x387758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387754u;
        // 0x387758: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387754) {
            ctx->pc = 0x3877BCu;
            goto label_3877bc;
        }
    }
    ctx->pc = 0x38775Cu;
    // 0x38775c: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x38775cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x387760: 0xdcc90008  ld          $t1, 0x8($a2)
    ctx->pc = 0x387760u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x387764: 0x0  nop
    ctx->pc = 0x387764u;
    // NOP
label_387768:
    // 0x387768: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x387768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x38776c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x38776cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x387770: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x387770u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x387774: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x387774u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x387778: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x387778u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x38777c: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x38777cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x387780: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x387780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x387784: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x387784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x387788: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x387788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x38778c: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x38778cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x387790: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x387790u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x387794: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x387794u;
    {
        const bool branch_taken_0x387794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387794u;
        // 0x387798: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387794) {
            ctx->pc = 0x3877A4u;
            goto label_3877a4;
        }
    }
    ctx->pc = 0x38779Cu;
    // 0x38779c: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x38779cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x3877a0: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x3877a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_3877a4:
    // 0x3877a4: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x3877a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x3877a8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x3877a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3877ac: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3877ACu;
    {
        const bool branch_taken_0x3877ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3877B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3877ACu;
        // 0x3877b0: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3877ac) {
            ctx->pc = 0x387768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387768;
        }
    }
    ctx->pc = 0x3877B4u;
    // 0x3877b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3877B4u;
    {
        const bool branch_taken_0x3877b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3877B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3877B4u;
        // 0x3877b8: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3877b4) {
            ctx->pc = 0x3877C4u;
            goto label_3877c4;
        }
    }
    ctx->pc = 0x3877BCu;
label_3877bc:
    // 0x3877bc: 0xdcc90008  ld          $t1, 0x8($a2)
    ctx->pc = 0x3877bcu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3877c0: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x3877c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_3877c4:
    // 0x3877c4: 0x65250038  daddiu      $a1, $t1, 0x38
    ctx->pc = 0x3877c4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)56);
    // 0x3877c8: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x3877c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3877cc: 0x2123c  dsll32      $v0, $v0, 8
    ctx->pc = 0x3877ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 8));
    // 0x3877d0: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x3877d0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x3877d4: 0x2463ffd8  addiu       $v1, $v1, -0x28
    ctx->pc = 0x3877d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
    // 0x3877d8: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x3877d8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x3877dc: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x3877dcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3877e0: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3877E0u;
    {
        const bool branch_taken_0x3877e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3877E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3877E0u;
        // 0x3877e4: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3877e0) {
            ctx->pc = 0x387844u;
            goto label_387844;
        }
    }
    ctx->pc = 0x3877E8u;
    // 0x3877e8: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x3877e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x3877ec: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x3877ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3877f0:
    // 0x3877f0: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x3877f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x3877f4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x3877f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x3877f8: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x3877f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3877fc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3877fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x387800: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x387800u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x387804: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x387804u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x387808: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x387808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x38780c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x38780cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x387810: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x387810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x387814: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x387814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x387818: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x387818u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x38781c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38781Cu;
    {
        const bool branch_taken_0x38781c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38781Cu;
        // 0x387820: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38781c) {
            ctx->pc = 0x38782Cu;
            goto label_38782c;
        }
    }
    ctx->pc = 0x387824u;
    // 0x387824: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x387824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x387828: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x387828u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_38782c:
    // 0x38782c: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x38782cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x387830: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x387830u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x387834: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x387834u;
    {
        const bool branch_taken_0x387834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x387838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387834u;
        // 0x387838: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387834) {
            ctx->pc = 0x3877F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3877f0;
        }
    }
    ctx->pc = 0x38783Cu;
    // 0x38783c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38783Cu;
    {
        const bool branch_taken_0x38783c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38783Cu;
        // 0x387840: 0x65220028  daddiu      $v0, $t1, 0x28 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)40);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38783c) {
            ctx->pc = 0x38784Cu;
            goto label_38784c;
        }
    }
    ctx->pc = 0x387844u;
label_387844:
    // 0x387844: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x387844u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387848: 0x65220028  daddiu      $v0, $t1, 0x28
    ctx->pc = 0x387848u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)40);
label_38784c:
    // 0x38784c: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x38784cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x387850: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x387850u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x387854: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x387854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x387858: 0x417fe  dsrl32      $v0, $a0, 31
    ctx->pc = 0x387858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (32 + 31));
    // 0x38785c: 0x14430028  bne         $v0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x38785Cu;
    {
        const bool branch_taken_0x38785c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x387860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38785Cu;
        // 0x387860: 0x240a0038  addiu       $t2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38785c) {
            ctx->pc = 0x387900u;
            goto label_387900;
        }
    }
    ctx->pc = 0x387864u;
    // 0x387864: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x387864u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x387868: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x387868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x38786c: 0x0  nop
    ctx->pc = 0x38786cu;
    // NOP
label_387870:
    // 0x387870: 0x41e38  dsll        $v1, $a0, 24
    ctx->pc = 0x387870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 24);
    // 0x387874: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x387874u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x387878: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x387878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x38787c: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x38787cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x387880: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x387880u;
    {
        const bool branch_taken_0x387880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x387884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387880u;
        // 0x387884: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387880) {
            ctx->pc = 0x3878E0u;
            goto label_3878e0;
        }
    }
    ctx->pc = 0x387888u;
    // 0x387888: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x387888u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x38788c: 0xdcc90008  ld          $t1, 0x8($a2)
    ctx->pc = 0x38788cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 8)));
label_387890:
    // 0x387890: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x387890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x387894: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x387894u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x387898: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x387898u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38789c: 0xdcc50000  ld          $a1, 0x0($a2)
    ctx->pc = 0x38789cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3878a0: 0x1471023  subu        $v0, $t2, $a3
    ctx->pc = 0x3878a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x3878a4: 0x442014  dsllv       $a0, $a0, $v0
    ctx->pc = 0x3878a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x3878a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3878a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3878ac: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x3878acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3878b0: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x3878b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3878b4: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x3878b4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x3878b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3878B8u;
    {
        const bool branch_taken_0x3878b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3878BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3878B8u;
        // 0x3878bc: 0xacc30014  sw          $v1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3878b8) {
            ctx->pc = 0x3878C8u;
            goto label_3878c8;
        }
    }
    ctx->pc = 0x3878C0u;
    // 0x3878c0: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x3878c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x3878c4: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x3878c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_3878c8:
    // 0x3878c8: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x3878c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x3878cc: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x3878ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3878d0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3878D0u;
    {
        const bool branch_taken_0x3878d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3878D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3878D0u;
        // 0x3878d4: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3878d0) {
            ctx->pc = 0x387890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387890;
        }
    }
    ctx->pc = 0x3878D8u;
    // 0x3878d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3878D8u;
    {
        const bool branch_taken_0x3878d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3878DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3878D8u;
        // 0x3878dc: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3878d8) {
            ctx->pc = 0x3878E8u;
            goto label_3878e8;
        }
    }
    ctx->pc = 0x3878E0u;
label_3878e0:
    // 0x3878e0: 0xdcc90008  ld          $t1, 0x8($a2)
    ctx->pc = 0x3878e0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3878e4: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x3878e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_3878e8:
    // 0x3878e8: 0x65230018  daddiu      $v1, $t1, 0x18
    ctx->pc = 0x3878e8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)24);
    // 0x3878ec: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x3878ecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x3878f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3878f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3878f4: 0x41ffe  dsrl32      $v1, $a0, 31
    ctx->pc = 0x3878f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) >> (32 + 31));
    // 0x3878f8: 0x506bffdd  beql        $v1, $t3, . + 4 + (-0x23 << 2)
    ctx->pc = 0x3878F8u;
    {
        const bool branch_taken_0x3878f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        if (branch_taken_0x3878f8) {
            ctx->pc = 0x3878FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3878F8u;
            // 0x3878fc: 0x8cc20018  lw          $v0, 0x18($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387870;
        }
    }
    ctx->pc = 0x387900u;
label_387900:
    // 0x387900: 0x3e00008  jr          $ra
    ctx->pc = 0x387900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387900u;
        // 0x387904: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387908u;
}
