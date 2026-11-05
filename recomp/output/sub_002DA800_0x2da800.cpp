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

// Function: sub_002DA800
// Address: 0x2da800 - 0x2da8a8
void sub_002DA800_0x2da800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA800_0x2da800");
#endif

    switch (ctx->pc) {
        case 0x2da818u: goto label_2da818;
        case 0x2da84cu: goto label_2da84c;
        case 0x2da868u: goto label_2da868;
        case 0x2da880u: goto label_2da880;
        case 0x2da88cu: goto label_2da88c;
        case 0x2da898u: goto label_2da898;
        default: break;
    }

    ctx->pc = 0x2da800u;

    // 0x2da800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2da800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2da804: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2da804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x2da808: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2da808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2da80c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2da80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2da810: 0xc0495b4  jal         func_1256D0
    ctx->pc = 0x2DA810u;
    SET_GPR_U32(ctx, 31, 0x2DA818u);
    ctx->pc = 0x2DA814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA810u;
    // 0x2da814: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1256D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1256D0u, 0x2DA810u, 0x2DA818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA818u;
label_2da818:
    // 0x2da818: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2DA818u;
    {
        const bool branch_taken_0x2da818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA818u;
        // 0x2da81c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da818) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA820u;
    // 0x2da820: 0x8c43bd5c  lw          $v1, -0x42A4($v0)
    ctx->pc = 0x2da820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950236)));
    // 0x2da824: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DA824u;
    {
        const bool branch_taken_0x2da824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA824u;
        // 0x2da828: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da824) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA82Cu;
    // 0x2da82c: 0x8c43bee8  lw          $v1, -0x4118($v0)
    ctx->pc = 0x2da82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950632)));
    // 0x2da830: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DA830u;
    {
        const bool branch_taken_0x2da830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA830u;
        // 0x2da834: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da830) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA838u;
    // 0x2da838: 0x9043b649  lbu         $v1, -0x49B7($v0)
    ctx->pc = 0x2da838u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948425)));
    // 0x2da83c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DA83Cu;
    {
        const bool branch_taken_0x2da83c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA83Cu;
        // 0x2da840: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da83c) {
            ctx->pc = 0x2DA89Cu;
            goto label_2da89c;
        }
    }
    ctx->pc = 0x2DA844u;
label_2da844:
    // 0x2da844: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2DA844u;
    SET_GPR_U32(ctx, 31, 0x2DA84Cu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2DA844u, 0x2DA84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA84Cu;
label_2da84c:
    // 0x2da84c: 0x904300f4  lbu         $v1, 0xF4($v0)
    ctx->pc = 0x2da84cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x2da850: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2DA850u;
    {
        const bool branch_taken_0x2da850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA850u;
        // 0x2da854: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da850) {
            ctx->pc = 0x2DA89Cu;
            goto label_2da89c;
        }
    }
    ctx->pc = 0x2DA858u;
    // 0x2da858: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x2da858u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x2da85c: 0x2610b0e0  addiu       $s0, $s0, -0x4F20
    ctx->pc = 0x2da85cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947040));
    // 0x2da860: 0xc0b6cd4  jal         func_2DB350
    ctx->pc = 0x2DA860u;
    SET_GPR_U32(ctx, 31, 0x2DA868u);
    ctx->pc = 0x2DA864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA860u;
    // 0x2da864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB350u, 0x2DA860u, 0x2DA868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA868u;
label_2da868:
    // 0x2da868: 0x8e026394  lw          $v0, 0x6394($s0)
    ctx->pc = 0x2da868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 25492)));
    // 0x2da86c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA86Cu;
    {
        const bool branch_taken_0x2da86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da86c) {
            ctx->pc = 0x2DA870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA86Cu;
            // 0x2da870: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA884u;
            goto label_2da884;
        }
    }
    ctx->pc = 0x2DA874u;
    // 0x2da874: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2da874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2da878: 0xc0b6cd4  jal         func_2DB350
    ctx->pc = 0x2DA878u;
    SET_GPR_U32(ctx, 31, 0x2DA880u);
    ctx->pc = 0x2DA87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA878u;
    // 0x2da87c: 0x248414e0  addiu       $a0, $a0, 0x14E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB350u, 0x2DA878u, 0x2DA880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA880u;
label_2da880:
    // 0x2da880: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2da880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_2da884:
    // 0x2da884: 0xc0b6cd4  jal         func_2DB350
    ctx->pc = 0x2DA884u;
    SET_GPR_U32(ctx, 31, 0x2DA88Cu);
    ctx->pc = 0x2DA888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA884u;
    // 0x2da888: 0x248478e0  addiu       $a0, $a0, 0x78E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB350u, 0x2DA884u, 0x2DA88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA88Cu;
label_2da88c:
    // 0x2da88c: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x2da88cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x2da890: 0xc0b6cd4  jal         func_2DB350
    ctx->pc = 0x2DA890u;
    SET_GPR_U32(ctx, 31, 0x2DA898u);
    ctx->pc = 0x2DA894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA890u;
    // 0x2da894: 0x2484dce0  addiu       $a0, $a0, -0x2320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB350u, 0x2DA890u, 0x2DA898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA898u;
label_2da898:
    // 0x2da898: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2da898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2da89c:
    // 0x2da89c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2da89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2da8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA8A0u;
        // 0x2da8a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA8A8u;
}
