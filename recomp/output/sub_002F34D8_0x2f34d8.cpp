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

// Function: sub_002F34D8
// Address: 0x2f34d8 - 0x2f3560
void sub_002F34D8_0x2f34d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F34D8_0x2f34d8");
#endif

    switch (ctx->pc) {
        case 0x2f3514u: goto label_2f3514;
        case 0x2f3528u: goto label_2f3528;
        default: break;
    }

    ctx->pc = 0x2f34d8u;

    // 0x2f34d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f34d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f34dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f34dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f34e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f34e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f34e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f34e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f34e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2f34e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2f34ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f34ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f34f0: 0x8e11121c  lw          $s1, 0x121C($s0)
    ctx->pc = 0x2f34f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4636)));
    // 0x2f34f4: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x2F34F4u;
    {
        const bool branch_taken_0x2f34f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F34F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F34F4u;
        // 0x2f34f8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f34f4) {
            ctx->pc = 0x2F3530u;
            goto label_2f3530;
        }
    }
    ctx->pc = 0x2F34FCu;
    // 0x2f34fc: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2f34fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2f3500: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f3500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f3504: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3504u;
    {
        const bool branch_taken_0x2f3504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3504u;
        // 0x2f3508: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3504) {
            ctx->pc = 0x2F3518u;
            goto label_2f3518;
        }
    }
    ctx->pc = 0x2F350Cu;
    // 0x2f350c: 0xc08dab6  jal         func_236AD8
    ctx->pc = 0x2F350Cu;
    SET_GPR_U32(ctx, 31, 0x2F3514u);
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x2F350Cu, 0x2F3514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3514u;
label_2f3514:
    // 0x2f3514: 0x2382b  sltu        $a3, $zero, $v0
    ctx->pc = 0x2f3514u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f3518:
    // 0x2f3518: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f3518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f351c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f351cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3520: 0xc0bcd58  jal         func_2F3560
    ctx->pc = 0x2F3520u;
    SET_GPR_U32(ctx, 31, 0x2F3528u);
    ctx->pc = 0x2F3524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3520u;
    // 0x2f3524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3560u, 0x2F3520u, 0x2F3528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3528u;
label_2f3528:
    // 0x2f3528: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3528u;
    {
        const bool branch_taken_0x2f3528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3528u;
        // 0x2f352c: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3528) {
            ctx->pc = 0x2F3540u;
            goto label_2f3540;
        }
    }
    ctx->pc = 0x2F3530u;
label_2f3530:
    // 0x2f3530: 0x26021230  addiu       $v0, $s0, 0x1230
    ctx->pc = 0x2f3530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4656));
    // 0x2f3534: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f3534u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f3538: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2f3538u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f353c: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2f353cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2f3540:
    // 0x2f3540: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f3540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3544: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f3544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f3548: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f3548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f354c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f354cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3550: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2f3550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f3554: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3554u;
        // 0x2f3558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F355Cu;
    // 0x2f355c: 0x0  nop
    ctx->pc = 0x2f355cu;
    // NOP
    ctx->pc = 0x2f3560u;
}
