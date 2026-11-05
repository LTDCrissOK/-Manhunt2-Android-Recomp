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

// Function: sub_003355D0
// Address: 0x3355d0 - 0x3356f0
void sub_003355D0_0x3355d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003355D0_0x3355d0");
#endif

    switch (ctx->pc) {
        case 0x33561cu: goto label_33561c;
        case 0x335640u: goto label_335640;
        case 0x33564cu: goto label_33564c;
        case 0x335670u: goto label_335670;
        case 0x335680u: goto label_335680;
        case 0x3356bcu: goto label_3356bc;
        default: break;
    }

    ctx->pc = 0x3355d0u;

    // 0x3355d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3355d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3355d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3355d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3355d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3355d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3355dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3355dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3355e0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3355e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3355e4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3355e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3355e8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3355e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3355ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3355ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3355f0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x3355f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x3355f4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3355f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3355f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3355f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3355fc: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x3355fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335600: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x335600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x335604: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x335604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x335608: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x335608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x33560c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x33560cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x335610: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x335610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x335614: 0xc0c9c42  jal         func_327108
    ctx->pc = 0x335614u;
    SET_GPR_U32(ctx, 31, 0x33561Cu);
    ctx->pc = 0x335618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335614u;
    // 0x335618: 0xae4201c0  sw          $v0, 0x1C0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327108u, 0x335614u, 0x33561Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33561Cu;
label_33561c:
    // 0x33561c: 0xae4201bc  sw          $v0, 0x1BC($s2)
    ctx->pc = 0x33561cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 2));
    // 0x335620: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x335620u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x335624: 0xae420204  sw          $v0, 0x204($s2)
    ctx->pc = 0x335624u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 516), GPR_U32(ctx, 2));
    // 0x335628: 0x96630004  lhu         $v1, 0x4($s3)
    ctx->pc = 0x335628u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x33562c: 0xae430208  sw          $v1, 0x208($s2)
    ctx->pc = 0x33562cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 520), GPR_U32(ctx, 3));
    // 0x335630: 0x96750058  lhu         $s5, 0x58($s3)
    ctx->pc = 0x335630u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x335634: 0x12a0001d  beqz        $s5, . + 4 + (0x1D << 2)
    ctx->pc = 0x335634u;
    {
        const bool branch_taken_0x335634 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x335638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335634u;
        // 0x335638: 0x26570018  addiu       $s7, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335634) {
            ctx->pc = 0x3356ACu;
            goto label_3356ac;
        }
    }
    ctx->pc = 0x33563Cu;
    // 0x33563c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x33563cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_335640:
    // 0x335640: 0x8e70005c  lw          $s0, 0x5C($s3)
    ctx->pc = 0x335640u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x335644: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x335644u;
    SET_GPR_U32(ctx, 31, 0x33564Cu);
    ctx->pc = 0x335648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335644u;
    // 0x335648: 0x240404ac  addiu       $a0, $zero, 0x4AC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x335644u, 0x33564Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33564Cu;
label_33564c:
    // 0x33564c: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x33564cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x335650: 0x8e4601c0  lw          $a2, 0x1C0($s2)
    ctx->pc = 0x335650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
    // 0x335654: 0x8e4701bc  lw          $a3, 0x1BC($s2)
    ctx->pc = 0x335654u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
    // 0x335658: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x335658u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33565c: 0x8e080044  lw          $t0, 0x44($s0)
    ctx->pc = 0x33565cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x335660: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x335660u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335664: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x335664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x335668: 0xc0cdb4e  jal         func_336D38
    ctx->pc = 0x335668u;
    SET_GPR_U32(ctx, 31, 0x335670u);
    ctx->pc = 0x33566Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335668u;
    // 0x33566c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D38u, 0x335668u, 0x335670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335670u;
label_335670:
    // 0x335670: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x335670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335674: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x335674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335678: 0xc0fba6c  jal         func_3EE9B0
    ctx->pc = 0x335678u;
    SET_GPR_U32(ctx, 31, 0x335680u);
    ctx->pc = 0x33567Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335678u;
    // 0x33567c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EE9B0u, 0x335678u, 0x335680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335680u;
label_335680:
    // 0x335680: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x335680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x335684: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x335684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x335688: 0x28620068  slti        $v0, $v1, 0x68
    ctx->pc = 0x335688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)104) ? 1 : 0);
    // 0x33568c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33568Cu;
    {
        const bool branch_taken_0x33568c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33568Cu;
        // 0x335690: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33568c) {
            ctx->pc = 0x33569Cu;
            goto label_33569c;
        }
    }
    ctx->pc = 0x335694u;
    // 0x335694: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x335694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x335698: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x335698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_33569c:
    // 0x33569c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x33569cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3356a0: 0x295102b  sltu        $v0, $s4, $s5
    ctx->pc = 0x3356a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x3356a4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3356A4u;
    {
        const bool branch_taken_0x3356a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3356A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3356A4u;
        // 0x3356a8: 0x26d60048  addiu       $s6, $s6, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3356a4) {
            ctx->pc = 0x335640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335640;
        }
    }
    ctx->pc = 0x3356ACu;
label_3356ac:
    // 0x3356ac: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x3356ACu;
    {
        const bool branch_taken_0x3356ac = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3356B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3356ACu;
        // 0x3356b0: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3356ac) {
            ctx->pc = 0x3356C0u;
            goto label_3356c0;
        }
    }
    ctx->pc = 0x3356B4u;
    // 0x3356b4: 0xc0cd68e  jal         func_335A38
    ctx->pc = 0x3356B4u;
    SET_GPR_U32(ctx, 31, 0x3356BCu);
    ctx->pc = 0x3356B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3356B4u;
    // 0x3356b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335A38u, 0x3356B4u, 0x3356BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3356BCu;
label_3356bc:
    // 0x3356bc: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3356bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3356c0:
    // 0x3356c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3356c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3356c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3356c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3356c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3356c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3356cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3356ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3356d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3356d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3356d4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3356d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3356d8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3356d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3356dc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x3356dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3356e0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x3356e0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3356e4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x3356e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3356e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3356E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3356ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3356E8u;
        // 0x3356ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3356E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3356F0u;
}
