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

// Function: sub_00121D30
// Address: 0x121d30 - 0x121e10
void sub_00121D30_0x121d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121D30_0x121d30");
#endif

    switch (ctx->pc) {
        case 0x121d80u: goto label_121d80;
        case 0x121db4u: goto label_121db4;
        case 0x121dd0u: goto label_121dd0;
        case 0x121ddcu: goto label_121ddc;
        default: break;
    }

    ctx->pc = 0x121d30u;

    // 0x121d30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x121d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x121d34: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x121d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x121d38: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x121d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x121d3c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x121d3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d40: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x121d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x121d44: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x121d44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d48: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x121d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x121d4c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x121d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d50: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x121d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x121d54: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x121d54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d58: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x121d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x121d5c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x121d5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d60: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x121d60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x121d64: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x121d64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d68: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x121d68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x121d6c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x121d6cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x121d70: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x121d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x121d74: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x121d74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x121d78: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121D78u;
    SET_GPR_U32(ctx, 31, 0x121D80u);
    ctx->pc = 0x121D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121D78u;
    // 0x121d7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121D78u, 0x121D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D80u;
label_121d80:
    // 0x121d80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x121D80u;
    {
        const bool branch_taken_0x121d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x121D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D80u;
        // 0x121d84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121d80) {
            ctx->pc = 0x121D90u;
            goto label_121d90;
        }
    }
    ctx->pc = 0x121D88u;
    // 0x121d88: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x121D88u;
    {
        const bool branch_taken_0x121d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D88u;
        // 0x121d8c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121d88) {
            ctx->pc = 0x121DE0u;
            goto label_121de0;
        }
    }
    ctx->pc = 0x121D90u;
label_121d90:
    // 0x121d90: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x121d90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d94: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x121d94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d98: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x121d98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x121d9c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x121d9cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x121da0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x121da0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121da4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x121da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x121da8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x121da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121dac: 0xc048784  jal         func_121E10
    ctx->pc = 0x121DACu;
    SET_GPR_U32(ctx, 31, 0x121DB4u);
    ctx->pc = 0x121DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121DACu;
    // 0x121db0: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121E10u, 0x121DACu, 0x121DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121DB4u;
label_121db4:
    // 0x121db4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x121db4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121db8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x121db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121dbc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x121DBCu;
    {
        const bool branch_taken_0x121dbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x121DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121DBCu;
        // 0x121dc0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121dbc) {
            ctx->pc = 0x121DE0u;
            goto label_121de0;
        }
    }
    ctx->pc = 0x121DC4u;
    // 0x121dc4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x121dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121dc8: 0xc05a6dc  jal         func_169B70
    ctx->pc = 0x121DC8u;
    SET_GPR_U32(ctx, 31, 0x121DD0u);
    ctx->pc = 0x121DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121DC8u;
    // 0x121dcc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B70u, 0x121DC8u, 0x121DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121DD0u;
label_121dd0:
    // 0x121dd0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x121dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121dd4: 0xc049944  jal         func_126510
    ctx->pc = 0x121DD4u;
    SET_GPR_U32(ctx, 31, 0x121DDCu);
    ctx->pc = 0x121DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121DD4u;
    // 0x121dd8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126510u, 0x121DD4u, 0x121DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121DDCu;
label_121ddc:
    // 0x121ddc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x121ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121de0:
    // 0x121de0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x121de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121de4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x121de4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x121de8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x121de8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x121dec: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x121decu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x121df0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x121df0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x121df4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x121df4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x121df8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x121df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x121dfc: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x121dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x121e00: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x121e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x121e04: 0x3e00008  jr          $ra
    ctx->pc = 0x121E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E04u;
        // 0x121e08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121E0Cu;
    // 0x121e0c: 0x0  nop
    ctx->pc = 0x121e0cu;
    // NOP
    ctx->pc = 0x121e10u;
}
