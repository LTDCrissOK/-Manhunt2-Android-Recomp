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

// Function: sub_0014AE68
// Address: 0x14ae68 - 0x14afc0
void sub_0014AE68_0x14ae68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AE68_0x14ae68");
#endif

    switch (ctx->pc) {
        case 0x14ae88u: goto label_14ae88;
        case 0x14aea0u: goto label_14aea0;
        case 0x14aeacu: goto label_14aeac;
        case 0x14aebcu: goto label_14aebc;
        case 0x14aec8u: goto label_14aec8;
        case 0x14aeecu: goto label_14aeec;
        case 0x14aef4u: goto label_14aef4;
        case 0x14af04u: goto label_14af04;
        case 0x14af40u: goto label_14af40;
        case 0x14af4cu: goto label_14af4c;
        case 0x14af5cu: goto label_14af5c;
        case 0x14af78u: goto label_14af78;
        case 0x14af8cu: goto label_14af8c;
        case 0x14afa8u: goto label_14afa8;
        default: break;
    }

    ctx->pc = 0x14ae68u;

    // 0x14ae68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14ae68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14ae6c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x14ae6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x14ae70: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14ae70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14ae74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14ae74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae78: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14ae78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14ae7c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x14ae7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x14ae80: 0xc052ae4  jal         func_14AB90
    ctx->pc = 0x14AE80u;
    SET_GPR_U32(ctx, 31, 0x14AE88u);
    ctx->pc = 0x14AE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE80u;
    // 0x14ae84: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AB90u, 0x14AE80u, 0x14AE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE88u;
label_14ae88:
    // 0x14ae88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14ae88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14ae8c: 0x10430046  beq         $v0, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x14AE8Cu;
    {
        const bool branch_taken_0x14ae8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x14AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AE8Cu;
        // 0x14ae90: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ae8c) {
            ctx->pc = 0x14AFA8u;
            goto label_14afa8;
        }
    }
    ctx->pc = 0x14AE94u;
    // 0x14ae94: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x14ae94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14ae98: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x14AE98u;
    SET_GPR_U32(ctx, 31, 0x14AEA0u);
    ctx->pc = 0x14AE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE98u;
    // 0x14ae9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x14AE98u, 0x14AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AEA0u;
label_14aea0:
    // 0x14aea0: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x14aea0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14aea4: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x14AEA4u;
    SET_GPR_U32(ctx, 31, 0x14AEACu);
    ctx->pc = 0x14AEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AEA4u;
    // 0x14aea8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x14AEA4u, 0x14AEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AEACu;
label_14aeac:
    // 0x14aeac: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x14aeacu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14aeb0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14aeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14aeb4: 0xc052ade  jal         func_14AB78
    ctx->pc = 0x14AEB4u;
    SET_GPR_U32(ctx, 31, 0x14AEBCu);
    ctx->pc = 0x14AEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AEB4u;
    // 0x14aeb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AB78u, 0x14AEB4u, 0x14AEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AEBCu;
label_14aebc:
    // 0x14aebc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14aebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aec0: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x14AEC0u;
    SET_GPR_U32(ctx, 31, 0x14AEC8u);
    ctx->pc = 0x14AEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AEC0u;
    // 0x14aec4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x14AEC0u, 0x14AEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AEC8u;
label_14aec8:
    // 0x14aec8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14aec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aecc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x14aeccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14aed0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14aed0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aed4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14aed4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aed8: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x14aed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x14aedc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x14aedcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14aee0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14aee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aee4: 0xc04daca  jal         func_136B28
    ctx->pc = 0x14AEE4u;
    SET_GPR_U32(ctx, 31, 0x14AEECu);
    ctx->pc = 0x14AEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AEE4u;
    // 0x14aee8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x14AEE4u, 0x14AEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AEECu;
label_14aeec:
    // 0x14aeec: 0xc052dfc  jal         func_14B7F0
    ctx->pc = 0x14AEECu;
    SET_GPR_U32(ctx, 31, 0x14AEF4u);
    ctx->pc = 0x14AEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AEECu;
    // 0x14aef0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B7F0u, 0x14AEECu, 0x14AEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AEF4u;
label_14aef4:
    // 0x14aef4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14aef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aef8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14aef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aefc: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x14AEFCu;
    SET_GPR_U32(ctx, 31, 0x14AF04u);
    ctx->pc = 0x14AF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AEFCu;
    // 0x14af00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x14AEFCu, 0x14AF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AF04u;
label_14af04:
    // 0x14af04: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x14af04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14af08: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x14af08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x14af0c: 0xc442c6a4  lwc1        $f2, -0x395C($v0)
    ctx->pc = 0x14af0cu;
    { uint32_t bits = FAST_READ32(0x45C6A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14af10: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x14af10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af14: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x14af14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14af18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14af18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af1c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x14af1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14af20: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x14af20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14af24: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x14af24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x14af28: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x14af28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14af2c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x14af2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x14af30: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x14af30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14af34: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x14af34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14af38: 0xc046058  jal         func_118160
    ctx->pc = 0x14AF38u;
    SET_GPR_U32(ctx, 31, 0x14AF40u);
    ctx->pc = 0x14AF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AF38u;
    // 0x14af3c: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x14AF38u, 0x14AF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AF40u;
label_14af40:
    // 0x14af40: 0x26450570  addiu       $a1, $s2, 0x570
    ctx->pc = 0x14af40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1392));
    // 0x14af44: 0xc04609e  jal         func_118278
    ctx->pc = 0x14AF44u;
    SET_GPR_U32(ctx, 31, 0x14AF4Cu);
    ctx->pc = 0x14AF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AF44u;
    // 0x14af48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118278u, 0x14AF44u, 0x14AF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AF4Cu;
label_14af4c:
    // 0x14af4c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x14af4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x14af50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x14af50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14af54: 0xc046290  jal         func_118A40
    ctx->pc = 0x14AF54u;
    SET_GPR_U32(ctx, 31, 0x14AF5Cu);
    ctx->pc = 0x14AF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AF54u;
    // 0x14af58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x14AF54u, 0x14AF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AF5Cu;
label_14af5c:
    // 0x14af5c: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x14af5cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14af60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14af60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af64: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x14af64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14af68: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x14af68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14af6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14af70: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x14AF70u;
    SET_GPR_U32(ctx, 31, 0x14AF78u);
    ctx->pc = 0x14AF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AF70u;
    // 0x14af74: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x14AF70u, 0x14AF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AF78u;
label_14af78:
    // 0x14af78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14af78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14af7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af80: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14af80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af84: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x14AF84u;
    SET_GPR_U32(ctx, 31, 0x14AF8Cu);
    ctx->pc = 0x14AF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AF84u;
    // 0x14af88: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x14AF84u, 0x14AF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AF8Cu;
label_14af8c:
    // 0x14af8c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x14af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x14af90: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x14af90u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14af94: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x14af94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x14af98: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x14af98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14af9c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14afa0: 0xc043c56  jal         func_10F158
    ctx->pc = 0x14AFA0u;
    SET_GPR_U32(ctx, 31, 0x14AFA8u);
    ctx->pc = 0x14AFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AFA0u;
    // 0x14afa4: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x14AFA0u, 0x14AFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AFA8u;
label_14afa8:
    // 0x14afa8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14afa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14afac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14afacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14afb0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x14afb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14afb4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x14afb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14afb8: 0x3e00008  jr          $ra
    ctx->pc = 0x14AFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AFB8u;
        // 0x14afbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AFC0u;
}
