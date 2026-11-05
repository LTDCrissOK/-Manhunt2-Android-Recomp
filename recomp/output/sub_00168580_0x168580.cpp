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

// Function: sub_00168580
// Address: 0x168580 - 0x168600
void sub_00168580_0x168580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168580_0x168580");
#endif

    switch (ctx->pc) {
        case 0x1685a0u: goto label_1685a0;
        case 0x1685c0u: goto label_1685c0;
        case 0x1685c8u: goto label_1685c8;
        case 0x1685e4u: goto label_1685e4;
        default: break;
    }

    ctx->pc = 0x168580u;

    // 0x168580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x168584: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x168584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x168588: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x168588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16858c: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x16858cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x168590: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x168590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x168594: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x168594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x168598: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x168598u;
    SET_GPR_U32(ctx, 31, 0x1685A0u);
    ctx->pc = 0x16859Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168598u;
    // 0x16859c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x168598u, 0x1685A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1685A0u;
label_1685a0:
    // 0x1685a0: 0x24030bb8  addiu       $v1, $zero, 0xBB8
    ctx->pc = 0x1685a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x1685a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1685a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1685a8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1685a8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1685ac: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1685ACu;
    {
        const bool branch_taken_0x1685ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1685ac) {
            ctx->pc = 0x1685B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1685ACu;
            // 0x1685b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1685B4u;
            goto label_1685b4;
        }
    }
    ctx->pc = 0x1685B4u;
label_1685b4:
    // 0x1685b4: 0x8010  mfhi        $s0
    ctx->pc = 0x1685b4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x1685b8: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1685B8u;
    SET_GPR_U32(ctx, 31, 0x1685C0u);
    ctx->pc = 0x1685BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1685B8u;
    // 0x1685bc: 0x3210ffff  andi        $s0, $s0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1685B8u, 0x1685C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1685C0u;
label_1685c0:
    // 0x1685c0: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x1685C0u;
    SET_GPR_U32(ctx, 31, 0x1685C8u);
    ctx->pc = 0x1685C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1685C0u;
    // 0x1685c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x1685C0u, 0x1685C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1685C8u;
label_1685c8:
    // 0x1685c8: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1685c8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1685cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1685ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1685d0: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x1685d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1685d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1685d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1685d8: 0xae4202e0  sw          $v0, 0x2E0($s2)
    ctx->pc = 0x1685d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 736), GPR_U32(ctx, 2));
    // 0x1685dc: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1685DCu;
    SET_GPR_U32(ctx, 31, 0x1685E4u);
    ctx->pc = 0x1685E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1685DCu;
    // 0x1685e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1685DCu, 0x1685E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1685E4u;
label_1685e4:
    // 0x1685e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1685e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1685e8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1685e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1685ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1685ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1685f0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1685f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1685f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1685F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1685F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685F4u;
        // 0x1685f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1685F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1685FCu;
    // 0x1685fc: 0x0  nop
    ctx->pc = 0x1685fcu;
    // NOP
    ctx->pc = 0x168600u;
}
