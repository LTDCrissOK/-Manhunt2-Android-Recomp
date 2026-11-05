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

// Function: sub_001EEA60
// Address: 0x1eea60 - 0x1eeb00
void sub_001EEA60_0x1eea60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EEA60_0x1eea60");
#endif

    switch (ctx->pc) {
        case 0x1eeaa8u: goto label_1eeaa8;
        case 0x1eeab4u: goto label_1eeab4;
        case 0x1eeaccu: goto label_1eeacc;
        default: break;
    }

    ctx->pc = 0x1eea60u;

    // 0x1eea60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eea60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eea64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1eea64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1eea68: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x1eea68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1eea6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1eea6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eea70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eea70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eea74: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1eea74u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1eea78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eea78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1eea7c: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1EEA7Cu;
    {
        const bool branch_taken_0x1eea7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA7Cu;
        // 0x1eea80: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eea7c) {
            ctx->pc = 0x1EEAD4u;
            goto label_1eead4;
        }
    }
    ctx->pc = 0x1EEA84u;
    // 0x1eea84: 0x2ca20045  sltiu       $v0, $a1, 0x45
    ctx->pc = 0x1eea84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
    // 0x1eea88: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EEA88u;
    {
        const bool branch_taken_0x1eea88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA88u;
        // 0x1eea8c: 0x58400  sll         $s0, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eea88) {
            ctx->pc = 0x1EEAD4u;
            goto label_1eead4;
        }
    }
    ctx->pc = 0x1EEA90u;
    // 0x1eea90: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x1eea90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x1eea94: 0x24427ee0  addiu       $v0, $v0, 0x7EE0
    ctx->pc = 0x1eea94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32480));
    // 0x1eea98: 0x1083c3  sra         $s0, $s0, 15
    ctx->pc = 0x1eea98u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 15));
    // 0x1eea9c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1eea9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1eeaa0: 0xc0c34e6  jal         func_30D398
    ctx->pc = 0x1EEAA0u;
    SET_GPR_U32(ctx, 31, 0x1EEAA8u);
    ctx->pc = 0x1EEAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEAA0u;
    // 0x1eeaa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D398u, 0x1EEAA0u, 0x1EEAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEAA8u;
label_1eeaa8:
    // 0x1eeaa8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1eeaa8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1eeaac: 0xc0c34ee  jal         func_30D3B8
    ctx->pc = 0x1EEAACu;
    SET_GPR_U32(ctx, 31, 0x1EEAB4u);
    ctx->pc = 0x1EEAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEAACu;
    // 0x1eeab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D3B8u, 0x1EEAACu, 0x1EEAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEAB4u;
label_1eeab4:
    // 0x1eeab4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1eeab4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1eeab8: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x1eeab8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    // 0x1eeabc: 0x460d73c1  sub.s       $f15, $f14, $f13
    ctx->pc = 0x1eeabcu;
    ctx->f[15] = FPU_SUB_S(ctx->f[14], ctx->f[13]);
    // 0x1eeac0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eeac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeac4: 0xc07bac0  jal         func_1EEB00
    ctx->pc = 0x1EEAC4u;
    SET_GPR_U32(ctx, 31, 0x1EEACCu);
    ctx->pc = 0x1EEAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEAC4u;
    // 0x1eeac8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEB00u, 0x1EEAC4u, 0x1EEACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEACCu;
label_1eeacc:
    // 0x1eeacc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EEACCu;
    {
        const bool branch_taken_0x1eeacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEACCu;
        // 0x1eead0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeacc) {
            ctx->pc = 0x1EEADCu;
            goto label_1eeadc;
        }
    }
    ctx->pc = 0x1EEAD4u;
label_1eead4:
    // 0x1eead4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eead4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eead8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eead8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eeadc:
    // 0x1eeadc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1eeadcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1eeae0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1eeae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eeae4: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x1eeae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1eeae8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1eeae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1eeaec: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEAECu;
        // 0x1eeaf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EEAF4u;
    // 0x1eeaf4: 0x0  nop
    ctx->pc = 0x1eeaf4u;
    // NOP
    // 0x1eeaf8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1eeaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1eeafc: 0x0  nop
    ctx->pc = 0x1eeafcu;
    // NOP
    ctx->pc = 0x1eeb00u;
}
