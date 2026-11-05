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

// Function: sub_001548A8
// Address: 0x1548a8 - 0x154940
void sub_001548A8_0x1548a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001548A8_0x1548a8");
#endif

    switch (ctx->pc) {
        case 0x1548f8u: goto label_1548f8;
        case 0x154900u: goto label_154900;
        case 0x15490cu: goto label_15490c;
        case 0x154928u: goto label_154928;
        default: break;
    }

    ctx->pc = 0x1548a8u;

    // 0x1548a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1548a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1548ac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1548acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1548b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1548b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1548b4: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x1548b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1548b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1548b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1548bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1548bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1548c0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1548c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1548c4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1548c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1548c8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1548c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1548cc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1548ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1548d0: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x1548d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x1548d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1548d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1548d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1548d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1548dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1548dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1548e0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1548e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1548e4: 0x8c90020c  lw          $s0, 0x20C($a0)
    ctx->pc = 0x1548e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x1548e8: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1548E8u;
    {
        const bool branch_taken_0x1548e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1548e8) {
            ctx->pc = 0x1548ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1548E8u;
            // 0x1548ec: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15492Cu;
            goto label_15492c;
        }
    }
    ctx->pc = 0x1548F0u;
    // 0x1548f0: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1548F0u;
    SET_GPR_U32(ctx, 31, 0x1548F8u);
    ctx->pc = 0x1548F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1548F0u;
    // 0x1548f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1548F0u, 0x1548F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1548F8u;
label_1548f8:
    // 0x1548f8: 0xc044358  jal         func_110D60
    ctx->pc = 0x1548F8u;
    SET_GPR_U32(ctx, 31, 0x154900u);
    ctx->pc = 0x1548FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1548F8u;
    // 0x1548fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D60u, 0x1548F8u, 0x154900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154900u;
label_154900:
    // 0x154900: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154904: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x154904u;
    SET_GPR_U32(ctx, 31, 0x15490Cu);
    ctx->pc = 0x154908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154904u;
    // 0x154908: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x154904u, 0x15490Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15490Cu;
label_15490c:
    // 0x15490c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x15490cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x154910: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x154910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154914: 0x2232818  mult        $a1, $s1, $v1
    ctx->pc = 0x154914u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x154918: 0xb21821  addu        $v1, $a1, $s2
    ctx->pc = 0x154918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x15491c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15491cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x154920: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x154920u;
    SET_GPR_U32(ctx, 31, 0x154928u);
    ctx->pc = 0x154924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154920u;
    // 0x154924: 0xac6204e8  sw          $v0, 0x4E8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 1256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x154920u, 0x154928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154928u;
label_154928:
    // 0x154928: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x154928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15492c:
    // 0x15492c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15492cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x154930: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x154930u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154934: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x154934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x154938: 0x3e00008  jr          $ra
    ctx->pc = 0x154938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154938u;
        // 0x15493c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154940u;
}
