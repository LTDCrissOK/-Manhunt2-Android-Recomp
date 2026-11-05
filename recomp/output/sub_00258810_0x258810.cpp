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

// Function: sub_00258810
// Address: 0x258810 - 0x258e80
void sub_00258810_0x258810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258810_0x258810");
#endif

    switch (ctx->pc) {
        case 0x258850u: goto label_258850;
        case 0x25889cu: goto label_25889c;
        case 0x2588a8u: goto label_2588a8;
        case 0x2588b8u: goto label_2588b8;
        case 0x2588c4u: goto label_2588c4;
        case 0x2588d8u: goto label_2588d8;
        case 0x2588f0u: goto label_2588f0;
        case 0x258908u: goto label_258908;
        case 0x258918u: goto label_258918;
        case 0x258930u: goto label_258930;
        case 0x258948u: goto label_258948;
        case 0x258960u: goto label_258960;
        case 0x258978u: goto label_258978;
        case 0x258990u: goto label_258990;
        case 0x2589a8u: goto label_2589a8;
        case 0x2589c0u: goto label_2589c0;
        case 0x2589d8u: goto label_2589d8;
        case 0x2589f0u: goto label_2589f0;
        case 0x258a08u: goto label_258a08;
        case 0x258a20u: goto label_258a20;
        case 0x258a38u: goto label_258a38;
        case 0x258a50u: goto label_258a50;
        case 0x258a68u: goto label_258a68;
        case 0x258a80u: goto label_258a80;
        case 0x258a98u: goto label_258a98;
        case 0x258ab0u: goto label_258ab0;
        case 0x258ac8u: goto label_258ac8;
        case 0x258ae0u: goto label_258ae0;
        case 0x258af8u: goto label_258af8;
        case 0x258b10u: goto label_258b10;
        case 0x258b28u: goto label_258b28;
        case 0x258b40u: goto label_258b40;
        case 0x258b58u: goto label_258b58;
        case 0x258b70u: goto label_258b70;
        case 0x258b88u: goto label_258b88;
        case 0x258ba4u: goto label_258ba4;
        case 0x258bb8u: goto label_258bb8;
        case 0x258bccu: goto label_258bcc;
        case 0x258be0u: goto label_258be0;
        case 0x258bf4u: goto label_258bf4;
        case 0x258c08u: goto label_258c08;
        case 0x258c1cu: goto label_258c1c;
        case 0x258c30u: goto label_258c30;
        case 0x258c44u: goto label_258c44;
        case 0x258c58u: goto label_258c58;
        case 0x258c6cu: goto label_258c6c;
        case 0x258c8cu: goto label_258c8c;
        case 0x258c9cu: goto label_258c9c;
        case 0x258cb4u: goto label_258cb4;
        case 0x258cccu: goto label_258ccc;
        case 0x258ce4u: goto label_258ce4;
        case 0x258cfcu: goto label_258cfc;
        case 0x258d18u: goto label_258d18;
        case 0x258d2cu: goto label_258d2c;
        case 0x258d40u: goto label_258d40;
        case 0x258d54u: goto label_258d54;
        case 0x258d68u: goto label_258d68;
        case 0x258d7cu: goto label_258d7c;
        case 0x258d90u: goto label_258d90;
        case 0x258da4u: goto label_258da4;
        case 0x258db8u: goto label_258db8;
        case 0x258dccu: goto label_258dcc;
        case 0x258de0u: goto label_258de0;
        case 0x258e00u: goto label_258e00;
        case 0x258e1cu: goto label_258e1c;
        case 0x258e34u: goto label_258e34;
        case 0x258e4cu: goto label_258e4c;
        case 0x258e5cu: goto label_258e5c;
        default: break;
    }

    ctx->pc = 0x258810u;

    // 0x258810: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x258810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x258814: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x258814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x258818: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x258818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x25881c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25881cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258820: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x258820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x258824: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x258824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258828: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x258828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x25882c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x25882cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x258830: 0x8602070a  lh          $v0, 0x70A($s0)
    ctx->pc = 0x258830u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1802)));
    // 0x258834: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x258834u;
    {
        const bool branch_taken_0x258834 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x258838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258834u;
        // 0x258838: 0xc61400d0  lwc1        $f20, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258834) {
            ctx->pc = 0x258858u;
            goto label_258858;
        }
    }
    ctx->pc = 0x25883Cu;
    // 0x25883c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x25883cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x258840: 0x0  nop
    ctx->pc = 0x258840u;
    // NOP
    // 0x258844: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x258844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x258848: 0xc083976  jal         func_20E5D8
    ctx->pc = 0x258848u;
    SET_GPR_U32(ctx, 31, 0x258850u);
    ctx->pc = 0x20E5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E5D8u, 0x258848u, 0x258850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258850u;
label_258850:
    // 0x258850: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x258850u;
    {
        const bool branch_taken_0x258850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258850u;
        // 0x258854: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258850) {
            ctx->pc = 0x2588A0u;
            goto label_2588a0;
        }
    }
    ctx->pc = 0x258858u;
label_258858:
    // 0x258858: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x258858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x25885c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x25885cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x258860: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x258860u;
    {
        const bool branch_taken_0x258860 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x258864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258860u;
        // 0x258864: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258860) {
            ctx->pc = 0x25887Cu;
            goto label_25887c;
        }
    }
    ctx->pc = 0x258868u;
    // 0x258868: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x258868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25886c: 0x0  nop
    ctx->pc = 0x25886cu;
    // NOP
    // 0x258870: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x258870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x258874: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x258874u;
    {
        const bool branch_taken_0x258874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258874) {
            ctx->pc = 0x258894u;
            goto label_258894;
        }
    }
    ctx->pc = 0x25887Cu;
label_25887c:
    // 0x25887c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25887cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x258880: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x258880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x258884: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x258884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x258888: 0x0  nop
    ctx->pc = 0x258888u;
    // NOP
    // 0x25888c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x25888cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x258890: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x258890u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_258894:
    // 0x258894: 0xc083976  jal         func_20E5D8
    ctx->pc = 0x258894u;
    SET_GPR_U32(ctx, 31, 0x25889Cu);
    ctx->pc = 0x258898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258894u;
    // 0x258898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E5D8u, 0x258894u, 0x25889Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25889Cu;
label_25889c:
    // 0x25889c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25889cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2588a0:
    // 0x2588a0: 0xc083854  jal         func_20E150
    ctx->pc = 0x2588A0u;
    SET_GPR_U32(ctx, 31, 0x2588A8u);
    ctx->pc = 0x2588A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2588A0u;
    // 0x2588a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E150u, 0x2588A0u, 0x2588A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2588A8u;
label_2588a8:
    // 0x2588a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2588a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2588ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2588acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2588b0: 0xc083976  jal         func_20E5D8
    ctx->pc = 0x2588B0u;
    SET_GPR_U32(ctx, 31, 0x2588B8u);
    ctx->pc = 0x2588B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2588B0u;
    // 0x2588b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E5D8u, 0x2588B0u, 0x2588B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2588B8u;
label_2588b8:
    // 0x2588b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2588b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2588bc: 0xc0b5ec8  jal         func_2D7B20
    ctx->pc = 0x2588BCu;
    SET_GPR_U32(ctx, 31, 0x2588C4u);
    ctx->pc = 0x2588C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2588BCu;
    // 0x2588c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7B20u, 0x2588BCu, 0x2588C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2588C4u;
label_2588c4:
    // 0x2588c4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2588c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2588c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2588c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2588cc: 0x24a555d8  addiu       $a1, $a1, 0x55D8
    ctx->pc = 0x2588ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21976));
    // 0x2588d0: 0xc0b5ef6  jal         func_2D7BD8
    ctx->pc = 0x2588D0u;
    SET_GPR_U32(ctx, 31, 0x2588D8u);
    ctx->pc = 0x2588D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2588D0u;
    // 0x2588d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7BD8u, 0x2588D0u, 0x2588D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2588D8u;
label_2588d8:
    // 0x2588d8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2588d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2588dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2588dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2588e0: 0x24a555e0  addiu       $a1, $a1, 0x55E0
    ctx->pc = 0x2588e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21984));
    // 0x2588e4: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2588e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2588e8: 0xc0b5ef6  jal         func_2D7BD8
    ctx->pc = 0x2588E8u;
    SET_GPR_U32(ctx, 31, 0x2588F0u);
    ctx->pc = 0x2588ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2588E8u;
    // 0x2588ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7BD8u, 0x2588E8u, 0x2588F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2588F0u;
label_2588f0:
    // 0x2588f0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2588f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2588f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2588f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2588f8: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2588f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2588fc: 0x24a555e8  addiu       $a1, $a1, 0x55E8
    ctx->pc = 0x2588fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21992));
    // 0x258900: 0xc0b5ef6  jal         func_2D7BD8
    ctx->pc = 0x258900u;
    SET_GPR_U32(ctx, 31, 0x258908u);
    ctx->pc = 0x258904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258900u;
    // 0x258904: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7BD8u, 0x258900u, 0x258908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258908u;
label_258908:
    // 0x258908: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x25890c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x25890cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x258910: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258910u;
    SET_GPR_U32(ctx, 31, 0x258918u);
    ctx->pc = 0x258914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258910u;
    // 0x258914: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258910u, 0x258918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258918u;
label_258918:
    // 0x258918: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25891c: 0x144300d7  bne         $v0, $v1, . + 4 + (0xD7 << 2)
    ctx->pc = 0x25891Cu;
    {
        const bool branch_taken_0x25891c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25891Cu;
        // 0x258920: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25891c) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258924u;
    // 0x258924: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258928: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258928u;
    SET_GPR_U32(ctx, 31, 0x258930u);
    ctx->pc = 0x25892Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258928u;
    // 0x25892c: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258928u, 0x258930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258930u;
label_258930:
    // 0x258930: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258934: 0x144300d1  bne         $v0, $v1, . + 4 + (0xD1 << 2)
    ctx->pc = 0x258934u;
    {
        const bool branch_taken_0x258934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258934u;
        // 0x258938: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258934) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x25893Cu;
    // 0x25893c: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x25893cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258940: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258940u;
    SET_GPR_U32(ctx, 31, 0x258948u);
    ctx->pc = 0x258944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258940u;
    // 0x258944: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258940u, 0x258948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258948u;
label_258948:
    // 0x258948: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25894c: 0x144300cb  bne         $v0, $v1, . + 4 + (0xCB << 2)
    ctx->pc = 0x25894Cu;
    {
        const bool branch_taken_0x25894c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25894Cu;
        // 0x258950: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25894c) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258954u;
    // 0x258954: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258958: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258958u;
    SET_GPR_U32(ctx, 31, 0x258960u);
    ctx->pc = 0x25895Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258958u;
    // 0x25895c: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258958u, 0x258960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258960u;
label_258960:
    // 0x258960: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258964: 0x144300c5  bne         $v0, $v1, . + 4 + (0xC5 << 2)
    ctx->pc = 0x258964u;
    {
        const bool branch_taken_0x258964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258964u;
        // 0x258968: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258964) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x25896Cu;
    // 0x25896c: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x25896cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258970: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258970u;
    SET_GPR_U32(ctx, 31, 0x258978u);
    ctx->pc = 0x258974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258970u;
    // 0x258974: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258970u, 0x258978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258978u;
label_258978:
    // 0x258978: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25897c: 0x144300bf  bne         $v0, $v1, . + 4 + (0xBF << 2)
    ctx->pc = 0x25897Cu;
    {
        const bool branch_taken_0x25897c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25897Cu;
        // 0x258980: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25897c) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258984u;
    // 0x258984: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258988: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258988u;
    SET_GPR_U32(ctx, 31, 0x258990u);
    ctx->pc = 0x25898Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258988u;
    // 0x25898c: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258988u, 0x258990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258990u;
label_258990:
    // 0x258990: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258994: 0x144300b9  bne         $v0, $v1, . + 4 + (0xB9 << 2)
    ctx->pc = 0x258994u;
    {
        const bool branch_taken_0x258994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258994u;
        // 0x258998: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258994) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x25899Cu;
    // 0x25899c: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x25899cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x2589a0: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x2589A0u;
    SET_GPR_U32(ctx, 31, 0x2589A8u);
    ctx->pc = 0x2589A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2589A0u;
    // 0x2589a4: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x2589A0u, 0x2589A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2589A8u;
label_2589a8:
    // 0x2589a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2589a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2589ac: 0x144300b3  bne         $v0, $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x2589ACu;
    {
        const bool branch_taken_0x2589ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2589B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2589ACu;
        // 0x2589b0: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2589ac) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x2589B4u;
    // 0x2589b4: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x2589b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x2589b8: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x2589B8u;
    SET_GPR_U32(ctx, 31, 0x2589C0u);
    ctx->pc = 0x2589BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2589B8u;
    // 0x2589bc: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x2589B8u, 0x2589C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2589C0u;
label_2589c0:
    // 0x2589c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2589c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2589c4: 0x144300ad  bne         $v0, $v1, . + 4 + (0xAD << 2)
    ctx->pc = 0x2589C4u;
    {
        const bool branch_taken_0x2589c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2589C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2589C4u;
        // 0x2589c8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2589c4) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x2589CCu;
    // 0x2589cc: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x2589ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x2589d0: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x2589D0u;
    SET_GPR_U32(ctx, 31, 0x2589D8u);
    ctx->pc = 0x2589D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2589D0u;
    // 0x2589d4: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x2589D0u, 0x2589D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2589D8u;
label_2589d8:
    // 0x2589d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2589d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2589dc: 0x144300a7  bne         $v0, $v1, . + 4 + (0xA7 << 2)
    ctx->pc = 0x2589DCu;
    {
        const bool branch_taken_0x2589dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2589E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2589DCu;
        // 0x2589e0: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2589dc) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x2589E4u;
    // 0x2589e4: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x2589e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x2589e8: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x2589E8u;
    SET_GPR_U32(ctx, 31, 0x2589F0u);
    ctx->pc = 0x2589ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2589E8u;
    // 0x2589ec: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x2589E8u, 0x2589F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2589F0u;
label_2589f0:
    // 0x2589f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2589f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2589f4: 0x144300a1  bne         $v0, $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2589F4u;
    {
        const bool branch_taken_0x2589f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2589F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2589F4u;
        // 0x2589f8: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2589f4) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x2589FCu;
    // 0x2589fc: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x2589fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258a00: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258A00u;
    SET_GPR_U32(ctx, 31, 0x258A08u);
    ctx->pc = 0x258A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258A00u;
    // 0x258a04: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258A00u, 0x258A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258A08u;
label_258a08:
    // 0x258a08: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258a0c: 0x1443009b  bne         $v0, $v1, . + 4 + (0x9B << 2)
    ctx->pc = 0x258A0Cu;
    {
        const bool branch_taken_0x258a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258A0Cu;
        // 0x258a10: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258a0c) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258A14u;
    // 0x258a14: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258a18: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258A18u;
    SET_GPR_U32(ctx, 31, 0x258A20u);
    ctx->pc = 0x258A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258A18u;
    // 0x258a1c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258A18u, 0x258A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258A20u;
label_258a20:
    // 0x258a20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258a24: 0x14430095  bne         $v0, $v1, . + 4 + (0x95 << 2)
    ctx->pc = 0x258A24u;
    {
        const bool branch_taken_0x258a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258A24u;
        // 0x258a28: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258a24) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258A2Cu;
    // 0x258a2c: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258a30: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258A30u;
    SET_GPR_U32(ctx, 31, 0x258A38u);
    ctx->pc = 0x258A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258A30u;
    // 0x258a34: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258A30u, 0x258A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258A38u;
label_258a38:
    // 0x258a38: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258a3c: 0x1443008f  bne         $v0, $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x258A3Cu;
    {
        const bool branch_taken_0x258a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258A3Cu;
        // 0x258a40: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258a3c) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258A44u;
    // 0x258a44: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258a48: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258A48u;
    SET_GPR_U32(ctx, 31, 0x258A50u);
    ctx->pc = 0x258A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258A48u;
    // 0x258a4c: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258A48u, 0x258A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258A50u;
label_258a50:
    // 0x258a50: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258a54: 0x14430089  bne         $v0, $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x258A54u;
    {
        const bool branch_taken_0x258a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258A54u;
        // 0x258a58: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258a54) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258A5Cu;
    // 0x258a5c: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258a60: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258A60u;
    SET_GPR_U32(ctx, 31, 0x258A68u);
    ctx->pc = 0x258A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258A60u;
    // 0x258a64: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258A60u, 0x258A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258A68u;
label_258a68:
    // 0x258a68: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258a6c: 0x14430083  bne         $v0, $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x258A6Cu;
    {
        const bool branch_taken_0x258a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258A6Cu;
        // 0x258a70: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258a6c) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258A74u;
    // 0x258a74: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258a78: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258A78u;
    SET_GPR_U32(ctx, 31, 0x258A80u);
    ctx->pc = 0x258A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258A78u;
    // 0x258a7c: 0x2405005a  addiu       $a1, $zero, 0x5A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258A78u, 0x258A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258A80u;
label_258a80:
    // 0x258a80: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258a84: 0x1443007d  bne         $v0, $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x258A84u;
    {
        const bool branch_taken_0x258a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258A84u;
        // 0x258a88: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258a84) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258A8Cu;
    // 0x258a8c: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258a90: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258A90u;
    SET_GPR_U32(ctx, 31, 0x258A98u);
    ctx->pc = 0x258A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258A90u;
    // 0x258a94: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258A90u, 0x258A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258A98u;
label_258a98:
    // 0x258a98: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258a9c: 0x14430077  bne         $v0, $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x258A9Cu;
    {
        const bool branch_taken_0x258a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258A9Cu;
        // 0x258aa0: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258a9c) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258AA4u;
    // 0x258aa4: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258aa8: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258AA8u;
    SET_GPR_U32(ctx, 31, 0x258AB0u);
    ctx->pc = 0x258AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258AA8u;
    // 0x258aac: 0x24050072  addiu       $a1, $zero, 0x72 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258AA8u, 0x258AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258AB0u;
label_258ab0:
    // 0x258ab0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258ab4: 0x14430071  bne         $v0, $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x258AB4u;
    {
        const bool branch_taken_0x258ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258AB4u;
        // 0x258ab8: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ab4) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258ABCu;
    // 0x258abc: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258ac0: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258AC0u;
    SET_GPR_U32(ctx, 31, 0x258AC8u);
    ctx->pc = 0x258AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258AC0u;
    // 0x258ac4: 0x24050073  addiu       $a1, $zero, 0x73 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258AC0u, 0x258AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258AC8u;
label_258ac8:
    // 0x258ac8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258acc: 0x1443006b  bne         $v0, $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x258ACCu;
    {
        const bool branch_taken_0x258acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258ACCu;
        // 0x258ad0: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258acc) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258AD4u;
    // 0x258ad4: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258ad8: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258AD8u;
    SET_GPR_U32(ctx, 31, 0x258AE0u);
    ctx->pc = 0x258ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258AD8u;
    // 0x258adc: 0x24050074  addiu       $a1, $zero, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258AD8u, 0x258AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258AE0u;
label_258ae0:
    // 0x258ae0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258ae4: 0x14430065  bne         $v0, $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x258AE4u;
    {
        const bool branch_taken_0x258ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258AE4u;
        // 0x258ae8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ae4) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258AECu;
    // 0x258aec: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258af0: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258AF0u;
    SET_GPR_U32(ctx, 31, 0x258AF8u);
    ctx->pc = 0x258AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258AF0u;
    // 0x258af4: 0x24050075  addiu       $a1, $zero, 0x75 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258AF0u, 0x258AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258AF8u;
label_258af8:
    // 0x258af8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258afc: 0x1443005f  bne         $v0, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x258AFCu;
    {
        const bool branch_taken_0x258afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258AFCu;
        // 0x258b00: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258afc) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258B04u;
    // 0x258b04: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258b08: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258B08u;
    SET_GPR_U32(ctx, 31, 0x258B10u);
    ctx->pc = 0x258B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258B08u;
    // 0x258b0c: 0x24050076  addiu       $a1, $zero, 0x76 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258B08u, 0x258B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B10u;
label_258b10:
    // 0x258b10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258b14: 0x14430059  bne         $v0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x258B14u;
    {
        const bool branch_taken_0x258b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B14u;
        // 0x258b18: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258b14) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258B1Cu;
    // 0x258b1c: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258b20: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258B20u;
    SET_GPR_U32(ctx, 31, 0x258B28u);
    ctx->pc = 0x258B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258B20u;
    // 0x258b24: 0x24050077  addiu       $a1, $zero, 0x77 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258B20u, 0x258B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B28u;
label_258b28:
    // 0x258b28: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258b2c: 0x14430053  bne         $v0, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x258B2Cu;
    {
        const bool branch_taken_0x258b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B2Cu;
        // 0x258b30: 0x24060017  addiu       $a2, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258b2c) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258B34u;
    // 0x258b34: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258b38: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258B38u;
    SET_GPR_U32(ctx, 31, 0x258B40u);
    ctx->pc = 0x258B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258B38u;
    // 0x258b3c: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258B38u, 0x258B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B40u;
label_258b40:
    // 0x258b40: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258b44: 0x1443004d  bne         $v0, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x258B44u;
    {
        const bool branch_taken_0x258b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B44u;
        // 0x258b48: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258b44) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258B4Cu;
    // 0x258b4c: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258b50: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258B50u;
    SET_GPR_U32(ctx, 31, 0x258B58u);
    ctx->pc = 0x258B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258B50u;
    // 0x258b54: 0x24050079  addiu       $a1, $zero, 0x79 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258B50u, 0x258B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B58u;
label_258b58:
    // 0x258b58: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258b5c: 0x14430047  bne         $v0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x258B5Cu;
    {
        const bool branch_taken_0x258b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B5Cu;
        // 0x258b60: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258b5c) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258B64u;
    // 0x258b64: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258b68: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258B68u;
    SET_GPR_U32(ctx, 31, 0x258B70u);
    ctx->pc = 0x258B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258B68u;
    // 0x258b6c: 0x2405007a  addiu       $a1, $zero, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258B68u, 0x258B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B70u;
label_258b70:
    // 0x258b70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258b74: 0x14430041  bne         $v0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x258B74u;
    {
        const bool branch_taken_0x258b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B74u;
        // 0x258b78: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258b74) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258B7Cu;
    // 0x258b7c: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258b80: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258B80u;
    SET_GPR_U32(ctx, 31, 0x258B88u);
    ctx->pc = 0x258B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258B80u;
    // 0x258b84: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258B80u, 0x258B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B88u;
label_258b88:
    // 0x258b88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258b8c: 0x1443003b  bne         $v0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x258B8Cu;
    {
        const bool branch_taken_0x258b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B8Cu;
        // 0x258b90: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258b8c) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258B94u;
    // 0x258b94: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258b98: 0x2405007c  addiu       $a1, $zero, 0x7C
    ctx->pc = 0x258b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x258b9c: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258B9Cu;
    SET_GPR_U32(ctx, 31, 0x258BA4u);
    ctx->pc = 0x258BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258B9Cu;
    // 0x258ba0: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258B9Cu, 0x258BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258BA4u;
label_258ba4:
    // 0x258ba4: 0x14510035  bne         $v0, $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x258BA4u;
    {
        const bool branch_taken_0x258ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x258BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BA4u;
        // 0x258ba8: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ba4) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258BACu;
    // 0x258bac: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258bb0: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258BB0u;
    SET_GPR_U32(ctx, 31, 0x258BB8u);
    ctx->pc = 0x258BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258BB0u;
    // 0x258bb4: 0x2405007d  addiu       $a1, $zero, 0x7D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258BB0u, 0x258BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258BB8u;
label_258bb8:
    // 0x258bb8: 0x14510030  bne         $v0, $s1, . + 4 + (0x30 << 2)
    ctx->pc = 0x258BB8u;
    {
        const bool branch_taken_0x258bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x258BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BB8u;
        // 0x258bbc: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258bb8) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258BC0u;
    // 0x258bc0: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258bc4: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258BC4u;
    SET_GPR_U32(ctx, 31, 0x258BCCu);
    ctx->pc = 0x258BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258BC4u;
    // 0x258bc8: 0x2405007e  addiu       $a1, $zero, 0x7E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258BC4u, 0x258BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258BCCu;
label_258bcc:
    // 0x258bcc: 0x1451002b  bne         $v0, $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x258BCCu;
    {
        const bool branch_taken_0x258bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x258BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BCCu;
        // 0x258bd0: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258bcc) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258BD4u;
    // 0x258bd4: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258bd8: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258BD8u;
    SET_GPR_U32(ctx, 31, 0x258BE0u);
    ctx->pc = 0x258BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258BD8u;
    // 0x258bdc: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258BD8u, 0x258BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258BE0u;
label_258be0:
    // 0x258be0: 0x14510026  bne         $v0, $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x258BE0u;
    {
        const bool branch_taken_0x258be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x258BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BE0u;
        // 0x258be4: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258be0) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258BE8u;
    // 0x258be8: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258bec: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258BECu;
    SET_GPR_U32(ctx, 31, 0x258BF4u);
    ctx->pc = 0x258BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258BECu;
    // 0x258bf0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258BECu, 0x258BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258BF4u;
label_258bf4:
    // 0x258bf4: 0x14510021  bne         $v0, $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x258BF4u;
    {
        const bool branch_taken_0x258bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x258BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BF4u;
        // 0x258bf8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258bf4) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258BFCu;
    // 0x258bfc: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258c00: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258C00u;
    SET_GPR_U32(ctx, 31, 0x258C08u);
    ctx->pc = 0x258C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258C00u;
    // 0x258c04: 0x24050086  addiu       $a1, $zero, 0x86 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258C00u, 0x258C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258C08u;
label_258c08:
    // 0x258c08: 0x1451001c  bne         $v0, $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x258C08u;
    {
        const bool branch_taken_0x258c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x258C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C08u;
        // 0x258c0c: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c08) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258C10u;
    // 0x258c10: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258c14: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258C14u;
    SET_GPR_U32(ctx, 31, 0x258C1Cu);
    ctx->pc = 0x258C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258C14u;
    // 0x258c18: 0x24050087  addiu       $a1, $zero, 0x87 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258C14u, 0x258C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258C1Cu;
label_258c1c:
    // 0x258c1c: 0x14510017  bne         $v0, $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x258C1Cu;
    {
        const bool branch_taken_0x258c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x258C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C1Cu;
        // 0x258c20: 0x24060022  addiu       $a2, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c1c) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258C24u;
    // 0x258c24: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258c28: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258C28u;
    SET_GPR_U32(ctx, 31, 0x258C30u);
    ctx->pc = 0x258C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258C28u;
    // 0x258c2c: 0x24050088  addiu       $a1, $zero, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258C28u, 0x258C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258C30u;
label_258c30:
    // 0x258c30: 0x14510012  bne         $v0, $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x258C30u;
    {
        const bool branch_taken_0x258c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x258C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C30u;
        // 0x258c34: 0x24060023  addiu       $a2, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c30) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258C38u;
    // 0x258c38: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258c3c: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258C3Cu;
    SET_GPR_U32(ctx, 31, 0x258C44u);
    ctx->pc = 0x258C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258C3Cu;
    // 0x258c40: 0x24050089  addiu       $a1, $zero, 0x89 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258C3Cu, 0x258C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258C44u;
label_258c44:
    // 0x258c44: 0x1451000d  bne         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x258C44u;
    {
        const bool branch_taken_0x258c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x258C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C44u;
        // 0x258c48: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c44) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258C4Cu;
    // 0x258c4c: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258c50: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258C50u;
    SET_GPR_U32(ctx, 31, 0x258C58u);
    ctx->pc = 0x258C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258C50u;
    // 0x258c54: 0x2405008a  addiu       $a1, $zero, 0x8A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258C50u, 0x258C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258C58u;
label_258c58:
    // 0x258c58: 0x14510008  bne         $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x258C58u;
    {
        const bool branch_taken_0x258c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x258C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C58u;
        // 0x258c5c: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c58) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258C60u;
    // 0x258c60: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258c64: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258C64u;
    SET_GPR_U32(ctx, 31, 0x258C6Cu);
    ctx->pc = 0x258C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258C64u;
    // 0x258c68: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258C64u, 0x258C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258C6Cu;
label_258c6c:
    // 0x258c6c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x258c6cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x258c70: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x258c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x258c74: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x258c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x258c78: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x258c78u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_258c7c:
    // 0x258c7c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x258c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x258c80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x258c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258c84: 0xc0b5ef6  jal         func_2D7BD8
    ctx->pc = 0x258C84u;
    SET_GPR_U32(ctx, 31, 0x258C8Cu);
    ctx->pc = 0x258C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258C84u;
    // 0x258c88: 0x24a554b0  addiu       $a1, $a1, 0x54B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7BD8u, 0x258C84u, 0x258C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258C8Cu;
label_258c8c:
    // 0x258c8c: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258c90: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x258c90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x258c94: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258C94u;
    SET_GPR_U32(ctx, 31, 0x258C9Cu);
    ctx->pc = 0x258C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258C94u;
    // 0x258c98: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258C94u, 0x258C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258C9Cu;
label_258c9c:
    // 0x258c9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258ca0: 0x14430053  bne         $v0, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x258CA0u;
    {
        const bool branch_taken_0x258ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258CA0u;
        // 0x258ca4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ca0) {
            ctx->pc = 0x258DF0u;
            goto label_258df0;
        }
    }
    ctx->pc = 0x258CA8u;
    // 0x258ca8: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258cac: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258CACu;
    SET_GPR_U32(ctx, 31, 0x258CB4u);
    ctx->pc = 0x258CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258CACu;
    // 0x258cb0: 0x2405002b  addiu       $a1, $zero, 0x2B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258CACu, 0x258CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258CB4u;
label_258cb4:
    // 0x258cb4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258cb8: 0x1443004d  bne         $v0, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x258CB8u;
    {
        const bool branch_taken_0x258cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258CB8u;
        // 0x258cbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258cb8) {
            ctx->pc = 0x258DF0u;
            goto label_258df0;
        }
    }
    ctx->pc = 0x258CC0u;
    // 0x258cc0: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258cc4: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258CC4u;
    SET_GPR_U32(ctx, 31, 0x258CCCu);
    ctx->pc = 0x258CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258CC4u;
    // 0x258cc8: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258CC4u, 0x258CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258CCCu;
label_258ccc:
    // 0x258ccc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258cd0: 0x14430047  bne         $v0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x258CD0u;
    {
        const bool branch_taken_0x258cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258CD0u;
        // 0x258cd4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258cd0) {
            ctx->pc = 0x258DF0u;
            goto label_258df0;
        }
    }
    ctx->pc = 0x258CD8u;
    // 0x258cd8: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258cdc: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258CDCu;
    SET_GPR_U32(ctx, 31, 0x258CE4u);
    ctx->pc = 0x258CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258CDCu;
    // 0x258ce0: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258CDCu, 0x258CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258CE4u;
label_258ce4:
    // 0x258ce4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258ce8: 0x14430041  bne         $v0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x258CE8u;
    {
        const bool branch_taken_0x258ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258CE8u;
        // 0x258cec: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ce8) {
            ctx->pc = 0x258DF0u;
            goto label_258df0;
        }
    }
    ctx->pc = 0x258CF0u;
    // 0x258cf0: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258cf4: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258CF4u;
    SET_GPR_U32(ctx, 31, 0x258CFCu);
    ctx->pc = 0x258CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258CF4u;
    // 0x258cf8: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258CF4u, 0x258CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258CFCu;
label_258cfc:
    // 0x258cfc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258d00: 0x1443003b  bne         $v0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x258D00u;
    {
        const bool branch_taken_0x258d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D00u;
        // 0x258d04: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d00) {
            ctx->pc = 0x258DF0u;
            goto label_258df0;
        }
    }
    ctx->pc = 0x258D08u;
    // 0x258d08: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258d0c: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x258d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x258d10: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258D10u;
    SET_GPR_U32(ctx, 31, 0x258D18u);
    ctx->pc = 0x258D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258D10u;
    // 0x258d14: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258D10u, 0x258D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258D18u;
label_258d18:
    // 0x258d18: 0x14510035  bne         $v0, $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x258D18u;
    {
        const bool branch_taken_0x258d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x258D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D18u;
        // 0x258d1c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d18) {
            ctx->pc = 0x258DF0u;
            goto label_258df0;
        }
    }
    ctx->pc = 0x258D20u;
    // 0x258d20: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258d24: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258D24u;
    SET_GPR_U32(ctx, 31, 0x258D2Cu);
    ctx->pc = 0x258D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258D24u;
    // 0x258d28: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258D24u, 0x258D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258D2Cu;
label_258d2c:
    // 0x258d2c: 0x14510030  bne         $v0, $s1, . + 4 + (0x30 << 2)
    ctx->pc = 0x258D2Cu;
    {
        const bool branch_taken_0x258d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x258D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D2Cu;
        // 0x258d30: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d2c) {
            ctx->pc = 0x258DF0u;
            goto label_258df0;
        }
    }
    ctx->pc = 0x258D34u;
    // 0x258d34: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258d38: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258D38u;
    SET_GPR_U32(ctx, 31, 0x258D40u);
    ctx->pc = 0x258D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258D38u;
    // 0x258d3c: 0x2405005b  addiu       $a1, $zero, 0x5B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258D38u, 0x258D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258D40u;
label_258d40:
    // 0x258d40: 0x1451002b  bne         $v0, $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x258D40u;
    {
        const bool branch_taken_0x258d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x258D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D40u;
        // 0x258d44: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d40) {
            ctx->pc = 0x258DF0u;
            goto label_258df0;
        }
    }
    ctx->pc = 0x258D48u;
    // 0x258d48: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258d4c: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258D4Cu;
    SET_GPR_U32(ctx, 31, 0x258D54u);
    ctx->pc = 0x258D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258D4Cu;
    // 0x258d50: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258D4Cu, 0x258D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258D54u;
label_258d54:
    // 0x258d54: 0x14510026  bne         $v0, $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x258D54u;
    {
        const bool branch_taken_0x258d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x258D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D54u;
        // 0x258d58: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d54) {
            ctx->pc = 0x258DF0u;
            goto label_258df0;
        }
    }
    ctx->pc = 0x258D5Cu;
    // 0x258d5c: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258d60: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258D60u;
    SET_GPR_U32(ctx, 31, 0x258D68u);
    ctx->pc = 0x258D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258D60u;
    // 0x258d64: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258D60u, 0x258D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258D68u;
label_258d68:
    // 0x258d68: 0x14510021  bne         $v0, $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x258D68u;
    {
        const bool branch_taken_0x258d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x258D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D68u;
        // 0x258d6c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d68) {
            ctx->pc = 0x258DF0u;
            goto label_258df0;
        }
    }
    ctx->pc = 0x258D70u;
    // 0x258d70: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258d74: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258D74u;
    SET_GPR_U32(ctx, 31, 0x258D7Cu);
    ctx->pc = 0x258D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258D74u;
    // 0x258d78: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258D74u, 0x258D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258D7Cu;
label_258d7c:
    // 0x258d7c: 0x1451001c  bne         $v0, $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x258D7Cu;
    {
        const bool branch_taken_0x258d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x258D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D7Cu;
        // 0x258d80: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d7c) {
            ctx->pc = 0x258DF0u;
            goto label_258df0;
        }
    }
    ctx->pc = 0x258D84u;
    // 0x258d84: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258d88: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258D88u;
    SET_GPR_U32(ctx, 31, 0x258D90u);
    ctx->pc = 0x258D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258D88u;
    // 0x258d8c: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258D88u, 0x258D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258D90u;
label_258d90:
    // 0x258d90: 0x14510017  bne         $v0, $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x258D90u;
    {
        const bool branch_taken_0x258d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x258D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D90u;
        // 0x258d94: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d90) {
            ctx->pc = 0x258DF0u;
            goto label_258df0;
        }
    }
    ctx->pc = 0x258D98u;
    // 0x258d98: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258d9c: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258D9Cu;
    SET_GPR_U32(ctx, 31, 0x258DA4u);
    ctx->pc = 0x258DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258D9Cu;
    // 0x258da0: 0x2405005f  addiu       $a1, $zero, 0x5F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258D9Cu, 0x258DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258DA4u;
label_258da4:
    // 0x258da4: 0x14510012  bne         $v0, $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x258DA4u;
    {
        const bool branch_taken_0x258da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x258DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258DA4u;
        // 0x258da8: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258da4) {
            ctx->pc = 0x258DF0u;
            goto label_258df0;
        }
    }
    ctx->pc = 0x258DACu;
    // 0x258dac: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258db0: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258DB0u;
    SET_GPR_U32(ctx, 31, 0x258DB8u);
    ctx->pc = 0x258DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258DB0u;
    // 0x258db4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258DB0u, 0x258DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258DB8u;
label_258db8:
    // 0x258db8: 0x1451000d  bne         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x258DB8u;
    {
        const bool branch_taken_0x258db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x258DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258DB8u;
        // 0x258dbc: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258db8) {
            ctx->pc = 0x258DF0u;
            goto label_258df0;
        }
    }
    ctx->pc = 0x258DC0u;
    // 0x258dc0: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258dc4: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258DC4u;
    SET_GPR_U32(ctx, 31, 0x258DCCu);
    ctx->pc = 0x258DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258DC4u;
    // 0x258dc8: 0x24050083  addiu       $a1, $zero, 0x83 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258DC4u, 0x258DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258DCCu;
label_258dcc:
    // 0x258dcc: 0x14510008  bne         $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x258DCCu;
    {
        const bool branch_taken_0x258dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x258DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258DCCu;
        // 0x258dd0: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258dcc) {
            ctx->pc = 0x258DF0u;
            goto label_258df0;
        }
    }
    ctx->pc = 0x258DD4u;
    // 0x258dd4: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x258dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x258dd8: 0xc0ac9c6  jal         func_2B2718
    ctx->pc = 0x258DD8u;
    SET_GPR_U32(ctx, 31, 0x258DE0u);
    ctx->pc = 0x258DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258DD8u;
    // 0x258ddc: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x258DD8u, 0x258DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258DE0u;
label_258de0:
    // 0x258de0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x258de0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x258de4: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x258de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x258de8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x258de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x258dec: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x258decu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_258df0:
    // 0x258df0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x258df0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x258df4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x258df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258df8: 0xc0b5ef6  jal         func_2D7BD8
    ctx->pc = 0x258DF8u;
    SET_GPR_U32(ctx, 31, 0x258E00u);
    ctx->pc = 0x258DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258DF8u;
    // 0x258dfc: 0x24a554b8  addiu       $a1, $a1, 0x54B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7BD8u, 0x258DF8u, 0x258E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258E00u;
label_258e00:
    // 0x258e00: 0x8e030ff4  lw          $v1, 0xFF4($s0)
    ctx->pc = 0x258e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4084)));
    // 0x258e04: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x258e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x258e08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x258e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e0c: 0x24a554c0  addiu       $a1, $a1, 0x54C0
    ctx->pc = 0x258e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21696));
    // 0x258e10: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x258e10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x258e14: 0xc0b5ef6  jal         func_2D7BD8
    ctx->pc = 0x258E14u;
    SET_GPR_U32(ctx, 31, 0x258E1Cu);
    ctx->pc = 0x258E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258E14u;
    // 0x258e18: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7BD8u, 0x258E14u, 0x258E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258E1Cu;
label_258e1c:
    // 0x258e1c: 0x8e0610d8  lw          $a2, 0x10D8($s0)
    ctx->pc = 0x258e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4312)));
    // 0x258e20: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x258e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x258e24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x258e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e28: 0x24a554c8  addiu       $a1, $a1, 0x54C8
    ctx->pc = 0x258e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21704));
    // 0x258e2c: 0xc0b5ef6  jal         func_2D7BD8
    ctx->pc = 0x258E2Cu;
    SET_GPR_U32(ctx, 31, 0x258E34u);
    ctx->pc = 0x258E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258E2Cu;
    // 0x258e30: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7BD8u, 0x258E2Cu, 0x258E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258E34u;
label_258e34:
    // 0x258e34: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x258e34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x258e38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x258e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x258e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e40: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x258e40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x258e44: 0xc0b5f36  jal         func_2D7CD8
    ctx->pc = 0x258E44u;
    SET_GPR_U32(ctx, 31, 0x258E4Cu);
    ctx->pc = 0x258E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258E44u;
    // 0x258e48: 0x24a554d8  addiu       $a1, $a1, 0x54D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7CD8u, 0x258E44u, 0x258E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258E4Cu;
label_258e4c:
    // 0x258e4c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x258e4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x258e50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x258e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e54: 0xc0b5ecc  jal         func_2D7B30
    ctx->pc = 0x258E54u;
    SET_GPR_U32(ctx, 31, 0x258E5Cu);
    ctx->pc = 0x258E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258E54u;
    // 0x258e58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7B30u, 0x258E54u, 0x258E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258E5Cu;
label_258e5c:
    // 0x258e5c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x258e5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e60: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x258e60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258e64: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x258e64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x258e68: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x258e68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258e6c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x258e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x258e70: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x258e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x258e74: 0x3e00008  jr          $ra
    ctx->pc = 0x258E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E74u;
        // 0x258e78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258E7Cu;
    // 0x258e7c: 0x0  nop
    ctx->pc = 0x258e7cu;
    // NOP
    ctx->pc = 0x258e80u;
}
