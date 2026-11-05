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

// Function: sub_003D06A8
// Address: 0x3d06a8 - 0x3d0808
void sub_003D06A8_0x3d06a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D06A8_0x3d06a8");
#endif

    switch (ctx->pc) {
        case 0x3d0704u: goto label_3d0704;
        case 0x3d0718u: goto label_3d0718;
        case 0x3d0740u: goto label_3d0740;
        case 0x3d0758u: goto label_3d0758;
        case 0x3d0778u: goto label_3d0778;
        case 0x3d07b0u: goto label_3d07b0;
        case 0x3d07b8u: goto label_3d07b8;
        case 0x3d07c0u: goto label_3d07c0;
        case 0x3d07c8u: goto label_3d07c8;
        case 0x3d07d8u: goto label_3d07d8;
        default: break;
    }

    ctx->pc = 0x3d06a8u;

    // 0x3d06a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d06a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3d06ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3d06acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3d06b0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3d06b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3d06b4: 0x3c120043  lui         $s2, 0x43
    ctx->pc = 0x3d06b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)67 << 16));
    // 0x3d06b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d06b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3d06bc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3d06bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3d06c0: 0x2651e640  addiu       $s1, $s2, -0x19C0
    ctx->pc = 0x3d06c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960704));
    // 0x3d06c4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3d06c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3d06c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d06c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d06cc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3d06ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42E648u));
    // 0x3d06d0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D06D0u;
    {
        const bool branch_taken_0x3d06d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3D06D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D06D0u;
        // 0x3d06d4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d06d0) {
            ctx->pc = 0x3D06E4u;
            goto label_3d06e4;
        }
    }
    ctx->pc = 0x3D06D8u;
    // 0x3d06d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3d06d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3d06dc: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x3D06DCu;
    {
        const bool branch_taken_0x3d06dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D06E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D06DCu;
        // 0x3d06e0: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d06dc) {
            ctx->pc = 0x3D07DCu;
            goto label_3d07dc;
        }
    }
    ctx->pc = 0x3D06E4u;
label_3d06e4:
    // 0x3d06e4: 0x3c130066  lui         $s3, 0x66
    ctx->pc = 0x3d06e4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
    // 0x3d06e8: 0xfe40e640  sd          $zero, -0x19C0($s2)
    ctx->pc = 0x3d06e8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 4294960704), GPR_U64(ctx, 0));
    // 0x3d06ec: 0x267055c0  addiu       $s0, $s3, 0x55C0
    ctx->pc = 0x3d06ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 21952));
    // 0x3d06f0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3d06f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x3d06f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d06f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d06f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d06f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d06fc: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3D06FCu;
    SET_GPR_U32(ctx, 31, 0x3D0704u);
    ctx->pc = 0x3D0700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D06FCu;
    // 0x3d0700: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3D06FCu, 0x3D0704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0704u;
label_3d0704:
    // 0x3d0704: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x3d0704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
    // 0x3d0708: 0x26032000  addiu       $v1, $s0, 0x2000
    ctx->pc = 0x3d0708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
    // 0x3d070c: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x3d070cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x3d0710: 0x26101fc0  addiu       $s0, $s0, 0x1FC0
    ctx->pc = 0x3d0710u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8128));
    // 0x3d0714: 0x0  nop
    ctx->pc = 0x3d0714u;
    // NOP
label_3d0718:
    // 0x3d0718: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d0718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3d071c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d071cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3d0720: 0x2610ffc0  addiu       $s0, $s0, -0x40
    ctx->pc = 0x3d0720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
    // 0x3d0724: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x3d0724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    // 0x3d0728: 0x0  nop
    ctx->pc = 0x3d0728u;
    // NOP
    // 0x3d072c: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3D072Cu;
    {
        const bool branch_taken_0x3d072c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3d072c) {
            ctx->pc = 0x3D0718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0718;
        }
    }
    ctx->pc = 0x3D0734u;
    // 0x3d0734: 0x266255c0  addiu       $v0, $s3, 0x55C0
    ctx->pc = 0x3d0734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 21952));
    // 0x3d0738: 0xc0f4478  jal         func_3D11E0
    ctx->pc = 0x3D0738u;
    SET_GPR_U32(ctx, 31, 0x3D0740u);
    ctx->pc = 0x3D073Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0738u;
    // 0x3d073c: 0xac401fc0  sw          $zero, 0x1FC0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8128), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D11E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D11E0u, 0x3D0738u, 0x3D0740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0740u;
label_3d0740:
    // 0x3d0740: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3d0740u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x3d0744: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x3d0744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3d0748: 0x24a50af0  addiu       $a1, $a1, 0xAF0
    ctx->pc = 0x3d0748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2800));
    // 0x3d074c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d074cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0750: 0xc0f25a4  jal         func_3C9690
    ctx->pc = 0x3D0750u;
    SET_GPR_U32(ctx, 31, 0x3D0758u);
    ctx->pc = 0x3D0754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0750u;
    // 0x3d0754: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9690u, 0x3D0750u, 0x3D0758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0758u;
label_3d0758:
    // 0x3d0758: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3d0758u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d075c: 0x4630004  bgezl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D075Cu;
    {
        const bool branch_taken_0x3d075c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3d075c) {
            ctx->pc = 0x3D0760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D075Cu;
            // 0x3d0760: 0x2642e640  addiu       $v0, $s2, -0x19C0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960704));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D0770u;
            goto label_3d0770;
        }
    }
    ctx->pc = 0x3D0764u;
    // 0x3d0764: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3d0764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3d0768: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3D0768u;
    {
        const bool branch_taken_0x3d0768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0768u;
        // 0x3d076c: 0x34429021  ori         $v0, $v0, 0x9021 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36897);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0768) {
            ctx->pc = 0x3D07DCu;
            goto label_3d07dc;
        }
    }
    ctx->pc = 0x3D0770u;
label_3d0770:
    // 0x3d0770: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3D0770u;
    SET_GPR_U32(ctx, 31, 0x3D0778u);
    ctx->pc = 0x3D0774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0770u;
    // 0x3d0774: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3D0770u, 0x3D0778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0778u;
label_3d0778:
    // 0x3d0778: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3d0778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3d077c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d077cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0780: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x3d0780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
    // 0x3d0784: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3d0784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3d0788: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3d0788u;
    SET_GPR_S32(ctx, 16, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10001010
    // 0x3d078c: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x3d078cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x3d0790: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x3d0790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3d0794: 0x548025  or          $s0, $v0, $s4
    ctx->pc = 0x3d0794u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x3d0798: 0x36100300  ori         $s0, $s0, 0x300
    ctx->pc = 0x3d0798u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)768);
    // 0x3d079c: 0x32020080  andi        $v0, $s0, 0x80
    ctx->pc = 0x3d079cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
    // 0x3d07a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D07A0u;
    {
        const bool branch_taken_0x3d07a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D07A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D07A0u;
        // 0x3d07a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d07a0) {
            ctx->pc = 0x3D07B8u;
            goto label_3d07b8;
        }
    }
    ctx->pc = 0x3D07A8u;
    // 0x3d07a8: 0xc0f419e  jal         func_3D0678
    ctx->pc = 0x3D07A8u;
    SET_GPR_U32(ctx, 31, 0x3D07B0u);
    ctx->pc = 0x3D07ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D07A8u;
    // 0x3d07ac: 0x36100c80  ori         $s0, $s0, 0xC80 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)3200);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0678u, 0x3D07A8u, 0x3D07B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D07B0u;
label_3d07b0:
    // 0x3d07b0: 0xc0f41a6  jal         func_3D0698
    ctx->pc = 0x3D07B0u;
    SET_GPR_U32(ctx, 31, 0x3D07B8u);
    ctx->pc = 0x3D07B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D07B0u;
    // 0x3d07b4: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0698u, 0x3D07B0u, 0x3D07B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D07B8u;
label_3d07b8:
    // 0x3d07b8: 0xc0f41a2  jal         func_3D0688
    ctx->pc = 0x3D07B8u;
    SET_GPR_U32(ctx, 31, 0x3D07C0u);
    ctx->pc = 0x3D07BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D07B8u;
    // 0x3d07bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0688u, 0x3D07B8u, 0x3D07C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D07C0u;
label_3d07c0:
    // 0x3d07c0: 0xc0f2904  jal         func_3CA410
    ctx->pc = 0x3D07C0u;
    SET_GPR_U32(ctx, 31, 0x3D07C8u);
    ctx->pc = 0x3D07C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D07C0u;
    // 0x3d07c4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA410u, 0x3D07C0u, 0x3D07C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D07C8u;
label_3d07c8:
    // 0x3d07c8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D07C8u;
    {
        const bool branch_taken_0x3d07c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D07CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D07C8u;
        // 0x3d07cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d07c8) {
            ctx->pc = 0x3D07DCu;
            goto label_3d07dc;
        }
    }
    ctx->pc = 0x3D07D0u;
    // 0x3d07d0: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x3D07D0u;
    SET_GPR_U32(ctx, 31, 0x3D07D8u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x3D07D0u, 0x3D07D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D07D8u;
label_3d07d8:
    // 0x3d07d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d07d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d07dc:
    // 0x3d07dc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3d07dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d07e0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3d07e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d07e4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3d07e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d07e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3d07e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d07ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d07ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d07f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d07f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d07f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D07F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D07F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D07F4u;
        // 0x3d07f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D07F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D07FCu;
    // 0x3d07fc: 0x0  nop
    ctx->pc = 0x3d07fcu;
    // NOP
    // 0x3d0800: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3d0800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3d0804: 0x0  nop
    ctx->pc = 0x3d0804u;
    // NOP
    ctx->pc = 0x3d0808u;
}
