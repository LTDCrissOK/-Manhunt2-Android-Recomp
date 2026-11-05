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

// Function: sub_00124CB0
// Address: 0x124cb0 - 0x124d70
void sub_00124CB0_0x124cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124CB0_0x124cb0");
#endif

    switch (ctx->pc) {
        case 0x124ce0u: goto label_124ce0;
        case 0x124cf0u: goto label_124cf0;
        case 0x124d4cu: goto label_124d4c;
        default: break;
    }

    ctx->pc = 0x124cb0u;

    // 0x124cb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x124cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x124cb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124cb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x124cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x124cbc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x124cbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124cc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x124cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x124cc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x124cc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124cc8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x124cc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x124ccc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x124cccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124cd0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x124cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x124cd4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x124cd4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x124cd8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x124CD8u;
    SET_GPR_U32(ctx, 31, 0x124CE0u);
    ctx->pc = 0x124CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124CD8u;
    // 0x124cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x124CD8u, 0x124CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124CE0u;
label_124ce0:
    // 0x124ce0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x124CE0u;
    {
        const bool branch_taken_0x124ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CE0u;
        // 0x124ce4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ce0) {
            ctx->pc = 0x124D54u;
            goto label_124d54;
        }
    }
    ctx->pc = 0x124CE8u;
    // 0x124ce8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x124CE8u;
    SET_GPR_U32(ctx, 31, 0x124CF0u);
    ctx->pc = 0x124CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124CE8u;
    // 0x124cec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x124CE8u, 0x124CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124CF0u;
label_124cf0:
    // 0x124cf0: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x124CF0u;
    {
        const bool branch_taken_0x124cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124cf0) {
            ctx->pc = 0x124CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124CF0u;
            // 0x124cf4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124D54u;
            goto label_124d54;
        }
    }
    ctx->pc = 0x124CF8u;
    // 0x124cf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x124cf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124cfc: 0x0  nop
    ctx->pc = 0x124cfcu;
    // NOP
    // 0x124d00: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x124d00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124d04: 0x0  nop
    ctx->pc = 0x124d04u;
    // NOP
    // 0x124d08: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x124D08u;
    {
        const bool branch_taken_0x124d08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x124d08) {
            ctx->pc = 0x124D1Cu;
            goto label_124d1c;
        }
    }
    ctx->pc = 0x124D10u;
    // 0x124d10: 0x3c014c51  lui         $at, 0x4C51
    ctx->pc = 0x124d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19537 << 16));
    // 0x124d14: 0x3421cef0  ori         $at, $at, 0xCEF0
    ctx->pc = 0x124d14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52976);
    // 0x124d18: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x124d18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_124d1c:
    // 0x124d1c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x124d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x124d20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x124d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124d24: 0x0  nop
    ctx->pc = 0x124d24u;
    // NOP
    // 0x124d28: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x124d28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124d2c: 0x0  nop
    ctx->pc = 0x124d2cu;
    // NOP
    // 0x124d30: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x124D30u;
    {
        const bool branch_taken_0x124d30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x124D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D30u;
        // 0x124d34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d30) {
            ctx->pc = 0x124D54u;
            goto label_124d54;
        }
    }
    ctx->pc = 0x124D38u;
    // 0x124d38: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x124d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x124d3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x124d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124d40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x124d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124d44: 0xc042d1a  jal         func_10B468
    ctx->pc = 0x124D44u;
    SET_GPR_U32(ctx, 31, 0x124D4Cu);
    ctx->pc = 0x124D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124D44u;
    // 0x124d48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B468u, 0x124D44u, 0x124D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D4Cu;
label_124d4c:
    // 0x124d4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x124D4Cu;
    {
        const bool branch_taken_0x124d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D4Cu;
        // 0x124d50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d4c) {
            ctx->pc = 0x124D58u;
            goto label_124d58;
        }
    }
    ctx->pc = 0x124D54u;
label_124d54:
    // 0x124d54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_124d58:
    // 0x124d58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x124d58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124d5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x124d5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124d60: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x124d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124d64: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x124d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x124d68: 0x3e00008  jr          $ra
    ctx->pc = 0x124D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D68u;
        // 0x124d6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124D70u;
}
