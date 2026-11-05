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

// Function: sub_002B9218
// Address: 0x2b9218 - 0x2b9290
void sub_002B9218_0x2b9218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9218_0x2b9218");
#endif

    switch (ctx->pc) {
        case 0x2b923cu: goto label_2b923c;
        case 0x2b9254u: goto label_2b9254;
        case 0x2b927cu: goto label_2b927c;
        default: break;
    }

    ctx->pc = 0x2b9218u;

    // 0x2b9218: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b9218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b921c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b921cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b9220: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x2b9220u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
    // 0x2b9224: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b9224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b9228: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b9228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b922c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b922cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9230: 0xae20a320  sw          $zero, -0x5CE0($s1)
    ctx->pc = 0x2b9230u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x66A320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66A320u, _value); } while (0);
    // 0x2b9234: 0xc0a2306  jal         func_288C18
    ctx->pc = 0x2B9234u;
    SET_GPR_U32(ctx, 31, 0x2B923Cu);
    ctx->pc = 0x2B9238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9234u;
    // 0x2b9238: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C18u, 0x2B9234u, 0x2B923Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B923Cu;
label_2b923c:
    // 0x2b923c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x2b923cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x2b9240: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b9240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9244: 0x2463dce0  addiu       $v1, $v1, -0x2320
    ctx->pc = 0x2b9244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x2b9248: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2b9248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b924c: 0xc0b7082  jal         func_2DC208
    ctx->pc = 0x2B924Cu;
    SET_GPR_U32(ctx, 31, 0x2B9254u);
    ctx->pc = 0x2B9250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B924Cu;
    // 0x2b9250: 0xac606394  sw          $zero, 0x6394($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 25492), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC208u, 0x2B924Cu, 0x2B9254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9254u;
label_2b9254:
    // 0x2b9254: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2b9254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b9258: 0x2c62001e  sltiu       $v0, $v1, 0x1E
    ctx->pc = 0x2b9258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x2b925c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B925Cu;
    {
        const bool branch_taken_0x2b925c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B925Cu;
        // 0x2b9260: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b925c) {
            ctx->pc = 0x2B9270u;
            goto label_2b9270;
        }
    }
    ctx->pc = 0x2B9264u;
    // 0x2b9264: 0x2c43001e  sltiu       $v1, $v0, 0x1E
    ctx->pc = 0x2b9264u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x2b9268: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9268u;
    {
        const bool branch_taken_0x2b9268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9268u;
        // 0x2b926c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9268) {
            ctx->pc = 0x2B927Cu;
            goto label_2b927c;
        }
    }
    ctx->pc = 0x2B9270u;
label_2b9270:
    // 0x2b9270: 0xae20a320  sw          $zero, -0x5CE0($s1)
    ctx->pc = 0x2b9270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294943520), GPR_U32(ctx, 0));
    // 0x2b9274: 0xc0ae3d8  jal         func_2B8F60
    ctx->pc = 0x2B9274u;
    SET_GPR_U32(ctx, 31, 0x2B927Cu);
    ctx->pc = 0x2B9278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9274u;
    // 0x2b9278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8F60u, 0x2B9274u, 0x2B927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B927Cu;
label_2b927c:
    // 0x2b927c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b927cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9280: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b9280u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9284: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b9284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9288: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9288u;
        // 0x2b928c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9290u;
}
