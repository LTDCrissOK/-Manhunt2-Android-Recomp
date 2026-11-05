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

// Function: sub_00280FA0
// Address: 0x280fa0 - 0x281020
void sub_00280FA0_0x280fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280FA0_0x280fa0");
#endif

    switch (ctx->pc) {
        case 0x280fdcu: goto label_280fdc;
        case 0x280fe8u: goto label_280fe8;
        default: break;
    }

    ctx->pc = 0x280fa0u;

    // 0x280fa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x280fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x280fa4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x280fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x280fa8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x280fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x280fac: 0x8c51bd50  lw          $s1, -0x42B0($v0)
    ctx->pc = 0x280facu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x280fb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x280fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x280fb4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x280FB4u;
    {
        const bool branch_taken_0x280fb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x280FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280FB4u;
        // 0x280fb8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280fb4) {
            ctx->pc = 0x280FE8u;
            goto label_280fe8;
        }
    }
    ctx->pc = 0x280FBCu;
    // 0x280fbc: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x280fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x280fc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280fc4: 0x2610bf60  addiu       $s0, $s0, -0x40A0
    ctx->pc = 0x280fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950752));
    // 0x280fc8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x280fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BBF68u));
    // 0x280fcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x280fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x280fd0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x280fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x280fd4: 0xc0b9306  jal         func_2E4C18
    ctx->pc = 0x280FD4u;
    SET_GPR_U32(ctx, 31, 0x280FDCu);
    ctx->pc = 0x280FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280FD4u;
    // 0x280fd8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4C18u, 0x280FD4u, 0x280FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280FDCu;
label_280fdc:
    // 0x280fdc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x280fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x280fe0: 0xc0b931a  jal         func_2E4C68
    ctx->pc = 0x280FE0u;
    SET_GPR_U32(ctx, 31, 0x280FE8u);
    ctx->pc = 0x280FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280FE0u;
    // 0x280fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4C68u, 0x280FE0u, 0x280FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280FE8u;
label_280fe8:
    // 0x280fe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x280fe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280fec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x280fecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x280ff0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x280ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x280FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280FF4u;
        // 0x280ff8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280FFCu;
    // 0x280ffc: 0x0  nop
    ctx->pc = 0x280ffcu;
    // NOP
    // 0x281000: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x281000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x281004: 0x0  nop
    ctx->pc = 0x281004u;
    // NOP
    // 0x281008: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x281008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28100c: 0x0  nop
    ctx->pc = 0x28100cu;
    // NOP
    // 0x281010: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x281010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x281014: 0x0  nop
    ctx->pc = 0x281014u;
    // NOP
    // 0x281018: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x281018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28101c: 0x0  nop
    ctx->pc = 0x28101cu;
    // NOP
    ctx->pc = 0x281020u;
}
