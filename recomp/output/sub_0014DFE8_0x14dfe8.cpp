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

// Function: sub_0014DFE8
// Address: 0x14dfe8 - 0x14e050
void sub_0014DFE8_0x14dfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DFE8_0x14dfe8");
#endif

    switch (ctx->pc) {
        case 0x14e008u: goto label_14e008;
        case 0x14e01cu: goto label_14e01c;
        case 0x14e028u: goto label_14e028;
        case 0x14e038u: goto label_14e038;
        default: break;
    }

    ctx->pc = 0x14dfe8u;

    // 0x14dfe8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14dfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14dfec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14dfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14dff0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14dff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14dff4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14dff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dff8: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x14dff8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14dffc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14dffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14e000: 0xc053b06  jal         func_14EC18
    ctx->pc = 0x14E000u;
    SET_GPR_U32(ctx, 31, 0x14E008u);
    ctx->pc = 0x14E004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E000u;
    // 0x14e004: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC18u, 0x14E000u, 0x14E008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E008u;
label_14e008:
    // 0x14e008: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14e008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e00c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E00Cu;
    {
        const bool branch_taken_0x14e00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E00Cu;
        // 0x14e010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e00c) {
            ctx->pc = 0x14E020u;
            goto label_14e020;
        }
    }
    ctx->pc = 0x14E014u;
    // 0x14e014: 0xc053d02  jal         func_14F408
    ctx->pc = 0x14E014u;
    SET_GPR_U32(ctx, 31, 0x14E01Cu);
    ctx->pc = 0x14E018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E014u;
    // 0x14e018: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F408u, 0x14E014u, 0x14E01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E01Cu;
label_14e01c:
    // 0x14e01c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e020:
    // 0x14e020: 0xc053b3e  jal         func_14ECF8
    ctx->pc = 0x14E020u;
    SET_GPR_U32(ctx, 31, 0x14E028u);
    ctx->pc = 0x14E024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E020u;
    // 0x14e024: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ECF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ECF8u, 0x14E020u, 0x14E028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E028u;
label_14e028:
    // 0x14e028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e02c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14e02cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e030: 0xc04d88a  jal         func_136228
    ctx->pc = 0x14E030u;
    SET_GPR_U32(ctx, 31, 0x14E038u);
    ctx->pc = 0x14E034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E030u;
    // 0x14e034: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x14E030u, 0x14E038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E038u;
label_14e038:
    // 0x14e038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14e038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e03c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14e03cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14e040: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14e040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e044: 0x3e00008  jr          $ra
    ctx->pc = 0x14E044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E044u;
        // 0x14e048: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E04Cu;
    // 0x14e04c: 0x0  nop
    ctx->pc = 0x14e04cu;
    // NOP
    ctx->pc = 0x14e050u;
}
