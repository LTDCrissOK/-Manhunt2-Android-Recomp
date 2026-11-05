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

// Function: sub_003AE670
// Address: 0x3ae670 - 0x3ae778
void sub_003AE670_0x3ae670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE670_0x3ae670");
#endif

    ctx->pc = 0x3ae670u;

    // 0x3ae670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ae670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ae674: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x3ae674u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ae678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ae67c: 0x27050048  addiu       $a1, $t8, 0x48
    ctx->pc = 0x3ae67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), 72));
    // 0x3ae680: 0x8cae0008  lw          $t6, 0x8($a1)
    ctx->pc = 0x3ae680u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ae684: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x3ae684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ae688: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3AE688u;
    {
        const bool branch_taken_0x3ae688 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae688) {
            ctx->pc = 0x3AE68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE688u;
            // 0x3ae68c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE690u;
            goto label_3ae690;
        }
    }
    ctx->pc = 0x3AE690u;
label_3ae690:
    // 0x3ae690: 0x8caf0018  lw          $t7, 0x18($a1)
    ctx->pc = 0x3ae690u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3ae694: 0xce001a  div         $zero, $a2, $t6
    ctx->pc = 0x3ae694u;
    { int32_t divisor = GPR_S32(ctx, 14);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3ae698: 0x8ca80020  lw          $t0, 0x20($a1)
    ctx->pc = 0x3ae698u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3ae69c: 0x8ca90010  lw          $t1, 0x10($a1)
    ctx->pc = 0x3ae69cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3ae6a0: 0x1e81023  subu        $v0, $t7, $t0
    ctx->pc = 0x3ae6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x3ae6a4: 0x8ca70028  lw          $a3, 0x28($a1)
    ctx->pc = 0x3ae6a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x3ae6a8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3ae6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3ae6ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ae6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ae6b0: 0xe91821  addu        $v1, $a3, $t1
    ctx->pc = 0x3ae6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3ae6b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ae6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ae6b8: 0x8cac0024  lw          $t4, 0x24($a1)
    ctx->pc = 0x3ae6b8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x3ae6bc: 0xec382a  slt         $a3, $a3, $t4
    ctx->pc = 0x3ae6bcu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x3ae6c0: 0x3012  mflo        $a2
    ctx->pc = 0x3ae6c0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3ae6c4: 0x49001a  div         $zero, $v0, $t1
    ctx->pc = 0x3ae6c4u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3ae6c8: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x3ae6c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae6cc: 0x1012  mflo        $v0
    ctx->pc = 0x3ae6ccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3ae6d0: 0x69001a  div         $zero, $v1, $t1
    ctx->pc = 0x3ae6d0u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3ae6d4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x3ae6d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae6d8: 0x6812  mflo        $t5
    ctx->pc = 0x3ae6d8u;
    SET_GPR_U64(ctx, 13, ctx->lo);
    // 0x3ae6dc: 0x2810  mfhi        $a1
    ctx->pc = 0x3ae6dcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x3ae6e0: 0x1691818  mult        $v1, $t3, $t1
    ctx->pc = 0x3ae6e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3ae6e4: 0x1252823  subu        $a1, $t1, $a1
    ctx->pc = 0x3ae6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x3ae6e8: 0x1ab102a  slt         $v0, $t5, $t3
    ctx->pc = 0x3ae6e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x3ae6ec: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3ae6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3ae6f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AE6F0u;
    {
        const bool branch_taken_0x3ae6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE6F0u;
        // 0x3ae6f4: 0x1034021  addu        $t0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae6f0) {
            ctx->pc = 0x3AE704u;
            goto label_3ae704;
        }
    }
    ctx->pc = 0x3AE6F8u;
    // 0x3ae6f8: 0x1051023  subu        $v0, $t0, $a1
    ctx->pc = 0x3ae6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x3ae6fc: 0x4f102a  slt         $v0, $v0, $t7
    ctx->pc = 0x3ae6fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x3ae700: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x3ae700u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_3ae704:
    // 0x3ae704: 0xe51018  mult        $v0, $a3, $a1
    ctx->pc = 0x3ae704u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3ae708: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3ae708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ae70c: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3AE70Cu;
    {
        const bool branch_taken_0x3ae70c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae70c) {
            ctx->pc = 0x3AE710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE70Cu;
            // 0x3ae710: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE714u;
            goto label_3ae714;
        }
    }
    ctx->pc = 0x3AE714u;
label_3ae714:
    // 0x3ae714: 0x4c6021  addu        $t4, $v0, $t4
    ctx->pc = 0x3ae714u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x3ae718: 0x189001a  div         $zero, $t4, $t1
    ctx->pc = 0x3ae718u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3ae71c: 0x2812  mflo        $a1
    ctx->pc = 0x3ae71cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x3ae720: 0xaa102a  slt         $v0, $a1, $t2
    ctx->pc = 0x3ae720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x3ae724: 0xa2500b  movn        $t2, $a1, $v0
    ctx->pc = 0x3ae724u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 5));
    // 0x3ae728: 0x1aa182a  slt         $v1, $t5, $t2
    ctx->pc = 0x3ae728u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x3ae72c: 0x1a3500b  movn        $t2, $t5, $v1
    ctx->pc = 0x3ae72cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 13));
    // 0x3ae730: 0x16a102a  slt         $v0, $t3, $t2
    ctx->pc = 0x3ae730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x3ae734: 0x15c60006  bne         $t6, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AE734u;
    {
        const bool branch_taken_0x3ae734 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 6));
        ctx->pc = 0x3AE738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE734u;
        // 0x3ae738: 0x162500b  movn        $t2, $t3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae734) {
            ctx->pc = 0x3AE750u;
            goto label_3ae750;
        }
    }
    ctx->pc = 0x3AE73Cu;
    // 0x3ae73c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ae73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae740: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3ae740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae744: 0x80eb970  j           func_3AE5C0
    ctx->pc = 0x3AE744u;
    ctx->pc = 0x3AE748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE744u;
    // 0x3ae748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE5C0u, 0x3AE744u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE74Cu;
    // 0x3ae74c: 0x0  nop
    ctx->pc = 0x3ae74cu;
    // NOP
label_3ae750:
    // 0x3ae750: 0x8f0200e8  lw          $v0, 0xE8($t8)
    ctx->pc = 0x3ae750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 232)));
    // 0x3ae754: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AE754u;
    {
        const bool branch_taken_0x3ae754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE754u;
        // 0x3ae758: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae754) {
            ctx->pc = 0x3AE768u;
            goto label_3ae768;
        }
    }
    ctx->pc = 0x3AE75Cu;
    // 0x3ae75c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3ae75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae760: 0x80eb986  j           func_3AE618
    ctx->pc = 0x3AE760u;
    ctx->pc = 0x3AE764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE760u;
    // 0x3ae764: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE618u, 0x3AE760u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE768u;
label_3ae768:
    // 0x3ae768: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3ae768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae76c: 0x80eb95c  j           func_3AE570
    ctx->pc = 0x3AE76Cu;
    ctx->pc = 0x3AE770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE76Cu;
    // 0x3ae770: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE570u, 0x3AE76Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE774u;
    // 0x3ae774: 0x0  nop
    ctx->pc = 0x3ae774u;
    // NOP
    ctx->pc = 0x3ae778u;
}
