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

// Function: sub_002E3728
// Address: 0x2e3728 - 0x2e3790
void sub_002E3728_0x2e3728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3728_0x2e3728");
#endif

    switch (ctx->pc) {
        case 0x2e376cu: goto label_2e376c;
        default: break;
    }

    ctx->pc = 0x2e3728u;

    // 0x2e3728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e3728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e372c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e372cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e3730: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e3730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e3734: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E3734u;
    {
        const bool branch_taken_0x2e3734 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3734u;
        // 0x2e3738: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3734) {
            ctx->pc = 0x2E3754u;
            goto label_2e3754;
        }
    }
    ctx->pc = 0x2E373Cu;
    // 0x2e373c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e373cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3740: 0xe60c0354  swc1        $f12, 0x354($s0)
    ctx->pc = 0x2e3740u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 852), bits); }
    // 0x2e3744: 0xa2020350  sb          $v0, 0x350($s0)
    ctx->pc = 0x2e3744u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 848), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e3748: 0xa20202f0  sb          $v0, 0x2F0($s0)
    ctx->pc = 0x2e3748u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 752), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e374c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E374Cu;
    {
        const bool branch_taken_0x2e374c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E374Cu;
        // 0x2e3750: 0xa20202f1  sb          $v0, 0x2F1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 753), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e374c) {
            ctx->pc = 0x2E377Cu;
            goto label_2e377c;
        }
    }
    ctx->pc = 0x2E3754u;
label_2e3754:
    // 0x2e3754: 0x8e0502f8  lw          $a1, 0x2F8($s0)
    ctx->pc = 0x2e3754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 760)));
    // 0x2e3758: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3758u;
    {
        const bool branch_taken_0x2e3758 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3758) {
            ctx->pc = 0x2E375Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3758u;
            // 0x2e375c: 0xa20002f1  sb          $zero, 0x2F1($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 753), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3770u;
            goto label_2e3770;
        }
    }
    ctx->pc = 0x2E3760u;
    // 0x2e3760: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2e3760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2e3764: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x2E3764u;
    SET_GPR_U32(ctx, 31, 0x2E376Cu);
    ctx->pc = 0x2E3768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3764u;
    // 0x2e3768: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x2E3764u, 0x2E376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E376Cu;
label_2e376c:
    // 0x2e376c: 0xa20002f1  sb          $zero, 0x2F1($s0)
    ctx->pc = 0x2e376cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 753), (uint8_t)GPR_U32(ctx, 0));
label_2e3770:
    // 0x2e3770: 0xae0002f8  sw          $zero, 0x2F8($s0)
    ctx->pc = 0x2e3770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 760), GPR_U32(ctx, 0));
    // 0x2e3774: 0xa20002f2  sb          $zero, 0x2F2($s0)
    ctx->pc = 0x2e3774u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 754), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3778: 0xa20002f0  sb          $zero, 0x2F0($s0)
    ctx->pc = 0x2e3778u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 752), (uint8_t)GPR_U32(ctx, 0));
label_2e377c:
    // 0x2e377c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e377cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3780: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e3780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e3784: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3784u;
        // 0x2e3788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E378Cu;
    // 0x2e378c: 0x0  nop
    ctx->pc = 0x2e378cu;
    // NOP
    ctx->pc = 0x2e3790u;
}
