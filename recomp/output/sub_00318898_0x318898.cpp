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

// Function: sub_00318898
// Address: 0x318898 - 0x318928
void sub_00318898_0x318898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318898_0x318898");
#endif

    switch (ctx->pc) {
        case 0x3188b8u: goto label_3188b8;
        default: break;
    }

    ctx->pc = 0x318898u;

    // 0x318898: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x318898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x31889c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31889cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3188a0: 0x8c43f19c  lw          $v1, -0xE64($v0)
    ctx->pc = 0x3188a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BF19Cu));
    // 0x3188a4: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3188A4u;
    {
        const bool branch_taken_0x3188a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3188A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3188A4u;
        // 0x3188a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3188a4) {
            ctx->pc = 0x318918u;
            goto label_318918;
        }
    }
    ctx->pc = 0x3188ACu;
    // 0x3188ac: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x3188acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3188b0: 0xc0bb5de  jal         func_2ED778
    ctx->pc = 0x3188B0u;
    SET_GPR_U32(ctx, 31, 0x3188B8u);
    ctx->pc = 0x3188B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3188B0u;
    // 0x3188b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED778u, 0x3188B0u, 0x3188B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3188B8u;
label_3188b8:
    // 0x3188b8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3188B8u;
    {
        const bool branch_taken_0x3188b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3188BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3188B8u;
        // 0x3188bc: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3188b8) {
            ctx->pc = 0x318918u;
            goto label_318918;
        }
    }
    ctx->pc = 0x3188C0u;
    // 0x3188c0: 0x8c43c548  lw          $v1, -0x3AB8($v0)
    ctx->pc = 0x3188c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952264)));
    // 0x3188c4: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3188C4u;
    {
        const bool branch_taken_0x3188c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3188C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3188C4u;
        // 0x3188c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3188c4) {
            ctx->pc = 0x31891Cu;
            goto label_31891c;
        }
    }
    ctx->pc = 0x3188CCu;
    // 0x3188cc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3188ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3188d0: 0x8c43a4fc  lw          $v1, -0x5B04($v0)
    ctx->pc = 0x3188d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA4FCu));
    // 0x3188d4: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3188D4u;
    {
        const bool branch_taken_0x3188d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3188D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3188D4u;
        // 0x3188d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3188d4) {
            ctx->pc = 0x31891Cu;
            goto label_31891c;
        }
    }
    ctx->pc = 0x3188DCu;
    // 0x3188dc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3188dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3188e0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3188e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3188e4: 0x8c62bd50  lw          $v0, -0x42B0($v1)
    ctx->pc = 0x3188e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x3188e8: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x3188e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3188ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3188ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3188f0: 0x0  nop
    ctx->pc = 0x3188f0u;
    // NOP
    // 0x3188f4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x3188F4u;
    {
        const bool branch_taken_0x3188f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3188F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3188F4u;
        // 0x3188f8: 0x3c020067  lui         $v0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3188f4) {
            ctx->pc = 0x318918u;
            goto label_318918;
        }
    }
    ctx->pc = 0x3188FCu;
    // 0x3188fc: 0x8c43a320  lw          $v1, -0x5CE0($v0)
    ctx->pc = 0x3188fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943520)));
    // 0x318900: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x318900u;
    {
        const bool branch_taken_0x318900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x318904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318900u;
        // 0x318904: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318900) {
            ctx->pc = 0x31891Cu;
            goto label_31891c;
        }
    }
    ctx->pc = 0x318908u;
    // 0x318908: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x318908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x31890c: 0x90835aec  lbu         $v1, 0x5AEC($a0)
    ctx->pc = 0x31890cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x595AECu));
    // 0x318910: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x318910u;
    {
        const bool branch_taken_0x318910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x318914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318910u;
        // 0x318914: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318910) {
            ctx->pc = 0x31891Cu;
            goto label_31891c;
        }
    }
    ctx->pc = 0x318918u;
label_318918:
    // 0x318918: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x318918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31891c:
    // 0x31891c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31891cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x318920: 0x3e00008  jr          $ra
    ctx->pc = 0x318920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318920u;
        // 0x318924: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318928u;
}
