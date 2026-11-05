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

// Function: sub_001B36E0
// Address: 0x1b36e0 - 0x1b3768
void sub_001B36E0_0x1b36e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B36E0_0x1b36e0");
#endif

    switch (ctx->pc) {
        case 0x1b3708u: goto label_1b3708;
        case 0x1b3710u: goto label_1b3710;
        case 0x1b374cu: goto label_1b374c;
        default: break;
    }

    ctx->pc = 0x1b36e0u;

    // 0x1b36e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b36e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b36e4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1b36e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1b36e8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b36e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b36ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b36ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b36f0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1b36f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1b36f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b36f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b36f8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B36F8u;
    {
        const bool branch_taken_0x1b36f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B36FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B36F8u;
        // 0x1b36fc: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b36f8) {
            ctx->pc = 0x1B3708u;
            goto label_1b3708;
        }
    }
    ctx->pc = 0x1B3700u;
    // 0x1b3700: 0xc06cdb4  jal         func_1B36D0
    ctx->pc = 0x1B3700u;
    SET_GPR_U32(ctx, 31, 0x1B3708u);
    ctx->pc = 0x1B36D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36D0u, 0x1B3700u, 0x1B3708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3708u;
label_1b3708:
    // 0x1b3708: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B3708u;
    SET_GPR_U32(ctx, 31, 0x1B3710u);
    ctx->pc = 0x1B370Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3708u;
    // 0x1b370c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B3708u, 0x1B3710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3710u;
label_1b3710:
    // 0x1b3710: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x1b3710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b3714: 0x3c100043  lui         $s0, 0x43
    ctx->pc = 0x1b3714u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)67 << 16));
    // 0x1b3718: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1b3718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b371c: 0x26100f90  addiu       $s0, $s0, 0xF90
    ctx->pc = 0x1b371cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3984));
    // 0x1b3720: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1b3720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3724: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b3724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b3728: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b372c: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x1b372cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x1b3730: 0xafb10014  sw          $s1, 0x14($sp)
    ctx->pc = 0x1b3730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 17));
    // 0x1b3734: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b3734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3738: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1b3738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1b373c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b373cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b3740: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1b3740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b3744: 0xc06cdea  jal         func_1B37A8
    ctx->pc = 0x1B3744u;
    SET_GPR_U32(ctx, 31, 0x1B374Cu);
    ctx->pc = 0x1B3748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3744u;
    // 0x1b3748: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B37A8u, 0x1B3744u, 0x1B374Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B374Cu;
label_1b374c:
    // 0x1b374c: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x1b374cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x1b3750: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b3750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3754: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1b3754u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b3758: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b3758u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b375c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b375cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b3760: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3760u;
        // 0x1b3764: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3768u;
}
