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

// Function: sub_00159130
// Address: 0x159130 - 0x1591c0
void sub_00159130_0x159130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159130_0x159130");
#endif

    switch (ctx->pc) {
        case 0x159168u: goto label_159168;
        case 0x159180u: goto label_159180;
        case 0x15919cu: goto label_15919c;
        default: break;
    }

    ctx->pc = 0x159130u;

    // 0x159130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x159130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x159134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x159134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x159138: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x159138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15913c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15913cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159140: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x159140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x159144: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x159144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159148: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x159148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x15914c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15914cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159150: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x159150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x159154: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x159154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159158: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x159158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x15915c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x15915cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159160: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x159160u;
    SET_GPR_U32(ctx, 31, 0x159168u);
    ctx->pc = 0x159164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159160u;
    // 0x159164: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x159160u, 0x159168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159168u;
label_159168:
    // 0x159168: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x159168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15916c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x15916cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x159170: 0x50a2000b  beql        $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x159170u;
    {
        const bool branch_taken_0x159170 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x159170) {
            ctx->pc = 0x159174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159170u;
            // 0x159174: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1591A0u;
            goto label_1591a0;
        }
    }
    ctx->pc = 0x159178u;
    // 0x159178: 0xc04f130  jal         func_13C4C0
    ctx->pc = 0x159178u;
    SET_GPR_U32(ctx, 31, 0x159180u);
    ctx->pc = 0x15917Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159178u;
    // 0x15917c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4C0u, 0x159178u, 0x159180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159180u;
label_159180:
    // 0x159180: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x159180u;
    {
        const bool branch_taken_0x159180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159180u;
        // 0x159184: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159180) {
            ctx->pc = 0x15919Cu;
            goto label_15919c;
        }
    }
    ctx->pc = 0x159188u;
    // 0x159188: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x159188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15918c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15918cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159190: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x159190u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159194: 0xc04d7c6  jal         func_135F18
    ctx->pc = 0x159194u;
    SET_GPR_U32(ctx, 31, 0x15919Cu);
    ctx->pc = 0x159198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159194u;
    // 0x159198: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F18u, 0x159194u, 0x15919Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15919Cu;
label_15919c:
    // 0x15919c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15919cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1591a0:
    // 0x1591a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1591a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1591a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1591a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1591a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1591a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1591ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1591acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1591b0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1591b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1591b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1591B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1591B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1591B4u;
        // 0x1591b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1591B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1591BCu;
    // 0x1591bc: 0x0  nop
    ctx->pc = 0x1591bcu;
    // NOP
    ctx->pc = 0x1591c0u;
}
