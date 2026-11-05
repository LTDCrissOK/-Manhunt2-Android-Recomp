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

// Function: sub_00258F90
// Address: 0x258f90 - 0x259028
void sub_00258F90_0x258f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258F90_0x258f90");
#endif

    switch (ctx->pc) {
        case 0x258fc0u: goto label_258fc0;
        default: break;
    }

    ctx->pc = 0x258f90u;

    // 0x258f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x258f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x258f94: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x258f94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x258f98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x258f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x258f9c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x258f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x258fa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x258fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258fa4: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x258fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258fa8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x258fa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x258fac: 0x0  nop
    ctx->pc = 0x258facu;
    // NOP
    // 0x258fb0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x258FB0u;
    {
        const bool branch_taken_0x258fb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x258FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FB0u;
        // 0x258fb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fb0) {
            ctx->pc = 0x259018u;
            goto label_259018;
        }
    }
    ctx->pc = 0x258FB8u;
    // 0x258fb8: 0xc0963a0  jal         func_258E80
    ctx->pc = 0x258FB8u;
    SET_GPR_U32(ctx, 31, 0x258FC0u);
    ctx->pc = 0x258E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E80u, 0x258FB8u, 0x258FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258FC0u;
label_258fc0:
    // 0x258fc0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x258FC0u;
    {
        const bool branch_taken_0x258fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FC0u;
        // 0x258fc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fc0) {
            ctx->pc = 0x259018u;
            goto label_259018;
        }
    }
    ctx->pc = 0x258FC8u;
    // 0x258fc8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x258fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x258fcc: 0x8e041004  lw          $a0, 0x1004($s0)
    ctx->pc = 0x258fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
    // 0x258fd0: 0x8c4395b4  lw          $v1, -0x6A4C($v0)
    ctx->pc = 0x258fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F95B4u));
    // 0x258fd4: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x258FD4u;
    {
        const bool branch_taken_0x258fd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x258FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FD4u;
        // 0x258fd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fd4) {
            ctx->pc = 0x259018u;
            goto label_259018;
        }
    }
    ctx->pc = 0x258FDCu;
    // 0x258fdc: 0x9202047d  lbu         $v0, 0x47D($s0)
    ctx->pc = 0x258fdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1149)));
    // 0x258fe0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x258FE0u;
    {
        const bool branch_taken_0x258fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FE0u;
        // 0x258fe4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fe0) {
            ctx->pc = 0x259018u;
            goto label_259018;
        }
    }
    ctx->pc = 0x258FE8u;
    // 0x258fe8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x258fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x258fec: 0x8e060334  lw          $a2, 0x334($s0)
    ctx->pc = 0x258fecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x258ff0: 0x8c442b00  lw          $a0, 0x2B00($v0)
    ctx->pc = 0x258ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482B00u));
    // 0x258ff4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x258ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x258ff8: 0x8e021084  lw          $v0, 0x1084($s0)
    ctx->pc = 0x258ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4228)));
    // 0x258ffc: 0x8cc30150  lw          $v1, 0x150($a2)
    ctx->pc = 0x258ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
    // 0x259000: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x259000u;
    {
        const bool branch_taken_0x259000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x259004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259000u;
        // 0x259004: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259000) {
            ctx->pc = 0x259014u;
            goto label_259014;
        }
    }
    ctx->pc = 0x259008u;
    // 0x259008: 0x2c8300fb  sltiu       $v1, $a0, 0xFB
    ctx->pc = 0x259008u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)251) ? 1 : 0);
    // 0x25900c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x25900Cu;
    {
        const bool branch_taken_0x25900c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x259010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25900Cu;
        // 0x259010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25900c) {
            ctx->pc = 0x259018u;
            goto label_259018;
        }
    }
    ctx->pc = 0x259014u;
label_259014:
    // 0x259014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x259014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_259018:
    // 0x259018: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x259018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25901c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x25901cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x259020: 0x3e00008  jr          $ra
    ctx->pc = 0x259020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259020u;
        // 0x259024: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259028u;
}
