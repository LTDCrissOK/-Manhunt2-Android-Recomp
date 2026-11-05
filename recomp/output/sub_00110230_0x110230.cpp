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

// Function: sub_00110230
// Address: 0x110230 - 0x1102a8
void sub_00110230_0x110230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110230_0x110230");
#endif

    switch (ctx->pc) {
        case 0x110258u: goto label_110258;
        case 0x110268u: goto label_110268;
        case 0x110278u: goto label_110278;
        default: break;
    }

    ctx->pc = 0x110230u;

    // 0x110230: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x110230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x110234: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x110234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x110238: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x110238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11023c: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x11023cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x110240: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x110240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110244: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x110244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x110248: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x110248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x11024c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11024cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110250: 0xc05dee2  jal         func_177B88
    ctx->pc = 0x110250u;
    SET_GPR_U32(ctx, 31, 0x110258u);
    ctx->pc = 0x110254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110250u;
    // 0x110254: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B88u, 0x110250u, 0x110258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110258u;
label_110258:
    // 0x110258: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x110258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11025c: 0x5220000c  beql        $s1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x11025Cu;
    {
        const bool branch_taken_0x11025c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x11025c) {
            ctx->pc = 0x110260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11025Cu;
            // 0x110260: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110290u;
            goto label_110290;
        }
    }
    ctx->pc = 0x110264u;
    // 0x110264: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x110264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_110268:
    // 0x110268: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x110268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11026c: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x11026cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x110270: 0xc0440c8  jal         func_110320
    ctx->pc = 0x110270u;
    SET_GPR_U32(ctx, 31, 0x110278u);
    ctx->pc = 0x110274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110270u;
    // 0x110274: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110320u, 0x110270u, 0x110278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110278u;
label_110278:
    // 0x110278: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x110278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11027c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x11027cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x110280: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x110280u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x110284: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x110284u;
    {
        const bool branch_taken_0x110284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x110288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110284u;
        // 0x110288: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110284) {
            ctx->pc = 0x110268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110268;
        }
    }
    ctx->pc = 0x11028Cu;
    // 0x11028c: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x11028cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_110290:
    // 0x110290: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x110290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x110294: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x110294u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x110298: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x110298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x11029c: 0x3e00008  jr          $ra
    ctx->pc = 0x11029Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1102A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11029Cu;
        // 0x1102a0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11029Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1102A4u;
    // 0x1102a4: 0x0  nop
    ctx->pc = 0x1102a4u;
    // NOP
    ctx->pc = 0x1102a8u;
}
