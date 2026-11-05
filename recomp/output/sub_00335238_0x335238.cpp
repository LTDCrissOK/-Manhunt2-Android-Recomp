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

// Function: sub_00335238
// Address: 0x335238 - 0x335290
void sub_00335238_0x335238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335238_0x335238");
#endif

    switch (ctx->pc) {
        case 0x335250u: goto label_335250;
        case 0x335260u: goto label_335260;
        case 0x335270u: goto label_335270;
        default: break;
    }

    ctx->pc = 0x335238u;

    // 0x335238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33523c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33523cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335240: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x335240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335244: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x335244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x335248: 0xc085d4e  jal         func_217538
    ctx->pc = 0x335248u;
    SET_GPR_U32(ctx, 31, 0x335250u);
    ctx->pc = 0x33524Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335248u;
    // 0x33524c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217538u, 0x335248u, 0x335250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335250u;
label_335250:
    // 0x335250: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x335250u;
    {
        const bool branch_taken_0x335250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335250) {
            ctx->pc = 0x335254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335250u;
            // 0x335254: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33527Cu;
            goto label_33527c;
        }
    }
    ctx->pc = 0x335258u;
    // 0x335258: 0xc0cd984  jal         func_336610
    ctx->pc = 0x335258u;
    SET_GPR_U32(ctx, 31, 0x335260u);
    ctx->pc = 0x33525Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335258u;
    // 0x33525c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336610u, 0x335258u, 0x335260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335260u;
label_335260:
    // 0x335260: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x335260u;
    {
        const bool branch_taken_0x335260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335260u;
        // 0x335264: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335260) {
            ctx->pc = 0x335278u;
            goto label_335278;
        }
    }
    ctx->pc = 0x335268u;
    // 0x335268: 0xc0cd7b2  jal         func_335EC8
    ctx->pc = 0x335268u;
    SET_GPR_U32(ctx, 31, 0x335270u);
    ctx->pc = 0x33526Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335268u;
    // 0x33526c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EC8u, 0x335268u, 0x335270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335270u;
label_335270:
    // 0x335270: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x335270u;
    {
        const bool branch_taken_0x335270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335270u;
        // 0x335274: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335270) {
            ctx->pc = 0x335280u;
            goto label_335280;
        }
    }
    ctx->pc = 0x335278u;
label_335278:
    // 0x335278: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x335278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33527c:
    // 0x33527c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33527cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_335280:
    // 0x335280: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x335280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335284: 0x3e00008  jr          $ra
    ctx->pc = 0x335284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335284u;
        // 0x335288: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33528Cu;
    // 0x33528c: 0x0  nop
    ctx->pc = 0x33528cu;
    // NOP
    ctx->pc = 0x335290u;
}
