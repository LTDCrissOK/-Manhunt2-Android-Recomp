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

// Function: sub_001F0870
// Address: 0x1f0870 - 0x1f08d0
void sub_001F0870_0x1f0870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0870_0x1f0870");
#endif

    switch (ctx->pc) {
        case 0x1f08a0u: goto label_1f08a0;
        default: break;
    }

    ctx->pc = 0x1f0870u;

    // 0x1f0870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f0870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f0874: 0x3402935c  ori         $v0, $zero, 0x935C
    ctx->pc = 0x1f0874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37724);
    // 0x1f0878: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f0878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f087c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f087cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0880: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f0880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f0884: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x1f0884u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f0888: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x1f0888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1f088c: 0x920513cc  lbu         $a1, 0x13CC($s0)
    ctx->pc = 0x1f088cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5068)));
    // 0x1f0890: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1f0890u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1f0894: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1f0894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f0898: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1F0898u;
    SET_GPR_U32(ctx, 31, 0x1F08A0u);
    ctx->pc = 0x1F089Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0898u;
    // 0x1f089c: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F0898u, 0x1F08A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F08A0u;
label_1f08a0:
    // 0x1f08a0: 0x920313cc  lbu         $v1, 0x13CC($s0)
    ctx->pc = 0x1f08a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5068)));
    // 0x1f08a4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f08a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f08a8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F08A8u;
    {
        const bool branch_taken_0x1f08a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f08a8) {
            ctx->pc = 0x1F08ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F08A8u;
            // 0x1f08ac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F08B0u;
            goto label_1f08b0;
        }
    }
    ctx->pc = 0x1F08B0u;
label_1f08b0:
    // 0x1f08b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f08b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f08b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f08b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f08b8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1f08b8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f08bc: 0x2010  mfhi        $a0
    ctx->pc = 0x1f08bcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1f08c0: 0xa20413cc  sb          $a0, 0x13CC($s0)
    ctx->pc = 0x1f08c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5068), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f08c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f08c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f08c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F08C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F08CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F08C8u;
        // 0x1f08cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F08C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F08D0u;
}
