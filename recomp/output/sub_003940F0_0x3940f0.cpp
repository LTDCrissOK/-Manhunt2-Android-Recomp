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

// Function: sub_003940F0
// Address: 0x3940f0 - 0x3941a8
void sub_003940F0_0x3940f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003940F0_0x3940f0");
#endif

    switch (ctx->pc) {
        case 0x3940f8u: goto label_3940f8;
        case 0x394118u: goto label_394118;
        case 0x394138u: goto label_394138;
        case 0x394158u: goto label_394158;
        case 0x394198u: goto label_394198;
        default: break;
    }

    ctx->pc = 0x3940f0u;

    // 0x3940f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3940f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3940f4: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x3940f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
label_3940f8:
    // 0x3940f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3940f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3940fc: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x3940fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x394100: 0x2508eb1f  addiu       $t0, $t0, -0x14E1
    ctx->pc = 0x394100u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961951));
    // 0x394104: 0x24090800  addiu       $t1, $zero, 0x800
    ctx->pc = 0x394104u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x394108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x394108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39410c: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x39410cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x394110: 0x80e505a  j           func_394168
    ctx->pc = 0x394110u;
    ctx->pc = 0x394114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394110u;
    // 0x394114: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394168u;
    goto label_394168;
    ctx->pc = 0x394118u;
label_394118:
    // 0x394118: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x394118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39411c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x39411cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394120: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x394120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394124: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x394124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394128: 0x3c0a7fff  lui         $t2, 0x7FFF
    ctx->pc = 0x394128u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32767 << 16));
    // 0x39412c: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x39412cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394130: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x394130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x394134: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x394134u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_394138:
    // 0x394138: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x394138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x39413c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x39413cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394140: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x394140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394144: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x394144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394148: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x394148u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x39414c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39414cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x394150: 0xc0e506a  jal         func_3941A8
    ctx->pc = 0x394150u;
    SET_GPR_U32(ctx, 31, 0x394158u);
    ctx->pc = 0x394154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394150u;
    // 0x394154: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3941A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3941A8u, 0x394150u, 0x394158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394158u;
label_394158:
    // 0x394158: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x394158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39415c: 0x3e00008  jr          $ra
    ctx->pc = 0x39415Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39415Cu;
        // 0x394160: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39415Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394164u;
    // 0x394164: 0x0  nop
    ctx->pc = 0x394164u;
    // NOP
label_394168:
    // 0x394168: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x394168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39416c: 0x3c0a7fff  lui         $t2, 0x7FFF
    ctx->pc = 0x39416cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32767 << 16));
    // 0x394170: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x394170u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394174: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x394174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394178: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x394178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x39417c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39417cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394180: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x394180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x394184: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x394184u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394188: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x394188u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x39418c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39418cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x394190: 0xc0e506a  jal         func_3941A8
    ctx->pc = 0x394190u;
    SET_GPR_U32(ctx, 31, 0x394198u);
    ctx->pc = 0x394194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394190u;
    // 0x394194: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3941A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3941A8u, 0x394190u, 0x394198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394198u;
label_394198:
    // 0x394198: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x394198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39419c: 0x3e00008  jr          $ra
    ctx->pc = 0x39419Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3941A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39419Cu;
        // 0x3941a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39419Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3941A4u;
    // 0x3941a4: 0x0  nop
    ctx->pc = 0x3941a4u;
    // NOP
    ctx->pc = 0x3941a8u;
}
