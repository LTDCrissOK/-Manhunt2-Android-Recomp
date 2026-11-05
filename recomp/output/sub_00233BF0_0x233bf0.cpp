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

// Function: sub_00233BF0
// Address: 0x233bf0 - 0x233ca0
void sub_00233BF0_0x233bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233BF0_0x233bf0");
#endif

    switch (ctx->pc) {
        case 0x233c64u: goto label_233c64;
        case 0x233c6cu: goto label_233c6c;
        default: break;
    }

    ctx->pc = 0x233bf0u;

    // 0x233bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x233bf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x233bf8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x233bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x233bfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233c00: 0x8e02042c  lw          $v0, 0x42C($s0)
    ctx->pc = 0x233c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1068)));
    // 0x233c04: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x233C04u;
    {
        const bool branch_taken_0x233c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C04u;
        // 0x233c08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c04) {
            ctx->pc = 0x233C8Cu;
            goto label_233c8c;
        }
    }
    ctx->pc = 0x233C0Cu;
    // 0x233c0c: 0xc6010434  lwc1        $f1, 0x434($s0)
    ctx->pc = 0x233c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x233c10: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x233c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x233c14: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x233c14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x233c18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x233c18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233c1c: 0x0  nop
    ctx->pc = 0x233c1cu;
    // NOP
    // 0x233c20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x233c20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x233c24: 0x0  nop
    ctx->pc = 0x233c24u;
    // NOP
    // 0x233c28: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
    ctx->pc = 0x233C28u;
    {
        const bool branch_taken_0x233c28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x233c28) {
            ctx->pc = 0x233C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233C28u;
            // 0x233c2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233C90u;
            goto label_233c90;
        }
    }
    ctx->pc = 0x233C30u;
    // 0x233c30: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x233c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x233c34: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x233c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x233c38: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x233c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x233c3c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x233C3Cu;
    {
        const bool branch_taken_0x233c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C3Cu;
        // 0x233c40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c3c) {
            ctx->pc = 0x233C8Cu;
            goto label_233c8c;
        }
    }
    ctx->pc = 0x233C44u;
    // 0x233c44: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x233c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x233c48: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x233C48u;
    {
        const bool branch_taken_0x233c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C48u;
        // 0x233c4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c48) {
            ctx->pc = 0x233C8Cu;
            goto label_233c8c;
        }
    }
    ctx->pc = 0x233C50u;
    // 0x233c50: 0x8e020fd0  lw          $v0, 0xFD0($s0)
    ctx->pc = 0x233c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4048)));
    // 0x233c54: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x233C54u;
    {
        const bool branch_taken_0x233c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C54u;
        // 0x233c58: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c54) {
            ctx->pc = 0x233C7Cu;
            goto label_233c7c;
        }
    }
    ctx->pc = 0x233C5Cu;
    // 0x233c5c: 0xc08fc4e  jal         func_23F138
    ctx->pc = 0x233C5Cu;
    SET_GPR_U32(ctx, 31, 0x233C64u);
    ctx->pc = 0x233C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233C5Cu;
    // 0x233c60: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F138u, 0x233C5Cu, 0x233C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233C64u;
label_233c64:
    // 0x233c64: 0xc076826  jal         func_1DA098
    ctx->pc = 0x233C64u;
    SET_GPR_U32(ctx, 31, 0x233C6Cu);
    ctx->pc = 0x233C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233C64u;
    // 0x233c68: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA098u, 0x233C64u, 0x233C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233C6Cu;
label_233c6c:
    // 0x233c6c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x233c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x233c70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233c74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x233C74u;
    {
        const bool branch_taken_0x233c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C74u;
        // 0x233c78: 0xac629898  sw          $v0, -0x6768($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294940824), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c74) {
            ctx->pc = 0x233C8Cu;
            goto label_233c8c;
        }
    }
    ctx->pc = 0x233C7Cu;
label_233c7c:
    // 0x233c7c: 0x8c629898  lw          $v0, -0x6768($v1)
    ctx->pc = 0x233c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940824)));
    // 0x233c80: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x233C80u;
    {
        const bool branch_taken_0x233c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233c80) {
            ctx->pc = 0x233C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233C80u;
            // 0x233c84: 0xac609898  sw          $zero, -0x6768($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294940824), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233C88u;
            goto label_233c88;
        }
    }
    ctx->pc = 0x233C88u;
label_233c88:
    // 0x233c88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x233c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233c8c:
    // 0x233c8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233c8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233c90:
    // 0x233c90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x233c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x233c94: 0x3e00008  jr          $ra
    ctx->pc = 0x233C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C94u;
        // 0x233c98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233C9Cu;
    // 0x233c9c: 0x0  nop
    ctx->pc = 0x233c9cu;
    // NOP
    ctx->pc = 0x233ca0u;
}
