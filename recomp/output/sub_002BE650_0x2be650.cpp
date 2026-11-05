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

// Function: sub_002BE650
// Address: 0x2be650 - 0x2be770
void sub_002BE650_0x2be650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE650_0x2be650");
#endif

    switch (ctx->pc) {
        case 0x2be650u: goto label_2be650;
        case 0x2be654u: goto label_2be654;
        case 0x2be658u: goto label_2be658;
        case 0x2be65cu: goto label_2be65c;
        case 0x2be660u: goto label_2be660;
        case 0x2be664u: goto label_2be664;
        case 0x2be668u: goto label_2be668;
        case 0x2be66cu: goto label_2be66c;
        case 0x2be670u: goto label_2be670;
        case 0x2be674u: goto label_2be674;
        case 0x2be678u: goto label_2be678;
        case 0x2be67cu: goto label_2be67c;
        case 0x2be680u: goto label_2be680;
        case 0x2be684u: goto label_2be684;
        case 0x2be688u: goto label_2be688;
        case 0x2be68cu: goto label_2be68c;
        case 0x2be690u: goto label_2be690;
        case 0x2be694u: goto label_2be694;
        case 0x2be698u: goto label_2be698;
        case 0x2be69cu: goto label_2be69c;
        case 0x2be6a0u: goto label_2be6a0;
        case 0x2be6a4u: goto label_2be6a4;
        case 0x2be6a8u: goto label_2be6a8;
        case 0x2be6acu: goto label_2be6ac;
        case 0x2be6b0u: goto label_2be6b0;
        case 0x2be6b4u: goto label_2be6b4;
        case 0x2be6b8u: goto label_2be6b8;
        case 0x2be6bcu: goto label_2be6bc;
        case 0x2be6c0u: goto label_2be6c0;
        case 0x2be6c4u: goto label_2be6c4;
        case 0x2be6c8u: goto label_2be6c8;
        case 0x2be6ccu: goto label_2be6cc;
        case 0x2be6d0u: goto label_2be6d0;
        case 0x2be6d4u: goto label_2be6d4;
        case 0x2be6d8u: goto label_2be6d8;
        case 0x2be6dcu: goto label_2be6dc;
        case 0x2be6e0u: goto label_2be6e0;
        case 0x2be6e4u: goto label_2be6e4;
        case 0x2be6e8u: goto label_2be6e8;
        case 0x2be6ecu: goto label_2be6ec;
        case 0x2be6f0u: goto label_2be6f0;
        case 0x2be6f4u: goto label_2be6f4;
        case 0x2be6f8u: goto label_2be6f8;
        case 0x2be6fcu: goto label_2be6fc;
        case 0x2be700u: goto label_2be700;
        case 0x2be704u: goto label_2be704;
        case 0x2be708u: goto label_2be708;
        case 0x2be70cu: goto label_2be70c;
        case 0x2be710u: goto label_2be710;
        case 0x2be714u: goto label_2be714;
        case 0x2be718u: goto label_2be718;
        case 0x2be71cu: goto label_2be71c;
        case 0x2be720u: goto label_2be720;
        case 0x2be724u: goto label_2be724;
        case 0x2be728u: goto label_2be728;
        case 0x2be72cu: goto label_2be72c;
        case 0x2be730u: goto label_2be730;
        case 0x2be734u: goto label_2be734;
        case 0x2be738u: goto label_2be738;
        case 0x2be73cu: goto label_2be73c;
        case 0x2be740u: goto label_2be740;
        case 0x2be744u: goto label_2be744;
        case 0x2be748u: goto label_2be748;
        case 0x2be74cu: goto label_2be74c;
        case 0x2be750u: goto label_2be750;
        case 0x2be754u: goto label_2be754;
        case 0x2be758u: goto label_2be758;
        case 0x2be75cu: goto label_2be75c;
        case 0x2be760u: goto label_2be760;
        case 0x2be764u: goto label_2be764;
        case 0x2be768u: goto label_2be768;
        case 0x2be76cu: goto label_2be76c;
        default: break;
    }

    ctx->pc = 0x2be650u;

label_2be650:
    // 0x2be650: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2be650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2be654:
    // 0x2be654: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2be654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2be658:
    // 0x2be658: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2be658u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2be65c:
    // 0x2be65c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2be65cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2be660:
    // 0x2be660: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2be660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2be664:
    // 0x2be664: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2be664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2be668:
    // 0x2be668: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2be668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2be66c:
    // 0x2be66c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2be66cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2be670:
    // 0x2be670: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2be670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2be674:
    // 0x2be674: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2be674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_2be678:
    // 0x2be678: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2be678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2be67c:
    // 0x2be67c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2be67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2be680:
    // 0x2be680: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2be680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2be684:
    // 0x2be684: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2be684u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2be688:
    // 0x2be688: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2be688u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2be68c:
    // 0x2be68c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2be68cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2be690:
    // 0x2be690: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2be690u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2be694:
    // 0x2be694: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2be694u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_2be698:
    // 0x2be698: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2be698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2be69c:
    // 0x2be69c: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x2be69cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_2be6a0:
    // 0x2be6a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2be6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2be6a4:
    // 0x2be6a4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2be6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2be6a8:
    // 0x2be6a8: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x2be6a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
label_2be6ac:
    // 0x2be6ac: 0xe622000c  swc1        $f2, 0xC($s1)
    ctx->pc = 0x2be6acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2be6b0:
    // 0x2be6b0: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x2be6b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_2be6b4:
    // 0x2be6b4: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x2be6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_2be6b8:
    // 0x2be6b8: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2be6b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_2be6bc:
    // 0x2be6bc: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x2be6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_2be6c0:
    // 0x2be6c0: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x2be6c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
label_2be6c4:
    // 0x2be6c4: 0xa2200007  sb          $zero, 0x7($s1)
    ctx->pc = 0x2be6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 0));
label_2be6c8:
    // 0x2be6c8: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x2be6c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2be6cc:
    // 0x2be6cc: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x2be6ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_2be6d0:
    // 0x2be6d0: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x2be6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_2be6d4:
    // 0x2be6d4: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2be6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_2be6d8:
    // 0x2be6d8: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x2be6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
label_2be6dc:
    // 0x2be6dc: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x2be6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_2be6e0:
    // 0x2be6e0: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x2be6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
label_2be6e4:
    // 0x2be6e4: 0xae2000b8  sw          $zero, 0xB8($s1)
    ctx->pc = 0x2be6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
label_2be6e8:
    // 0x2be6e8: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x2be6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_2be6ec:
    // 0x2be6ec: 0x8e72000c  lw          $s2, 0xC($s3)
    ctx->pc = 0x2be6ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2be6f0:
    // 0x2be6f0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2be6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2be6f4:
    // 0x2be6f4: 0x12420014  beq         $s2, $v0, . + 4 + (0x14 << 2)
label_2be6f8:
    if (ctx->pc == 0x2BE6F8u) {
        ctx->pc = 0x2BE6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE6F4u;
        // 0x2be6f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE6FCu;
        goto label_2be6fc;
    }
    ctx->pc = 0x2BE6F4u;
    {
        const bool branch_taken_0x2be6f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE6F4u;
        // 0x2be6f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be6f4) {
            ctx->pc = 0x2BE748u;
            goto label_2be748;
        }
    }
    ctx->pc = 0x2BE6FCu;
label_2be6fc:
    // 0x2be6fc: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2be6fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2be700:
    // 0x2be700: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2be700u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2be704:
    // 0x2be704: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2be704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2be708:
    // 0x2be708: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2be708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2be70c:
    // 0x2be70c: 0x40f809  jalr        $v0
label_2be710:
    if (ctx->pc == 0x2BE710u) {
        ctx->pc = 0x2BE710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE70Cu;
        // 0x2be710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE714u;
        goto label_2be714;
    }
    ctx->pc = 0x2BE70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BE714u);
        ctx->pc = 0x2BE710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE70Cu;
        // 0x2be710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE70Cu, 0x2BE714u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BE714u;
label_2be714:
    // 0x2be714: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_2be718:
    if (ctx->pc == 0x2BE718u) {
        ctx->pc = 0x2BE718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE714u;
        // 0x2be718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE71Cu;
        goto label_2be71c;
    }
    ctx->pc = 0x2BE714u;
    {
        const bool branch_taken_0x2be714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE714u;
        // 0x2be718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be714) {
            ctx->pc = 0x2BE6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be6f0;
        }
    }
    ctx->pc = 0x2BE71Cu;
label_2be71c:
    // 0x2be71c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2be71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2be720:
    // 0x2be720: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2be720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2be724:
    // 0x2be724: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2be724u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2be728:
    // 0x2be728: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2be728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2be72c:
    // 0x2be72c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x2be72cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_2be730:
    // 0x2be730: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2be730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2be734:
    // 0x2be734: 0x60f809  jalr        $v1
label_2be738:
    if (ctx->pc == 0x2BE738u) {
        ctx->pc = 0x2BE738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE734u;
        // 0x2be738: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE73Cu;
        goto label_2be73c;
    }
    ctx->pc = 0x2BE734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2BE73Cu);
        ctx->pc = 0x2BE738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE734u;
        // 0x2be738: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE734u, 0x2BE73Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BE73Cu;
label_2be73c:
    // 0x2be73c: 0x1000ffed  b           . + 4 + (-0x13 << 2)
label_2be740:
    if (ctx->pc == 0x2BE740u) {
        ctx->pc = 0x2BE740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE73Cu;
        // 0x2be740: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE744u;
        goto label_2be744;
    }
    ctx->pc = 0x2BE73Cu;
    {
        const bool branch_taken_0x2be73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE73Cu;
        // 0x2be740: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be73c) {
            ctx->pc = 0x2BE6F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be6f4;
        }
    }
    ctx->pc = 0x2BE744u;
label_2be744:
    // 0x2be744: 0x0  nop
    ctx->pc = 0x2be744u;
    // NOP
label_2be748:
    // 0x2be748: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2be748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2be74c:
    // 0x2be74c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2be74cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2be750:
    // 0x2be750: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2be750u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2be754:
    // 0x2be754: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2be754u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2be758:
    // 0x2be758: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2be758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2be75c:
    // 0x2be75c: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2be75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2be760:
    // 0x2be760: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2be760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2be764:
    // 0x2be764: 0x3e00008  jr          $ra
label_2be768:
    if (ctx->pc == 0x2BE768u) {
        ctx->pc = 0x2BE768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE764u;
        // 0x2be768: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE76Cu;
        goto label_2be76c;
    }
    ctx->pc = 0x2BE764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE764u;
        // 0x2be768: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE76Cu;
label_2be76c:
    // 0x2be76c: 0x0  nop
    ctx->pc = 0x2be76cu;
    // NOP
    ctx->pc = 0x2be770u;
}
