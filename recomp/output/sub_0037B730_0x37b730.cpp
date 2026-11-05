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

// Function: sub_0037B730
// Address: 0x37b730 - 0x37b830
void sub_0037B730_0x37b730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B730_0x37b730");
#endif

    switch (ctx->pc) {
        case 0x37b760u: goto label_37b760;
        case 0x37b7b0u: goto label_37b7b0;
        case 0x37b7c8u: goto label_37b7c8;
        case 0x37b7d8u: goto label_37b7d8;
        case 0x37b7e4u: goto label_37b7e4;
        case 0x37b7f0u: goto label_37b7f0;
        case 0x37b7fcu: goto label_37b7fc;
        case 0x37b808u: goto label_37b808;
        case 0x37b81cu: goto label_37b81c;
        default: break;
    }

    ctx->pc = 0x37b730u;

    // 0x37b730: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x37b730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x37b734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37b734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b738: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x37b738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x37b73c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x37b73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37b740: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x37b740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x37b744: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37b744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b748: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x37b748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x37b74c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x37b74cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37b750: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x37b750u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x37b754: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x37b754u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x37b758: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37b758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37b75c: 0x0  nop
    ctx->pc = 0x37b75cu;
    // NOP
label_37b760:
    // 0x37b760: 0x0  nop
    ctx->pc = 0x37b760u;
    // NOP
    // 0x37b764: 0x0  nop
    ctx->pc = 0x37b764u;
    // NOP
    // 0x37b768: 0x0  nop
    ctx->pc = 0x37b768u;
    // NOP
    // 0x37b76c: 0x0  nop
    ctx->pc = 0x37b76cu;
    // NOP
    // 0x37b770: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x37B770u;
    {
        const bool branch_taken_0x37b770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x37B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B770u;
        // 0x37b774: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b770) {
            ctx->pc = 0x37B760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37b760;
        }
    }
    ctx->pc = 0x37B778u;
    // 0x37b778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37b778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b77c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37B77Cu;
    {
        const bool branch_taken_0x37b77c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B77Cu;
        // 0x37b780: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b77c) {
            ctx->pc = 0x37B78Cu;
            goto label_37b78c;
        }
    }
    ctx->pc = 0x37B784u;
    // 0x37b784: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x37b784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37b788: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x37b788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_37b78c:
    // 0x37b78c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x37b78cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x37b790: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x37b790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b794: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x37b794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x37b798: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x37b798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x37b79c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x37b79cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x37b7a0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x37b7a0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x37b7a4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37b7a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x37b7a8: 0xc0df4ea  jal         func_37D3A8
    ctx->pc = 0x37B7A8u;
    SET_GPR_U32(ctx, 31, 0x37B7B0u);
    ctx->pc = 0x37B7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B7A8u;
    // 0x37b7ac: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D3A8u, 0x37B7A8u, 0x37B7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B7B0u;
label_37b7b0:
    // 0x37b7b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x37b7b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x37b7b4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x37b7b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x37b7b8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x37b7b8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x37b7bc: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x37b7bcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x37b7c0: 0xc0df4ea  jal         func_37D3A8
    ctx->pc = 0x37B7C0u;
    SET_GPR_U32(ctx, 31, 0x37B7C8u);
    ctx->pc = 0x37B7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B7C0u;
    // 0x37b7c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D3A8u, 0x37B7C0u, 0x37B7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B7C8u;
label_37b7c8:
    // 0x37b7c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x37b7c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b7cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x37b7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b7d0: 0xc0dee0c  jal         func_37B830
    ctx->pc = 0x37B7D0u;
    SET_GPR_U32(ctx, 31, 0x37B7D8u);
    ctx->pc = 0x37B7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B7D0u;
    // 0x37b7d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B830u, 0x37B7D0u, 0x37B7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B7D8u;
label_37b7d8:
    // 0x37b7d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b7dc: 0xc0dee1a  jal         func_37B868
    ctx->pc = 0x37B7DCu;
    SET_GPR_U32(ctx, 31, 0x37B7E4u);
    ctx->pc = 0x37B7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B7DCu;
    // 0x37b7e0: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B868u, 0x37B7DCu, 0x37B7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B7E4u;
label_37b7e4:
    // 0x37b7e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b7e8: 0xc0dee28  jal         func_37B8A0
    ctx->pc = 0x37B7E8u;
    SET_GPR_U32(ctx, 31, 0x37B7F0u);
    ctx->pc = 0x37B7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B7E8u;
    // 0x37b7ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B8A0u, 0x37B7E8u, 0x37B7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B7F0u;
label_37b7f0:
    // 0x37b7f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b7f4: 0xc0dee34  jal         func_37B8D0
    ctx->pc = 0x37B7F4u;
    SET_GPR_U32(ctx, 31, 0x37B7FCu);
    ctx->pc = 0x37B7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B7F4u;
    // 0x37b7f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B8D0u, 0x37B7F4u, 0x37B7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B7FCu;
label_37b7fc:
    // 0x37b7fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b800: 0xc0dee40  jal         func_37B900
    ctx->pc = 0x37B800u;
    SET_GPR_U32(ctx, 31, 0x37B808u);
    ctx->pc = 0x37B804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B800u;
    // 0x37b804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B900u, 0x37B800u, 0x37B808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B808u;
label_37b808:
    // 0x37b808: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37b808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b80c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x37b80cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37b810: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x37b810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b814: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x37b814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37b818: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x37b818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_37b81c:
    // 0x37b81c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x37b81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37b820: 0x3e00008  jr          $ra
    ctx->pc = 0x37B820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B820u;
        // 0x37b824: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B828u;
    // 0x37b828: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x37b828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37b82c: 0x0  nop
    ctx->pc = 0x37b82cu;
    // NOP
    ctx->pc = 0x37b830u;
}
