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

// Function: sub_00233CA0
// Address: 0x233ca0 - 0x233d30
void sub_00233CA0_0x233ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233CA0_0x233ca0");
#endif

    switch (ctx->pc) {
        case 0x233d14u: goto label_233d14;
        case 0x233d1cu: goto label_233d1c;
        default: break;
    }

    ctx->pc = 0x233ca0u;

    // 0x233ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x233ca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x233ca8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x233ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x233cac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233cb0: 0x8e02042c  lw          $v0, 0x42C($s0)
    ctx->pc = 0x233cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1068)));
    // 0x233cb4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x233CB4u;
    {
        const bool branch_taken_0x233cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CB4u;
        // 0x233cb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233cb4) {
            ctx->pc = 0x233D20u;
            goto label_233d20;
        }
    }
    ctx->pc = 0x233CBCu;
    // 0x233cbc: 0xc6010434  lwc1        $f1, 0x434($s0)
    ctx->pc = 0x233cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x233cc0: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x233cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x233cc4: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x233cc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x233cc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x233cc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233ccc: 0x0  nop
    ctx->pc = 0x233cccu;
    // NOP
    // 0x233cd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x233cd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x233cd4: 0x0  nop
    ctx->pc = 0x233cd4u;
    // NOP
    // 0x233cd8: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x233CD8u;
    {
        const bool branch_taken_0x233cd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x233cd8) {
            ctx->pc = 0x233CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233CD8u;
            // 0x233cdc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233D24u;
            goto label_233d24;
        }
    }
    ctx->pc = 0x233CE0u;
    // 0x233ce0: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x233ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x233ce4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x233ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x233ce8: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x233ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x233cec: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x233CECu;
    {
        const bool branch_taken_0x233cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CECu;
        // 0x233cf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233cec) {
            ctx->pc = 0x233D20u;
            goto label_233d20;
        }
    }
    ctx->pc = 0x233CF4u;
    // 0x233cf4: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x233cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x233cf8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x233CF8u;
    {
        const bool branch_taken_0x233cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CF8u;
        // 0x233cfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233cf8) {
            ctx->pc = 0x233D20u;
            goto label_233d20;
        }
    }
    ctx->pc = 0x233D00u;
    // 0x233d00: 0x8e020fd0  lw          $v0, 0xFD0($s0)
    ctx->pc = 0x233d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4048)));
    // 0x233d04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x233D04u;
    {
        const bool branch_taken_0x233d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D04u;
        // 0x233d08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d04) {
            ctx->pc = 0x233D20u;
            goto label_233d20;
        }
    }
    ctx->pc = 0x233D0Cu;
    // 0x233d0c: 0xc08fc4e  jal         func_23F138
    ctx->pc = 0x233D0Cu;
    SET_GPR_U32(ctx, 31, 0x233D14u);
    ctx->pc = 0x233D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D0Cu;
    // 0x233d10: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F138u, 0x233D0Cu, 0x233D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D14u;
label_233d14:
    // 0x233d14: 0xc076826  jal         func_1DA098
    ctx->pc = 0x233D14u;
    SET_GPR_U32(ctx, 31, 0x233D1Cu);
    ctx->pc = 0x233D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D14u;
    // 0x233d18: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA098u, 0x233D14u, 0x233D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D1Cu;
label_233d1c:
    // 0x233d1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233d20:
    // 0x233d20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233d20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233d24:
    // 0x233d24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x233d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x233d28: 0x3e00008  jr          $ra
    ctx->pc = 0x233D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D28u;
        // 0x233d2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233D30u;
}
