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

// Function: sub_003E34B0
// Address: 0x3e34b0 - 0x3e3530
void sub_003E34B0_0x3e34b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E34B0_0x3e34b0");
#endif

    switch (ctx->pc) {
        case 0x3e34f0u: goto label_3e34f0;
        case 0x3e3504u: goto label_3e3504;
        case 0x3e3518u: goto label_3e3518;
        default: break;
    }

    ctx->pc = 0x3e34b0u;

    // 0x3e34b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e34b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e34b4: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x3e34b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x3e34b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e34b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e34bc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3e34bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3e34c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e34c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e34c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e34c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e34c8: 0x2241023  subu        $v0, $s1, $a0
    ctx->pc = 0x3e34c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x3e34cc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3e34ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e34d0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3e34d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3e34d4: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x3e34d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3e34d8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E34D8u;
    {
        const bool branch_taken_0x3e34d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E34DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E34D8u;
        // 0x3e34dc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e34d8) {
            ctx->pc = 0x3E350Cu;
            goto label_3e350c;
        }
    }
    ctx->pc = 0x3E34E0u;
    // 0x3e34e0: 0x24900140  addiu       $s0, $a0, 0x140
    ctx->pc = 0x3e34e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    // 0x3e34e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e34e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e34e8: 0xc0f8c9e  jal         func_3E3278
    ctx->pc = 0x3E34E8u;
    SET_GPR_U32(ctx, 31, 0x3E34F0u);
    ctx->pc = 0x3E34ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E34E8u;
    // 0x3e34ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3278u, 0x3E34E8u, 0x3E34F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E34F0u;
label_3e34f0:
    // 0x3e34f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e34f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e34f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e34f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e34f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e34f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e34fc: 0xc0f8d08  jal         func_3E3420
    ctx->pc = 0x3E34FCu;
    SET_GPR_U32(ctx, 31, 0x3E3504u);
    ctx->pc = 0x3E3500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E34FCu;
    // 0x3e3500: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3420u, 0x3E34FCu, 0x3E3504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3504u;
label_3e3504:
    // 0x3e3504: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E3504u;
    {
        const bool branch_taken_0x3e3504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3504u;
        // 0x3e3508: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3504) {
            ctx->pc = 0x3E351Cu;
            goto label_3e351c;
        }
    }
    ctx->pc = 0x3E350Cu;
label_3e350c:
    // 0x3e350c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e350cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3510: 0xc0f8c9e  jal         func_3E3278
    ctx->pc = 0x3E3510u;
    SET_GPR_U32(ctx, 31, 0x3E3518u);
    ctx->pc = 0x3E3514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3510u;
    // 0x3e3514: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3278u, 0x3E3510u, 0x3E3518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3518u;
label_3e3518:
    // 0x3e3518: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e3518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e351c:
    // 0x3e351c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e351cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e3520: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e3520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e3524: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3524u;
        // 0x3e3528: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E352Cu;
    // 0x3e352c: 0x0  nop
    ctx->pc = 0x3e352cu;
    // NOP
    ctx->pc = 0x3e3530u;
}
