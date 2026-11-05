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

// Function: sub_00130D40
// Address: 0x130d40 - 0x130e28
void sub_00130D40_0x130d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130D40_0x130d40");
#endif

    switch (ctx->pc) {
        case 0x130d7cu: goto label_130d7c;
        case 0x130d88u: goto label_130d88;
        case 0x130d94u: goto label_130d94;
        case 0x130da0u: goto label_130da0;
        case 0x130db8u: goto label_130db8;
        case 0x130dc8u: goto label_130dc8;
        case 0x130dd4u: goto label_130dd4;
        case 0x130de8u: goto label_130de8;
        case 0x130e00u: goto label_130e00;
        default: break;
    }

    ctx->pc = 0x130d40u;

    // 0x130d40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x130d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x130d44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130d48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x130d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x130d4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x130d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x130d50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x130d50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d54: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x130d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x130d58: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x130d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x130d5c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x130d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x130d60: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x130d60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x130d64: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x130d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x130d68: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x130d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x130d6c: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x130D6Cu;
    {
        const bool branch_taken_0x130d6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D6Cu;
        // 0x130d70: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d6c) {
            ctx->pc = 0x130E00u;
            goto label_130e00;
        }
    }
    ctx->pc = 0x130D74u;
    // 0x130d74: 0xc046086  jal         func_118218
    ctx->pc = 0x130D74u;
    SET_GPR_U32(ctx, 31, 0x130D7Cu);
    ctx->pc = 0x130D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130D74u;
    // 0x130d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118218u, 0x130D74u, 0x130D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D7Cu;
label_130d7c:
    // 0x130d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d80: 0xc046044  jal         func_118110
    ctx->pc = 0x130D80u;
    SET_GPR_U32(ctx, 31, 0x130D88u);
    ctx->pc = 0x130D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130D80u;
    // 0x130d84: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118110u, 0x130D80u, 0x130D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D88u;
label_130d88:
    // 0x130d88: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x130d88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d8c: 0xc0462b0  jal         func_118AC0
    ctx->pc = 0x130D8Cu;
    SET_GPR_U32(ctx, 31, 0x130D94u);
    ctx->pc = 0x130D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130D8Cu;
    // 0x130d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118AC0u, 0x130D8Cu, 0x130D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D94u;
label_130d94:
    // 0x130d94: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x130d94u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x130d98: 0xc046002  jal         func_118008
    ctx->pc = 0x130D98u;
    SET_GPR_U32(ctx, 31, 0x130DA0u);
    ctx->pc = 0x130D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130D98u;
    // 0x130d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x130D98u, 0x130DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130DA0u;
label_130da0:
    // 0x130da0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x130da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130da4: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x130DA4u;
    {
        const bool branch_taken_0x130da4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x130DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130DA4u;
        // 0x130da8: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130da4) {
            ctx->pc = 0x130DCCu;
            goto label_130dcc;
        }
    }
    ctx->pc = 0x130DACu;
    // 0x130dac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x130dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130db0: 0xc04785a  jal         func_11E168
    ctx->pc = 0x130DB0u;
    SET_GPR_U32(ctx, 31, 0x130DB8u);
    ctx->pc = 0x130DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130DB0u;
    // 0x130db4: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E168u, 0x130DB0u, 0x130DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130DB8u;
label_130db8:
    // 0x130db8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x130DB8u;
    {
        const bool branch_taken_0x130db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130db8) {
            ctx->pc = 0x130DCCu;
            goto label_130dcc;
        }
    }
    ctx->pc = 0x130DC0u;
    // 0x130dc0: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x130DC0u;
    SET_GPR_U32(ctx, 31, 0x130DC8u);
    ctx->pc = 0x130DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130DC0u;
    // 0x130dc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x130DC0u, 0x130DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130DC8u;
label_130dc8:
    // 0x130dc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x130dc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_130dcc:
    // 0x130dcc: 0xc043920  jal         func_10E480
    ctx->pc = 0x130DCCu;
    SET_GPR_U32(ctx, 31, 0x130DD4u);
    ctx->pc = 0x130DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130DCCu;
    // 0x130dd0: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x130DCCu, 0x130DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130DD4u;
label_130dd4:
    // 0x130dd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x130dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130dd8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x130DD8u;
    {
        const bool branch_taken_0x130dd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x130DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130DD8u;
        // 0x130ddc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130dd8) {
            ctx->pc = 0x130E00u;
            goto label_130e00;
        }
    }
    ctx->pc = 0x130DE0u;
    // 0x130de0: 0xc04c5ca  jal         func_131728
    ctx->pc = 0x130DE0u;
    SET_GPR_U32(ctx, 31, 0x130DE8u);
    ctx->pc = 0x130DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130DE0u;
    // 0x130de4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131728u, 0x130DE0u, 0x130DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130DE8u;
label_130de8:
    // 0x130de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130dec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x130decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130df0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x130df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130df4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x130df4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130df8: 0xc0950ba  jal         func_2542E8
    ctx->pc = 0x130DF8u;
    SET_GPR_U32(ctx, 31, 0x130E00u);
    ctx->pc = 0x130DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130DF8u;
    // 0x130dfc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2542E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2542E8u, 0x130DF8u, 0x130E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E00u;
label_130e00:
    // 0x130e00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130e04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130e04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130e08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x130e08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130e0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x130e0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130e10: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x130e10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x130e14: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x130e14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130e18: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x130e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x130e1c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x130e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x130e20: 0x3e00008  jr          $ra
    ctx->pc = 0x130E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E20u;
        // 0x130e24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130E28u;
}
