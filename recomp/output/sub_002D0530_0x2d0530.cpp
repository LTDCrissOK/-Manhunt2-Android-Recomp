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

// Function: sub_002D0530
// Address: 0x2d0530 - 0x2d0598
void sub_002D0530_0x2d0530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0530_0x2d0530");
#endif

    switch (ctx->pc) {
        case 0x2d0544u: goto label_2d0544;
        default: break;
    }

    ctx->pc = 0x2d0530u;

    // 0x2d0530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d0530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d0534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d0534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d0538: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d0538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d053c: 0xc0b4148  jal         func_2D0520
    ctx->pc = 0x2D053Cu;
    SET_GPR_U32(ctx, 31, 0x2D0544u);
    ctx->pc = 0x2D0540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D053Cu;
    // 0x2d0540: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0520u, 0x2D053Cu, 0x2D0544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0544u;
label_2d0544:
    // 0x2d0544: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2D0544u;
    {
        const bool branch_taken_0x2d0544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0544) {
            ctx->pc = 0x2D0548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0544u;
            // 0x2d0548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0584u;
            goto label_2d0584;
        }
    }
    ctx->pc = 0x2D054Cu;
    // 0x2d054c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2d054cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d0550: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x2d0550u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x2d0554: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2d0554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d0558: 0x34c6ce40  ori         $a2, $a2, 0xCE40
    ctx->pc = 0x2d0558u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52800);
    // 0x2d055c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2d055cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d0560: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2d0560u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d0564: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2d0564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d0568: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D0568u;
    {
        const bool branch_taken_0x2d0568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0568) {
            ctx->pc = 0x2D056Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0568u;
            // 0x2d056c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0570u;
            goto label_2d0570;
        }
    }
    ctx->pc = 0x2D0570u;
label_2d0570:
    // 0x2d0570: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x2d0570u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d0574: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2d0574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d0578: 0x1010  mfhi        $v0
    ctx->pc = 0x2d0578u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2d057c: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x2d057cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d0580: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2d0580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2d0584:
    // 0x2d0584: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d0584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0588: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d0588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d058c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D058Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D058Cu;
        // 0x2d0590: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D058Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0594u;
    // 0x2d0594: 0x0  nop
    ctx->pc = 0x2d0594u;
    // NOP
    ctx->pc = 0x2d0598u;
}
