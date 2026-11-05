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

// Function: sub_002AA728
// Address: 0x2aa728 - 0x2ab500
void sub_002AA728_0x2aa728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA728_0x2aa728");
#endif

    switch (ctx->pc) {
        case 0x2aa788u: goto label_2aa788;
        case 0x2aa794u: goto label_2aa794;
        case 0x2aa7ccu: goto label_2aa7cc;
        case 0x2aa7d8u: goto label_2aa7d8;
        case 0x2aa7e4u: goto label_2aa7e4;
        case 0x2aa818u: goto label_2aa818;
        case 0x2aa848u: goto label_2aa848;
        case 0x2aaa34u: goto label_2aaa34;
        case 0x2aaaf0u: goto label_2aaaf0;
        case 0x2aacf4u: goto label_2aacf4;
        case 0x2aad88u: goto label_2aad88;
        case 0x2aae04u: goto label_2aae04;
        case 0x2aae10u: goto label_2aae10;
        case 0x2aae40u: goto label_2aae40;
        case 0x2ab044u: goto label_2ab044;
        case 0x2ab0f8u: goto label_2ab0f8;
        case 0x2ab378u: goto label_2ab378;
        case 0x2ab3f0u: goto label_2ab3f0;
        case 0x2ab3fcu: goto label_2ab3fc;
        case 0x2ab470u: goto label_2ab470;
        case 0x2ab478u: goto label_2ab478;
        case 0x2ab4b4u: goto label_2ab4b4;
        default: break;
    }

    ctx->pc = 0x2aa728u;

    // 0x2aa728: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2aa728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2aa72c: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2aa72cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x2aa730: 0x3c013fe3  lui         $at, 0x3FE3
    ctx->pc = 0x2aa730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16355 << 16));
    // 0x2aa734: 0x34218e39  ori         $at, $at, 0x8E39
    ctx->pc = 0x2aa734u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36409);
    // 0x2aa738: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aa738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa73c: 0xc440ac6c  lwc1        $f0, -0x5394($v0)
    ctx->pc = 0x2aa73cu;
    { uint32_t bits = FAST_READ32(0x6BAC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa740: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x2aa740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x2aa744: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x2aa744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x2aa748: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aa748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa74c: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x2aa74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x2aa750: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2aa750u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa754: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x2aa754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x2aa758: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2aa758u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa75c: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x2aa75cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x2aa760: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2aa760u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa764: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x2aa764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x2aa768: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x2aa768u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aa76c: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x2aa76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x2aa770: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x2aa770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x2aa774: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x2aa774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x2aa778: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x2aa778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x2aa77c: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x2aa77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x2aa780: 0xc0db198  jal         func_36C660
    ctx->pc = 0x2AA780u;
    SET_GPR_U32(ctx, 31, 0x2AA788u);
    ctx->pc = 0x2AA784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA780u;
    // 0x2aa784: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C660u, 0x2AA780u, 0x2AA788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA788u;
label_2aa788:
    // 0x2aa788: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2aa788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2aa78c: 0xc0db170  jal         func_36C5C0
    ctx->pc = 0x2AA78Cu;
    SET_GPR_U32(ctx, 31, 0x2AA794u);
    ctx->pc = 0x2AA790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA78Cu;
    // 0x2aa790: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x2AA78Cu, 0x2AA794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA794u;
label_2aa794:
    // 0x2aa794: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2aa794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2aa798: 0x93b40000  lbu         $s4, 0x0($sp)
    ctx->pc = 0x2aa798u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa79c: 0x93b50001  lbu         $s5, 0x1($sp)
    ctx->pc = 0x2aa79cu;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x2aa7a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aa7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa7a4: 0x93b60002  lbu         $s6, 0x2($sp)
    ctx->pc = 0x2aa7a4u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2aa7a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2aa7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa7ac: 0x93b70003  lbu         $s7, 0x3($sp)
    ctx->pc = 0x2aa7acu;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x2aa7b0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2aa7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2aa7b4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2aa7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2aa7b8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2aa7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2aa7bc: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x2aa7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x2aa7c0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2aa7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2aa7c4: 0xc0aa55e  jal         func_2A9578
    ctx->pc = 0x2AA7C4u;
    SET_GPR_U32(ctx, 31, 0x2AA7CCu);
    ctx->pc = 0x2AA7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA7C4u;
    // 0x2aa7c8: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9578u, 0x2AA7C4u, 0x2AA7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA7CCu;
label_2aa7cc:
    // 0x2aa7cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2aa7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa7d0: 0xc0aa570  jal         func_2A95C0
    ctx->pc = 0x2AA7D0u;
    SET_GPR_U32(ctx, 31, 0x2AA7D8u);
    ctx->pc = 0x2AA7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA7D0u;
    // 0x2aa7d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A95C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A95C0u, 0x2AA7D0u, 0x2AA7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA7D8u;
label_2aa7d8:
    // 0x2aa7d8: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2aa7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2aa7dc: 0xc0aadb6  jal         func_2AB6D8
    ctx->pc = 0x2AA7DCu;
    SET_GPR_U32(ctx, 31, 0x2AA7E4u);
    ctx->pc = 0x2AA7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA7DCu;
    // 0x2aa7e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB6D8u, 0x2AA7DCu, 0x2AA7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA7E4u;
label_2aa7e4:
    // 0x2aa7e4: 0x26280070  addiu       $t0, $s1, 0x70
    ctx->pc = 0x2aa7e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x2aa7e8: 0x10400098  beqz        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x2AA7E8u;
    {
        const bool branch_taken_0x2aa7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA7E8u;
        // 0x2aa7ec: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa7e8) {
            ctx->pc = 0x2AAA4Cu;
            goto label_2aaa4c;
        }
    }
    ctx->pc = 0x2AA7F0u;
    // 0x2aa7f0: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x2aa7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa7f4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2aa7f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa7f8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2aa7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2aa7fc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2aa7fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa800: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x2aa800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2aa804: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x2aa804u;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x2aa808: 0x26290078  addiu       $t1, $s1, 0x78
    ctx->pc = 0x2aa808u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x2aa80c: 0x1086000c  beq         $a0, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x2AA80Cu;
    {
        const bool branch_taken_0x2aa80c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x2AA810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA80Cu;
        // 0x2aa810: 0x262a0080  addiu       $t2, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa80c) {
            ctx->pc = 0x2AA840u;
            goto label_2aa840;
        }
    }
    ctx->pc = 0x2AA814u;
    // 0x2aa814: 0x24830014  addiu       $v1, $a0, 0x14
    ctx->pc = 0x2aa814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_2aa818:
    // 0x2aa818: 0x10660006  beq         $v1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AA818u;
    {
        const bool branch_taken_0x2aa818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x2AA81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA818u;
        // 0x2aa81c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa818) {
            ctx->pc = 0x2AA834u;
            goto label_2aa834;
        }
    }
    ctx->pc = 0x2AA820u;
    // 0x2aa820: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2aa820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa824: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2aa824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aa828: 0x0  nop
    ctx->pc = 0x2aa828u;
    // NOP
    // 0x2aa82c: 0x45030017  bc1tl       . + 4 + (0x17 << 2)
    ctx->pc = 0x2AA82Cu;
    {
        const bool branch_taken_0x2aa82c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2aa82c) {
            ctx->pc = 0x2AA830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA82Cu;
            // 0x2aa830: 0x8c430008  lw          $v1, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA88Cu;
            goto label_2aa88c;
        }
    }
    ctx->pc = 0x2AA834u;
label_2aa834:
    // 0x2aa834: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2aa834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa838: 0x1486fff7  bne         $a0, $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2AA838u;
    {
        const bool branch_taken_0x2aa838 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x2AA83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA838u;
        // 0x2aa83c: 0x24830014  addiu       $v1, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa838) {
            ctx->pc = 0x2AA818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aa818;
        }
    }
    ctx->pc = 0x2AA840u;
label_2aa840:
    // 0x2aa840: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2aa840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2aa844: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2aa844u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2aa848:
    // 0x2aa848: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2aa848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2aa84c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2aa84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2aa850: 0x14820022  bne         $a0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2AA850u;
    {
        const bool branch_taken_0x2aa850 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AA854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA850u;
        // 0x2aa854: 0x8ce2000c  lw          $v0, 0xC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa850) {
            ctx->pc = 0x2AA8DCu;
            goto label_2aa8dc;
        }
    }
    ctx->pc = 0x2AA858u;
    // 0x2aa858: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2aa858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2aa85c: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2aa85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2aa860: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2aa860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2aa864: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2aa864u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2aa868: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2aa868u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aa86c: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x2aa86cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2aa870: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x2aa870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2aa874: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2aa874u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2aa878: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AA878u;
    {
        const bool branch_taken_0x2aa878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA878u;
        // 0x2aa87c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa878) {
            ctx->pc = 0x2AA8A4u;
            goto label_2aa8a4;
        }
    }
    ctx->pc = 0x2AA880u;
    // 0x2aa880: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x2aa880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2aa884: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2AA884u;
    {
        const bool branch_taken_0x2aa884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA884u;
        // 0x2aa888: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa884) {
            ctx->pc = 0x2AA8ACu;
            goto label_2aa8ac;
        }
    }
    ctx->pc = 0x2AA88Cu;
label_2aa88c:
    // 0x2aa88c: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x2aa88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x2aa890: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2aa890u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2aa894: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2aa894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2aa898: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2aa898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2aa89c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x2AA89Cu;
    {
        const bool branch_taken_0x2aa89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA89Cu;
        // 0x2aa8a0: 0x32083  sra         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa89c) {
            ctx->pc = 0x2AA848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aa848;
        }
    }
    ctx->pc = 0x2AA8A4u;
label_2aa8a4:
    // 0x2aa8a4: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x2aa8a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2aa8a8: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2aa8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2aa8ac:
    // 0x2aa8ac: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2aa8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa8b0: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x2aa8b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa8b4: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x2aa8b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x2aa8b8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2aa8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa8bc: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x2aa8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x2aa8c0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2aa8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa8c4: 0xe5010010  swc1        $f1, 0x10($t0)
    ctx->pc = 0x2aa8c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x2aa8c8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2aa8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa8cc: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x2aa8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x2aa8d0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2aa8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa8d4: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2AA8D4u;
    {
        const bool branch_taken_0x2aa8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA8D4u;
        // 0x2aa8d8: 0xe5210010  swc1        $f1, 0x10($t1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa8d4) {
            ctx->pc = 0x2AAAA8u;
            goto label_2aaaa8;
        }
    }
    ctx->pc = 0x2AA8DCu;
label_2aa8dc:
    // 0x2aa8dc: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2aa8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2aa8e0: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2aa8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2aa8e4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2aa8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2aa8e8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2aa8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2aa8ec: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2aa8ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aa8f0: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2aa8f0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2aa8f4: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x2aa8f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2aa8f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA8F8u;
    {
        const bool branch_taken_0x2aa8f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA8F8u;
        // 0x2aa8fc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa8f8) {
            ctx->pc = 0x2AA908u;
            goto label_2aa908;
        }
    }
    ctx->pc = 0x2AA900u;
    // 0x2aa900: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AA900u;
    {
        const bool branch_taken_0x2aa900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA900u;
        // 0x2aa904: 0x821818  mult        $v1, $a0, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa900) {
            ctx->pc = 0x2AA90Cu;
            goto label_2aa90c;
        }
    }
    ctx->pc = 0x2AA908u;
label_2aa908:
    // 0x2aa908: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x2aa908u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2aa90c:
    // 0x2aa90c: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x2aa90cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2aa910: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2aa910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2aa914: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2aa914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2aa918: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2aa918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2aa91c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2aa91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2aa920: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x2aa920u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2aa924: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2aa924u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2aa928: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2aa928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aa92c: 0x22083  sra         $a0, $v0, 2
    ctx->pc = 0x2aa92cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2aa930: 0xe4182b  sltu        $v1, $a3, $a0
    ctx->pc = 0x2aa930u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2aa934: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA934u;
    {
        const bool branch_taken_0x2aa934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA934u;
        // 0x2aa938: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa934) {
            ctx->pc = 0x2AA948u;
            goto label_2aa948;
        }
    }
    ctx->pc = 0x2AA93Cu;
    // 0x2aa93c: 0xe22018  mult        $a0, $a3, $v0
    ctx->pc = 0x2aa93cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2aa940: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA940u;
    {
        const bool branch_taken_0x2aa940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA940u;
        // 0x2aa944: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa940) {
            ctx->pc = 0x2AA950u;
            goto label_2aa950;
        }
    }
    ctx->pc = 0x2AA948u;
label_2aa948:
    // 0x2aa948: 0x823818  mult        $a3, $a0, $v0
    ctx->pc = 0x2aa948u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2aa94c: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x2aa94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_2aa950:
    // 0x2aa950: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2aa950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa954: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x2aa954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa958: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2aa958u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa95c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2aa95cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2aa960: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aa960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aa964: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2aa964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2aa968: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x2aa968u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aa96c: 0x0  nop
    ctx->pc = 0x2aa96cu;
    // NOP
    // 0x2aa970: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA970u;
    {
        const bool branch_taken_0x2aa970 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AA974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA970u;
        // 0x2aa974: 0x460018c1  sub.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa970) {
            ctx->pc = 0x2AA984u;
            goto label_2aa984;
        }
    }
    ctx->pc = 0x2AA978u;
    // 0x2aa978: 0x0  nop
    ctx->pc = 0x2aa978u;
    // NOP
    // 0x2aa97c: 0x0  nop
    ctx->pc = 0x2aa97cu;
    // NOP
    // 0x2aa980: 0x46021943  div.s       $f5, $f3, $f2
    ctx->pc = 0x2aa980u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
label_2aa984:
    // 0x2aa984: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x2aa984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aa988: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x2aa988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2aa98c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2aa98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa990: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2aa990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa994: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2aa994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa998: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2aa998u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2aa99c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2aa99cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2aa9a0: 0x460128c2  mul.s       $f3, $f5, $f1
    ctx->pc = 0x2aa9a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2aa9a4: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x2aa9a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2aa9a8: 0x46002882  mul.s       $f2, $f5, $f0
    ctx->pc = 0x2aa9a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2aa9ac: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2aa9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2aa9b0: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x2aa9b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2aa9b4: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x2aa9b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2aa9b8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2aa9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa9bc: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2aa9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa9c0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2aa9c0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2aa9c4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2aa9c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2aa9c8: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x2aa9c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2aa9cc: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x2aa9ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2aa9d0: 0xe5030008  swc1        $f3, 0x8($t0)
    ctx->pc = 0x2aa9d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x2aa9d4: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2aa9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa9d8: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x2aa9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x2aa9dc: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2aa9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa9e0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2aa9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa9e4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2aa9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa9e8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2aa9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aa9ec: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2aa9ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2aa9f0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2aa9f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2aa9f4: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x2aa9f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2aa9f8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2aa9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2aa9fc: 0x46012882  mul.s       $f2, $f5, $f1
    ctx->pc = 0x2aa9fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2aaa00: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2aaa00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2aaa04: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x2aaa04u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2aaa08: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x2aaa08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2aaa0c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2aaa0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aaa10: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2aaa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aaa14: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2aaa14u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2aaa18: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2aaa18u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2aaa1c: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x2aaa1cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2aaa20: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x2aaa20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2aaa24: 0xe5040010  swc1        $f4, 0x10($t0)
    ctx->pc = 0x2aaa24u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x2aaa28: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2aaa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aaa2c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2AAA2Cu;
    {
        const bool branch_taken_0x2aaa2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAA2Cu;
        // 0x2aaa30: 0xe5400004  swc1        $f0, 0x4($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa2c) {
            ctx->pc = 0x2AAAA4u;
            goto label_2aaaa4;
        }
    }
    ctx->pc = 0x2AAA34u;
label_2aaa34:
    // 0x2aaa34: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x2aaa34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x2aaa38: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2aaa38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2aaa3c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2aaa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2aaa40: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2aaa40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2aaa44: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2AAA44u;
    {
        const bool branch_taken_0x2aaa44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAA44u;
        // 0x2aaa48: 0x32083  sra         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa44) {
            ctx->pc = 0x2AAB20u;
            goto label_2aab20;
        }
    }
    ctx->pc = 0x2AAA4Cu;
label_2aaa4c:
    // 0x2aaa4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aaa4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aaa50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aaa50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaa54: 0x27a30068  addiu       $v1, $sp, 0x68
    ctx->pc = 0x2aaa54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2aaa58: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2aaa58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x2aaa5c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2aaa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2aaa60: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2aaa60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2aaa64: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2aaa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x2aaa68: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2aaa68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x2aaa6c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2aaa6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaa70: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2aaa70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2aaa74: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2aaa74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaa78: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2aaa78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2aaa7c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2aaa7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aaa80: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2aaa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aaa84: 0xe6200078  swc1        $f0, 0x78($s1)
    ctx->pc = 0x2aaa84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x2aaa88: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2aaa88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2aaa8c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2aaa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aaa90: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2aaa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aaa94: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x2aaa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aaa98: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x2aaa98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x2aaa9c: 0xe6220084  swc1        $f2, 0x84($s1)
    ctx->pc = 0x2aaa9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x2aaaa0: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x2aaaa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_2aaaa4:
    // 0x2aaaa4: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x2aaaa4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2aaaa8:
    // 0x2aaaa8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2aaaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aaaac: 0x8e260070  lw          $a2, 0x70($s1)
    ctx->pc = 0x2aaaacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2aaab0: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2aaab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2aaab4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2aaab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aaab8: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2aaab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2aaabc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2aaabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2aaac0: 0x10c00092  beqz        $a2, . + 4 + (0x92 << 2)
    ctx->pc = 0x2AAAC0u;
    {
        const bool branch_taken_0x2aaac0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAAC0u;
        // 0x2aaac4: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaac0) {
            ctx->pc = 0x2AAD0Cu;
            goto label_2aad0c;
        }
    }
    ctx->pc = 0x2AAAC8u;
    // 0x2aaac8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2aaac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aaacc: 0x26080008  addiu       $t0, $s0, 0x8
    ctx->pc = 0x2aaaccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2aaad0: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2aaad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2aaad4: 0x26090010  addiu       $t1, $s0, 0x10
    ctx->pc = 0x2aaad4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2aaad8: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x2aaad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2aaadc: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x2aaadcu;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x2aaae0: 0x1085000d  beq         $a0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2AAAE0u;
    {
        const bool branch_taken_0x2aaae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x2AAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAAE0u;
        // 0x2aaae4: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaae0) {
            ctx->pc = 0x2AAB18u;
            goto label_2aab18;
        }
    }
    ctx->pc = 0x2AAAE8u;
    // 0x2aaae8: 0x24820014  addiu       $v0, $a0, 0x14
    ctx->pc = 0x2aaae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x2aaaec: 0x0  nop
    ctx->pc = 0x2aaaecu;
    // NOP
label_2aaaf0:
    // 0x2aaaf0: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AAAF0u;
    {
        const bool branch_taken_0x2aaaf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2AAAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAAF0u;
        // 0x2aaaf4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaaf0) {
            ctx->pc = 0x2AAB0Cu;
            goto label_2aab0c;
        }
    }
    ctx->pc = 0x2AAAF8u;
    // 0x2aaaf8: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2aaaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aaafc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2aaafcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aab00: 0x0  nop
    ctx->pc = 0x2aab00u;
    // NOP
    // 0x2aab04: 0x4503ffcb  bc1tl       . + 4 + (-0x35 << 2)
    ctx->pc = 0x2AAB04u;
    {
        const bool branch_taken_0x2aab04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2aab04) {
            ctx->pc = 0x2AAB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAB04u;
            // 0x2aab08: 0x8cc30008  lw          $v1, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AAA34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aaa34;
        }
    }
    ctx->pc = 0x2AAB0Cu;
label_2aab0c:
    // 0x2aab0c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2aab0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aab10: 0x1485fff7  bne         $a0, $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2AAB10u;
    {
        const bool branch_taken_0x2aab10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2AAB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAB10u;
        // 0x2aab14: 0x24820014  addiu       $v0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aab10) {
            ctx->pc = 0x2AAAF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aaaf0;
        }
    }
    ctx->pc = 0x2AAB18u;
label_2aab18:
    // 0x2aab18: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2aab18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2aab1c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2aab1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2aab20:
    // 0x2aab20: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2aab20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2aab24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2aab24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2aab28: 0x1482001c  bne         $a0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2AAB28u;
    {
        const bool branch_taken_0x2aab28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AAB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAB28u;
        // 0x2aab2c: 0x8ce2000c  lw          $v0, 0xC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aab28) {
            ctx->pc = 0x2AAB9Cu;
            goto label_2aab9c;
        }
    }
    ctx->pc = 0x2AAB30u;
    // 0x2aab30: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2aab30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2aab34: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2aab34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2aab38: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2aab38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2aab3c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2aab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2aab40: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2aab40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aab44: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x2aab44u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2aab48: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x2aab48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2aab4c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2aab4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2aab50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AAB50u;
    {
        const bool branch_taken_0x2aab50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAB50u;
        // 0x2aab54: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aab50) {
            ctx->pc = 0x2AAB64u;
            goto label_2aab64;
        }
    }
    ctx->pc = 0x2AAB58u;
    // 0x2aab58: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x2aab58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2aab5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AAB5Cu;
    {
        const bool branch_taken_0x2aab5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAB5Cu;
        // 0x2aab60: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aab5c) {
            ctx->pc = 0x2AAB6Cu;
            goto label_2aab6c;
        }
    }
    ctx->pc = 0x2AAB64u;
label_2aab64:
    // 0x2aab64: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x2aab64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2aab68: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2aab68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2aab6c:
    // 0x2aab6c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2aab6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aab70: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x2aab70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aab74: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x2aab74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2aab78: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2aab78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aab7c: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x2aab7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x2aab80: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2aab80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aab84: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x2aab84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2aab88: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2aab88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aab8c: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x2aab8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x2aab90: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2aab90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aab94: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x2AAB94u;
    {
        const bool branch_taken_0x2aab94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAB94u;
        // 0x2aab98: 0xe5010010  swc1        $f1, 0x10($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aab94) {
            ctx->pc = 0x2AAD64u;
            goto label_2aad64;
        }
    }
    ctx->pc = 0x2AAB9Cu;
label_2aab9c:
    // 0x2aab9c: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2aab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2aaba0: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2aaba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2aaba4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2aaba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2aaba8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2aaba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2aabac: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2aabacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aabb0: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2aabb0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2aabb4: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x2aabb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2aabb8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AABB8u;
    {
        const bool branch_taken_0x2aabb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AABB8u;
        // 0x2aabbc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aabb8) {
            ctx->pc = 0x2AABC8u;
            goto label_2aabc8;
        }
    }
    ctx->pc = 0x2AABC0u;
    // 0x2aabc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AABC0u;
    {
        const bool branch_taken_0x2aabc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AABC0u;
        // 0x2aabc4: 0x821818  mult        $v1, $a0, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aabc0) {
            ctx->pc = 0x2AABCCu;
            goto label_2aabcc;
        }
    }
    ctx->pc = 0x2AABC8u;
label_2aabc8:
    // 0x2aabc8: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x2aabc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2aabcc:
    // 0x2aabcc: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x2aabccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2aabd0: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2aabd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2aabd4: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2aabd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2aabd8: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2aabd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2aabdc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2aabdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2aabe0: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x2aabe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2aabe4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2aabe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2aabe8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2aabe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aabec: 0x22083  sra         $a0, $v0, 2
    ctx->pc = 0x2aabecu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2aabf0: 0xe4182b  sltu        $v1, $a3, $a0
    ctx->pc = 0x2aabf0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2aabf4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AABF4u;
    {
        const bool branch_taken_0x2aabf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AABF4u;
        // 0x2aabf8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aabf4) {
            ctx->pc = 0x2AAC08u;
            goto label_2aac08;
        }
    }
    ctx->pc = 0x2AABFCu;
    // 0x2aabfc: 0xe22018  mult        $a0, $a3, $v0
    ctx->pc = 0x2aabfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2aac00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AAC00u;
    {
        const bool branch_taken_0x2aac00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAC00u;
        // 0x2aac04: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aac00) {
            ctx->pc = 0x2AAC10u;
            goto label_2aac10;
        }
    }
    ctx->pc = 0x2AAC08u;
label_2aac08:
    // 0x2aac08: 0x823818  mult        $a3, $a0, $v0
    ctx->pc = 0x2aac08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2aac0c: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x2aac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_2aac10:
    // 0x2aac10: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2aac10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aac14: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x2aac14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aac18: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2aac18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aac1c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2aac1cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2aac20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aac20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aac24: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2aac24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2aac28: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x2aac28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aac2c: 0x0  nop
    ctx->pc = 0x2aac2cu;
    // NOP
    // 0x2aac30: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2AAC30u;
    {
        const bool branch_taken_0x2aac30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AAC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAC30u;
        // 0x2aac34: 0x460018c1  sub.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aac30) {
            ctx->pc = 0x2AAC44u;
            goto label_2aac44;
        }
    }
    ctx->pc = 0x2AAC38u;
    // 0x2aac38: 0x0  nop
    ctx->pc = 0x2aac38u;
    // NOP
    // 0x2aac3c: 0x0  nop
    ctx->pc = 0x2aac3cu;
    // NOP
    // 0x2aac40: 0x46021943  div.s       $f5, $f3, $f2
    ctx->pc = 0x2aac40u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
label_2aac44:
    // 0x2aac44: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x2aac44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aac48: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x2aac48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2aac4c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2aac4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aac50: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2aac50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aac54: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2aac54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aac58: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2aac58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2aac5c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2aac5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2aac60: 0x460128c2  mul.s       $f3, $f5, $f1
    ctx->pc = 0x2aac60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2aac64: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x2aac64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2aac68: 0x46002882  mul.s       $f2, $f5, $f0
    ctx->pc = 0x2aac68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2aac6c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2aac6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2aac70: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x2aac70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2aac74: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x2aac74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2aac78: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2aac78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aac7c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2aac7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aac80: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2aac80u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2aac84: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2aac84u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2aac88: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x2aac88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2aac8c: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x2aac8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2aac90: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x2aac90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2aac94: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2aac94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aac98: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x2aac98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x2aac9c: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2aac9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aaca0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2aaca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aaca4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2aaca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aaca8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2aaca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aacac: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2aacacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2aacb0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2aacb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2aacb4: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x2aacb4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2aacb8: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2aacb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2aacbc: 0x46012882  mul.s       $f2, $f5, $f1
    ctx->pc = 0x2aacbcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2aacc0: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x2aacc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2aacc4: 0xe7a400e0  swc1        $f4, 0xE0($sp)
    ctx->pc = 0x2aacc4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2aacc8: 0xe7a200e4  swc1        $f2, 0xE4($sp)
    ctx->pc = 0x2aacc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2aaccc: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2aacccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aacd0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2aacd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aacd4: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2aacd4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2aacd8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2aacd8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2aacdc: 0xe7a400b0  swc1        $f4, 0xB0($sp)
    ctx->pc = 0x2aacdcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2aace0: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x2aace0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2aace4: 0xe6040010  swc1        $f4, 0x10($s0)
    ctx->pc = 0x2aace4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2aace8: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2aace8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aacec: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2AACECu;
    {
        const bool branch_taken_0x2aacec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AACECu;
        // 0x2aacf0: 0xe5200004  swc1        $f0, 0x4($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aacec) {
            ctx->pc = 0x2AAD60u;
            goto label_2aad60;
        }
    }
    ctx->pc = 0x2AACF4u;
label_2aacf4:
    // 0x2aacf4: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x2aacf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x2aacf8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2aacf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2aacfc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2aacfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2aad00: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2aad00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2aad04: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2AAD04u;
    {
        const bool branch_taken_0x2aad04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAD04u;
        // 0x2aad08: 0x32083  sra         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aad04) {
            ctx->pc = 0x2AAE70u;
            goto label_2aae70;
        }
    }
    ctx->pc = 0x2AAD0Cu;
label_2aad0c:
    // 0x2aad0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aad0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aad10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aad10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aad14: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x2aad14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2aad18: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x2aad18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x2aad1c: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x2aad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2aad20: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2aad20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2aad24: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2aad24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x2aad28: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x2aad28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x2aad2c: 0x26080008  addiu       $t0, $s0, 0x8
    ctx->pc = 0x2aad2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2aad30: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2aad30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2aad34: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2aad34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x2aad38: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2aad38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aad3c: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2aad3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aad40: 0xe6200078  swc1        $f0, 0x78($s1)
    ctx->pc = 0x2aad40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x2aad44: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2aad44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2aad48: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2aad48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aad4c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2aad4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aad50: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2aad50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aad54: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x2aad54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x2aad58: 0xe6220084  swc1        $f2, 0x84($s1)
    ctx->pc = 0x2aad58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x2aad5c: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x2aad5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_2aad60:
    // 0x2aad60: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x2aad60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2aad64:
    // 0x2aad64: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2aad64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aad68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2aad68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aad6c: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2aad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2aad70: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2aad70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2aad74: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2aad74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aad78: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2aad78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2aad7c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2aad7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2aad80: 0xc0aada4  jal         func_2AB690
    ctx->pc = 0x2AAD80u;
    SET_GPR_U32(ctx, 31, 0x2AAD88u);
    ctx->pc = 0x2AAD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAD80u;
    // 0x2aad84: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB690u, 0x2AAD80u, 0x2AAD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAD88u;
label_2aad88:
    // 0x2aad88: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x2aad88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2aad8c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x2aad8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2aad90: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x2aad90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2aad94: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x2aad94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2aad98: 0xb3a30047  sdl         $v1, 0x47($sp)
    ctx->pc = 0x2aad98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aad9c: 0xb7a30040  sdr         $v1, 0x40($sp)
    ctx->pc = 0x2aad9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aada0: 0xb3a4004f  sdl         $a0, 0x4F($sp)
    ctx->pc = 0x2aada0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aada4: 0xb7a40048  sdr         $a0, 0x48($sp)
    ctx->pc = 0x2aada4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aada8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2aada8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aadac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2aadacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aadb0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2aadb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aadb4: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x2aadb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2aadb8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2aadb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aadbc: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2aadbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aadc0: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2aadc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aadc4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2aadc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aadc8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2aadc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aadcc: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x2aadccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aadd0: 0x46012140  add.s       $f5, $f4, $f1
    ctx->pc = 0x2aadd0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2aadd4: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x2aadd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aadd8: 0x46001102  mul.s       $f4, $f2, $f0
    ctx->pc = 0x2aadd8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2aaddc: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x2aaddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2aade0: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2aade0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aade4: 0xc7af0034  lwc1        $f15, 0x34($sp)
    ctx->pc = 0x2aade4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2aade8: 0x460d1b40  add.s       $f13, $f3, $f13
    ctx->pc = 0x2aade8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[3], ctx->f[13]);
    // 0x2aadec: 0x46142302  mul.s       $f12, $f4, $f20
    ctx->pc = 0x2aadecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x2aadf0: 0x46042800  add.s       $f0, $f5, $f4
    ctx->pc = 0x2aadf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x2aadf4: 0x460f0bc2  mul.s       $f15, $f1, $f15
    ctx->pc = 0x2aadf4u;
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[15]);
    // 0x2aadf8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2aadf8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2aadfc: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x2AADFCu;
    SET_GPR_U32(ctx, 31, 0x2AAE04u);
    ctx->pc = 0x2AAE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AADFCu;
    // 0x2aae00: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x2AADFCu, 0x2AAE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAE04u;
label_2aae04:
    // 0x2aae04: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2aae04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2aae08: 0xc0aadbc  jal         func_2AB6F0
    ctx->pc = 0x2AAE08u;
    SET_GPR_U32(ctx, 31, 0x2AAE10u);
    ctx->pc = 0x2AAE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAE08u;
    // 0x2aae0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB6F0u, 0x2AAE08u, 0x2AAE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAE10u;
label_2aae10:
    // 0x2aae10: 0x10400092  beqz        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x2AAE10u;
    {
        const bool branch_taken_0x2aae10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAE10u;
        // 0x2aae14: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae10) {
            ctx->pc = 0x2AB05Cu;
            goto label_2ab05c;
        }
    }
    ctx->pc = 0x2AAE18u;
    // 0x2aae18: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2aae18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aae1c: 0x26080008  addiu       $t0, $s0, 0x8
    ctx->pc = 0x2aae1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2aae20: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2aae20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2aae24: 0x26090010  addiu       $t1, $s0, 0x10
    ctx->pc = 0x2aae24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2aae28: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x2aae28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2aae2c: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x2aae2cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x2aae30: 0x1086000d  beq         $a0, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2AAE30u;
    {
        const bool branch_taken_0x2aae30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x2AAE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAE30u;
        // 0x2aae34: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae30) {
            ctx->pc = 0x2AAE68u;
            goto label_2aae68;
        }
    }
    ctx->pc = 0x2AAE38u;
    // 0x2aae38: 0x24830014  addiu       $v1, $a0, 0x14
    ctx->pc = 0x2aae38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x2aae3c: 0x0  nop
    ctx->pc = 0x2aae3cu;
    // NOP
label_2aae40:
    // 0x2aae40: 0x10660006  beq         $v1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AAE40u;
    {
        const bool branch_taken_0x2aae40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x2AAE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAE40u;
        // 0x2aae44: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae40) {
            ctx->pc = 0x2AAE5Cu;
            goto label_2aae5c;
        }
    }
    ctx->pc = 0x2AAE48u;
    // 0x2aae48: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2aae48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aae4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2aae4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aae50: 0x0  nop
    ctx->pc = 0x2aae50u;
    // NOP
    // 0x2aae54: 0x4503ffa7  bc1tl       . + 4 + (-0x59 << 2)
    ctx->pc = 0x2AAE54u;
    {
        const bool branch_taken_0x2aae54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2aae54) {
            ctx->pc = 0x2AAE58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAE54u;
            // 0x2aae58: 0x8c430008  lw          $v1, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AACF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aacf4;
        }
    }
    ctx->pc = 0x2AAE5Cu;
label_2aae5c:
    // 0x2aae5c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2aae5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aae60: 0x1486fff7  bne         $a0, $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2AAE60u;
    {
        const bool branch_taken_0x2aae60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x2AAE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAE60u;
        // 0x2aae64: 0x24830014  addiu       $v1, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae60) {
            ctx->pc = 0x2AAE40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aae40;
        }
    }
    ctx->pc = 0x2AAE68u;
label_2aae68:
    // 0x2aae68: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2aae68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2aae6c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2aae6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2aae70:
    // 0x2aae70: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2aae70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2aae74: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2aae74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2aae78: 0x1482001c  bne         $a0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2AAE78u;
    {
        const bool branch_taken_0x2aae78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AAE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAE78u;
        // 0x2aae7c: 0x8ce2000c  lw          $v0, 0xC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae78) {
            ctx->pc = 0x2AAEECu;
            goto label_2aaeec;
        }
    }
    ctx->pc = 0x2AAE80u;
    // 0x2aae80: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2aae80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2aae84: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2aae84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2aae88: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2aae88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2aae8c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2aae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2aae90: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2aae90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aae94: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x2aae94u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2aae98: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x2aae98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2aae9c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2aae9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2aaea0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AAEA0u;
    {
        const bool branch_taken_0x2aaea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAEA0u;
        // 0x2aaea4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaea0) {
            ctx->pc = 0x2AAEB4u;
            goto label_2aaeb4;
        }
    }
    ctx->pc = 0x2AAEA8u;
    // 0x2aaea8: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x2aaea8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2aaeac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AAEACu;
    {
        const bool branch_taken_0x2aaeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAEACu;
        // 0x2aaeb0: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaeac) {
            ctx->pc = 0x2AAEBCu;
            goto label_2aaebc;
        }
    }
    ctx->pc = 0x2AAEB4u;
label_2aaeb4:
    // 0x2aaeb4: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x2aaeb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2aaeb8: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2aaeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2aaebc:
    // 0x2aaebc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2aaebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aaec0: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x2aaec0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaec4: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x2aaec4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2aaec8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2aaec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aaecc: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x2aaeccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x2aaed0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2aaed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aaed4: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x2aaed4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2aaed8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2aaed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aaedc: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x2aaedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x2aaee0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2aaee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aaee4: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x2AAEE4u;
    {
        const bool branch_taken_0x2aaee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAEE4u;
        // 0x2aaee8: 0xe5010010  swc1        $f1, 0x10($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaee4) {
            ctx->pc = 0x2AB0B4u;
            goto label_2ab0b4;
        }
    }
    ctx->pc = 0x2AAEECu;
label_2aaeec:
    // 0x2aaeec: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2aaeecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2aaef0: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2aaef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2aaef4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2aaef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2aaef8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2aaef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2aaefc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2aaefcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aaf00: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2aaf00u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2aaf04: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x2aaf04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2aaf08: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AAF08u;
    {
        const bool branch_taken_0x2aaf08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAF08u;
        // 0x2aaf0c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaf08) {
            ctx->pc = 0x2AAF18u;
            goto label_2aaf18;
        }
    }
    ctx->pc = 0x2AAF10u;
    // 0x2aaf10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AAF10u;
    {
        const bool branch_taken_0x2aaf10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAF10u;
        // 0x2aaf14: 0x821818  mult        $v1, $a0, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaf10) {
            ctx->pc = 0x2AAF1Cu;
            goto label_2aaf1c;
        }
    }
    ctx->pc = 0x2AAF18u;
label_2aaf18:
    // 0x2aaf18: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x2aaf18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2aaf1c:
    // 0x2aaf1c: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x2aaf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2aaf20: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2aaf20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2aaf24: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2aaf24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2aaf28: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2aaf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2aaf2c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2aaf2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2aaf30: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x2aaf30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2aaf34: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2aaf34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2aaf38: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2aaf38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aaf3c: 0x22083  sra         $a0, $v0, 2
    ctx->pc = 0x2aaf3cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2aaf40: 0xe4182b  sltu        $v1, $a3, $a0
    ctx->pc = 0x2aaf40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2aaf44: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AAF44u;
    {
        const bool branch_taken_0x2aaf44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAF44u;
        // 0x2aaf48: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaf44) {
            ctx->pc = 0x2AAF58u;
            goto label_2aaf58;
        }
    }
    ctx->pc = 0x2AAF4Cu;
    // 0x2aaf4c: 0xe22018  mult        $a0, $a3, $v0
    ctx->pc = 0x2aaf4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2aaf50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AAF50u;
    {
        const bool branch_taken_0x2aaf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAF50u;
        // 0x2aaf54: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaf50) {
            ctx->pc = 0x2AAF60u;
            goto label_2aaf60;
        }
    }
    ctx->pc = 0x2AAF58u;
label_2aaf58:
    // 0x2aaf58: 0x823818  mult        $a3, $a0, $v0
    ctx->pc = 0x2aaf58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2aaf5c: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x2aaf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_2aaf60:
    // 0x2aaf60: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2aaf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aaf64: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x2aaf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aaf68: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2aaf68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aaf6c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2aaf6cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2aaf70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aaf70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aaf74: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2aaf74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2aaf78: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x2aaf78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aaf7c: 0x0  nop
    ctx->pc = 0x2aaf7cu;
    // NOP
    // 0x2aaf80: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2AAF80u;
    {
        const bool branch_taken_0x2aaf80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AAF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAF80u;
        // 0x2aaf84: 0x460018c1  sub.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaf80) {
            ctx->pc = 0x2AAF94u;
            goto label_2aaf94;
        }
    }
    ctx->pc = 0x2AAF88u;
    // 0x2aaf88: 0x0  nop
    ctx->pc = 0x2aaf88u;
    // NOP
    // 0x2aaf8c: 0x0  nop
    ctx->pc = 0x2aaf8cu;
    // NOP
    // 0x2aaf90: 0x46021943  div.s       $f5, $f3, $f2
    ctx->pc = 0x2aaf90u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
label_2aaf94:
    // 0x2aaf94: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x2aaf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aaf98: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x2aaf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2aaf9c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2aaf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aafa0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2aafa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aafa4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2aafa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aafa8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2aafa8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2aafac: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2aafacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2aafb0: 0x460128c2  mul.s       $f3, $f5, $f1
    ctx->pc = 0x2aafb0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2aafb4: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x2aafb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2aafb8: 0x46002882  mul.s       $f2, $f5, $f0
    ctx->pc = 0x2aafb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2aafbc: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2aafbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2aafc0: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x2aafc0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2aafc4: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x2aafc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2aafc8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2aafc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aafcc: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2aafccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aafd0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2aafd0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2aafd4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2aafd4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2aafd8: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x2aafd8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2aafdc: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x2aafdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2aafe0: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x2aafe0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2aafe4: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2aafe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aafe8: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x2aafe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x2aafec: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2aafecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aaff0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2aaff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aaff4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2aaff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aaff8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2aaff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aaffc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2aaffcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2ab000: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2ab000u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2ab004: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x2ab004u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2ab008: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2ab008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2ab00c: 0x46012882  mul.s       $f2, $f5, $f1
    ctx->pc = 0x2ab00cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2ab010: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2ab010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2ab014: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x2ab014u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2ab018: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x2ab018u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2ab01c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2ab01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab020: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2ab020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab024: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2ab024u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2ab028: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2ab028u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2ab02c: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x2ab02cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2ab030: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x2ab030u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2ab034: 0xe6040010  swc1        $f4, 0x10($s0)
    ctx->pc = 0x2ab034u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2ab038: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2ab038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab03c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2AB03Cu;
    {
        const bool branch_taken_0x2ab03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB03Cu;
        // 0x2ab040: 0xe5200004  swc1        $f0, 0x4($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab03c) {
            ctx->pc = 0x2AB0B0u;
            goto label_2ab0b0;
        }
    }
    ctx->pc = 0x2AB044u;
label_2ab044:
    // 0x2ab044: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x2ab044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x2ab048: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ab048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ab04c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2ab04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ab050: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2ab050u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ab054: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2AB054u;
    {
        const bool branch_taken_0x2ab054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB054u;
        // 0x2ab058: 0x32083  sra         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab054) {
            ctx->pc = 0x2AB128u;
            goto label_2ab128;
        }
    }
    ctx->pc = 0x2AB05Cu;
label_2ab05c:
    // 0x2ab05c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ab05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ab060: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ab060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab064: 0x27a20068  addiu       $v0, $sp, 0x68
    ctx->pc = 0x2ab064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2ab068: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2ab068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x2ab06c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2ab06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ab070: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2ab070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2ab074: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2ab074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x2ab078: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2ab078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x2ab07c: 0x26080008  addiu       $t0, $s0, 0x8
    ctx->pc = 0x2ab07cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2ab080: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2ab080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ab084: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2ab084u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x2ab088: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2ab088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab08c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2ab08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab090: 0xe6200078  swc1        $f0, 0x78($s1)
    ctx->pc = 0x2ab090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x2ab094: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2ab094u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2ab098: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2ab098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ab09c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2ab09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab0a0: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2ab0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab0a4: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x2ab0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x2ab0a8: 0xe6220084  swc1        $f2, 0x84($s1)
    ctx->pc = 0x2ab0a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x2ab0ac: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x2ab0acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_2ab0b0:
    // 0x2ab0b0: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x2ab0b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2ab0b4:
    // 0x2ab0b4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2ab0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab0b8: 0x8e260070  lw          $a2, 0x70($s1)
    ctx->pc = 0x2ab0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2ab0bc: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2ab0bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ab0c0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2ab0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab0c4: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2ab0c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2ab0c8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2ab0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2ab0cc: 0x10c0008b  beqz        $a2, . + 4 + (0x8B << 2)
    ctx->pc = 0x2AB0CCu;
    {
        const bool branch_taken_0x2ab0cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB0CCu;
        // 0x2ab0d0: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab0cc) {
            ctx->pc = 0x2AB2FCu;
            goto label_2ab2fc;
        }
    }
    ctx->pc = 0x2AB0D4u;
    // 0x2ab0d4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2ab0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab0d8: 0x26080008  addiu       $t0, $s0, 0x8
    ctx->pc = 0x2ab0d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2ab0dc: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2ab0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2ab0e0: 0x26090010  addiu       $t1, $s0, 0x10
    ctx->pc = 0x2ab0e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2ab0e4: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x2ab0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2ab0e8: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x2ab0e8u;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x2ab0ec: 0x1085000c  beq         $a0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2AB0ECu;
    {
        const bool branch_taken_0x2ab0ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x2AB0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB0ECu;
        // 0x2ab0f0: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab0ec) {
            ctx->pc = 0x2AB120u;
            goto label_2ab120;
        }
    }
    ctx->pc = 0x2AB0F4u;
    // 0x2ab0f4: 0x24820014  addiu       $v0, $a0, 0x14
    ctx->pc = 0x2ab0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_2ab0f8:
    // 0x2ab0f8: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AB0F8u;
    {
        const bool branch_taken_0x2ab0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2AB0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB0F8u;
        // 0x2ab0fc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab0f8) {
            ctx->pc = 0x2AB114u;
            goto label_2ab114;
        }
    }
    ctx->pc = 0x2AB100u;
    // 0x2ab100: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2ab100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab104: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ab104u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ab108: 0x0  nop
    ctx->pc = 0x2ab108u;
    // NOP
    // 0x2ab10c: 0x4503ffcd  bc1tl       . + 4 + (-0x33 << 2)
    ctx->pc = 0x2AB10Cu;
    {
        const bool branch_taken_0x2ab10c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ab10c) {
            ctx->pc = 0x2AB110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB10Cu;
            // 0x2ab110: 0x8cc30008  lw          $v1, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB044u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ab044;
        }
    }
    ctx->pc = 0x2AB114u;
label_2ab114:
    // 0x2ab114: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2ab114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab118: 0x1485fff7  bne         $a0, $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2AB118u;
    {
        const bool branch_taken_0x2ab118 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2AB11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB118u;
        // 0x2ab11c: 0x24820014  addiu       $v0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab118) {
            ctx->pc = 0x2AB0F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ab0f8;
        }
    }
    ctx->pc = 0x2AB120u;
label_2ab120:
    // 0x2ab120: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2ab120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2ab124: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2ab124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2ab128:
    // 0x2ab128: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2ab128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2ab12c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ab12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ab130: 0x1482001c  bne         $a0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2AB130u;
    {
        const bool branch_taken_0x2ab130 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AB134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB130u;
        // 0x2ab134: 0x8ce2000c  lw          $v0, 0xC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab130) {
            ctx->pc = 0x2AB1A4u;
            goto label_2ab1a4;
        }
    }
    ctx->pc = 0x2AB138u;
    // 0x2ab138: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2ab138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2ab13c: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2ab13cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2ab140: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2ab140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2ab144: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2ab144u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ab148: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2ab148u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ab14c: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x2ab14cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2ab150: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x2ab150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ab154: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2ab154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ab158: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AB158u;
    {
        const bool branch_taken_0x2ab158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB158u;
        // 0x2ab15c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab158) {
            ctx->pc = 0x2AB16Cu;
            goto label_2ab16c;
        }
    }
    ctx->pc = 0x2AB160u;
    // 0x2ab160: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x2ab160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ab164: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB164u;
    {
        const bool branch_taken_0x2ab164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB164u;
        // 0x2ab168: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab164) {
            ctx->pc = 0x2AB174u;
            goto label_2ab174;
        }
    }
    ctx->pc = 0x2AB16Cu;
label_2ab16c:
    // 0x2ab16c: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x2ab16cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ab170: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2ab170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2ab174:
    // 0x2ab174: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2ab174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab178: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x2ab178u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab17c: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x2ab17cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2ab180: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2ab180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab184: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x2ab184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x2ab188: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2ab188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab18c: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x2ab18cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2ab190: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2ab190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab194: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x2ab194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x2ab198: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2ab198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab19c: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2AB19Cu;
    {
        const bool branch_taken_0x2ab19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB19Cu;
        // 0x2ab1a0: 0xe5010010  swc1        $f1, 0x10($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab19c) {
            ctx->pc = 0x2AB354u;
            goto label_2ab354;
        }
    }
    ctx->pc = 0x2AB1A4u;
label_2ab1a4:
    // 0x2ab1a4: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2ab1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2ab1a8: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2ab1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2ab1ac: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2ab1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2ab1b0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2ab1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ab1b4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2ab1b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ab1b8: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2ab1b8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2ab1bc: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x2ab1bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2ab1c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB1C0u;
    {
        const bool branch_taken_0x2ab1c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB1C0u;
        // 0x2ab1c4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab1c0) {
            ctx->pc = 0x2AB1D0u;
            goto label_2ab1d0;
        }
    }
    ctx->pc = 0x2AB1C8u;
    // 0x2ab1c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AB1C8u;
    {
        const bool branch_taken_0x2ab1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB1C8u;
        // 0x2ab1cc: 0x821818  mult        $v1, $a0, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab1c8) {
            ctx->pc = 0x2AB1D4u;
            goto label_2ab1d4;
        }
    }
    ctx->pc = 0x2AB1D0u;
label_2ab1d0:
    // 0x2ab1d0: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x2ab1d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2ab1d4:
    // 0x2ab1d4: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x2ab1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ab1d8: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2ab1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2ab1dc: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2ab1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2ab1e0: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2ab1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2ab1e4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2ab1e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2ab1e8: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x2ab1e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ab1ec: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2ab1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ab1f0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2ab1f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ab1f4: 0x22083  sra         $a0, $v0, 2
    ctx->pc = 0x2ab1f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2ab1f8: 0xe4182b  sltu        $v1, $a3, $a0
    ctx->pc = 0x2ab1f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2ab1fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AB1FCu;
    {
        const bool branch_taken_0x2ab1fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB1FCu;
        // 0x2ab200: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab1fc) {
            ctx->pc = 0x2AB210u;
            goto label_2ab210;
        }
    }
    ctx->pc = 0x2AB204u;
    // 0x2ab204: 0xe22018  mult        $a0, $a3, $v0
    ctx->pc = 0x2ab204u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ab208: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB208u;
    {
        const bool branch_taken_0x2ab208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB208u;
        // 0x2ab20c: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab208) {
            ctx->pc = 0x2AB218u;
            goto label_2ab218;
        }
    }
    ctx->pc = 0x2AB210u;
label_2ab210:
    // 0x2ab210: 0x823818  mult        $a3, $a0, $v0
    ctx->pc = 0x2ab210u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2ab214: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x2ab214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_2ab218:
    // 0x2ab218: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2ab218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab21c: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x2ab21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ab220: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2ab220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ab224: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2ab224u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2ab228: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ab228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ab22c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2ab22cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2ab230: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x2ab230u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ab234: 0x0  nop
    ctx->pc = 0x2ab234u;
    // NOP
    // 0x2ab238: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2AB238u;
    {
        const bool branch_taken_0x2ab238 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AB23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB238u;
        // 0x2ab23c: 0x460018c1  sub.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab238) {
            ctx->pc = 0x2AB24Cu;
            goto label_2ab24c;
        }
    }
    ctx->pc = 0x2AB240u;
    // 0x2ab240: 0x0  nop
    ctx->pc = 0x2ab240u;
    // NOP
    // 0x2ab244: 0x0  nop
    ctx->pc = 0x2ab244u;
    // NOP
    // 0x2ab248: 0x46021943  div.s       $f5, $f3, $f2
    ctx->pc = 0x2ab248u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
label_2ab24c:
    // 0x2ab24c: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x2ab24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ab250: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x2ab250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2ab254: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2ab254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ab258: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2ab258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab25c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2ab25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab260: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2ab260u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2ab264: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2ab264u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2ab268: 0x460128c2  mul.s       $f3, $f5, $f1
    ctx->pc = 0x2ab268u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2ab26c: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x2ab26cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2ab270: 0x46002882  mul.s       $f2, $f5, $f0
    ctx->pc = 0x2ab270u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2ab274: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2ab274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2ab278: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x2ab278u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2ab27c: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x2ab27cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2ab280: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2ab280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab284: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2ab284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab288: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2ab288u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2ab28c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2ab28cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2ab290: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x2ab290u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2ab294: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x2ab294u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2ab298: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x2ab298u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2ab29c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2ab29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab2a0: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x2ab2a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x2ab2a4: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2ab2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ab2a8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2ab2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab2ac: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2ab2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab2b0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2ab2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ab2b4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2ab2b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2ab2b8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2ab2b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2ab2bc: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x2ab2bcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2ab2c0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2ab2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2ab2c4: 0x46012882  mul.s       $f2, $f5, $f1
    ctx->pc = 0x2ab2c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2ab2c8: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2ab2c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2ab2cc: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x2ab2ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2ab2d0: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x2ab2d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2ab2d4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2ab2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab2d8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2ab2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab2dc: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2ab2dcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2ab2e0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2ab2e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2ab2e4: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x2ab2e4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2ab2e8: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x2ab2e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2ab2ec: 0xe6040010  swc1        $f4, 0x10($s0)
    ctx->pc = 0x2ab2ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2ab2f0: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2ab2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab2f4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2AB2F4u;
    {
        const bool branch_taken_0x2ab2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB2F4u;
        // 0x2ab2f8: 0xe5200004  swc1        $f0, 0x4($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab2f4) {
            ctx->pc = 0x2AB350u;
            goto label_2ab350;
        }
    }
    ctx->pc = 0x2AB2FCu;
label_2ab2fc:
    // 0x2ab2fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ab2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ab300: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ab300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab304: 0x27a20068  addiu       $v0, $sp, 0x68
    ctx->pc = 0x2ab304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2ab308: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2ab308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x2ab30c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2ab30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ab310: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2ab310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2ab314: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2ab314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x2ab318: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2ab318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x2ab31c: 0x26080008  addiu       $t0, $s0, 0x8
    ctx->pc = 0x2ab31cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2ab320: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2ab320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ab324: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2ab324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x2ab328: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2ab328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab32c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2ab32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab330: 0xe6200078  swc1        $f0, 0x78($s1)
    ctx->pc = 0x2ab330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x2ab334: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2ab334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2ab338: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2ab338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ab33c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2ab33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab340: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2ab340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab344: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x2ab344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x2ab348: 0xe6220084  swc1        $f2, 0x84($s1)
    ctx->pc = 0x2ab348u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x2ab34c: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x2ab34cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_2ab350:
    // 0x2ab350: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x2ab350u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2ab354:
    // 0x2ab354: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2ab354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab358: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ab358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab35c: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2ab35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2ab360: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2ab360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ab364: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2ab364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab368: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2ab368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2ab36c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2ab36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2ab370: 0xc0aada8  jal         func_2AB6A0
    ctx->pc = 0x2AB370u;
    SET_GPR_U32(ctx, 31, 0x2AB378u);
    ctx->pc = 0x2AB374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB370u;
    // 0x2ab374: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB6A0u, 0x2AB370u, 0x2AB378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB378u;
label_2ab378:
    // 0x2ab378: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x2ab378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2ab37c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x2ab37cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2ab380: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x2ab380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2ab384: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x2ab384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2ab388: 0xb3a30047  sdl         $v1, 0x47($sp)
    ctx->pc = 0x2ab388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab38c: 0xb7a30040  sdr         $v1, 0x40($sp)
    ctx->pc = 0x2ab38cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab390: 0xb3a4004f  sdl         $a0, 0x4F($sp)
    ctx->pc = 0x2ab390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab394: 0xb7a40048  sdr         $a0, 0x48($sp)
    ctx->pc = 0x2ab394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab398: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2ab398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab39c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2ab39cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab3a0: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x2ab3a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab3a4: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x2ab3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ab3a8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2ab3a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab3ac: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2ab3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab3b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ab3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab3b4: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x2ab3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ab3b8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2ab3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab3bc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2ab3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab3c0: 0x46012140  add.s       $f5, $f4, $f1
    ctx->pc = 0x2ab3c0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2ab3c4: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x2ab3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ab3c8: 0x46001102  mul.s       $f4, $f2, $f0
    ctx->pc = 0x2ab3c8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ab3cc: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x2ab3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ab3d0: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2ab3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab3d4: 0xc7af0034  lwc1        $f15, 0x34($sp)
    ctx->pc = 0x2ab3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2ab3d8: 0x460d1b40  add.s       $f13, $f3, $f13
    ctx->pc = 0x2ab3d8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[3], ctx->f[13]);
    // 0x2ab3dc: 0x46042b00  add.s       $f12, $f5, $f4
    ctx->pc = 0x2ab3dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x2ab3e0: 0x46142382  mul.s       $f14, $f4, $f20
    ctx->pc = 0x2ab3e0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x2ab3e4: 0x460f03c2  mul.s       $f15, $f0, $f15
    ctx->pc = 0x2ab3e4u;
    ctx->f[15] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    // 0x2ab3e8: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x2AB3E8u;
    SET_GPR_U32(ctx, 31, 0x2AB3F0u);
    ctx->pc = 0x2AB3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB3E8u;
    // 0x2ab3ec: 0x460e6301  sub.s       $f12, $f12, $f14 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x2AB3E8u, 0x2AB3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB3F0u;
label_2ab3f0:
    // 0x2ab3f0: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2ab3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2ab3f4: 0xc0aadac  jal         func_2AB6B0
    ctx->pc = 0x2AB3F4u;
    SET_GPR_U32(ctx, 31, 0x2AB3FCu);
    ctx->pc = 0x2AB3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB3F4u;
    // 0x2ab3f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB6B0u, 0x2AB3F4u, 0x2AB3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB3FCu;
label_2ab3fc:
    // 0x2ab3fc: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x2ab3fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2ab400: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x2ab400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2ab404: 0x6843000f  ldl         $v1, 0xF($v0)
    ctx->pc = 0x2ab404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2ab408: 0x6c430008  ldr         $v1, 0x8($v0)
    ctx->pc = 0x2ab408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2ab40c: 0xb3a70047  sdl         $a3, 0x47($sp)
    ctx->pc = 0x2ab40cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab410: 0xb7a70040  sdr         $a3, 0x40($sp)
    ctx->pc = 0x2ab410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab414: 0xb3a3004f  sdl         $v1, 0x4F($sp)
    ctx->pc = 0x2ab414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab418: 0xb7a30048  sdr         $v1, 0x48($sp)
    ctx->pc = 0x2ab418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab41c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2ab41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2ab420: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2ab420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2ab424: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2ab424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2ab428: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2ab428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab42c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2ab42cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab430: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x2ab430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ab434: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x2ab434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ab438: 0x46001140  add.s       $f5, $f2, $f0
    ctx->pc = 0x2ab438u;
    ctx->f[5] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2ab43c: 0xc6210090  lwc1        $f1, 0x90($s1)
    ctx->pc = 0x2ab43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab440: 0x46142302  mul.s       $f12, $f4, $f20
    ctx->pc = 0x2ab440u;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x2ab444: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x2ab444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ab448: 0x460008e4  .word       0x460008E4                   # cvt.w.s     $f3, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ab448u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2ab44c: 0x44071800  mfc1        $a3, $f3
    ctx->pc = 0x2ab44cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2ab450: 0xc7af004c  lwc1        $f15, 0x4C($sp)
    ctx->pc = 0x2ab450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2ab454: 0x46042800  add.s       $f0, $f5, $f4
    ctx->pc = 0x2ab454u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x2ab458: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2ab458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab45c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2ab45cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2ab460: 0x8e280058  lw          $t0, 0x58($s1)
    ctx->pc = 0x2ab460u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2ab464: 0x460d0b40  add.s       $f13, $f1, $f13
    ctx->pc = 0x2ab464u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[13]);
    // 0x2ab468: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x2AB468u;
    SET_GPR_U32(ctx, 31, 0x2AB470u);
    ctx->pc = 0x2AB46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB468u;
    // 0x2ab46c: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x2AB468u, 0x2AB470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB470u;
label_2ab470:
    // 0x2ab470: 0xc0db1ae  jal         func_36C6B8
    ctx->pc = 0x2AB470u;
    SET_GPR_U32(ctx, 31, 0x2AB478u);
    ctx->pc = 0x36C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C6B8u, 0x2AB470u, 0x2AB478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB478u;
label_2ab478:
    // 0x2ab478: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x2ab478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2ab47c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AB47Cu;
    {
        const bool branch_taken_0x2ab47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab47c) {
            ctx->pc = 0x2AB480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB47Cu;
            // 0x2ab480: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB4A0u;
            goto label_2ab4a0;
        }
    }
    ctx->pc = 0x2AB484u;
    // 0x2ab484: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2ab484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab488: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2ab488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab48c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ab48cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ab490: 0x0  nop
    ctx->pc = 0x2ab490u;
    // NOP
    // 0x2ab494: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2AB494u;
    {
        const bool branch_taken_0x2ab494 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AB498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB494u;
        // 0x2ab498: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab494) {
            ctx->pc = 0x2AB4A0u;
            goto label_2ab4a0;
        }
    }
    ctx->pc = 0x2AB49Cu;
    // 0x2ab49c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ab49cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab4a0:
    // 0x2ab4a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ab4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ab4a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AB4A4u;
    {
        const bool branch_taken_0x2ab4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB4A4u;
        // 0x2ab4a8: 0x2624005c  addiu       $a0, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab4a4) {
            ctx->pc = 0x2AB4C8u;
            goto label_2ab4c8;
        }
    }
    ctx->pc = 0x2AB4ACu;
    // 0x2ab4ac: 0xc0a2d8e  jal         func_28B638
    ctx->pc = 0x2AB4ACu;
    SET_GPR_U32(ctx, 31, 0x2AB4B4u);
    ctx->pc = 0x2AB4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB4ACu;
    // 0x2ab4b0: 0x26250060  addiu       $a1, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B638u, 0x2AB4ACu, 0x2AB4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB4B4u;
label_2ab4b4:
    // 0x2ab4b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ab4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ab4b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ab4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab4bc: 0xa222008d  sb          $v0, 0x8D($s1)
    ctx->pc = 0x2ab4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 141), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ab4c0: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x2ab4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x2ab4c4: 0xa220008c  sb          $zero, 0x8C($s1)
    ctx->pc = 0x2ab4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 0));
label_2ab4c8:
    // 0x2ab4c8: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x2ab4c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2ab4cc: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x2ab4ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2ab4d0: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x2ab4d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2ab4d4: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x2ab4d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2ab4d8: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x2ab4d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2ab4dc: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x2ab4dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2ab4e0: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x2ab4e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2ab4e4: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x2ab4e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2ab4e8: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x2ab4e8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2ab4ec: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x2ab4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2ab4f0: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x2ab4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ab4f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB4F4u;
        // 0x2ab4f8: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB4F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB4FCu;
    // 0x2ab4fc: 0x0  nop
    ctx->pc = 0x2ab4fcu;
    // NOP
    ctx->pc = 0x2ab500u;
}
