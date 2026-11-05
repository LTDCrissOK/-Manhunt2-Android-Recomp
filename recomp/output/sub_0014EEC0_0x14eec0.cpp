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

// Function: sub_0014EEC0
// Address: 0x14eec0 - 0x14ef40
void sub_0014EEC0_0x14eec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EEC0_0x14eec0");
#endif

    switch (ctx->pc) {
        case 0x14eef8u: goto label_14eef8;
        case 0x14ef04u: goto label_14ef04;
        case 0x14ef18u: goto label_14ef18;
        case 0x14ef28u: goto label_14ef28;
        default: break;
    }

    ctx->pc = 0x14eec0u;

    // 0x14eec0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14eec0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14eec4: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x14eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14eec8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x14eec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x14eecc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14eeccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14eed0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14eed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14eed4: 0x248404ec  addiu       $a0, $a0, 0x4EC
    ctx->pc = 0x14eed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1260));
    // 0x14eed8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14eed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14eedc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14eedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14eee0: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x14eee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14eee4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x14eee4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14eee8: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14EEE8u;
    {
        const bool branch_taken_0x14eee8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EEE8u;
        // 0x14eeec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eee8) {
            ctx->pc = 0x14EF2Cu;
            goto label_14ef2c;
        }
    }
    ctx->pc = 0x14EEF0u;
    // 0x14eef0: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14EEF0u;
    SET_GPR_U32(ctx, 31, 0x14EEF8u);
    ctx->pc = 0x14EEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EEF0u;
    // 0x14eef4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14EEF0u, 0x14EEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EEF8u;
label_14eef8:
    // 0x14eef8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14eef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eefc: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x14EEFCu;
    SET_GPR_U32(ctx, 31, 0x14EF04u);
    ctx->pc = 0x14EF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EEFCu;
    // 0x14ef00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x14EEFCu, 0x14EF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF04u;
label_14ef04:
    // 0x14ef04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14EF04u;
    {
        const bool branch_taken_0x14ef04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF04u;
        // 0x14ef08: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ef04) {
            ctx->pc = 0x14EF20u;
            goto label_14ef20;
        }
    }
    ctx->pc = 0x14EF0Cu;
    // 0x14ef0c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x14ef0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x14ef10: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14EF10u;
    SET_GPR_U32(ctx, 31, 0x14EF18u);
    ctx->pc = 0x14EF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EF10u;
    // 0x14ef14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14EF10u, 0x14EF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF18u;
label_14ef18:
    // 0x14ef18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14EF18u;
    {
        const bool branch_taken_0x14ef18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF18u;
        // 0x14ef1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ef18) {
            ctx->pc = 0x14EF2Cu;
            goto label_14ef2c;
        }
    }
    ctx->pc = 0x14EF20u;
label_14ef20:
    // 0x14ef20: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14EF20u;
    SET_GPR_U32(ctx, 31, 0x14EF28u);
    ctx->pc = 0x14EF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EF20u;
    // 0x14ef24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14EF20u, 0x14EF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF28u;
label_14ef28:
    // 0x14ef28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14ef28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14ef2c:
    // 0x14ef2c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14ef2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ef30: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14ef30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14ef34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14ef34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ef38: 0x3e00008  jr          $ra
    ctx->pc = 0x14EF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF38u;
        // 0x14ef3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EF40u;
}
