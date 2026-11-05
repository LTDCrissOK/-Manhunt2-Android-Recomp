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

// Function: sub_003E3420
// Address: 0x3e3420 - 0x3e34b0
void sub_003E3420_0x3e3420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3420_0x3e3420");
#endif

    switch (ctx->pc) {
        case 0x3e3448u: goto label_3e3448;
        case 0x3e3490u: goto label_3e3490;
        default: break;
    }

    ctx->pc = 0x3e3420u;

    // 0x3e3420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e3420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e3424: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3e3424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3e3428: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3e3428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3e342c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e342cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3430: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3e3430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x3e3434: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e3434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3438: 0x12120017  beq         $s0, $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x3E3438u;
    {
        const bool branch_taken_0x3e3438 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x3E343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3438u;
        // 0x3e343c: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3438) {
            ctx->pc = 0x3E3498u;
            goto label_3e3498;
        }
    }
    ctx->pc = 0x3E3440u;
    // 0x3e3440: 0x27b10008  addiu       $s1, $sp, 0x8
    ctx->pc = 0x3e3440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x3e3444: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e3444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3e3448:
    // 0x3e3448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e344c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e344cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e3450: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3e3450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3454: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3e3454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3e3458: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e3458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e345c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3e345cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x3e3460: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3e3460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e3464: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3e3464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e3468: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x3e3468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e346c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3e346cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e3470: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3e3470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e3474: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3e3474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e3478: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x3e3478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e347c: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x3e347cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x3e3480: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x3e3480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e3484: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x3e3484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x3e3488: 0xc0f8c7c  jal         func_3E31F0
    ctx->pc = 0x3E3488u;
    SET_GPR_U32(ctx, 31, 0x3E3490u);
    ctx->pc = 0x3E348Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3488u;
    // 0x3e348c: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E31F0u, 0x3E3488u, 0x3E3490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3490u;
label_3e3490:
    // 0x3e3490: 0x5612ffed  bnel        $s0, $s2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3E3490u;
    {
        const bool branch_taken_0x3e3490 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x3e3490) {
            ctx->pc = 0x3E3494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3490u;
            // 0x3e3494: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3448;
        }
    }
    ctx->pc = 0x3E3498u;
label_3e3498:
    // 0x3e3498: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3e3498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e349c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3e349cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e34a0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3e34a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e34a4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3e34a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3e34a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E34A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E34ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E34A8u;
        // 0x3e34ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E34A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E34B0u;
}
