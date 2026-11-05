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

// Function: sub_0015C0C8
// Address: 0x15c0c8 - 0x15c148
void sub_0015C0C8_0x15c0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C0C8_0x15c0c8");
#endif

    switch (ctx->pc) {
        case 0x15c0e4u: goto label_15c0e4;
        case 0x15c0f0u: goto label_15c0f0;
        case 0x15c100u: goto label_15c100;
        case 0x15c108u: goto label_15c108;
        case 0x15c114u: goto label_15c114;
        case 0x15c130u: goto label_15c130;
        default: break;
    }

    ctx->pc = 0x15c0c8u;

    // 0x15c0c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15c0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15c0cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15c0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x15c0d0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x15c0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x15c0d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15c0d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c0d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15c0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15c0dc: 0xc057028  jal         func_15C0A0
    ctx->pc = 0x15C0DCu;
    SET_GPR_U32(ctx, 31, 0x15C0E4u);
    ctx->pc = 0x15C0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C0DCu;
    // 0x15c0e0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C0A0u, 0x15C0DCu, 0x15C0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C0E4u;
label_15c0e4:
    // 0x15c0e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15c0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c0e8: 0xc056c32  jal         func_15B0C8
    ctx->pc = 0x15C0E8u;
    SET_GPR_U32(ctx, 31, 0x15C0F0u);
    ctx->pc = 0x15C0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C0E8u;
    // 0x15c0ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0C8u, 0x15C0E8u, 0x15C0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C0F0u;
label_15c0f0:
    // 0x15c0f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15c0f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c0f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15c0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c0f8: 0xc0570d0  jal         func_15C340
    ctx->pc = 0x15C0F8u;
    SET_GPR_U32(ctx, 31, 0x15C100u);
    ctx->pc = 0x15C0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C0F8u;
    // 0x15c0fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C340u, 0x15C0F8u, 0x15C100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C100u;
label_15c100:
    // 0x15c100: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x15C100u;
    SET_GPR_U32(ctx, 31, 0x15C108u);
    ctx->pc = 0x15C104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C100u;
    // 0x15c104: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x15C100u, 0x15C108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C108u;
label_15c108:
    // 0x15c108: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15c108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c10c: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x15C10Cu;
    SET_GPR_U32(ctx, 31, 0x15C114u);
    ctx->pc = 0x15C110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C10Cu;
    // 0x15c110: 0x2405fffb  addiu       $a1, $zero, -0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x15C10Cu, 0x15C114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C114u;
label_15c114:
    // 0x15c114: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x15c114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15c118: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15c118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c11c: 0x2032818  mult        $a1, $s0, $v1
    ctx->pc = 0x15c11cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x15c120: 0xb18021  addu        $s0, $a1, $s1
    ctx->pc = 0x15c120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x15c124: 0xae020334  sw          $v0, 0x334($s0)
    ctx->pc = 0x15c124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 2));
    // 0x15c128: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x15C128u;
    SET_GPR_U32(ctx, 31, 0x15C130u);
    ctx->pc = 0x15C12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C128u;
    // 0x15c12c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15C128u, 0x15C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C130u;
label_15c130:
    // 0x15c130: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15c130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c134: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15c134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15c138: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15c138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c13c: 0x3e00008  jr          $ra
    ctx->pc = 0x15C13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C13Cu;
        // 0x15c140: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C144u;
    // 0x15c144: 0x0  nop
    ctx->pc = 0x15c144u;
    // NOP
    ctx->pc = 0x15c148u;
}
