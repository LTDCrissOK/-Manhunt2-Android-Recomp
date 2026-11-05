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

// Function: sub_00204770
// Address: 0x204770 - 0x204d10
void sub_00204770_0x204770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204770_0x204770");
#endif

    switch (ctx->pc) {
        case 0x2047acu: goto label_2047ac;
        case 0x2047c0u: goto label_2047c0;
        case 0x2047d4u: goto label_2047d4;
        case 0x2047f8u: goto label_2047f8;
        case 0x204800u: goto label_204800;
        case 0x204818u: goto label_204818;
        case 0x20482cu: goto label_20482c;
        case 0x204854u: goto label_204854;
        case 0x204868u: goto label_204868;
        case 0x20487cu: goto label_20487c;
        case 0x204890u: goto label_204890;
        case 0x20489cu: goto label_20489c;
        case 0x2048bcu: goto label_2048bc;
        case 0x2048e0u: goto label_2048e0;
        case 0x2048e8u: goto label_2048e8;
        case 0x204900u: goto label_204900;
        case 0x204914u: goto label_204914;
        case 0x20493cu: goto label_20493c;
        case 0x204950u: goto label_204950;
        case 0x204964u: goto label_204964;
        case 0x204978u: goto label_204978;
        case 0x204984u: goto label_204984;
        case 0x2049a4u: goto label_2049a4;
        case 0x2049c8u: goto label_2049c8;
        case 0x2049d0u: goto label_2049d0;
        case 0x2049e8u: goto label_2049e8;
        case 0x2049fcu: goto label_2049fc;
        case 0x204a24u: goto label_204a24;
        case 0x204a38u: goto label_204a38;
        case 0x204a4cu: goto label_204a4c;
        case 0x204a60u: goto label_204a60;
        case 0x204a6cu: goto label_204a6c;
        case 0x204a8cu: goto label_204a8c;
        case 0x204ab0u: goto label_204ab0;
        case 0x204ab8u: goto label_204ab8;
        case 0x204ad0u: goto label_204ad0;
        case 0x204ae4u: goto label_204ae4;
        case 0x204b0cu: goto label_204b0c;
        case 0x204b20u: goto label_204b20;
        case 0x204b34u: goto label_204b34;
        case 0x204b48u: goto label_204b48;
        case 0x204b54u: goto label_204b54;
        case 0x204b74u: goto label_204b74;
        case 0x204b98u: goto label_204b98;
        case 0x204ba0u: goto label_204ba0;
        case 0x204bb8u: goto label_204bb8;
        case 0x204bccu: goto label_204bcc;
        case 0x204bf4u: goto label_204bf4;
        case 0x204c08u: goto label_204c08;
        case 0x204c14u: goto label_204c14;
        case 0x204c30u: goto label_204c30;
        case 0x204c50u: goto label_204c50;
        case 0x204c58u: goto label_204c58;
        case 0x204c70u: goto label_204c70;
        case 0x204c84u: goto label_204c84;
        case 0x204ca4u: goto label_204ca4;
        case 0x204cb8u: goto label_204cb8;
        case 0x204cc4u: goto label_204cc4;
        case 0x204cd8u: goto label_204cd8;
        case 0x204ce4u: goto label_204ce4;
        default: break;
    }

    ctx->pc = 0x204770u;

    // 0x204770: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x204770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x204774: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x204774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x204778: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x204778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x20477c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20477cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204780: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x204780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x204784: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x204784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204788: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x204788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x20478c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x20478cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204790: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x204790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x204794: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x204794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204798: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x204798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x20479c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x20479cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2047a0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2047a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2047a4: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x2047A4u;
    SET_GPR_U32(ctx, 31, 0x2047ACu);
    ctx->pc = 0x2047A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2047A4u;
    // 0x2047a8: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x2047A4u, 0x2047ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2047ACu;
label_2047ac:
    // 0x2047ac: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x2047acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2047b0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2047b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2047b4: 0x24a50980  addiu       $a1, $a1, 0x980
    ctx->pc = 0x2047b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2432));
    // 0x2047b8: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2047B8u;
    SET_GPR_U32(ctx, 31, 0x2047C0u);
    ctx->pc = 0x2047BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2047B8u;
    // 0x2047bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2047B8u, 0x2047C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2047C0u;
label_2047c0:
    // 0x2047c0: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x2047c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2047c4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2047c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2047c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2047c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2047cc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2047CCu;
    SET_GPR_U32(ctx, 31, 0x2047D4u);
    ctx->pc = 0x2047D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2047CCu;
    // 0x2047d0: 0x24a50a48  addiu       $a1, $a1, 0xA48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2047CCu, 0x2047D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2047D4u;
label_2047d4:
    // 0x2047d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2047d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2047d8: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2047D8u;
    {
        const bool branch_taken_0x2047d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2047DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047D8u;
        // 0x2047dc: 0x3c140046  lui         $s4, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2047d8) {
            ctx->pc = 0x2048ACu;
            goto label_2048ac;
        }
    }
    ctx->pc = 0x2047E0u;
    // 0x2047e0: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x2047e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x2047e4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2047e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2047e8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2047e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2047ec: 0x3c130046  lui         $s3, 0x46
    ctx->pc = 0x2047ecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)70 << 16));
    // 0x2047f0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2047F0u;
    {
        const bool branch_taken_0x2047f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2047F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047F0u;
        // 0x2047f4: 0x3c120046  lui         $s2, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2047f0) {
            ctx->pc = 0x204890u;
            goto label_204890;
        }
    }
    ctx->pc = 0x2047F8u;
label_2047f8:
    // 0x2047f8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2047F8u;
    SET_GPR_U32(ctx, 31, 0x204800u);
    ctx->pc = 0x2047FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2047F8u;
    // 0x2047fc: 0x26850a18  addiu       $a1, $s4, 0xA18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2047F8u, 0x204800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204800u;
label_204800:
    // 0x204800: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204804: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x204804u;
    {
        const bool branch_taken_0x204804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204804u;
        // 0x204808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204804) {
            ctx->pc = 0x204824u;
            goto label_204824;
        }
    }
    ctx->pc = 0x20480Cu;
    // 0x20480c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x20480cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204810: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x204810u;
    SET_GPR_U32(ctx, 31, 0x204818u);
    ctx->pc = 0x204814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204810u;
    // 0x204814: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x204810u, 0x204818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204818u;
label_204818:
    // 0x204818: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20481c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20481Cu;
    {
        const bool branch_taken_0x20481c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20481Cu;
        // 0x204820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20481c) {
            ctx->pc = 0x204848u;
            goto label_204848;
        }
    }
    ctx->pc = 0x204824u;
label_204824:
    // 0x204824: 0xc09e056  jal         func_278158
    ctx->pc = 0x204824u;
    SET_GPR_U32(ctx, 31, 0x20482Cu);
    ctx->pc = 0x204828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204824u;
    // 0x204828: 0x26051ba0  addiu       $a1, $s0, 0x1BA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x204824u, 0x20482Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20482Cu;
label_20482c:
    // 0x20482c: 0xc6001ba0  lwc1        $f0, 0x1BA0($s0)
    ctx->pc = 0x20482cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204830: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x204830u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x204834: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x204834u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x204838: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x204838u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x20483c: 0xe6011ba0  swc1        $f1, 0x1BA0($s0)
    ctx->pc = 0x20483cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7072), bits); }
    // 0x204840: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x204840u;
    {
        const bool branch_taken_0x204840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204840u;
        // 0x204844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204840) {
            ctx->pc = 0x204894u;
            goto label_204894;
        }
    }
    ctx->pc = 0x204848u;
label_204848:
    // 0x204848: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x204848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20484c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20484Cu;
    SET_GPR_U32(ctx, 31, 0x204854u);
    ctx->pc = 0x204850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20484Cu;
    // 0x204850: 0x26650a58  addiu       $a1, $s3, 0xA58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20484Cu, 0x204854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204854u;
label_204854:
    // 0x204854: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204858: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x204858u;
    {
        const bool branch_taken_0x204858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204858u;
        // 0x20485c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204858) {
            ctx->pc = 0x204870u;
            goto label_204870;
        }
    }
    ctx->pc = 0x204860u;
    // 0x204860: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x204860u;
    SET_GPR_U32(ctx, 31, 0x204868u);
    ctx->pc = 0x204864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204860u;
    // 0x204864: 0x26051bb0  addiu       $a1, $s0, 0x1BB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x204860u, 0x204868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204868u;
label_204868:
    // 0x204868: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x204868u;
    {
        const bool branch_taken_0x204868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204868u;
        // 0x20486c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204868) {
            ctx->pc = 0x204894u;
            goto label_204894;
        }
    }
    ctx->pc = 0x204870u;
label_204870:
    // 0x204870: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x204870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204874: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x204874u;
    SET_GPR_U32(ctx, 31, 0x20487Cu);
    ctx->pc = 0x204878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204874u;
    // 0x204878: 0x26450a68  addiu       $a1, $s2, 0xA68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x204874u, 0x20487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20487Cu;
label_20487c:
    // 0x20487c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20487cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204880: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x204880u;
    {
        const bool branch_taken_0x204880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204880u;
        // 0x204884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204880) {
            ctx->pc = 0x204890u;
            goto label_204890;
        }
    }
    ctx->pc = 0x204888u;
    // 0x204888: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x204888u;
    SET_GPR_U32(ctx, 31, 0x204890u);
    ctx->pc = 0x20488Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204888u;
    // 0x20488c: 0x26051bc0  addiu       $a1, $s0, 0x1BC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x204888u, 0x204890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204890u;
label_204890:
    // 0x204890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x204890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_204894:
    // 0x204894: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x204894u;
    SET_GPR_U32(ctx, 31, 0x20489Cu);
    ctx->pc = 0x204898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204894u;
    // 0x204898: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x204894u, 0x20489Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20489Cu;
label_20489c:
    // 0x20489c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x20489Cu;
    {
        const bool branch_taken_0x20489c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2048A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20489Cu;
        // 0x2048a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20489c) {
            ctx->pc = 0x2047F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2047f8;
        }
    }
    ctx->pc = 0x2048A4u;
    // 0x2048a4: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x2048A4u;
    {
        const bool branch_taken_0x2048a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2048A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2048A4u;
        // 0x2048a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2048a4) {
            ctx->pc = 0x204CB0u;
            goto label_204cb0;
        }
    }
    ctx->pc = 0x2048ACu;
label_2048ac:
    // 0x2048ac: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2048acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2048b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2048b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2048b4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2048B4u;
    SET_GPR_U32(ctx, 31, 0x2048BCu);
    ctx->pc = 0x2048B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2048B4u;
    // 0x2048b8: 0x24a50a78  addiu       $a1, $a1, 0xA78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2048B4u, 0x2048BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2048BCu;
label_2048bc:
    // 0x2048bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2048bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2048c0: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2048C0u;
    {
        const bool branch_taken_0x2048c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2048C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2048C0u;
        // 0x2048c4: 0x3c140046  lui         $s4, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2048c0) {
            ctx->pc = 0x204994u;
            goto label_204994;
        }
    }
    ctx->pc = 0x2048C8u;
    // 0x2048c8: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x2048c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x2048cc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2048ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2048d0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2048d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2048d4: 0x3c130046  lui         $s3, 0x46
    ctx->pc = 0x2048d4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)70 << 16));
    // 0x2048d8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2048D8u;
    {
        const bool branch_taken_0x2048d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2048DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2048D8u;
        // 0x2048dc: 0x3c120046  lui         $s2, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2048d8) {
            ctx->pc = 0x204978u;
            goto label_204978;
        }
    }
    ctx->pc = 0x2048E0u;
label_2048e0:
    // 0x2048e0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2048E0u;
    SET_GPR_U32(ctx, 31, 0x2048E8u);
    ctx->pc = 0x2048E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2048E0u;
    // 0x2048e4: 0x26850a18  addiu       $a1, $s4, 0xA18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2048E0u, 0x2048E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2048E8u;
label_2048e8:
    // 0x2048e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2048e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2048ec: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2048ECu;
    {
        const bool branch_taken_0x2048ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2048F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2048ECu;
        // 0x2048f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2048ec) {
            ctx->pc = 0x20490Cu;
            goto label_20490c;
        }
    }
    ctx->pc = 0x2048F4u;
    // 0x2048f4: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2048f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2048f8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2048F8u;
    SET_GPR_U32(ctx, 31, 0x204900u);
    ctx->pc = 0x2048FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2048F8u;
    // 0x2048fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2048F8u, 0x204900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204900u;
label_204900:
    // 0x204900: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204904: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x204904u;
    {
        const bool branch_taken_0x204904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204904u;
        // 0x204908: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204904) {
            ctx->pc = 0x204930u;
            goto label_204930;
        }
    }
    ctx->pc = 0x20490Cu;
label_20490c:
    // 0x20490c: 0xc09e056  jal         func_278158
    ctx->pc = 0x20490Cu;
    SET_GPR_U32(ctx, 31, 0x204914u);
    ctx->pc = 0x204910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20490Cu;
    // 0x204910: 0x26051ba4  addiu       $a1, $s0, 0x1BA4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7076));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x20490Cu, 0x204914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204914u;
label_204914:
    // 0x204914: 0xc6001ba4  lwc1        $f0, 0x1BA4($s0)
    ctx->pc = 0x204914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204918: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x204918u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20491c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x20491cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x204920: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x204920u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x204924: 0xe6011ba4  swc1        $f1, 0x1BA4($s0)
    ctx->pc = 0x204924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7076), bits); }
    // 0x204928: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x204928u;
    {
        const bool branch_taken_0x204928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204928u;
        // 0x20492c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204928) {
            ctx->pc = 0x20497Cu;
            goto label_20497c;
        }
    }
    ctx->pc = 0x204930u;
label_204930:
    // 0x204930: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x204930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204934: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x204934u;
    SET_GPR_U32(ctx, 31, 0x20493Cu);
    ctx->pc = 0x204938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204934u;
    // 0x204938: 0x26650a58  addiu       $a1, $s3, 0xA58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x204934u, 0x20493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20493Cu;
label_20493c:
    // 0x20493c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20493cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204940: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x204940u;
    {
        const bool branch_taken_0x204940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204940u;
        // 0x204944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204940) {
            ctx->pc = 0x204958u;
            goto label_204958;
        }
    }
    ctx->pc = 0x204948u;
    // 0x204948: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x204948u;
    SET_GPR_U32(ctx, 31, 0x204950u);
    ctx->pc = 0x20494Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204948u;
    // 0x20494c: 0x26051bb4  addiu       $a1, $s0, 0x1BB4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7092));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x204948u, 0x204950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204950u;
label_204950:
    // 0x204950: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x204950u;
    {
        const bool branch_taken_0x204950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204950u;
        // 0x204954: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204950) {
            ctx->pc = 0x20497Cu;
            goto label_20497c;
        }
    }
    ctx->pc = 0x204958u;
label_204958:
    // 0x204958: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x204958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20495c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20495Cu;
    SET_GPR_U32(ctx, 31, 0x204964u);
    ctx->pc = 0x204960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20495Cu;
    // 0x204960: 0x26450a68  addiu       $a1, $s2, 0xA68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20495Cu, 0x204964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204964u;
label_204964:
    // 0x204964: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204968: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x204968u;
    {
        const bool branch_taken_0x204968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204968u;
        // 0x20496c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204968) {
            ctx->pc = 0x204978u;
            goto label_204978;
        }
    }
    ctx->pc = 0x204970u;
    // 0x204970: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x204970u;
    SET_GPR_U32(ctx, 31, 0x204978u);
    ctx->pc = 0x204974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204970u;
    // 0x204974: 0x26051bc4  addiu       $a1, $s0, 0x1BC4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x204970u, 0x204978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204978u;
label_204978:
    // 0x204978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x204978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20497c:
    // 0x20497c: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x20497Cu;
    SET_GPR_U32(ctx, 31, 0x204984u);
    ctx->pc = 0x204980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20497Cu;
    // 0x204980: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x20497Cu, 0x204984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204984u;
label_204984:
    // 0x204984: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x204984u;
    {
        const bool branch_taken_0x204984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204984u;
        // 0x204988: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204984) {
            ctx->pc = 0x2048E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2048e0;
        }
    }
    ctx->pc = 0x20498Cu;
    // 0x20498c: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x20498Cu;
    {
        const bool branch_taken_0x20498c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20498Cu;
        // 0x204990: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20498c) {
            ctx->pc = 0x204CB0u;
            goto label_204cb0;
        }
    }
    ctx->pc = 0x204994u;
label_204994:
    // 0x204994: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x204994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x204998: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x204998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20499c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20499Cu;
    SET_GPR_U32(ctx, 31, 0x2049A4u);
    ctx->pc = 0x2049A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20499Cu;
    // 0x2049a0: 0x24a50a90  addiu       $a1, $a1, 0xA90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20499Cu, 0x2049A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2049A4u;
label_2049a4:
    // 0x2049a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2049a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2049a8: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2049A8u;
    {
        const bool branch_taken_0x2049a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2049ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049A8u;
        // 0x2049ac: 0x3c140046  lui         $s4, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2049a8) {
            ctx->pc = 0x204A7Cu;
            goto label_204a7c;
        }
    }
    ctx->pc = 0x2049B0u;
    // 0x2049b0: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x2049b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x2049b4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2049b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2049b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2049b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2049bc: 0x3c130046  lui         $s3, 0x46
    ctx->pc = 0x2049bcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)70 << 16));
    // 0x2049c0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2049C0u;
    {
        const bool branch_taken_0x2049c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2049C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049C0u;
        // 0x2049c4: 0x3c120046  lui         $s2, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2049c0) {
            ctx->pc = 0x204A60u;
            goto label_204a60;
        }
    }
    ctx->pc = 0x2049C8u;
label_2049c8:
    // 0x2049c8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2049C8u;
    SET_GPR_U32(ctx, 31, 0x2049D0u);
    ctx->pc = 0x2049CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2049C8u;
    // 0x2049cc: 0x26850a18  addiu       $a1, $s4, 0xA18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2049C8u, 0x2049D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2049D0u;
label_2049d0:
    // 0x2049d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2049d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2049d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2049D4u;
    {
        const bool branch_taken_0x2049d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2049D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049D4u;
        // 0x2049d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2049d4) {
            ctx->pc = 0x2049F4u;
            goto label_2049f4;
        }
    }
    ctx->pc = 0x2049DCu;
    // 0x2049dc: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2049dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2049e0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2049E0u;
    SET_GPR_U32(ctx, 31, 0x2049E8u);
    ctx->pc = 0x2049E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2049E0u;
    // 0x2049e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2049E0u, 0x2049E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2049E8u;
label_2049e8:
    // 0x2049e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2049e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2049ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2049ECu;
    {
        const bool branch_taken_0x2049ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2049F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049ECu;
        // 0x2049f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2049ec) {
            ctx->pc = 0x204A18u;
            goto label_204a18;
        }
    }
    ctx->pc = 0x2049F4u;
label_2049f4:
    // 0x2049f4: 0xc09e056  jal         func_278158
    ctx->pc = 0x2049F4u;
    SET_GPR_U32(ctx, 31, 0x2049FCu);
    ctx->pc = 0x2049F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2049F4u;
    // 0x2049f8: 0x26051ba8  addiu       $a1, $s0, 0x1BA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x2049F4u, 0x2049FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2049FCu;
label_2049fc:
    // 0x2049fc: 0xc6001ba8  lwc1        $f0, 0x1BA8($s0)
    ctx->pc = 0x2049fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204a00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x204a00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x204a04: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x204a04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x204a08: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x204a08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x204a0c: 0xe6011ba8  swc1        $f1, 0x1BA8($s0)
    ctx->pc = 0x204a0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7080), bits); }
    // 0x204a10: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x204A10u;
    {
        const bool branch_taken_0x204a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A10u;
        // 0x204a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a10) {
            ctx->pc = 0x204A64u;
            goto label_204a64;
        }
    }
    ctx->pc = 0x204A18u;
label_204a18:
    // 0x204a18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x204a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204a1c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x204A1Cu;
    SET_GPR_U32(ctx, 31, 0x204A24u);
    ctx->pc = 0x204A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204A1Cu;
    // 0x204a20: 0x26650a58  addiu       $a1, $s3, 0xA58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x204A1Cu, 0x204A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204A24u;
label_204a24:
    // 0x204a24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204a28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x204A28u;
    {
        const bool branch_taken_0x204a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A28u;
        // 0x204a2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a28) {
            ctx->pc = 0x204A40u;
            goto label_204a40;
        }
    }
    ctx->pc = 0x204A30u;
    // 0x204a30: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x204A30u;
    SET_GPR_U32(ctx, 31, 0x204A38u);
    ctx->pc = 0x204A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204A30u;
    // 0x204a34: 0x26051bb8  addiu       $a1, $s0, 0x1BB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x204A30u, 0x204A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204A38u;
label_204a38:
    // 0x204a38: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x204A38u;
    {
        const bool branch_taken_0x204a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A38u;
        // 0x204a3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a38) {
            ctx->pc = 0x204A64u;
            goto label_204a64;
        }
    }
    ctx->pc = 0x204A40u;
label_204a40:
    // 0x204a40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x204a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204a44: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x204A44u;
    SET_GPR_U32(ctx, 31, 0x204A4Cu);
    ctx->pc = 0x204A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204A44u;
    // 0x204a48: 0x26450a68  addiu       $a1, $s2, 0xA68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x204A44u, 0x204A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204A4Cu;
label_204a4c:
    // 0x204a4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204a50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x204A50u;
    {
        const bool branch_taken_0x204a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A50u;
        // 0x204a54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a50) {
            ctx->pc = 0x204A60u;
            goto label_204a60;
        }
    }
    ctx->pc = 0x204A58u;
    // 0x204a58: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x204A58u;
    SET_GPR_U32(ctx, 31, 0x204A60u);
    ctx->pc = 0x204A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204A58u;
    // 0x204a5c: 0x26051bc8  addiu       $a1, $s0, 0x1BC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x204A58u, 0x204A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204A60u;
label_204a60:
    // 0x204a60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x204a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_204a64:
    // 0x204a64: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x204A64u;
    SET_GPR_U32(ctx, 31, 0x204A6Cu);
    ctx->pc = 0x204A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204A64u;
    // 0x204a68: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x204A64u, 0x204A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204A6Cu;
label_204a6c:
    // 0x204a6c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x204A6Cu;
    {
        const bool branch_taken_0x204a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A6Cu;
        // 0x204a70: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a6c) {
            ctx->pc = 0x2049C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2049c8;
        }
    }
    ctx->pc = 0x204A74u;
    // 0x204a74: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x204A74u;
    {
        const bool branch_taken_0x204a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A74u;
        // 0x204a78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a74) {
            ctx->pc = 0x204CB0u;
            goto label_204cb0;
        }
    }
    ctx->pc = 0x204A7Cu;
label_204a7c:
    // 0x204a7c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x204a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x204a80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x204a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204a84: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x204A84u;
    SET_GPR_U32(ctx, 31, 0x204A8Cu);
    ctx->pc = 0x204A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204A84u;
    // 0x204a88: 0x24a50aa0  addiu       $a1, $a1, 0xAA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x204A84u, 0x204A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204A8Cu;
label_204a8c:
    // 0x204a8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204a90: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x204A90u;
    {
        const bool branch_taken_0x204a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A90u;
        // 0x204a94: 0x3c140046  lui         $s4, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a90) {
            ctx->pc = 0x204B64u;
            goto label_204b64;
        }
    }
    ctx->pc = 0x204A98u;
    // 0x204a98: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x204a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x204a9c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x204a9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x204aa0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x204aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x204aa4: 0x3c130046  lui         $s3, 0x46
    ctx->pc = 0x204aa4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)70 << 16));
    // 0x204aa8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x204AA8u;
    {
        const bool branch_taken_0x204aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204AA8u;
        // 0x204aac: 0x3c120046  lui         $s2, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204aa8) {
            ctx->pc = 0x204B48u;
            goto label_204b48;
        }
    }
    ctx->pc = 0x204AB0u;
label_204ab0:
    // 0x204ab0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x204AB0u;
    SET_GPR_U32(ctx, 31, 0x204AB8u);
    ctx->pc = 0x204AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204AB0u;
    // 0x204ab4: 0x26850a18  addiu       $a1, $s4, 0xA18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x204AB0u, 0x204AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204AB8u;
label_204ab8:
    // 0x204ab8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204abc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x204ABCu;
    {
        const bool branch_taken_0x204abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204ABCu;
        // 0x204ac0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204abc) {
            ctx->pc = 0x204ADCu;
            goto label_204adc;
        }
    }
    ctx->pc = 0x204AC4u;
    // 0x204ac4: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x204ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204ac8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x204AC8u;
    SET_GPR_U32(ctx, 31, 0x204AD0u);
    ctx->pc = 0x204ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204AC8u;
    // 0x204acc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x204AC8u, 0x204AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204AD0u;
label_204ad0:
    // 0x204ad0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204ad4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x204AD4u;
    {
        const bool branch_taken_0x204ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204AD4u;
        // 0x204ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ad4) {
            ctx->pc = 0x204B00u;
            goto label_204b00;
        }
    }
    ctx->pc = 0x204ADCu;
label_204adc:
    // 0x204adc: 0xc09e056  jal         func_278158
    ctx->pc = 0x204ADCu;
    SET_GPR_U32(ctx, 31, 0x204AE4u);
    ctx->pc = 0x204AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204ADCu;
    // 0x204ae0: 0x26051bac  addiu       $a1, $s0, 0x1BAC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7084));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x204ADCu, 0x204AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204AE4u;
label_204ae4:
    // 0x204ae4: 0xc6001bac  lwc1        $f0, 0x1BAC($s0)
    ctx->pc = 0x204ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204ae8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x204ae8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x204aec: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x204aecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x204af0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x204af0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x204af4: 0xe6011bac  swc1        $f1, 0x1BAC($s0)
    ctx->pc = 0x204af4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7084), bits); }
    // 0x204af8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x204AF8u;
    {
        const bool branch_taken_0x204af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204AF8u;
        // 0x204afc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204af8) {
            ctx->pc = 0x204B4Cu;
            goto label_204b4c;
        }
    }
    ctx->pc = 0x204B00u;
label_204b00:
    // 0x204b00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x204b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204b04: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x204B04u;
    SET_GPR_U32(ctx, 31, 0x204B0Cu);
    ctx->pc = 0x204B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204B04u;
    // 0x204b08: 0x26650a58  addiu       $a1, $s3, 0xA58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x204B04u, 0x204B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204B0Cu;
label_204b0c:
    // 0x204b0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204b10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x204B10u;
    {
        const bool branch_taken_0x204b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B10u;
        // 0x204b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b10) {
            ctx->pc = 0x204B28u;
            goto label_204b28;
        }
    }
    ctx->pc = 0x204B18u;
    // 0x204b18: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x204B18u;
    SET_GPR_U32(ctx, 31, 0x204B20u);
    ctx->pc = 0x204B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204B18u;
    // 0x204b1c: 0x26051bbc  addiu       $a1, $s0, 0x1BBC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x204B18u, 0x204B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204B20u;
label_204b20:
    // 0x204b20: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x204B20u;
    {
        const bool branch_taken_0x204b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B20u;
        // 0x204b24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b20) {
            ctx->pc = 0x204B4Cu;
            goto label_204b4c;
        }
    }
    ctx->pc = 0x204B28u;
label_204b28:
    // 0x204b28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x204b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204b2c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x204B2Cu;
    SET_GPR_U32(ctx, 31, 0x204B34u);
    ctx->pc = 0x204B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204B2Cu;
    // 0x204b30: 0x26450a68  addiu       $a1, $s2, 0xA68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x204B2Cu, 0x204B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204B34u;
label_204b34:
    // 0x204b34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204b38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x204B38u;
    {
        const bool branch_taken_0x204b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B38u;
        // 0x204b3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b38) {
            ctx->pc = 0x204B48u;
            goto label_204b48;
        }
    }
    ctx->pc = 0x204B40u;
    // 0x204b40: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x204B40u;
    SET_GPR_U32(ctx, 31, 0x204B48u);
    ctx->pc = 0x204B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204B40u;
    // 0x204b44: 0x26051bcc  addiu       $a1, $s0, 0x1BCC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x204B40u, 0x204B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204B48u;
label_204b48:
    // 0x204b48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x204b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_204b4c:
    // 0x204b4c: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x204B4Cu;
    SET_GPR_U32(ctx, 31, 0x204B54u);
    ctx->pc = 0x204B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204B4Cu;
    // 0x204b50: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x204B4Cu, 0x204B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204B54u;
label_204b54:
    // 0x204b54: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x204B54u;
    {
        const bool branch_taken_0x204b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B54u;
        // 0x204b58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b54) {
            ctx->pc = 0x204AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204ab0;
        }
    }
    ctx->pc = 0x204B5Cu;
    // 0x204b5c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x204B5Cu;
    {
        const bool branch_taken_0x204b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B5Cu;
        // 0x204b60: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b5c) {
            ctx->pc = 0x204CB0u;
            goto label_204cb0;
        }
    }
    ctx->pc = 0x204B64u;
label_204b64:
    // 0x204b64: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x204b64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x204b68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x204b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204b6c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x204B6Cu;
    SET_GPR_U32(ctx, 31, 0x204B74u);
    ctx->pc = 0x204B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204B6Cu;
    // 0x204b70: 0x24a50ab0  addiu       $a1, $a1, 0xAB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x204B6Cu, 0x204B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204B74u;
label_204b74:
    // 0x204b74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204b78: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x204B78u;
    {
        const bool branch_taken_0x204b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B78u;
        // 0x204b7c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b78) {
            ctx->pc = 0x204C24u;
            goto label_204c24;
        }
    }
    ctx->pc = 0x204B80u;
    // 0x204b80: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x204b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x204b84: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x204b84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x204b88: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x204b88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x204b8c: 0x3c130046  lui         $s3, 0x46
    ctx->pc = 0x204b8cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)70 << 16));
    // 0x204b90: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x204B90u;
    {
        const bool branch_taken_0x204b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B90u;
        // 0x204b94: 0x3c120046  lui         $s2, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b90) {
            ctx->pc = 0x204C08u;
            goto label_204c08;
        }
    }
    ctx->pc = 0x204B98u;
label_204b98:
    // 0x204b98: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x204B98u;
    SET_GPR_U32(ctx, 31, 0x204BA0u);
    ctx->pc = 0x204B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204B98u;
    // 0x204b9c: 0x26650a18  addiu       $a1, $s3, 0xA18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x204B98u, 0x204BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204BA0u;
label_204ba0:
    // 0x204ba0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204ba4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x204BA4u;
    {
        const bool branch_taken_0x204ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BA4u;
        // 0x204ba8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ba4) {
            ctx->pc = 0x204BC4u;
            goto label_204bc4;
        }
    }
    ctx->pc = 0x204BACu;
    // 0x204bac: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x204bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204bb0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x204BB0u;
    SET_GPR_U32(ctx, 31, 0x204BB8u);
    ctx->pc = 0x204BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204BB0u;
    // 0x204bb4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x204BB0u, 0x204BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204BB8u;
label_204bb8:
    // 0x204bb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204bbc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x204BBCu;
    {
        const bool branch_taken_0x204bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BBCu;
        // 0x204bc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204bbc) {
            ctx->pc = 0x204BE8u;
            goto label_204be8;
        }
    }
    ctx->pc = 0x204BC4u;
label_204bc4:
    // 0x204bc4: 0xc09e056  jal         func_278158
    ctx->pc = 0x204BC4u;
    SET_GPR_U32(ctx, 31, 0x204BCCu);
    ctx->pc = 0x204BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204BC4u;
    // 0x204bc8: 0x26051bd0  addiu       $a1, $s0, 0x1BD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x204BC4u, 0x204BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204BCCu;
label_204bcc:
    // 0x204bcc: 0xc6001bd0  lwc1        $f0, 0x1BD0($s0)
    ctx->pc = 0x204bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204bd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x204bd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x204bd4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x204bd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x204bd8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x204bd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x204bdc: 0xe6011bd0  swc1        $f1, 0x1BD0($s0)
    ctx->pc = 0x204bdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7120), bits); }
    // 0x204be0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x204BE0u;
    {
        const bool branch_taken_0x204be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BE0u;
        // 0x204be4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204be0) {
            ctx->pc = 0x204C0Cu;
            goto label_204c0c;
        }
    }
    ctx->pc = 0x204BE8u;
label_204be8:
    // 0x204be8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x204be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204bec: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x204BECu;
    SET_GPR_U32(ctx, 31, 0x204BF4u);
    ctx->pc = 0x204BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204BECu;
    // 0x204bf0: 0x26450ac0  addiu       $a1, $s2, 0xAC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x204BECu, 0x204BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204BF4u;
label_204bf4:
    // 0x204bf4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204bf8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x204BF8u;
    {
        const bool branch_taken_0x204bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BF8u;
        // 0x204bfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204bf8) {
            ctx->pc = 0x204C08u;
            goto label_204c08;
        }
    }
    ctx->pc = 0x204C00u;
    // 0x204c00: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x204C00u;
    SET_GPR_U32(ctx, 31, 0x204C08u);
    ctx->pc = 0x204C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204C00u;
    // 0x204c04: 0x26051bd4  addiu       $a1, $s0, 0x1BD4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x204C00u, 0x204C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204C08u;
label_204c08:
    // 0x204c08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x204c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_204c0c:
    // 0x204c0c: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x204C0Cu;
    SET_GPR_U32(ctx, 31, 0x204C14u);
    ctx->pc = 0x204C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204C0Cu;
    // 0x204c10: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x204C0Cu, 0x204C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204C14u;
label_204c14:
    // 0x204c14: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x204C14u;
    {
        const bool branch_taken_0x204c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C14u;
        // 0x204c18: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c14) {
            ctx->pc = 0x204B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204b98;
        }
    }
    ctx->pc = 0x204C1Cu;
    // 0x204c1c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x204C1Cu;
    {
        const bool branch_taken_0x204c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C1Cu;
        // 0x204c20: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c1c) {
            ctx->pc = 0x204CB0u;
            goto label_204cb0;
        }
    }
    ctx->pc = 0x204C24u;
label_204c24:
    // 0x204c24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x204c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204c28: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x204C28u;
    SET_GPR_U32(ctx, 31, 0x204C30u);
    ctx->pc = 0x204C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204C28u;
    // 0x204c2c: 0x24a50ad0  addiu       $a1, $a1, 0xAD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x204C28u, 0x204C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204C30u;
label_204c30:
    // 0x204c30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204c34: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x204C34u;
    {
        const bool branch_taken_0x204c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C34u;
        // 0x204c38: 0x3c120046  lui         $s2, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c34) {
            ctx->pc = 0x204CCCu;
            goto label_204ccc;
        }
    }
    ctx->pc = 0x204C3Cu;
    // 0x204c3c: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x204c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x204c40: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x204c40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x204c44: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x204c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x204c48: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x204C48u;
    {
        const bool branch_taken_0x204c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C48u;
        // 0x204c4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c48) {
            ctx->pc = 0x204C9Cu;
            goto label_204c9c;
        }
    }
    ctx->pc = 0x204C50u;
label_204c50:
    // 0x204c50: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x204C50u;
    SET_GPR_U32(ctx, 31, 0x204C58u);
    ctx->pc = 0x204C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204C50u;
    // 0x204c54: 0x26450a18  addiu       $a1, $s2, 0xA18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x204C50u, 0x204C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204C58u;
label_204c58:
    // 0x204c58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204c5c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x204C5Cu;
    {
        const bool branch_taken_0x204c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C5Cu;
        // 0x204c60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c5c) {
            ctx->pc = 0x204C7Cu;
            goto label_204c7c;
        }
    }
    ctx->pc = 0x204C64u;
    // 0x204c64: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x204c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204c68: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x204C68u;
    SET_GPR_U32(ctx, 31, 0x204C70u);
    ctx->pc = 0x204C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204C68u;
    // 0x204c6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x204C68u, 0x204C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204C70u;
label_204c70:
    // 0x204c70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x204c74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x204C74u;
    {
        const bool branch_taken_0x204c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C74u;
        // 0x204c78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c74) {
            ctx->pc = 0x204C98u;
            goto label_204c98;
        }
    }
    ctx->pc = 0x204C7Cu;
label_204c7c:
    // 0x204c7c: 0xc09e056  jal         func_278158
    ctx->pc = 0x204C7Cu;
    SET_GPR_U32(ctx, 31, 0x204C84u);
    ctx->pc = 0x204C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204C7Cu;
    // 0x204c80: 0x26051bd8  addiu       $a1, $s0, 0x1BD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x204C7Cu, 0x204C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204C84u;
label_204c84:
    // 0x204c84: 0xc6001bd8  lwc1        $f0, 0x1BD8($s0)
    ctx->pc = 0x204c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204c88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x204c88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x204c8c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x204c8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x204c90: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x204c90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x204c94: 0xe6011bd8  swc1        $f1, 0x1BD8($s0)
    ctx->pc = 0x204c94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7128), bits); }
label_204c98:
    // 0x204c98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x204c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_204c9c:
    // 0x204c9c: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x204C9Cu;
    SET_GPR_U32(ctx, 31, 0x204CA4u);
    ctx->pc = 0x204CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204C9Cu;
    // 0x204ca0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x204C9Cu, 0x204CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204CA4u;
label_204ca4:
    // 0x204ca4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x204CA4u;
    {
        const bool branch_taken_0x204ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204CA4u;
        // 0x204ca8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ca4) {
            ctx->pc = 0x204C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204c50;
        }
    }
    ctx->pc = 0x204CACu;
    // 0x204cac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x204cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_204cb0:
    // 0x204cb0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x204CB0u;
    SET_GPR_U32(ctx, 31, 0x204CB8u);
    ctx->pc = 0x204CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204CB0u;
    // 0x204cb4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x204CB0u, 0x204CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204CB8u;
label_204cb8:
    // 0x204cb8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x204cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204cbc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x204CBCu;
    SET_GPR_U32(ctx, 31, 0x204CC4u);
    ctx->pc = 0x204CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204CBCu;
    // 0x204cc0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x204CBCu, 0x204CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204CC4u;
label_204cc4:
    // 0x204cc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x204CC4u;
    {
        const bool branch_taken_0x204cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204CC4u;
        // 0x204cc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204cc4) {
            ctx->pc = 0x204CE8u;
            goto label_204ce8;
        }
    }
    ctx->pc = 0x204CCCu;
label_204ccc:
    // 0x204ccc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x204cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204cd0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x204CD0u;
    SET_GPR_U32(ctx, 31, 0x204CD8u);
    ctx->pc = 0x204CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204CD0u;
    // 0x204cd4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x204CD0u, 0x204CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204CD8u;
label_204cd8:
    // 0x204cd8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x204cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204cdc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x204CDCu;
    SET_GPR_U32(ctx, 31, 0x204CE4u);
    ctx->pc = 0x204CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204CDCu;
    // 0x204ce0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x204CDCu, 0x204CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204CE4u;
label_204ce4:
    // 0x204ce4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x204ce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204ce8:
    // 0x204ce8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x204ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204cec: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x204cecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x204cf0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x204cf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204cf4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x204cf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204cf8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x204cf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x204cfc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x204cfcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x204d00: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x204d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x204d04: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x204d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x204d08: 0x3e00008  jr          $ra
    ctx->pc = 0x204D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D08u;
        // 0x204d0c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204D10u;
}
