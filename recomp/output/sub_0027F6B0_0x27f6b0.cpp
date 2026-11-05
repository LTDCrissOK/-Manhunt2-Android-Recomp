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

// Function: sub_0027F6B0
// Address: 0x27f6b0 - 0x27f7e0
void sub_0027F6B0_0x27f6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F6B0_0x27f6b0");
#endif

    switch (ctx->pc) {
        case 0x27f6dcu: goto label_27f6dc;
        case 0x27f6e8u: goto label_27f6e8;
        case 0x27f6f4u: goto label_27f6f4;
        case 0x27f700u: goto label_27f700;
        case 0x27f70cu: goto label_27f70c;
        case 0x27f718u: goto label_27f718;
        case 0x27f724u: goto label_27f724;
        case 0x27f730u: goto label_27f730;
        case 0x27f73cu: goto label_27f73c;
        case 0x27f748u: goto label_27f748;
        case 0x27f760u: goto label_27f760;
        case 0x27f7a0u: goto label_27f7a0;
        case 0x27f7b8u: goto label_27f7b8;
        case 0x27f7c0u: goto label_27f7c0;
        default: break;
    }

    ctx->pc = 0x27f6b0u;

    // 0x27f6b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27f6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27f6b4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x27f6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x27f6b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27f6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27f6bc: 0x8c62a35c  lw          $v0, -0x5CA4($v1)
    ctx->pc = 0x27f6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA35Cu));
    // 0x27f6c0: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x27f6c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f6c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27f6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27f6c8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x27f6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x27f6cc: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x27F6CCu;
    {
        const bool branch_taken_0x27f6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F6CCu;
        // 0x27f6d0: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f6cc) {
            ctx->pc = 0x27F7C4u;
            goto label_27f7c4;
        }
    }
    ctx->pc = 0x27F6D4u;
    // 0x27f6d4: 0xc0db198  jal         func_36C660
    ctx->pc = 0x27F6D4u;
    SET_GPR_U32(ctx, 31, 0x27F6DCu);
    ctx->pc = 0x27F6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F6D4u;
    // 0x27f6d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C660u, 0x27F6D4u, 0x27F6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F6DCu;
label_27f6dc:
    // 0x27f6dc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27f6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27f6e0: 0xc0db170  jal         func_36C5C0
    ctx->pc = 0x27F6E0u;
    SET_GPR_U32(ctx, 31, 0x27F6E8u);
    ctx->pc = 0x27F6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F6E0u;
    // 0x27f6e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x27F6E0u, 0x27F6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F6E8u;
label_27f6e8:
    // 0x27f6e8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x27f6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x27f6ec: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x27F6ECu;
    SET_GPR_U32(ctx, 31, 0x27F6F4u);
    ctx->pc = 0x27F6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F6ECu;
    // 0x27f6f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x27F6ECu, 0x27F6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F6F4u;
label_27f6f4:
    // 0x27f6f4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x27f6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x27f6f8: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x27F6F8u;
    SET_GPR_U32(ctx, 31, 0x27F700u);
    ctx->pc = 0x27F6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F6F8u;
    // 0x27f6fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x27F6F8u, 0x27F700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F700u;
label_27f700:
    // 0x27f700: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x27f700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x27f704: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x27F704u;
    SET_GPR_U32(ctx, 31, 0x27F70Cu);
    ctx->pc = 0x27F708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F704u;
    // 0x27f708: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x27F704u, 0x27F70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F70Cu;
label_27f70c:
    // 0x27f70c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x27f70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27f710: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x27F710u;
    SET_GPR_U32(ctx, 31, 0x27F718u);
    ctx->pc = 0x27F714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F710u;
    // 0x27f714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x27F710u, 0x27F718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F718u;
label_27f718:
    // 0x27f718: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x27f718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27f71c: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x27F71Cu;
    SET_GPR_U32(ctx, 31, 0x27F724u);
    ctx->pc = 0x27F720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F71Cu;
    // 0x27f720: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x27F71Cu, 0x27F724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F724u;
label_27f724:
    // 0x27f724: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27f724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27f728: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x27F728u;
    SET_GPR_U32(ctx, 31, 0x27F730u);
    ctx->pc = 0x27F72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F728u;
    // 0x27f72c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x27F728u, 0x27F730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F730u;
label_27f730:
    // 0x27f730: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x27f730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x27f734: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x27F734u;
    SET_GPR_U32(ctx, 31, 0x27F73Cu);
    ctx->pc = 0x27F738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F734u;
    // 0x27f738: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x27F734u, 0x27F73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F73Cu;
label_27f73c:
    // 0x27f73c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x27f73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27f740: 0xc0db170  jal         func_36C5C0
    ctx->pc = 0x27F740u;
    SET_GPR_U32(ctx, 31, 0x27F748u);
    ctx->pc = 0x27F744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F740u;
    // 0x27f744: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x27F740u, 0x27F748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F748u;
label_27f748:
    // 0x27f748: 0x8e43a35c  lw          $v1, -0x5CA4($s2)
    ctx->pc = 0x27f748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943580)));
    // 0x27f74c: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x27F74Cu;
    {
        const bool branch_taken_0x27f74c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27F750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F74Cu;
        // 0x27f750: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f74c) {
            ctx->pc = 0x27F7B0u;
            goto label_27f7b0;
        }
    }
    ctx->pc = 0x27F754u;
    // 0x27f754: 0x2450f6e0  addiu       $s0, $v0, -0x920
    ctx->pc = 0x27f754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964960));
    // 0x27f758: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x27f758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27f75c: 0x0  nop
    ctx->pc = 0x27f75cu;
    // NOP
label_27f760:
    // 0x27f760: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f764: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x27f764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27f768: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27f768u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x27f76c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x27f76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f770: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x27f770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f774: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x27f774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27f778: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x27f778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x27f77c: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x27f77cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x27f780: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x27f780u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x27f784: 0xc60d0020  lwc1        $f13, 0x20($s0)
    ctx->pc = 0x27f784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27f788: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x27f788u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27f78c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x27f78cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x27f790: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x27f790u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x27f794: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x27f794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x27f798: 0xc09fdf8  jal         func_27F7E0
    ctx->pc = 0x27F798u;
    SET_GPR_U32(ctx, 31, 0x27F7A0u);
    ctx->pc = 0x27F79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F798u;
    // 0x27f79c: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F7E0u, 0x27F798u, 0x27F7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F7A0u;
label_27f7a0:
    // 0x27f7a0: 0x8e42a35c  lw          $v0, -0x5CA4($s2)
    ctx->pc = 0x27f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943580)));
    // 0x27f7a4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x27f7a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27f7a8: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x27F7A8u;
    {
        const bool branch_taken_0x27f7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f7a8) {
            ctx->pc = 0x27F7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F7A8u;
            // 0x27f7ac: 0xc6020000  lwc1        $f2, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f760;
        }
    }
    ctx->pc = 0x27F7B0u;
label_27f7b0:
    // 0x27f7b0: 0xc0db1ae  jal         func_36C6B8
    ctx->pc = 0x27F7B0u;
    SET_GPR_U32(ctx, 31, 0x27F7B8u);
    ctx->pc = 0x36C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C6B8u, 0x27F7B0u, 0x27F7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F7B8u;
label_27f7b8:
    // 0x27f7b8: 0xc0db20a  jal         func_36C828
    ctx->pc = 0x27F7B8u;
    SET_GPR_U32(ctx, 31, 0x27F7C0u);
    ctx->pc = 0x36C828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C828u, 0x27F7B8u, 0x27F7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F7C0u;
label_27f7c0:
    // 0x27f7c0: 0xae40a35c  sw          $zero, -0x5CA4($s2)
    ctx->pc = 0x27f7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294943580), GPR_U32(ctx, 0));
label_27f7c4:
    // 0x27f7c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27f7c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f7c8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x27f7c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27f7cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27f7ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f7d0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x27f7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27f7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x27F7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F7D4u;
        // 0x27f7d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F7DCu;
    // 0x27f7dc: 0x0  nop
    ctx->pc = 0x27f7dcu;
    // NOP
    ctx->pc = 0x27f7e0u;
}
