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

// Function: sub_003187A0
// Address: 0x3187a0 - 0x318898
void sub_003187A0_0x3187a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003187A0_0x3187a0");
#endif

    switch (ctx->pc) {
        case 0x3187f0u: goto label_3187f0;
        case 0x3187f8u: goto label_3187f8;
        case 0x318804u: goto label_318804;
        case 0x31880cu: goto label_31880c;
        case 0x318838u: goto label_318838;
        case 0x318840u: goto label_318840;
        case 0x318848u: goto label_318848;
        case 0x318850u: goto label_318850;
        case 0x318858u: goto label_318858;
        case 0x318868u: goto label_318868;
        default: break;
    }

    ctx->pc = 0x3187a0u;

    // 0x3187a0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3187a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3187a4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3187a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3187a8: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x3187a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD70u));
    // 0x3187ac: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3187acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3187b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3187b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3187b4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3187b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3187b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3187b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3187bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3187bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3187c0: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x3187c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3187c4: 0x24120080  addiu       $s2, $zero, 0x80
    ctx->pc = 0x3187c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3187c8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3187c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3187cc: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x3187ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x3187d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3187d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3187d4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3187d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3187d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3187d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3187dc: 0x8c91a300  lw          $s1, -0x5D00($a0)
    ctx->pc = 0x3187dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943488)));
    // 0x3187e0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x3187e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3187e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3187e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3187e8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3187e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3187ec: 0x0  nop
    ctx->pc = 0x3187ecu;
    // NOP
label_3187f0:
    // 0x3187f0: 0xc0db256  jal         func_36C958
    ctx->pc = 0x3187F0u;
    SET_GPR_U32(ctx, 31, 0x3187F8u);
    ctx->pc = 0x3187F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3187F0u;
    // 0x3187f4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C958u, 0x3187F0u, 0x3187F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3187F8u;
label_3187f8:
    // 0x3187f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3187f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3187fc: 0xc0c2a36  jal         func_30A8D8
    ctx->pc = 0x3187FCu;
    SET_GPR_U32(ctx, 31, 0x318804u);
    ctx->pc = 0x318800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3187FCu;
    // 0x318800: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A8D8u, 0x3187FCu, 0x318804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318804u;
label_318804:
    // 0x318804: 0xc0db0ea  jal         func_36C3A8
    ctx->pc = 0x318804u;
    SET_GPR_U32(ctx, 31, 0x31880Cu);
    ctx->pc = 0x318808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318804u;
    // 0x318808: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x318804u, 0x31880Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31880Cu;
label_31880c:
    // 0x31880c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x31880cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x318810: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x318810u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x318814: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x318814u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x318818: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x318818u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x31881c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31881cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318820: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x318820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318824: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x318824u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318828: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x318828u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31882c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31882cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318830: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x318830u;
    SET_GPR_U32(ctx, 31, 0x318838u);
    ctx->pc = 0x318834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318830u;
    // 0x318834: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x318830u, 0x318838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318838u;
label_318838:
    // 0x318838: 0xc0db0ea  jal         func_36C3A8
    ctx->pc = 0x318838u;
    SET_GPR_U32(ctx, 31, 0x318840u);
    ctx->pc = 0x31883Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318838u;
    // 0x31883c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x318838u, 0x318840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318840u;
label_318840:
    // 0x318840: 0xc0a2abc  jal         func_28AAF0
    ctx->pc = 0x318840u;
    SET_GPR_U32(ctx, 31, 0x318848u);
    ctx->pc = 0x28AAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAF0u, 0x318840u, 0x318848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318848u;
label_318848:
    // 0x318848: 0xc0c2bb8  jal         func_30AEE0
    ctx->pc = 0x318848u;
    SET_GPR_U32(ctx, 31, 0x318850u);
    ctx->pc = 0x31884Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318848u;
    // 0x31884c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AEE0u, 0x318848u, 0x318850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318850u;
label_318850:
    // 0x318850: 0xc0db2b6  jal         func_36CAD8
    ctx->pc = 0x318850u;
    SET_GPR_U32(ctx, 31, 0x318858u);
    ctx->pc = 0x318854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318850u;
    // 0x318854: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CAD8u, 0x318850u, 0x318858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318858u;
label_318858:
    // 0x318858: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x318858u;
    {
        const bool branch_taken_0x318858 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x31885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318858u;
        // 0x31885c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318858) {
            ctx->pc = 0x318868u;
            goto label_318868;
        }
    }
    ctx->pc = 0x318860u;
    // 0x318860: 0xc0c29a4  jal         func_30A690
    ctx->pc = 0x318860u;
    SET_GPR_U32(ctx, 31, 0x318868u);
    ctx->pc = 0x30A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A690u, 0x318860u, 0x318868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318868u;
label_318868:
    // 0x318868: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x318868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31886c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x31886cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x318870: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x318870u;
    {
        const bool branch_taken_0x318870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318870u;
        // 0x318874: 0xdfbf0018  ld          $ra, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318870) {
            ctx->pc = 0x3187F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3187f0;
        }
    }
    ctx->pc = 0x318878u;
    // 0x318878: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x318878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31887c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31887cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x318880: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x318880u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x318884: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x318884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x318888: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x318888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31888c: 0x3e00008  jr          $ra
    ctx->pc = 0x31888Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31888Cu;
        // 0x318890: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31888Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318894u;
    // 0x318894: 0x0  nop
    ctx->pc = 0x318894u;
    // NOP
    ctx->pc = 0x318898u;
}
