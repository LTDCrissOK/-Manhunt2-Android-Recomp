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

// Function: sub_002C2938
// Address: 0x2c2938 - 0x2c29e8
void sub_002C2938_0x2c2938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2938_0x2c2938");
#endif

    switch (ctx->pc) {
        case 0x2c297cu: goto label_2c297c;
        case 0x2c298cu: goto label_2c298c;
        case 0x2c2994u: goto label_2c2994;
        case 0x2c29acu: goto label_2c29ac;
        case 0x2c29b8u: goto label_2c29b8;
        default: break;
    }

    ctx->pc = 0x2c2938u;

    // 0x2c2938: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c2938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c293c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c293cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c2940: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c2940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2c2944: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c2944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2948: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c2948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2c294c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c294cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2950: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2c2950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2c2954: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2c2954u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2958: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c2958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c295c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c295cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2960: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C2960u;
    {
        const bool branch_taken_0x2c2960 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2960u;
        // 0x2c2964: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2960) {
            ctx->pc = 0x2C29C0u;
            goto label_2c29c0;
        }
    }
    ctx->pc = 0x2C2968u;
    // 0x2c2968: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c2968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c296c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c296cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2970: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c2970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2974: 0xc0b0a4c  jal         func_2C2930
    ctx->pc = 0x2C2974u;
    SET_GPR_U32(ctx, 31, 0x2C297Cu);
    ctx->pc = 0x2C2978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2974u;
    // 0x2c2978: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2930u, 0x2C2974u, 0x2C297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C297Cu;
label_2c297c:
    // 0x2c297c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C297Cu;
    {
        const bool branch_taken_0x2c297c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c297c) {
            ctx->pc = 0x2C2980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C297Cu;
            // 0x2c2980: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C29C4u;
            goto label_2c29c4;
        }
    }
    ctx->pc = 0x2C2984u;
    // 0x2c2984: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2C2984u;
    SET_GPR_U32(ctx, 31, 0x2C298Cu);
    ctx->pc = 0x2C2988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2984u;
    // 0x2c2988: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2C2984u, 0x2C298Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C298Cu;
label_2c298c:
    // 0x2c298c: 0xc0b0e7e  jal         func_2C39F8
    ctx->pc = 0x2C298Cu;
    SET_GPR_U32(ctx, 31, 0x2C2994u);
    ctx->pc = 0x2C2990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C298Cu;
    // 0x2c2990: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39F8u, 0x2C298Cu, 0x2C2994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2994u;
label_2c2994:
    // 0x2c2994: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c2994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2998: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c2998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c299c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c299cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c29a0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2c29a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c29a4: 0xc0b0f66  jal         func_2C3D98
    ctx->pc = 0x2C29A4u;
    SET_GPR_U32(ctx, 31, 0x2C29ACu);
    ctx->pc = 0x2C29A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C29A4u;
    // 0x2c29a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3D98u, 0x2C29A4u, 0x2C29ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C29ACu;
label_2c29ac:
    // 0x2c29ac: 0x2684000c  addiu       $a0, $s4, 0xC
    ctx->pc = 0x2c29acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x2c29b0: 0xc0b0596  jal         func_2C1658
    ctx->pc = 0x2C29B0u;
    SET_GPR_U32(ctx, 31, 0x2C29B8u);
    ctx->pc = 0x2C29B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C29B0u;
    // 0x2c29b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1658u, 0x2C29B0u, 0x2C29B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C29B8u;
label_2c29b8:
    // 0x2c29b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C29B8u;
    {
        const bool branch_taken_0x2c29b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C29BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C29B8u;
        // 0x2c29bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c29b8) {
            ctx->pc = 0x2C29C4u;
            goto label_2c29c4;
        }
    }
    ctx->pc = 0x2C29C0u;
label_2c29c0:
    // 0x2c29c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c29c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c29c4:
    // 0x2c29c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c29c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c29c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c29c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c29cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c29ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c29d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c29d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c29d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2c29d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c29d8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2c29d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c29dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C29DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C29E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C29DCu;
        // 0x2c29e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C29DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C29E4u;
    // 0x2c29e4: 0x0  nop
    ctx->pc = 0x2c29e4u;
    // NOP
    ctx->pc = 0x2c29e8u;
}
