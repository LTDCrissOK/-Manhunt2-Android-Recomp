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

// Function: sub_003B9240
// Address: 0x3b9240 - 0x3b9288
void sub_003B9240_0x3b9240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B9240_0x3b9240");
#endif

    switch (ctx->pc) {
        case 0x3b9240u: goto label_3b9240;
        case 0x3b9244u: goto label_3b9244;
        case 0x3b9248u: goto label_3b9248;
        case 0x3b924cu: goto label_3b924c;
        case 0x3b9250u: goto label_3b9250;
        case 0x3b9254u: goto label_3b9254;
        case 0x3b9258u: goto label_3b9258;
        case 0x3b925cu: goto label_3b925c;
        case 0x3b9260u: goto label_3b9260;
        case 0x3b9264u: goto label_3b9264;
        case 0x3b9268u: goto label_3b9268;
        case 0x3b926cu: goto label_3b926c;
        case 0x3b9270u: goto label_3b9270;
        case 0x3b9274u: goto label_3b9274;
        case 0x3b9278u: goto label_3b9278;
        case 0x3b927cu: goto label_3b927c;
        case 0x3b9280u: goto label_3b9280;
        case 0x3b9284u: goto label_3b9284;
        default: break;
    }

    ctx->pc = 0x3b9240u;

label_3b9240:
    // 0x3b9240: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3b9240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_3b9244:
    // 0x3b9244: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b9244u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3b9248:
    // 0x3b9248: 0x8c43c850  lw          $v1, -0x37B0($v0)
    ctx->pc = 0x3b9248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953040)));
label_3b924c:
    // 0x3b924c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b924cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3b9250:
    // 0x3b9250: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_3b9254:
    if (ctx->pc == 0x3B9254u) {
        ctx->pc = 0x3B9254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9250u;
        // 0x3b9254: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9258u;
        goto label_3b9258;
    }
    ctx->pc = 0x3B9250u;
    {
        const bool branch_taken_0x3b9250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9250u;
        // 0x3b9254: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9250) {
            ctx->pc = 0x3B9270u;
            goto label_3b9270;
        }
    }
    ctx->pc = 0x3B9258u;
label_3b9258:
    // 0x3b9258: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3b9258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3b925c:
    // 0x3b925c: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x3b925cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_3b9260:
    // 0x3b9260: 0x8c5c9a80  lw          $gp, -0x6580($v0)
    ctx->pc = 0x3b9260u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941312)));
label_3b9264:
    // 0x3b9264: 0x60f809  jalr        $v1
label_3b9268:
    if (ctx->pc == 0x3B9268u) {
        ctx->pc = 0x3B9268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9264u;
        // 0x3b9268: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B926Cu;
        goto label_3b926c;
    }
    ctx->pc = 0x3B9264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B926Cu);
        ctx->pc = 0x3B9268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9264u;
        // 0x3b9268: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9264u, 0x3B926Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B926Cu;
label_3b926c:
    // 0x3b926c: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x3b926cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b9270:
    // 0x3b9270: 0xf  sync
    ctx->pc = 0x3b9270u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3b9274:
    // 0x3b9274: 0x42000038  ei
    ctx->pc = 0x3b9274u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_3b9278:
    // 0x3b9278: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b9278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b927c:
    // 0x3b927c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b927cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b9280:
    // 0x3b9280: 0x3e00008  jr          $ra
label_3b9284:
    if (ctx->pc == 0x3B9284u) {
        ctx->pc = 0x3B9284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9280u;
        // 0x3b9284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9288u;
        goto label_fallthrough_0x3b9280;
    }
    ctx->pc = 0x3B9280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9280u;
        // 0x3b9284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b9280:
    ctx->pc = 0x3B9288u;
}
