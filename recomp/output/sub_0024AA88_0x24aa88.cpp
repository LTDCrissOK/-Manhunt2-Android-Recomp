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

// Function: sub_0024AA88
// Address: 0x24aa88 - 0x24ab20
void sub_0024AA88_0x24aa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AA88_0x24aa88");
#endif

    switch (ctx->pc) {
        case 0x24aaacu: goto label_24aaac;
        case 0x24aad4u: goto label_24aad4;
        case 0x24aae0u: goto label_24aae0;
        case 0x24aaecu: goto label_24aaec;
        case 0x24aaf8u: goto label_24aaf8;
        default: break;
    }

    ctx->pc = 0x24aa88u;

    // 0x24aa88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24aa88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24aa8c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x24aa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24aa90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24aa90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24aa94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24aa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24aa98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24aa98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aa9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24aa9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24aaa0: 0x8e110148  lw          $s1, 0x148($s0)
    ctx->pc = 0x24aaa0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x24aaa4: 0xc08fc7c  jal         func_23F1F0
    ctx->pc = 0x24AAA4u;
    SET_GPR_U32(ctx, 31, 0x24AAACu);
    ctx->pc = 0x24AAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AAA4u;
    // 0x24aaa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F1F0u, 0x24AAA4u, 0x24AAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AAACu;
label_24aaac:
    // 0x24aaac: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x24AAACu;
    {
        const bool branch_taken_0x24aaac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24AAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AAACu;
        // 0x24aab0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aaac) {
            ctx->pc = 0x24AB00u;
            goto label_24ab00;
        }
    }
    ctx->pc = 0x24AAB4u;
    // 0x24aab4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24aab8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24aab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24aabc: 0xa2220299  sb          $v0, 0x299($s1)
    ctx->pc = 0x24aabcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 665), (uint8_t)GPR_U32(ctx, 2));
    // 0x24aac0: 0x2406080d  addiu       $a2, $zero, 0x80D
    ctx->pc = 0x24aac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    // 0x24aac4: 0xae030160  sw          $v1, 0x160($s0)
    ctx->pc = 0x24aac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 3));
    // 0x24aac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24aac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aacc: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x24AACCu;
    SET_GPR_U32(ctx, 31, 0x24AAD4u);
    ctx->pc = 0x24AAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AACCu;
    // 0x24aad0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x24AACCu, 0x24AAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AAD4u;
label_24aad4:
    // 0x24aad4: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x24aad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x24aad8: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x24AAD8u;
    SET_GPR_U32(ctx, 31, 0x24AAE0u);
    ctx->pc = 0x24AADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AAD8u;
    // 0x24aadc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x24AAD8u, 0x24AAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AAE0u;
label_24aae0:
    // 0x24aae0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24aae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aae4: 0xc08bd96  jal         func_22F658
    ctx->pc = 0x24AAE4u;
    SET_GPR_U32(ctx, 31, 0x24AAECu);
    ctx->pc = 0x24AAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AAE4u;
    // 0x24aae8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x24AAE4u, 0x24AAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AAECu;
label_24aaec:
    // 0x24aaec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24aaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aaf0: 0xc08fc4e  jal         func_23F138
    ctx->pc = 0x24AAF0u;
    SET_GPR_U32(ctx, 31, 0x24AAF8u);
    ctx->pc = 0x24AAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AAF0u;
    // 0x24aaf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F138u, 0x24AAF0u, 0x24AAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AAF8u;
label_24aaf8:
    // 0x24aaf8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24AAF8u;
    {
        const bool branch_taken_0x24aaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AAF8u;
        // 0x24aafc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aaf8) {
            ctx->pc = 0x24AB08u;
            goto label_24ab08;
        }
    }
    ctx->pc = 0x24AB00u;
label_24ab00:
    // 0x24ab00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24ab00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ab04: 0xa2230299  sb          $v1, 0x299($s1)
    ctx->pc = 0x24ab04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 665), (uint8_t)GPR_U32(ctx, 3));
label_24ab08:
    // 0x24ab08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24ab08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ab0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24ab0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24ab10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24ab10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ab14: 0x3e00008  jr          $ra
    ctx->pc = 0x24AB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB14u;
        // 0x24ab18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AB1Cu;
    // 0x24ab1c: 0x0  nop
    ctx->pc = 0x24ab1cu;
    // NOP
    ctx->pc = 0x24ab20u;
}
