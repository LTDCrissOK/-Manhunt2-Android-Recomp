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

// Function: sub_003565E0
// Address: 0x3565e0 - 0x3566d0
void sub_003565E0_0x3565e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003565E0_0x3565e0");
#endif

    switch (ctx->pc) {
        case 0x356614u: goto label_356614;
        case 0x356650u: goto label_356650;
        case 0x35665cu: goto label_35665c;
        case 0x356678u: goto label_356678;
        case 0x356684u: goto label_356684;
        case 0x3566a0u: goto label_3566a0;
        case 0x3566acu: goto label_3566ac;
        default: break;
    }

    ctx->pc = 0x3565e0u;

    // 0x3565e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3565e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3565e4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3565e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3565e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3565e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3565ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3565ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3565f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3565f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3565f4: 0x14a20030  bne         $a1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3565F4u;
    {
        const bool branch_taken_0x3565f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3565F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3565F4u;
        // 0x3565f8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3565f4) {
            ctx->pc = 0x3566B8u;
            goto label_3566b8;
        }
    }
    ctx->pc = 0x3565FCu;
    // 0x3565fc: 0x1080002e  beqz        $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3565FCu;
    {
        const bool branch_taken_0x3565fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x356600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3565FCu;
        // 0x356600: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3565fc) {
            ctx->pc = 0x3566B8u;
            goto label_3566b8;
        }
    }
    ctx->pc = 0x356604u;
    // 0x356604: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x356604u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356608: 0x2484cd60  addiu       $a0, $a0, -0x32A0
    ctx->pc = 0x356608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954336));
    // 0x35660c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x35660Cu;
    SET_GPR_U32(ctx, 31, 0x356614u);
    ctx->pc = 0x356610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35660Cu;
    // 0x356610: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x35660Cu, 0x356614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356614u;
label_356614:
    // 0x356614: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x356614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x356618: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x356618u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x35661c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35661cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356620: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x356620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x356624: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x356624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x356628: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x356628u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x35662c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x35662cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x356630: 0x2482cd70  addiu       $v0, $a0, -0x3290
    ctx->pc = 0x356630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954352));
    // 0x356634: 0xe480cd70  swc1        $f0, -0x3290($a0)
    ctx->pc = 0x356634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5BCD70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BCD70u, _value); } while (0); }
    // 0x356638: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x356638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x35663c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x35663cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5BCD74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BCD74u, _value); } while (0); }
    // 0x356640: 0x2470cd80  addiu       $s0, $v1, -0x3280
    ctx->pc = 0x356640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954368));
    // 0x356644: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x356644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5BCD78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BCD78u, _value); } while (0); }
    // 0x356648: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x356648u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BCD7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BCD7Cu, _value); } while (0);
    // 0x35664c: 0x0  nop
    ctx->pc = 0x35664cu;
    // NOP
label_356650:
    // 0x356650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x356650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356654: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x356654u;
    SET_GPR_U32(ctx, 31, 0x35665Cu);
    ctx->pc = 0x356658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356654u;
    // 0x356658: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x356654u, 0x35665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35665Cu;
label_35665c:
    // 0x35665c: 0x0  nop
    ctx->pc = 0x35665cu;
    // NOP
    // 0x356660: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x356660u;
    {
        const bool branch_taken_0x356660 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x356664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356660u;
        // 0x356664: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356660) {
            ctx->pc = 0x356650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356650;
        }
    }
    ctx->pc = 0x356668u;
    // 0x356668: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x356668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x35666c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x35666cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356670: 0x2451cd90  addiu       $s1, $v0, -0x3270
    ctx->pc = 0x356670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954384));
    // 0x356674: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x356674u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_356678:
    // 0x356678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x356678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35667c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x35667Cu;
    SET_GPR_U32(ctx, 31, 0x356684u);
    ctx->pc = 0x356680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35667Cu;
    // 0x356680: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x35667Cu, 0x356684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356684u;
label_356684:
    // 0x356684: 0x0  nop
    ctx->pc = 0x356684u;
    // NOP
    // 0x356688: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x356688u;
    {
        const bool branch_taken_0x356688 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x35668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356688u;
        // 0x35668c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356688) {
            ctx->pc = 0x356678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356678;
        }
    }
    ctx->pc = 0x356690u;
    // 0x356690: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x356690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x356694: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x356694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356698: 0x2451cda0  addiu       $s1, $v0, -0x3260
    ctx->pc = 0x356698u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954400));
    // 0x35669c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x35669cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3566a0:
    // 0x3566a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3566a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3566a4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3566A4u;
    SET_GPR_U32(ctx, 31, 0x3566ACu);
    ctx->pc = 0x3566A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3566A4u;
    // 0x3566a8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3566A4u, 0x3566ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3566ACu;
label_3566ac:
    // 0x3566ac: 0x0  nop
    ctx->pc = 0x3566acu;
    // NOP
    // 0x3566b0: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3566B0u;
    {
        const bool branch_taken_0x3566b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x3566B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3566B0u;
        // 0x3566b4: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3566b0) {
            ctx->pc = 0x3566A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3566a0;
        }
    }
    ctx->pc = 0x3566B8u;
label_3566b8:
    // 0x3566b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3566b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3566bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3566bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3566c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3566c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3566c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3566c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3566c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3566C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3566CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3566C8u;
        // 0x3566cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3566C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3566D0u;
}
