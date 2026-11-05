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

// Function: sub_003467A8
// Address: 0x3467a8 - 0x3468c8
void sub_003467A8_0x3467a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003467A8_0x3467a8");
#endif

    switch (ctx->pc) {
        case 0x3467a8u: goto label_3467a8;
        case 0x3467acu: goto label_3467ac;
        case 0x3467b0u: goto label_3467b0;
        case 0x3467b4u: goto label_3467b4;
        case 0x3467b8u: goto label_3467b8;
        case 0x3467bcu: goto label_3467bc;
        case 0x3467c0u: goto label_3467c0;
        case 0x3467c4u: goto label_3467c4;
        case 0x3467c8u: goto label_3467c8;
        case 0x3467ccu: goto label_3467cc;
        case 0x3467d0u: goto label_3467d0;
        case 0x3467d4u: goto label_3467d4;
        case 0x3467d8u: goto label_3467d8;
        case 0x3467dcu: goto label_3467dc;
        case 0x3467e0u: goto label_3467e0;
        case 0x3467e4u: goto label_3467e4;
        case 0x3467e8u: goto label_3467e8;
        case 0x3467ecu: goto label_3467ec;
        case 0x3467f0u: goto label_3467f0;
        case 0x3467f4u: goto label_3467f4;
        case 0x3467f8u: goto label_3467f8;
        case 0x3467fcu: goto label_3467fc;
        case 0x346800u: goto label_346800;
        case 0x346804u: goto label_346804;
        case 0x346808u: goto label_346808;
        case 0x34680cu: goto label_34680c;
        case 0x346810u: goto label_346810;
        case 0x346814u: goto label_346814;
        case 0x346818u: goto label_346818;
        case 0x34681cu: goto label_34681c;
        case 0x346820u: goto label_346820;
        case 0x346824u: goto label_346824;
        case 0x346828u: goto label_346828;
        case 0x34682cu: goto label_34682c;
        case 0x346830u: goto label_346830;
        case 0x346834u: goto label_346834;
        case 0x346838u: goto label_346838;
        case 0x34683cu: goto label_34683c;
        case 0x346840u: goto label_346840;
        case 0x346844u: goto label_346844;
        case 0x346848u: goto label_346848;
        case 0x34684cu: goto label_34684c;
        case 0x346850u: goto label_346850;
        case 0x346854u: goto label_346854;
        case 0x346858u: goto label_346858;
        case 0x34685cu: goto label_34685c;
        case 0x346860u: goto label_346860;
        case 0x346864u: goto label_346864;
        case 0x346868u: goto label_346868;
        case 0x34686cu: goto label_34686c;
        case 0x346870u: goto label_346870;
        case 0x346874u: goto label_346874;
        case 0x346878u: goto label_346878;
        case 0x34687cu: goto label_34687c;
        case 0x346880u: goto label_346880;
        case 0x346884u: goto label_346884;
        case 0x346888u: goto label_346888;
        case 0x34688cu: goto label_34688c;
        case 0x346890u: goto label_346890;
        case 0x346894u: goto label_346894;
        case 0x346898u: goto label_346898;
        case 0x34689cu: goto label_34689c;
        case 0x3468a0u: goto label_3468a0;
        case 0x3468a4u: goto label_3468a4;
        case 0x3468a8u: goto label_3468a8;
        case 0x3468acu: goto label_3468ac;
        case 0x3468b0u: goto label_3468b0;
        case 0x3468b4u: goto label_3468b4;
        case 0x3468b8u: goto label_3468b8;
        case 0x3468bcu: goto label_3468bc;
        case 0x3468c0u: goto label_3468c0;
        case 0x3468c4u: goto label_3468c4;
        default: break;
    }

    ctx->pc = 0x3467a8u;

label_3467a8:
    // 0x3467a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3467a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3467ac:
    // 0x3467ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3467acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3467b0:
    // 0x3467b0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3467b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3467b4:
    // 0x3467b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3467b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3467b8:
    // 0x3467b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3467b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3467bc:
    // 0x3467bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3467bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3467c0:
    // 0x3467c0: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x3467c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_3467c4:
    // 0x3467c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3467c8:
    if (ctx->pc == 0x3467C8u) {
        ctx->pc = 0x3467C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3467C4u;
        // 0x3467c8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3467CCu;
        goto label_3467cc;
    }
    ctx->pc = 0x3467C4u;
    {
        const bool branch_taken_0x3467c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3467C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3467C4u;
        // 0x3467c8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3467c4) {
            ctx->pc = 0x3467E0u;
            goto label_3467e0;
        }
    }
    ctx->pc = 0x3467CCu;
label_3467cc:
    // 0x3467cc: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x3467ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_3467d0:
    // 0x3467d0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3467d4:
    if (ctx->pc == 0x3467D4u) {
        ctx->pc = 0x3467D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3467D0u;
        // 0x3467d4: 0xc621002c  lwc1        $f1, 0x2C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3467D8u;
        goto label_3467d8;
    }
    ctx->pc = 0x3467D0u;
    {
        const bool branch_taken_0x3467d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3467d0) {
            ctx->pc = 0x3467D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3467D0u;
            // 0x3467d4: 0xc621002c  lwc1        $f1, 0x2C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3467E4u;
            goto label_3467e4;
        }
    }
    ctx->pc = 0x3467D8u;
label_3467d8:
    // 0x3467d8: 0xc0d1816  jal         func_346058
label_3467dc:
    if (ctx->pc == 0x3467DCu) {
        ctx->pc = 0x3467E0u;
        goto label_3467e0;
    }
    ctx->pc = 0x3467D8u;
    SET_GPR_U32(ctx, 31, 0x3467E0u);
    ctx->pc = 0x346058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346058u, 0x3467D8u, 0x3467E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3467E0u;
label_3467e0:
    // 0x3467e0: 0xc621002c  lwc1        $f1, 0x2C($s1)
    ctx->pc = 0x3467e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3467e4:
    // 0x3467e4: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x3467e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3467e8:
    // 0x3467e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3467e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3467ec:
    // 0x3467ec: 0x0  nop
    ctx->pc = 0x3467ecu;
    // NOP
label_3467f0:
    // 0x3467f0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_3467f4:
    if (ctx->pc == 0x3467F4u) {
        ctx->pc = 0x3467F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3467F0u;
        // 0x3467f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3467F8u;
        goto label_3467f8;
    }
    ctx->pc = 0x3467F0u;
    {
        const bool branch_taken_0x3467f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3467F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3467F0u;
        // 0x3467f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3467f0) {
            ctx->pc = 0x346810u;
            goto label_346810;
        }
    }
    ctx->pc = 0x3467F8u;
label_3467f8:
    // 0x3467f8: 0xc0d19ae  jal         func_3466B8
label_3467fc:
    if (ctx->pc == 0x3467FCu) {
        ctx->pc = 0x3467FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3467F8u;
        // 0x3467fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x346800u;
        goto label_346800;
    }
    ctx->pc = 0x3467F8u;
    SET_GPR_U32(ctx, 31, 0x346800u);
    ctx->pc = 0x3467FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3467F8u;
    // 0x3467fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3466B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3466B8u, 0x3467F8u, 0x346800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346800u;
label_346800:
    // 0x346800: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x346800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_346804:
    // 0x346804: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x346804u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_346808:
    // 0x346808: 0x10000012  b           . + 4 + (0x12 << 2)
label_34680c:
    if (ctx->pc == 0x34680Cu) {
        ctx->pc = 0x34680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346808u;
        // 0x34680c: 0xe620002c  swc1        $f0, 0x2C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x346810u;
        goto label_346810;
    }
    ctx->pc = 0x346808u;
    {
        const bool branch_taken_0x346808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346808u;
        // 0x34680c: 0xe620002c  swc1        $f0, 0x2C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346808) {
            ctx->pc = 0x346854u;
            goto label_346854;
        }
    }
    ctx->pc = 0x346810u;
label_346810:
    // 0x346810: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x346810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_346814:
    // 0x346814: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_346818:
    if (ctx->pc == 0x346818u) {
        ctx->pc = 0x346818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346814u;
        // 0x346818: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34681Cu;
        goto label_34681c;
    }
    ctx->pc = 0x346814u;
    {
        const bool branch_taken_0x346814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x346818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346814u;
        // 0x346818: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346814) {
            ctx->pc = 0x346854u;
            goto label_346854;
        }
    }
    ctx->pc = 0x34681Cu;
label_34681c:
    // 0x34681c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x34681cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_346820:
    // 0x346820: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_346824:
    if (ctx->pc == 0x346824u) {
        ctx->pc = 0x346824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346820u;
        // 0x346824: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346828u;
        goto label_346828;
    }
    ctx->pc = 0x346820u;
    {
        const bool branch_taken_0x346820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346820u;
        // 0x346824: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346820) {
            ctx->pc = 0x346854u;
            goto label_346854;
        }
    }
    ctx->pc = 0x346828u;
label_346828:
    // 0x346828: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x346828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_34682c:
    // 0x34682c: 0x0  nop
    ctx->pc = 0x34682cu;
    // NOP
label_346830:
    // 0x346830: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x346830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_346834:
    // 0x346834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_346838:
    // 0x346838: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x346838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_34683c:
    // 0x34683c: 0x60f809  jalr        $v1
label_346840:
    if (ctx->pc == 0x346840u) {
        ctx->pc = 0x346840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34683Cu;
        // 0x346840: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346844u;
        goto label_346844;
    }
    ctx->pc = 0x34683Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x346844u);
        ctx->pc = 0x346840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34683Cu;
        // 0x346840: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34683Cu, 0x346844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x346844u;
label_346844:
    // 0x346844: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x346844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_346848:
    // 0x346848: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x346848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_34684c:
    // 0x34684c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_346850:
    if (ctx->pc == 0x346850u) {
        ctx->pc = 0x346850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34684Cu;
        // 0x346850: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346854u;
        goto label_346854;
    }
    ctx->pc = 0x34684Cu;
    {
        const bool branch_taken_0x34684c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34684c) {
            ctx->pc = 0x346850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34684Cu;
            // 0x346850: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x346830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_346830;
        }
    }
    ctx->pc = 0x346854u;
label_346854:
    // 0x346854: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x346854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_346858:
    // 0x346858: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x346858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_34685c:
    // 0x34685c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34685cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_346860:
    // 0x346860: 0x0  nop
    ctx->pc = 0x346860u;
    // NOP
label_346864:
    // 0x346864: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x346864u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_346868:
    // 0x346868: 0x0  nop
    ctx->pc = 0x346868u;
    // NOP
label_34686c:
    // 0x34686c: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
label_346870:
    if (ctx->pc == 0x346870u) {
        ctx->pc = 0x346870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34686Cu;
        // 0x346870: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346874u;
        goto label_346874;
    }
    ctx->pc = 0x34686Cu;
    {
        const bool branch_taken_0x34686c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34686c) {
            ctx->pc = 0x346870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34686Cu;
            // 0x346870: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3468A4u;
            goto label_3468a4;
        }
    }
    ctx->pc = 0x346874u;
label_346874:
    // 0x346874: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346874u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_346878:
    // 0x346878: 0x0  nop
    ctx->pc = 0x346878u;
    // NOP
label_34687c:
    // 0x34687c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34687cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_346880:
    // 0x346880: 0x0  nop
    ctx->pc = 0x346880u;
    // NOP
label_346884:
    // 0x346884: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_346888:
    if (ctx->pc == 0x346888u) {
        ctx->pc = 0x346888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346884u;
        // 0x346888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34688Cu;
        goto label_34688c;
    }
    ctx->pc = 0x346884u;
    {
        const bool branch_taken_0x346884 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x346888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346884u;
        // 0x346888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346884) {
            ctx->pc = 0x346898u;
            goto label_346898;
        }
    }
    ctx->pc = 0x34688Cu;
label_34688c:
    // 0x34688c: 0x46140801  sub.s       $f0, $f1, $f20
    ctx->pc = 0x34688cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_346890:
    // 0x346890: 0x10000003  b           . + 4 + (0x3 << 2)
label_346894:
    if (ctx->pc == 0x346894u) {
        ctx->pc = 0x346894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346890u;
        // 0x346894: 0xe6200020  swc1        $f0, 0x20($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x346898u;
        goto label_346898;
    }
    ctx->pc = 0x346890u;
    {
        const bool branch_taken_0x346890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346890u;
        // 0x346894: 0xe6200020  swc1        $f0, 0x20($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346890) {
            ctx->pc = 0x3468A0u;
            goto label_3468a0;
        }
    }
    ctx->pc = 0x346898u;
label_346898:
    // 0x346898: 0xe6220020  swc1        $f2, 0x20($s1)
    ctx->pc = 0x346898u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_34689c:
    // 0x34689c: 0xae2200d8  sw          $v0, 0xD8($s1)
    ctx->pc = 0x34689cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
label_3468a0:
    // 0x3468a0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3468a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3468a4:
    // 0x3468a4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3468a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3468a8:
    // 0x3468a8: 0x40f809  jalr        $v0
label_3468ac:
    if (ctx->pc == 0x3468ACu) {
        ctx->pc = 0x3468ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3468A8u;
        // 0x3468ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3468B0u;
        goto label_3468b0;
    }
    ctx->pc = 0x3468A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3468B0u);
        ctx->pc = 0x3468ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3468A8u;
        // 0x3468ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3468A8u, 0x3468B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3468B0u;
label_3468b0:
    // 0x3468b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3468b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3468b4:
    // 0x3468b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3468b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3468b8:
    // 0x3468b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3468b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3468bc:
    // 0x3468bc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x3468bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3468c0:
    // 0x3468c0: 0x3e00008  jr          $ra
label_3468c4:
    if (ctx->pc == 0x3468C4u) {
        ctx->pc = 0x3468C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3468C0u;
        // 0x3468c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3468C8u;
        goto label_fallthrough_0x3468c0;
    }
    ctx->pc = 0x3468C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3468C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3468C0u;
        // 0x3468c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3468C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3468c0:
    ctx->pc = 0x3468C8u;
}
