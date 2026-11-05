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

// Function: sub_001A55F0
// Address: 0x1a55f0 - 0x1a5678
void sub_001A55F0_0x1a55f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A55F0_0x1a55f0");
#endif

    switch (ctx->pc) {
        case 0x1a5618u: goto label_1a5618;
        case 0x1a5630u: goto label_1a5630;
        case 0x1a5644u: goto label_1a5644;
        case 0x1a5664u: goto label_1a5664;
        default: break;
    }

    ctx->pc = 0x1a55f0u;

    // 0x1a55f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a55f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a55f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a55f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a55f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a55f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a55fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a55fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5600: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a5600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a5604: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a5604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5608: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a5608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a560c: 0x8e040ff8  lw          $a0, 0xFF8($s0)
    ctx->pc = 0x1a560cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
    // 0x1a5610: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x1A5610u;
    SET_GPR_U32(ctx, 31, 0x1A5618u);
    ctx->pc = 0x1A5614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5610u;
    // 0x1a5614: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x1A5610u, 0x1A5618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5618u;
label_1a5618:
    // 0x1a5618: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A5618u;
    {
        const bool branch_taken_0x1a5618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5618) {
            ctx->pc = 0x1A561Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5618u;
            // 0x1a561c: 0x8e040ff8  lw          $a0, 0xFF8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5638u;
            goto label_1a5638;
        }
    }
    ctx->pc = 0x1A5620u;
    // 0x1a5620: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x1a5620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1a5624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5628: 0xc095078  jal         func_2541E0
    ctx->pc = 0x1A5628u;
    SET_GPR_U32(ctx, 31, 0x1A5630u);
    ctx->pc = 0x1A562Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5628u;
    // 0x1a562c: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2541E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2541E0u, 0x1A5628u, 0x1A5630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5630u;
label_1a5630:
    // 0x1a5630: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A5630u;
    {
        const bool branch_taken_0x1a5630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5630u;
        // 0x1a5634: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5630) {
            ctx->pc = 0x1A5668u;
            goto label_1a5668;
        }
    }
    ctx->pc = 0x1A5638u;
label_1a5638:
    // 0x1a5638: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a5638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a563c: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x1A563Cu;
    SET_GPR_U32(ctx, 31, 0x1A5644u);
    ctx->pc = 0x1A5640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A563Cu;
    // 0x1a5640: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x1A563Cu, 0x1A5644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5644u;
label_1a5644:
    // 0x1a5644: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A5644u;
    {
        const bool branch_taken_0x1a5644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5644u;
        // 0x1a5648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5644) {
            ctx->pc = 0x1A5664u;
            goto label_1a5664;
        }
    }
    ctx->pc = 0x1A564Cu;
    // 0x1a564c: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x1a564cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1a5650: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1a5650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x1a5654: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a5654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a5658: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x1a5658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1a565c: 0xc09508e  jal         func_254238
    ctx->pc = 0x1A565Cu;
    SET_GPR_U32(ctx, 31, 0x1A5664u);
    ctx->pc = 0x1A5660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A565Cu;
    // 0x1a5660: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254238u, 0x1A565Cu, 0x1A5664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5664u;
label_1a5664:
    // 0x1a5664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5668:
    // 0x1a5668: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a5668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a566c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a566cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5670: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5670u;
        // 0x1a5674: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5678u;
}
