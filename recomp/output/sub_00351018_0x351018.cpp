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

// Function: sub_00351018
// Address: 0x351018 - 0x3510a8
void sub_00351018_0x351018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351018_0x351018");
#endif

    switch (ctx->pc) {
        case 0x351018u: goto label_351018;
        case 0x35101cu: goto label_35101c;
        case 0x351020u: goto label_351020;
        case 0x351024u: goto label_351024;
        case 0x351028u: goto label_351028;
        case 0x35102cu: goto label_35102c;
        case 0x351030u: goto label_351030;
        case 0x351034u: goto label_351034;
        case 0x351038u: goto label_351038;
        case 0x35103cu: goto label_35103c;
        case 0x351040u: goto label_351040;
        case 0x351044u: goto label_351044;
        case 0x351048u: goto label_351048;
        case 0x35104cu: goto label_35104c;
        case 0x351050u: goto label_351050;
        case 0x351054u: goto label_351054;
        case 0x351058u: goto label_351058;
        case 0x35105cu: goto label_35105c;
        case 0x351060u: goto label_351060;
        case 0x351064u: goto label_351064;
        case 0x351068u: goto label_351068;
        case 0x35106cu: goto label_35106c;
        case 0x351070u: goto label_351070;
        case 0x351074u: goto label_351074;
        case 0x351078u: goto label_351078;
        case 0x35107cu: goto label_35107c;
        case 0x351080u: goto label_351080;
        case 0x351084u: goto label_351084;
        case 0x351088u: goto label_351088;
        case 0x35108cu: goto label_35108c;
        case 0x351090u: goto label_351090;
        case 0x351094u: goto label_351094;
        case 0x351098u: goto label_351098;
        case 0x35109cu: goto label_35109c;
        case 0x3510a0u: goto label_3510a0;
        case 0x3510a4u: goto label_3510a4;
        default: break;
    }

    ctx->pc = 0x351018u;

label_351018:
    // 0x351018: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x351018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35101c:
    // 0x35101c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35101cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_351020:
    // 0x351020: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x351020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_351024:
    // 0x351024: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x351024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_351028:
    // 0x351028: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x351028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_35102c:
    // 0x35102c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x35102cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_351030:
    // 0x351030: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x351030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_351034:
    // 0x351034: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_351038:
    if (ctx->pc == 0x351038u) {
        ctx->pc = 0x351038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351034u;
        // 0x351038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35103Cu;
        goto label_35103c;
    }
    ctx->pc = 0x351034u;
    {
        const bool branch_taken_0x351034 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x351038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351034u;
        // 0x351038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351034) {
            ctx->pc = 0x351090u;
            goto label_351090;
        }
    }
    ctx->pc = 0x35103Cu;
label_35103c:
    // 0x35103c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x35103cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_351040:
    // 0x351040: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x351040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_351044:
    // 0x351044: 0x2451be60  addiu       $s1, $v0, -0x41A0
    ctx->pc = 0x351044u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950496));
label_351048:
    // 0x351048: 0xc0f754a  jal         func_3DD528
label_35104c:
    if (ctx->pc == 0x35104Cu) {
        ctx->pc = 0x35104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351048u;
        // 0x35104c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351050u;
        goto label_351050;
    }
    ctx->pc = 0x351048u;
    SET_GPR_U32(ctx, 31, 0x351050u);
    ctx->pc = 0x35104Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351048u;
    // 0x35104c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD528u, 0x351048u, 0x351050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351050u;
label_351050:
    // 0x351050: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_351054:
    if (ctx->pc == 0x351054u) {
        ctx->pc = 0x351054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351050u;
        // 0x351054: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351058u;
        goto label_351058;
    }
    ctx->pc = 0x351050u;
    {
        const bool branch_taken_0x351050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351050) {
            ctx->pc = 0x351054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351050u;
            // 0x351054: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351068u;
            goto label_351068;
        }
    }
    ctx->pc = 0x351058u;
label_351058:
    // 0x351058: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x351058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35105c:
    // 0x35105c: 0xc0fbc38  jal         func_3EF0E0
label_351060:
    if (ctx->pc == 0x351060u) {
        ctx->pc = 0x351060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35105Cu;
        // 0x351060: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351064u;
        goto label_351064;
    }
    ctx->pc = 0x35105Cu;
    SET_GPR_U32(ctx, 31, 0x351064u);
    ctx->pc = 0x351060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35105Cu;
    // 0x351060: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF0E0u, 0x35105Cu, 0x351064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351064u;
label_351064:
    // 0x351064: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x351064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_351068:
    // 0x351068: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x351068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35106c:
    // 0x35106c: 0xc0fbc38  jal         func_3EF0E0
label_351070:
    if (ctx->pc == 0x351070u) {
        ctx->pc = 0x351070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35106Cu;
        // 0x351070: 0x2484be50  addiu       $a0, $a0, -0x41B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351074u;
        goto label_351074;
    }
    ctx->pc = 0x35106Cu;
    SET_GPR_U32(ctx, 31, 0x351074u);
    ctx->pc = 0x351070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35106Cu;
    // 0x351070: 0x2484be50  addiu       $a0, $a0, -0x41B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF0E0u, 0x35106Cu, 0x351074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351074u;
label_351074:
    // 0x351074: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_351078:
    if (ctx->pc == 0x351078u) {
        ctx->pc = 0x351078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351074u;
        // 0x351078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35107Cu;
        goto label_35107c;
    }
    ctx->pc = 0x351074u;
    {
        const bool branch_taken_0x351074 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x351078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351074u;
        // 0x351078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351074) {
            ctx->pc = 0x35108Cu;
            goto label_35108c;
        }
    }
    ctx->pc = 0x35107Cu;
label_35107c:
    // 0x35107c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x35107cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_351080:
    // 0x351080: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x351080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_351084:
    // 0x351084: 0x40f809  jalr        $v0
label_351088:
    if (ctx->pc == 0x351088u) {
        ctx->pc = 0x351088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351084u;
        // 0x351088: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35108Cu;
        goto label_35108c;
    }
    ctx->pc = 0x351084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35108Cu);
        ctx->pc = 0x351088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351084u;
        // 0x351088: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351084u, 0x35108Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35108Cu;
label_35108c:
    // 0x35108c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35108cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_351090:
    // 0x351090: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x351090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_351094:
    // 0x351094: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x351094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_351098:
    // 0x351098: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x351098u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35109c:
    // 0x35109c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35109cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3510a0:
    // 0x3510a0: 0x3e00008  jr          $ra
label_3510a4:
    if (ctx->pc == 0x3510A4u) {
        ctx->pc = 0x3510A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3510A0u;
        // 0x3510a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3510A8u;
        goto label_fallthrough_0x3510a0;
    }
    ctx->pc = 0x3510A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3510A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3510A0u;
        // 0x3510a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3510A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3510a0:
    ctx->pc = 0x3510A8u;
}
