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

// Function: sub_003076E0
// Address: 0x3076e0 - 0x307728
void sub_003076E0_0x3076e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003076E0_0x3076e0");
#endif

    switch (ctx->pc) {
        case 0x3076f4u: goto label_3076f4;
        case 0x307714u: goto label_307714;
        default: break;
    }

    ctx->pc = 0x3076e0u;

    // 0x3076e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3076e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3076e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3076e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3076e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3076e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3076ec: 0xc091298  jal         func_244A60
    ctx->pc = 0x3076ECu;
    SET_GPR_U32(ctx, 31, 0x3076F4u);
    ctx->pc = 0x3076F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3076ECu;
    // 0x3076f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A60u, 0x3076ECu, 0x3076F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3076F4u;
label_3076f4:
    // 0x3076f4: 0x8e0304f4  lw          $v1, 0x4F4($s0)
    ctx->pc = 0x3076f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1268)));
    // 0x3076f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3076f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3076fc: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3076FCu;
    {
        const bool branch_taken_0x3076fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3076fc) {
            ctx->pc = 0x307700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3076FCu;
            // 0x307700: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307718u;
            goto label_307718;
        }
    }
    ctx->pc = 0x307704u;
    // 0x307704: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x307704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x307708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30770c: 0xc0bcc6a  jal         func_2F31A8
    ctx->pc = 0x30770Cu;
    SET_GPR_U32(ctx, 31, 0x307714u);
    ctx->pc = 0x307710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30770Cu;
    // 0x307710: 0xc44c1e68  lwc1        $f12, 0x1E68($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F31A8u, 0x30770Cu, 0x307714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307714u;
label_307714:
    // 0x307714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x307714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_307718:
    // 0x307718: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x307718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30771c: 0x3e00008  jr          $ra
    ctx->pc = 0x30771Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30771Cu;
        // 0x307720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30771Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307724u;
    // 0x307724: 0x0  nop
    ctx->pc = 0x307724u;
    // NOP
    ctx->pc = 0x307728u;
}
