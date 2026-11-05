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

// Function: sub_0029B718
// Address: 0x29b718 - 0x29b7a8
void sub_0029B718_0x29b718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B718_0x29b718");
#endif

    switch (ctx->pc) {
        case 0x29b748u: goto label_29b748;
        case 0x29b760u: goto label_29b760;
        case 0x29b76cu: goto label_29b76c;
        case 0x29b78cu: goto label_29b78c;
        default: break;
    }

    ctx->pc = 0x29b718u;

    // 0x29b718: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29b718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29b71c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29b71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29b720: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29b720u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b724: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29b724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29b728: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29b728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29b72c: 0x265005a8  addiu       $s0, $s2, 0x5A8
    ctx->pc = 0x29b72cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1448));
    // 0x29b730: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29b730u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b734: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29b734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29b738: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29b738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29b73c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29b73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29b740: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29B740u;
    SET_GPR_U32(ctx, 31, 0x29B748u);
    ctx->pc = 0x29B744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B740u;
    // 0x29b744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29B740u, 0x29B748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B748u;
label_29b748:
    // 0x29b748: 0x264200f8  addiu       $v0, $s2, 0xF8
    ctx->pc = 0x29b748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 248));
    // 0x29b74c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x29B74Cu;
    {
        const bool branch_taken_0x29b74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b74c) {
            ctx->pc = 0x29B750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B74Cu;
            // 0x29b750: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B77Cu;
            goto label_29b77c;
        }
    }
    ctx->pc = 0x29B754u;
    // 0x29b754: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29B754u;
    {
        const bool branch_taken_0x29b754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x29B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B754u;
        // 0x29b758: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b754) {
            ctx->pc = 0x29B778u;
            goto label_29b778;
        }
    }
    ctx->pc = 0x29B75Cu;
    // 0x29b75c: 0x2610ffe8  addiu       $s0, $s0, -0x18
    ctx->pc = 0x29b75cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
label_29b760:
    // 0x29b760: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29b760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29b764: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29B764u;
    SET_GPR_U32(ctx, 31, 0x29B76Cu);
    ctx->pc = 0x29B768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B764u;
    // 0x29b768: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29B764u, 0x29B76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B76Cu;
label_29b76c:
    // 0x29b76c: 0x0  nop
    ctx->pc = 0x29b76cu;
    // NOP
    // 0x29b770: 0x1630fffb  bne         $s1, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x29B770u;
    {
        const bool branch_taken_0x29b770 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x29B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B770u;
        // 0x29b774: 0x2610ffe8  addiu       $s0, $s0, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b770) {
            ctx->pc = 0x29B760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b760;
        }
    }
    ctx->pc = 0x29B778u;
label_29b778:
    // 0x29b778: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x29b778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_29b77c:
    // 0x29b77c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B77Cu;
    {
        const bool branch_taken_0x29b77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B77Cu;
        // 0x29b780: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b77c) {
            ctx->pc = 0x29B790u;
            goto label_29b790;
        }
    }
    ctx->pc = 0x29B784u;
    // 0x29b784: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x29B784u;
    SET_GPR_U32(ctx, 31, 0x29B78Cu);
    ctx->pc = 0x29B788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B784u;
    // 0x29b788: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x29B784u, 0x29B78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B78Cu;
label_29b78c:
    // 0x29b78c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29b78cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29b790:
    // 0x29b790: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29b790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29b794: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29b794u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b798: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29b798u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29b79c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29b79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x29B7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B7A0u;
        // 0x29b7a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B7A8u;
}
