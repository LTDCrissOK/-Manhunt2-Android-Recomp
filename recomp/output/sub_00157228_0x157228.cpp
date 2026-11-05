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

// Function: sub_00157228
// Address: 0x157228 - 0x1572b8
void sub_00157228_0x157228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157228_0x157228");
#endif

    switch (ctx->pc) {
        case 0x157260u: goto label_157260;
        case 0x157278u: goto label_157278;
        case 0x157294u: goto label_157294;
        default: break;
    }

    ctx->pc = 0x157228u;

    // 0x157228: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x157228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15722c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15722cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x157230: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x157230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x157234: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x157234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157238: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x157238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15723c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x15723cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157240: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x157240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x157244: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x157244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157248: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x157248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x15724c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15724cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157250: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x157250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x157254: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x157254u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157258: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x157258u;
    SET_GPR_U32(ctx, 31, 0x157260u);
    ctx->pc = 0x15725Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157258u;
    // 0x15725c: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x157258u, 0x157260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157260u;
label_157260:
    // 0x157260: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x157260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157264: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x157264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x157268: 0x50a2000b  beql        $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x157268u;
    {
        const bool branch_taken_0x157268 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x157268) {
            ctx->pc = 0x15726Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157268u;
            // 0x15726c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157298u;
            goto label_157298;
        }
    }
    ctx->pc = 0x157270u;
    // 0x157270: 0xc04f130  jal         func_13C4C0
    ctx->pc = 0x157270u;
    SET_GPR_U32(ctx, 31, 0x157278u);
    ctx->pc = 0x157274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157270u;
    // 0x157274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4C0u, 0x157270u, 0x157278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157278u;
label_157278:
    // 0x157278: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157278u;
    {
        const bool branch_taken_0x157278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157278u;
        // 0x15727c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157278) {
            ctx->pc = 0x157294u;
            goto label_157294;
        }
    }
    ctx->pc = 0x157280u;
    // 0x157280: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x157280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157284: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x157284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157288: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x157288u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15728c: 0xc04d7c6  jal         func_135F18
    ctx->pc = 0x15728Cu;
    SET_GPR_U32(ctx, 31, 0x157294u);
    ctx->pc = 0x157290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15728Cu;
    // 0x157290: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F18u, 0x15728Cu, 0x157294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157294u;
label_157294:
    // 0x157294: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x157294u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_157298:
    // 0x157298: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x157298u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15729c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15729cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1572a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1572a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1572a4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1572a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1572a8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1572a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1572ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1572ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1572B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1572ACu;
        // 0x1572b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1572ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1572B4u;
    // 0x1572b4: 0x0  nop
    ctx->pc = 0x1572b4u;
    // NOP
    ctx->pc = 0x1572b8u;
}
