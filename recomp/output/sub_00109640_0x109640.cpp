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

// Function: sub_00109640
// Address: 0x109640 - 0x1096f0
void sub_00109640_0x109640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109640_0x109640");
#endif

    switch (ctx->pc) {
        case 0x109654u: goto label_109654;
        case 0x10967cu: goto label_10967c;
        case 0x109690u: goto label_109690;
        default: break;
    }

    ctx->pc = 0x109640u;

    // 0x109640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x109640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x109644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109648: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x109648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10964c: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10964Cu;
    SET_GPR_U32(ctx, 31, 0x109654u);
    ctx->pc = 0x109650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10964Cu;
    // 0x109650: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10964Cu, 0x109654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109654u;
label_109654:
    // 0x109654: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x109654u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109658: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x109658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10965c: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x10965Cu;
    {
        const bool branch_taken_0x10965c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x109660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10965Cu;
        // 0x109660: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10965c) {
            ctx->pc = 0x1096D8u;
            goto label_1096d8;
        }
    }
    ctx->pc = 0x109664u;
    // 0x109664: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x109664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x109668: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x109668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10966c: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x10966cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x109670: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x109670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x109674: 0xc047866  jal         func_11E198
    ctx->pc = 0x109674u;
    SET_GPR_U32(ctx, 31, 0x10967Cu);
    ctx->pc = 0x109678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109674u;
    // 0x109678: 0x8c65001c  lw          $a1, 0x1C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x109674u, 0x10967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10967Cu;
label_10967c:
    // 0x10967c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10967cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109680: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x109680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x109684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109688: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x109688u;
    SET_GPR_U32(ctx, 31, 0x109690u);
    ctx->pc = 0x10968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109688u;
    // 0x10968c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x109688u, 0x109690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109690u;
label_109690:
    // 0x109690: 0x8e020370  lw          $v0, 0x370($s0)
    ctx->pc = 0x109690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x109694: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x109694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x109698: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x109698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x10969c: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x10969cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1096a0: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1096a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1096a4: 0xae020370  sw          $v0, 0x370($s0)
    ctx->pc = 0x1096a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 2));
    // 0x1096a8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1096A8u;
    {
        const bool branch_taken_0x1096a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1096ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096A8u;
        // 0x1096ac: 0xae0300c0  sw          $v1, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1096a8) {
            ctx->pc = 0x1096D0u;
            goto label_1096d0;
        }
    }
    ctx->pc = 0x1096B0u;
    // 0x1096b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1096b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1096b4: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x1096b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x1096b8: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x1096b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1096bc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1096BCu;
    {
        const bool branch_taken_0x1096bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1096C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096BCu;
        // 0x1096c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1096bc) {
            ctx->pc = 0x1096E0u;
            goto label_1096e0;
        }
    }
    ctx->pc = 0x1096C4u;
    // 0x1096c4: 0x90820032  lbu         $v0, 0x32($a0)
    ctx->pc = 0x1096c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x1096c8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1096c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1096cc: 0xa0820032  sb          $v0, 0x32($a0)
    ctx->pc = 0x1096ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 2));
label_1096d0:
    // 0x1096d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1096D0u;
    {
        const bool branch_taken_0x1096d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1096D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096D0u;
        // 0x1096d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1096d0) {
            ctx->pc = 0x1096DCu;
            goto label_1096dc;
        }
    }
    ctx->pc = 0x1096D8u;
label_1096d8:
    // 0x1096d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1096d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1096dc:
    // 0x1096dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1096dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1096e0:
    // 0x1096e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1096e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1096e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1096E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1096E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096E4u;
        // 0x1096e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1096E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1096ECu;
    // 0x1096ec: 0x0  nop
    ctx->pc = 0x1096ecu;
    // NOP
    ctx->pc = 0x1096f0u;
}
