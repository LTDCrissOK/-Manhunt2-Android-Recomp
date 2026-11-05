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

// Function: sub_001AB620
// Address: 0x1ab620 - 0x1ab700
void sub_001AB620_0x1ab620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB620_0x1ab620");
#endif

    switch (ctx->pc) {
        case 0x1ab640u: goto label_1ab640;
        case 0x1ab664u: goto label_1ab664;
        case 0x1ab678u: goto label_1ab678;
        case 0x1ab6ecu: goto label_1ab6ec;
        default: break;
    }

    ctx->pc = 0x1ab620u;

    // 0x1ab620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ab620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ab624: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ab624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ab628: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ab628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ab62c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab62cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab630: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ab630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ab634: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x1ab634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1ab638: 0xc06a4c0  jal         func_1A9300
    ctx->pc = 0x1AB638u;
    SET_GPR_U32(ctx, 31, 0x1AB640u);
    ctx->pc = 0x1AB63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB638u;
    // 0x1ab63c: 0x8c510110  lw          $s1, 0x110($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9300u, 0x1AB638u, 0x1AB640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB640u;
label_1ab640:
    // 0x1ab640: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x1ab640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x1ab644: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1AB644u;
    {
        const bool branch_taken_0x1ab644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB644u;
        // 0x1ab648: 0x8e0301e4  lw          $v1, 0x1E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab644) {
            ctx->pc = 0x1AB6D0u;
            goto label_1ab6d0;
        }
    }
    ctx->pc = 0x1AB64Cu;
    // 0x1ab64c: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1ab64cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1ab650: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ab650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ab654: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB654u;
    {
        const bool branch_taken_0x1ab654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab654) {
            ctx->pc = 0x1AB658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB654u;
            // 0x1ab658: 0x8e0501e4  lw          $a1, 0x1E4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB67Cu;
            goto label_1ab67c;
        }
    }
    ctx->pc = 0x1AB65Cu;
    // 0x1ab65c: 0xc075774  jal         func_1D5DD0
    ctx->pc = 0x1AB65Cu;
    SET_GPR_U32(ctx, 31, 0x1AB664u);
    ctx->pc = 0x1AB660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB65Cu;
    // 0x1ab660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5DD0u, 0x1AB65Cu, 0x1AB664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB664u;
label_1ab664:
    // 0x1ab664: 0x8e0501e4  lw          $a1, 0x1E4($s0)
    ctx->pc = 0x1ab664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1ab668: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ab668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ab66c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ab66cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ab670: 0xc07574a  jal         func_1D5D28
    ctx->pc = 0x1AB670u;
    SET_GPR_U32(ctx, 31, 0x1AB678u);
    ctx->pc = 0x1AB674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB670u;
    // 0x1ab674: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D28u, 0x1AB670u, 0x1AB678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB678u;
label_1ab678:
    // 0x1ab678: 0x8e0501e4  lw          $a1, 0x1E4($s0)
    ctx->pc = 0x1ab678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
label_1ab67c:
    // 0x1ab67c: 0x94a3002a  lhu         $v1, 0x2A($a1)
    ctx->pc = 0x1ab67cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x1ab680: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1ab680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1ab684: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB684u;
    {
        const bool branch_taken_0x1ab684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB684u;
        // 0x1ab688: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab684) {
            ctx->pc = 0x1AB69Cu;
            goto label_1ab69c;
        }
    }
    ctx->pc = 0x1AB68Cu;
    // 0x1ab68c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1ab68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1ab690: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1AB690u;
    {
        const bool branch_taken_0x1ab690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab690) {
            ctx->pc = 0x1AB694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB690u;
            // 0x1ab694: 0x8e020160  lw          $v0, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB6C4u;
            goto label_1ab6c4;
        }
    }
    ctx->pc = 0x1AB698u;
    // 0x1ab698: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab69c:
    // 0x1ab69c: 0x8e04014c  lw          $a0, 0x14C($s0)
    ctx->pc = 0x1ab69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x1ab6a0: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1ab6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1ab6a4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AB6A4u;
    {
        const bool branch_taken_0x1ab6a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AB6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB6A4u;
        // 0x1ab6a8: 0xae020160  sw          $v0, 0x160($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab6a4) {
            ctx->pc = 0x1AB6C0u;
            goto label_1ab6c0;
        }
    }
    ctx->pc = 0x1AB6ACu;
    // 0x1ab6ac: 0x94a3002a  lhu         $v1, 0x2A($a1)
    ctx->pc = 0x1ab6acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x1ab6b0: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1ab6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1ab6b4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AB6B4u;
    {
        const bool branch_taken_0x1ab6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB6B4u;
        // 0x1ab6b8: 0x3062fffb  andi        $v0, $v1, 0xFFFB (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65531);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab6b4) {
            ctx->pc = 0x1AB6C0u;
            goto label_1ab6c0;
        }
    }
    ctx->pc = 0x1AB6BCu;
    // 0x1ab6bc: 0xa4a2002a  sh          $v0, 0x2A($a1)
    ctx->pc = 0x1ab6bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 42), (uint16_t)GPR_U32(ctx, 2));
label_1ab6c0:
    // 0x1ab6c0: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x1ab6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_1ab6c4:
    // 0x1ab6c4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1AB6C4u;
    {
        const bool branch_taken_0x1ab6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab6c4) {
            ctx->pc = 0x1AB6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB6C4u;
            // 0x1ab6c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB6F0u;
            goto label_1ab6f0;
        }
    }
    ctx->pc = 0x1AB6CCu;
    // 0x1ab6cc: 0x8e0301e4  lw          $v1, 0x1E4($s0)
    ctx->pc = 0x1ab6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
label_1ab6d0:
    // 0x1ab6d0: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1ab6d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1ab6d4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ab6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ab6d8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB6D8u;
    {
        const bool branch_taken_0x1ab6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab6d8) {
            ctx->pc = 0x1AB6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB6D8u;
            // 0x1ab6dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB6F0u;
            goto label_1ab6f0;
        }
    }
    ctx->pc = 0x1AB6E0u;
    // 0x1ab6e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab6e4: 0xc069b56  jal         func_1A6D58
    ctx->pc = 0x1AB6E4u;
    SET_GPR_U32(ctx, 31, 0x1AB6ECu);
    ctx->pc = 0x1AB6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB6E4u;
    // 0x1ab6e8: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6D58u, 0x1AB6E4u, 0x1AB6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB6ECu;
label_1ab6ec:
    // 0x1ab6ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab6ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab6f0:
    // 0x1ab6f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ab6f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab6f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ab6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB6F8u;
        // 0x1ab6fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB700u;
}
