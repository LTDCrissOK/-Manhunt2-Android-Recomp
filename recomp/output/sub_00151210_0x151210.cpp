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

// Function: sub_00151210
// Address: 0x151210 - 0x151260
void sub_00151210_0x151210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151210_0x151210");
#endif

    switch (ctx->pc) {
        case 0x151234u: goto label_151234;
        case 0x151240u: goto label_151240;
        case 0x15124cu: goto label_15124c;
        default: break;
    }

    ctx->pc = 0x151210u;

    // 0x151210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x151210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x151214: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x151214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x151218: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x151218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15121c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15121cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151220: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x151220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x151224: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x151224u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x151228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15122c: 0xc040c94  jal         func_103250
    ctx->pc = 0x15122Cu;
    SET_GPR_U32(ctx, 31, 0x151234u);
    ctx->pc = 0x151230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15122Cu;
    // 0x151230: 0x8e050964  lw          $a1, 0x964($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2404)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103250u, 0x15122Cu, 0x151234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151234u;
label_151234:
    // 0x151234: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x151234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151238: 0xc054498  jal         func_151260
    ctx->pc = 0x151238u;
    SET_GPR_U32(ctx, 31, 0x151240u);
    ctx->pc = 0x15123Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151238u;
    // 0x15123c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151260u, 0x151238u, 0x151240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151240u;
label_151240:
    // 0x151240: 0x8e040468  lw          $a0, 0x468($s0)
    ctx->pc = 0x151240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1128)));
    // 0x151244: 0xc05823a  jal         func_1608E8
    ctx->pc = 0x151244u;
    SET_GPR_U32(ctx, 31, 0x15124Cu);
    ctx->pc = 0x151248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151244u;
    // 0x151248: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1608E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1608E8u, 0x151244u, 0x15124Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15124Cu;
label_15124c:
    // 0x15124c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15124cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151250: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x151250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x151254: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x151254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151258: 0x3e00008  jr          $ra
    ctx->pc = 0x151258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151258u;
        // 0x15125c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151260u;
}
