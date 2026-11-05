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

// Function: sub_002A9628
// Address: 0x2a9628 - 0x2a9d60
void sub_002A9628_0x2a9628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9628_0x2a9628");
#endif

    switch (ctx->pc) {
        case 0x2a9680u: goto label_2a9680;
        case 0x2a968cu: goto label_2a968c;
        case 0x2a96c4u: goto label_2a96c4;
        case 0x2a96d0u: goto label_2a96d0;
        case 0x2a96dcu: goto label_2a96dc;
        case 0x2a9710u: goto label_2a9710;
        case 0x2a9740u: goto label_2a9740;
        case 0x2a992cu: goto label_2a992c;
        case 0x2a99e8u: goto label_2a99e8;
        case 0x2a9c68u: goto label_2a9c68;
        case 0x2a9ce4u: goto label_2a9ce4;
        case 0x2a9cecu: goto label_2a9cec;
        default: break;
    }

    ctx->pc = 0x2a9628u;

    // 0x2a9628: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2a9628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2a962c: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2a962cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x2a9630: 0x3c013fe3  lui         $at, 0x3FE3
    ctx->pc = 0x2a9630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16355 << 16));
    // 0x2a9634: 0x34218e39  ori         $at, $at, 0x8E39
    ctx->pc = 0x2a9634u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36409);
    // 0x2a9638: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a9638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a963c: 0xc440ac6c  lwc1        $f0, -0x5394($v0)
    ctx->pc = 0x2a963cu;
    { uint32_t bits = FAST_READ32(0x6BAC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9640: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x2a9640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x2a9644: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x2a9644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x2a9648: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a9648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a964c: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x2a964cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x2a9650: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2a9650u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9654: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x2a9654u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x2a9658: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2a9658u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a965c: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x2a965cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x2a9660: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x2a9660u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a9664: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x2a9664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x2a9668: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x2a9668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x2a966c: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x2a966cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x2a9670: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x2a9670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x2a9674: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x2a9674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x2a9678: 0xc0db198  jal         func_36C660
    ctx->pc = 0x2A9678u;
    SET_GPR_U32(ctx, 31, 0x2A9680u);
    ctx->pc = 0x2A967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9678u;
    // 0x2a967c: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C660u, 0x2A9678u, 0x2A9680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9680u;
label_2a9680:
    // 0x2a9680: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2a9680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a9684: 0xc0db170  jal         func_36C5C0
    ctx->pc = 0x2A9684u;
    SET_GPR_U32(ctx, 31, 0x2A968Cu);
    ctx->pc = 0x2A9688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9684u;
    // 0x2a9688: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x2A9684u, 0x2A968Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A968Cu;
label_2a968c:
    // 0x2a968c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2a968cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a9690: 0x93b60000  lbu         $s6, 0x0($sp)
    ctx->pc = 0x2a9690u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9694: 0x93b70001  lbu         $s7, 0x1($sp)
    ctx->pc = 0x2a9694u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x2a9698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a9698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a969c: 0x93b30002  lbu         $s3, 0x2($sp)
    ctx->pc = 0x2a969cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2a96a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a96a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a96a4: 0x93b40003  lbu         $s4, 0x3($sp)
    ctx->pc = 0x2a96a4u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x2a96a8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2a96a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2a96ac: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2a96acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2a96b0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2a96b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2a96b4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x2a96b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x2a96b8: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2a96b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2a96bc: 0xc0aa55e  jal         func_2A9578
    ctx->pc = 0x2A96BCu;
    SET_GPR_U32(ctx, 31, 0x2A96C4u);
    ctx->pc = 0x2A96C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A96BCu;
    // 0x2a96c0: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9578u, 0x2A96BCu, 0x2A96C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A96C4u;
label_2a96c4:
    // 0x2a96c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a96c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a96c8: 0xc0aa570  jal         func_2A95C0
    ctx->pc = 0x2A96C8u;
    SET_GPR_U32(ctx, 31, 0x2A96D0u);
    ctx->pc = 0x2A96CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A96C8u;
    // 0x2a96cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A95C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A95C0u, 0x2A96C8u, 0x2A96D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A96D0u;
label_2a96d0:
    // 0x2a96d0: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2a96d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2a96d4: 0xc0aadc2  jal         func_2AB708
    ctx->pc = 0x2A96D4u;
    SET_GPR_U32(ctx, 31, 0x2A96DCu);
    ctx->pc = 0x2A96D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A96D4u;
    // 0x2a96d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB708u, 0x2A96D4u, 0x2A96DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A96DCu;
label_2a96dc:
    // 0x2a96dc: 0x26280070  addiu       $t0, $s1, 0x70
    ctx->pc = 0x2a96dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x2a96e0: 0x10400098  beqz        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x2A96E0u;
    {
        const bool branch_taken_0x2a96e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A96E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A96E0u;
        // 0x2a96e4: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a96e0) {
            ctx->pc = 0x2A9944u;
            goto label_2a9944;
        }
    }
    ctx->pc = 0x2A96E8u;
    // 0x2a96e8: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x2a96e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a96ec: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2a96ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a96f0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2a96f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2a96f4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a96f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a96f8: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x2a96f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a96fc: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x2a96fcu;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x2a9700: 0x26290078  addiu       $t1, $s1, 0x78
    ctx->pc = 0x2a9700u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x2a9704: 0x1086000c  beq         $a0, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x2A9704u;
    {
        const bool branch_taken_0x2a9704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x2A9708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9704u;
        // 0x2a9708: 0x262a0080  addiu       $t2, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9704) {
            ctx->pc = 0x2A9738u;
            goto label_2a9738;
        }
    }
    ctx->pc = 0x2A970Cu;
    // 0x2a970c: 0x24830014  addiu       $v1, $a0, 0x14
    ctx->pc = 0x2a970cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_2a9710:
    // 0x2a9710: 0x10660006  beq         $v1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A9710u;
    {
        const bool branch_taken_0x2a9710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x2A9714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9710u;
        // 0x2a9714: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9710) {
            ctx->pc = 0x2A972Cu;
            goto label_2a972c;
        }
    }
    ctx->pc = 0x2A9718u;
    // 0x2a9718: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2a9718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a971c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a971cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a9720: 0x0  nop
    ctx->pc = 0x2a9720u;
    // NOP
    // 0x2a9724: 0x45030017  bc1tl       . + 4 + (0x17 << 2)
    ctx->pc = 0x2A9724u;
    {
        const bool branch_taken_0x2a9724 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a9724) {
            ctx->pc = 0x2A9728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9724u;
            // 0x2a9728: 0x8c430008  lw          $v1, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9784u;
            goto label_2a9784;
        }
    }
    ctx->pc = 0x2A972Cu;
label_2a972c:
    // 0x2a972c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a972cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9730: 0x1486fff7  bne         $a0, $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A9730u;
    {
        const bool branch_taken_0x2a9730 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x2A9734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9730u;
        // 0x2a9734: 0x24830014  addiu       $v1, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9730) {
            ctx->pc = 0x2A9710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a9710;
        }
    }
    ctx->pc = 0x2A9738u;
label_2a9738:
    // 0x2a9738: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2a9738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2a973c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2a973cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2a9740:
    // 0x2a9740: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2a9740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2a9744: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a9744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a9748: 0x14820022  bne         $a0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2A9748u;
    {
        const bool branch_taken_0x2a9748 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9748u;
        // 0x2a974c: 0x8ce2000c  lw          $v0, 0xC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9748) {
            ctx->pc = 0x2A97D4u;
            goto label_2a97d4;
        }
    }
    ctx->pc = 0x2A9750u;
    // 0x2a9750: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2a9750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2a9754: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2a9754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2a9758: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2a9758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2a975c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2a975cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a9760: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2a9760u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a9764: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x2a9764u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2a9768: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x2a9768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2a976c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2a976cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2a9770: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A9770u;
    {
        const bool branch_taken_0x2a9770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9770u;
        // 0x2a9774: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9770) {
            ctx->pc = 0x2A979Cu;
            goto label_2a979c;
        }
    }
    ctx->pc = 0x2A9778u;
    // 0x2a9778: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x2a9778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a977c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A977Cu;
    {
        const bool branch_taken_0x2a977c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A977Cu;
        // 0x2a9780: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a977c) {
            ctx->pc = 0x2A97A4u;
            goto label_2a97a4;
        }
    }
    ctx->pc = 0x2A9784u;
label_2a9784:
    // 0x2a9784: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x2a9784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x2a9788: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2a9788u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a978c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2a978cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2a9790: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2a9790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a9794: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x2A9794u;
    {
        const bool branch_taken_0x2a9794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9794u;
        // 0x2a9798: 0x32083  sra         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9794) {
            ctx->pc = 0x2A9740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a9740;
        }
    }
    ctx->pc = 0x2A979Cu;
label_2a979c:
    // 0x2a979c: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x2a979cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a97a0: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2a97a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2a97a4:
    // 0x2a97a4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2a97a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a97a8: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x2a97a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a97ac: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x2a97acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x2a97b0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2a97b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a97b4: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x2a97b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x2a97b8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2a97b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a97bc: 0xe5010010  swc1        $f1, 0x10($t0)
    ctx->pc = 0x2a97bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x2a97c0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2a97c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a97c4: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x2a97c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x2a97c8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2a97c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a97cc: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2A97CCu;
    {
        const bool branch_taken_0x2a97cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A97D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A97CCu;
        // 0x2a97d0: 0xe5210010  swc1        $f1, 0x10($t1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a97cc) {
            ctx->pc = 0x2A99A0u;
            goto label_2a99a0;
        }
    }
    ctx->pc = 0x2A97D4u;
label_2a97d4:
    // 0x2a97d4: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2a97d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2a97d8: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2a97d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2a97dc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2a97dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2a97e0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2a97e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a97e4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2a97e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a97e8: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2a97e8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2a97ec: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x2a97ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2a97f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A97F0u;
    {
        const bool branch_taken_0x2a97f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A97F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A97F0u;
        // 0x2a97f4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a97f0) {
            ctx->pc = 0x2A9800u;
            goto label_2a9800;
        }
    }
    ctx->pc = 0x2A97F8u;
    // 0x2a97f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A97F8u;
    {
        const bool branch_taken_0x2a97f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A97FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A97F8u;
        // 0x2a97fc: 0x821818  mult        $v1, $a0, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a97f8) {
            ctx->pc = 0x2A9804u;
            goto label_2a9804;
        }
    }
    ctx->pc = 0x2A9800u;
label_2a9800:
    // 0x2a9800: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x2a9800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2a9804:
    // 0x2a9804: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x2a9804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a9808: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2a9808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2a980c: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2a980cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2a9810: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2a9810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2a9814: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2a9814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2a9818: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x2a9818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a981c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2a981cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a9820: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2a9820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a9824: 0x22083  sra         $a0, $v0, 2
    ctx->pc = 0x2a9824u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2a9828: 0xe4182b  sltu        $v1, $a3, $a0
    ctx->pc = 0x2a9828u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2a982c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A982Cu;
    {
        const bool branch_taken_0x2a982c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A982Cu;
        // 0x2a9830: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a982c) {
            ctx->pc = 0x2A9840u;
            goto label_2a9840;
        }
    }
    ctx->pc = 0x2A9834u;
    // 0x2a9834: 0xe22018  mult        $a0, $a3, $v0
    ctx->pc = 0x2a9834u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a9838: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9838u;
    {
        const bool branch_taken_0x2a9838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9838u;
        // 0x2a983c: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9838) {
            ctx->pc = 0x2A9848u;
            goto label_2a9848;
        }
    }
    ctx->pc = 0x2A9840u;
label_2a9840:
    // 0x2a9840: 0x823818  mult        $a3, $a0, $v0
    ctx->pc = 0x2a9840u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2a9844: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x2a9844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_2a9848:
    // 0x2a9848: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2a9848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a984c: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x2a984cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a9850: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2a9850u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9854: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2a9854u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2a9858: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a9858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a985c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2a985cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2a9860: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x2a9860u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a9864: 0x0  nop
    ctx->pc = 0x2a9864u;
    // NOP
    // 0x2a9868: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9868u;
    {
        const bool branch_taken_0x2a9868 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9868u;
        // 0x2a986c: 0x460018c1  sub.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9868) {
            ctx->pc = 0x2A987Cu;
            goto label_2a987c;
        }
    }
    ctx->pc = 0x2A9870u;
    // 0x2a9870: 0x0  nop
    ctx->pc = 0x2a9870u;
    // NOP
    // 0x2a9874: 0x0  nop
    ctx->pc = 0x2a9874u;
    // NOP
    // 0x2a9878: 0x46021943  div.s       $f5, $f3, $f2
    ctx->pc = 0x2a9878u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
label_2a987c:
    // 0x2a987c: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x2a987cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a9880: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x2a9880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2a9884: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2a9884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a9888: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2a9888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a988c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2a988cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9890: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2a9890u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2a9894: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2a9894u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2a9898: 0x460128c2  mul.s       $f3, $f5, $f1
    ctx->pc = 0x2a9898u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2a989c: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x2a989cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2a98a0: 0x46002882  mul.s       $f2, $f5, $f0
    ctx->pc = 0x2a98a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2a98a4: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2a98a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2a98a8: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x2a98a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2a98ac: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x2a98acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2a98b0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2a98b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a98b4: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2a98b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a98b8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2a98b8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2a98bc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2a98bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2a98c0: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x2a98c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2a98c4: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x2a98c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2a98c8: 0xe5030008  swc1        $f3, 0x8($t0)
    ctx->pc = 0x2a98c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x2a98cc: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2a98ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a98d0: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x2a98d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x2a98d4: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2a98d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a98d8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2a98d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a98dc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2a98dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a98e0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2a98e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a98e4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2a98e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2a98e8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2a98e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2a98ec: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x2a98ecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2a98f0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2a98f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2a98f4: 0x46012882  mul.s       $f2, $f5, $f1
    ctx->pc = 0x2a98f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2a98f8: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2a98f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2a98fc: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x2a98fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2a9900: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x2a9900u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2a9904: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2a9904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9908: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2a9908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a990c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2a990cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2a9910: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2a9910u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2a9914: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x2a9914u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2a9918: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x2a9918u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2a991c: 0xe5040010  swc1        $f4, 0x10($t0)
    ctx->pc = 0x2a991cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x2a9920: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2a9920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9924: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2A9924u;
    {
        const bool branch_taken_0x2a9924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9924u;
        // 0x2a9928: 0xe5400004  swc1        $f0, 0x4($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9924) {
            ctx->pc = 0x2A999Cu;
            goto label_2a999c;
        }
    }
    ctx->pc = 0x2A992Cu;
label_2a992c:
    // 0x2a992c: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x2a992cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x2a9930: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2a9930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2a9934: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2a9934u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a9938: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2a9938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a993c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2A993Cu;
    {
        const bool branch_taken_0x2a993c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A993Cu;
        // 0x2a9940: 0x32083  sra         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a993c) {
            ctx->pc = 0x2A9A18u;
            goto label_2a9a18;
        }
    }
    ctx->pc = 0x2A9944u;
label_2a9944:
    // 0x2a9944: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a9944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a9948: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a9948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a994c: 0x27a30068  addiu       $v1, $sp, 0x68
    ctx->pc = 0x2a994cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2a9950: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2a9950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x2a9954: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2a9954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a9958: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2a9958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2a995c: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2a995cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x2a9960: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2a9960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x2a9964: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2a9964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9968: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2a9968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2a996c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2a996cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9970: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2a9970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2a9974: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2a9974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9978: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2a9978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a997c: 0xe6200078  swc1        $f0, 0x78($s1)
    ctx->pc = 0x2a997cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x2a9980: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a9980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a9984: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2a9984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a9988: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2a9988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a998c: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x2a998cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9990: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x2a9990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x2a9994: 0xe6220084  swc1        $f2, 0x84($s1)
    ctx->pc = 0x2a9994u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x2a9998: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x2a9998u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_2a999c:
    // 0x2a999c: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x2a999cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2a99a0:
    // 0x2a99a0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2a99a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a99a4: 0x8e260070  lw          $a2, 0x70($s1)
    ctx->pc = 0x2a99a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2a99a8: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2a99a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2a99ac: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2a99acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a99b0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2a99b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a99b4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2a99b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a99b8: 0x10c0008c  beqz        $a2, . + 4 + (0x8C << 2)
    ctx->pc = 0x2A99B8u;
    {
        const bool branch_taken_0x2a99b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A99BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A99B8u;
        // 0x2a99bc: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a99b8) {
            ctx->pc = 0x2A9BECu;
            goto label_2a9bec;
        }
    }
    ctx->pc = 0x2A99C0u;
    // 0x2a99c0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2a99c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a99c4: 0x26080008  addiu       $t0, $s0, 0x8
    ctx->pc = 0x2a99c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2a99c8: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2a99c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2a99cc: 0x26090010  addiu       $t1, $s0, 0x10
    ctx->pc = 0x2a99ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2a99d0: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x2a99d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2a99d4: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x2a99d4u;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x2a99d8: 0x1085000d  beq         $a0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A99D8u;
    {
        const bool branch_taken_0x2a99d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x2A99DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A99D8u;
        // 0x2a99dc: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a99d8) {
            ctx->pc = 0x2A9A10u;
            goto label_2a9a10;
        }
    }
    ctx->pc = 0x2A99E0u;
    // 0x2a99e0: 0x24820014  addiu       $v0, $a0, 0x14
    ctx->pc = 0x2a99e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x2a99e4: 0x0  nop
    ctx->pc = 0x2a99e4u;
    // NOP
label_2a99e8:
    // 0x2a99e8: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A99E8u;
    {
        const bool branch_taken_0x2a99e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2A99ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A99E8u;
        // 0x2a99ec: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a99e8) {
            ctx->pc = 0x2A9A04u;
            goto label_2a9a04;
        }
    }
    ctx->pc = 0x2A99F0u;
    // 0x2a99f0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2a99f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a99f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a99f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a99f8: 0x0  nop
    ctx->pc = 0x2a99f8u;
    // NOP
    // 0x2a99fc: 0x4503ffcb  bc1tl       . + 4 + (-0x35 << 2)
    ctx->pc = 0x2A99FCu;
    {
        const bool branch_taken_0x2a99fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a99fc) {
            ctx->pc = 0x2A9A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A99FCu;
            // 0x2a9a00: 0x8cc30008  lw          $v1, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A992Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a992c;
        }
    }
    ctx->pc = 0x2A9A04u;
label_2a9a04:
    // 0x2a9a04: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2a9a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9a08: 0x1485fff7  bne         $a0, $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A9A08u;
    {
        const bool branch_taken_0x2a9a08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2A9A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A08u;
        // 0x2a9a0c: 0x24820014  addiu       $v0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a08) {
            ctx->pc = 0x2A99E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a99e8;
        }
    }
    ctx->pc = 0x2A9A10u;
label_2a9a10:
    // 0x2a9a10: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2a9a10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2a9a14: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2a9a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2a9a18:
    // 0x2a9a18: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2a9a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2a9a1c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a9a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a9a20: 0x1482001c  bne         $a0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2A9A20u;
    {
        const bool branch_taken_0x2a9a20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A9A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A20u;
        // 0x2a9a24: 0x8ce2000c  lw          $v0, 0xC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a20) {
            ctx->pc = 0x2A9A94u;
            goto label_2a9a94;
        }
    }
    ctx->pc = 0x2A9A28u;
    // 0x2a9a28: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2a9a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2a9a2c: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2a9a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2a9a30: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2a9a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2a9a34: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2a9a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a9a38: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2a9a38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a9a3c: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x2a9a3cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2a9a40: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x2a9a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2a9a44: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2a9a44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2a9a48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9A48u;
    {
        const bool branch_taken_0x2a9a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A48u;
        // 0x2a9a4c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a48) {
            ctx->pc = 0x2A9A5Cu;
            goto label_2a9a5c;
        }
    }
    ctx->pc = 0x2A9A50u;
    // 0x2a9a50: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x2a9a50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a9a54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9A54u;
    {
        const bool branch_taken_0x2a9a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A54u;
        // 0x2a9a58: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a54) {
            ctx->pc = 0x2A9A64u;
            goto label_2a9a64;
        }
    }
    ctx->pc = 0x2A9A5Cu;
label_2a9a5c:
    // 0x2a9a5c: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x2a9a5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a9a60: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2a9a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2a9a64:
    // 0x2a9a64: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2a9a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9a68: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x2a9a68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9a6c: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x2a9a6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2a9a70: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2a9a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9a74: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x2a9a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x2a9a78: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2a9a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9a7c: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x2a9a7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2a9a80: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2a9a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9a84: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x2a9a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x2a9a88: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2a9a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9a8c: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2A9A8Cu;
    {
        const bool branch_taken_0x2a9a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A8Cu;
        // 0x2a9a90: 0xe5010010  swc1        $f1, 0x10($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a8c) {
            ctx->pc = 0x2A9C44u;
            goto label_2a9c44;
        }
    }
    ctx->pc = 0x2A9A94u;
label_2a9a94:
    // 0x2a9a94: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2a9a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2a9a98: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2a9a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2a9a9c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2a9a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2a9aa0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2a9aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a9aa4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2a9aa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a9aa8: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2a9aa8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2a9aac: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x2a9aacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2a9ab0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9AB0u;
    {
        const bool branch_taken_0x2a9ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9AB0u;
        // 0x2a9ab4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9ab0) {
            ctx->pc = 0x2A9AC0u;
            goto label_2a9ac0;
        }
    }
    ctx->pc = 0x2A9AB8u;
    // 0x2a9ab8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A9AB8u;
    {
        const bool branch_taken_0x2a9ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9AB8u;
        // 0x2a9abc: 0x821818  mult        $v1, $a0, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9ab8) {
            ctx->pc = 0x2A9AC4u;
            goto label_2a9ac4;
        }
    }
    ctx->pc = 0x2A9AC0u;
label_2a9ac0:
    // 0x2a9ac0: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x2a9ac0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2a9ac4:
    // 0x2a9ac4: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x2a9ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a9ac8: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2a9ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2a9acc: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2a9accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2a9ad0: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2a9ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2a9ad4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2a9ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2a9ad8: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x2a9ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a9adc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2a9adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a9ae0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2a9ae0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a9ae4: 0x22083  sra         $a0, $v0, 2
    ctx->pc = 0x2a9ae4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2a9ae8: 0xe4182b  sltu        $v1, $a3, $a0
    ctx->pc = 0x2a9ae8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2a9aec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9AECu;
    {
        const bool branch_taken_0x2a9aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9AECu;
        // 0x2a9af0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9aec) {
            ctx->pc = 0x2A9B00u;
            goto label_2a9b00;
        }
    }
    ctx->pc = 0x2A9AF4u;
    // 0x2a9af4: 0xe22018  mult        $a0, $a3, $v0
    ctx->pc = 0x2a9af4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a9af8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9AF8u;
    {
        const bool branch_taken_0x2a9af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9AF8u;
        // 0x2a9afc: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9af8) {
            ctx->pc = 0x2A9B08u;
            goto label_2a9b08;
        }
    }
    ctx->pc = 0x2A9B00u;
label_2a9b00:
    // 0x2a9b00: 0x823818  mult        $a3, $a0, $v0
    ctx->pc = 0x2a9b00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2a9b04: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x2a9b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_2a9b08:
    // 0x2a9b08: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2a9b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9b0c: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x2a9b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a9b10: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2a9b10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9b14: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2a9b14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2a9b18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a9b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a9b1c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2a9b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2a9b20: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x2a9b20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a9b24: 0x0  nop
    ctx->pc = 0x2a9b24u;
    // NOP
    // 0x2a9b28: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9B28u;
    {
        const bool branch_taken_0x2a9b28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A9B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9B28u;
        // 0x2a9b2c: 0x460018c1  sub.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9b28) {
            ctx->pc = 0x2A9B3Cu;
            goto label_2a9b3c;
        }
    }
    ctx->pc = 0x2A9B30u;
    // 0x2a9b30: 0x0  nop
    ctx->pc = 0x2a9b30u;
    // NOP
    // 0x2a9b34: 0x0  nop
    ctx->pc = 0x2a9b34u;
    // NOP
    // 0x2a9b38: 0x46021943  div.s       $f5, $f3, $f2
    ctx->pc = 0x2a9b38u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
label_2a9b3c:
    // 0x2a9b3c: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x2a9b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a9b40: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x2a9b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2a9b44: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2a9b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a9b48: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2a9b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9b4c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2a9b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9b50: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2a9b50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2a9b54: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2a9b54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2a9b58: 0x460128c2  mul.s       $f3, $f5, $f1
    ctx->pc = 0x2a9b58u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2a9b5c: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x2a9b5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2a9b60: 0x46002882  mul.s       $f2, $f5, $f0
    ctx->pc = 0x2a9b60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2a9b64: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2a9b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2a9b68: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x2a9b68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2a9b6c: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x2a9b6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2a9b70: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2a9b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9b74: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2a9b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9b78: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2a9b78u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2a9b7c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2a9b7cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2a9b80: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x2a9b80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2a9b84: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x2a9b84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2a9b88: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x2a9b88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2a9b8c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2a9b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9b90: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x2a9b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x2a9b94: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2a9b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a9b98: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2a9b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9b9c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2a9b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9ba0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2a9ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a9ba4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2a9ba4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2a9ba8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2a9ba8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2a9bac: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x2a9bacu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2a9bb0: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2a9bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2a9bb4: 0x46012882  mul.s       $f2, $f5, $f1
    ctx->pc = 0x2a9bb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2a9bb8: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x2a9bb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2a9bbc: 0xe7a400e0  swc1        $f4, 0xE0($sp)
    ctx->pc = 0x2a9bbcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2a9bc0: 0xe7a200e4  swc1        $f2, 0xE4($sp)
    ctx->pc = 0x2a9bc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2a9bc4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2a9bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9bc8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2a9bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9bcc: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2a9bccu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2a9bd0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2a9bd0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2a9bd4: 0xe7a400b0  swc1        $f4, 0xB0($sp)
    ctx->pc = 0x2a9bd4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2a9bd8: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x2a9bd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2a9bdc: 0xe6040010  swc1        $f4, 0x10($s0)
    ctx->pc = 0x2a9bdcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2a9be0: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2a9be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9be4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2A9BE4u;
    {
        const bool branch_taken_0x2a9be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9BE4u;
        // 0x2a9be8: 0xe5200004  swc1        $f0, 0x4($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9be4) {
            ctx->pc = 0x2A9C40u;
            goto label_2a9c40;
        }
    }
    ctx->pc = 0x2A9BECu;
label_2a9bec:
    // 0x2a9bec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a9becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a9bf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a9bf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9bf4: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x2a9bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2a9bf8: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x2a9bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x2a9bfc: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x2a9bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a9c00: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2a9c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2a9c04: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2a9c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x2a9c08: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x2a9c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x2a9c0c: 0x26080008  addiu       $t0, $s0, 0x8
    ctx->pc = 0x2a9c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2a9c10: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2a9c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a9c14: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2a9c14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x2a9c18: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2a9c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9c1c: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2a9c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9c20: 0xe6200078  swc1        $f0, 0x78($s1)
    ctx->pc = 0x2a9c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x2a9c24: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2a9c24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2a9c28: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2a9c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a9c2c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2a9c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9c30: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2a9c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9c34: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x2a9c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x2a9c38: 0xe6220084  swc1        $f2, 0x84($s1)
    ctx->pc = 0x2a9c38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x2a9c3c: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x2a9c3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_2a9c40:
    // 0x2a9c40: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x2a9c40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2a9c44:
    // 0x2a9c44: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2a9c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9c48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a9c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9c4c: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2a9c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2a9c50: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2a9c50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2a9c54: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2a9c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9c58: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2a9c58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a9c5c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a9c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a9c60: 0xc0aada4  jal         func_2AB690
    ctx->pc = 0x2A9C60u;
    SET_GPR_U32(ctx, 31, 0x2A9C68u);
    ctx->pc = 0x2A9C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9C60u;
    // 0x2a9c64: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB690u, 0x2A9C60u, 0x2A9C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9C68u;
label_2a9c68:
    // 0x2a9c68: 0x684a0007  ldl         $t2, 0x7($v0)
    ctx->pc = 0x2a9c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2a9c6c: 0x6c4a0000  ldr         $t2, 0x0($v0)
    ctx->pc = 0x2a9c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2a9c70: 0x6843000f  ldl         $v1, 0xF($v0)
    ctx->pc = 0x2a9c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2a9c74: 0x6c430008  ldr         $v1, 0x8($v0)
    ctx->pc = 0x2a9c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2a9c78: 0xb3aa0047  sdl         $t2, 0x47($sp)
    ctx->pc = 0x2a9c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a9c7c: 0xb7aa0040  sdr         $t2, 0x40($sp)
    ctx->pc = 0x2a9c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a9c80: 0xb3a3004f  sdl         $v1, 0x4F($sp)
    ctx->pc = 0x2a9c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a9c84: 0xb7a30048  sdr         $v1, 0x48($sp)
    ctx->pc = 0x2a9c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a9c88: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2a9c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9c8c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2a9c8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9c90: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2a9c90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9c94: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2a9c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9c98: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2a9c98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a9c9c: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x2a9c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a9ca0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a9ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ca4: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2a9ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a9ca8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2a9ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9cac: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2a9cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9cb0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2a9cb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2a9cb4: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x2a9cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a9cb8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2a9cb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2a9cbc: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x2a9cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a9cc0: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x2a9cc0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2a9cc4: 0xc7a2004c  lwc1        $f2, 0x4C($sp)
    ctx->pc = 0x2a9cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a9cc8: 0xc7af0034  lwc1        $f15, 0x34($sp)
    ctx->pc = 0x2a9cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2a9ccc: 0x460d2340  add.s       $f13, $f4, $f13
    ctx->pc = 0x2a9cccu;
    ctx->f[13] = FPU_ADD_S(ctx->f[4], ctx->f[13]);
    // 0x2a9cd0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a9cd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a9cd4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2a9cd4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2a9cd8: 0x460f13c2  mul.s       $f15, $f2, $f15
    ctx->pc = 0x2a9cd8u;
    ctx->f[15] = FPU_MUL_S(ctx->f[2], ctx->f[15]);
    // 0x2a9cdc: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x2A9CDCu;
    SET_GPR_U32(ctx, 31, 0x2A9CE4u);
    ctx->pc = 0x2A9CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9CDCu;
    // 0x2a9ce0: 0x460c0b01  sub.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x2A9CDCu, 0x2A9CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9CE4u;
label_2a9ce4:
    // 0x2a9ce4: 0xc0db1ae  jal         func_36C6B8
    ctx->pc = 0x2A9CE4u;
    SET_GPR_U32(ctx, 31, 0x2A9CECu);
    ctx->pc = 0x36C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C6B8u, 0x2A9CE4u, 0x2A9CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9CECu;
label_2a9cec:
    // 0x2a9cec: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x2a9cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2a9cf0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A9CF0u;
    {
        const bool branch_taken_0x2a9cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9cf0) {
            ctx->pc = 0x2A9CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9CF0u;
            // 0x2a9cf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9D14u;
            goto label_2a9d14;
        }
    }
    ctx->pc = 0x2A9CF8u;
    // 0x2a9cf8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2a9cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9cfc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2a9cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9d00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a9d00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a9d04: 0x0  nop
    ctx->pc = 0x2a9d04u;
    // NOP
    // 0x2a9d08: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A9D08u;
    {
        const bool branch_taken_0x2a9d08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A9D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D08u;
        // 0x2a9d0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9d08) {
            ctx->pc = 0x2A9D14u;
            goto label_2a9d14;
        }
    }
    ctx->pc = 0x2A9D10u;
    // 0x2a9d10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a9d10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9d14:
    // 0x2a9d14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a9d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a9d18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A9D18u;
    {
        const bool branch_taken_0x2a9d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D18u;
        // 0x2a9d1c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9d18) {
            ctx->pc = 0x2A9D30u;
            goto label_2a9d30;
        }
    }
    ctx->pc = 0x2A9D20u;
    // 0x2a9d20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a9d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a9d24: 0xa222008d  sb          $v0, 0x8D($s1)
    ctx->pc = 0x2a9d24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 141), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a9d28: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x2a9d28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x2a9d2c: 0xa220008c  sb          $zero, 0x8C($s1)
    ctx->pc = 0x2a9d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 0));
label_2a9d30:
    // 0x2a9d30: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x2a9d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2a9d34: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x2a9d34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a9d38: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x2a9d38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2a9d3c: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x2a9d3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2a9d40: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x2a9d40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2a9d44: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x2a9d44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a9d48: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x2a9d48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2a9d4c: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x2a9d4cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a9d50: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x2a9d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2a9d54: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x2a9d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a9d58: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D58u;
        // 0x2a9d5c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9D60u;
}
