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

// Function: sub_00365378
// Address: 0x365378 - 0x365438
void sub_00365378_0x365378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365378_0x365378");
#endif

    switch (ctx->pc) {
        case 0x3653bcu: goto label_3653bc;
        default: break;
    }

    ctx->pc = 0x365378u;

    // 0x365378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x365378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36537c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36537cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x365380: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x365380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x365384: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x365384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365388: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x365388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36538c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36538cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365390: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x365390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x365394: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x365394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x365398: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x365398u;
    {
        const bool branch_taken_0x365398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365398u;
        // 0x36539c: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365398) {
            ctx->pc = 0x3653A8u;
            goto label_3653a8;
        }
    }
    ctx->pc = 0x3653A0u;
    // 0x3653a0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3653A0u;
    {
        const bool branch_taken_0x3653a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3653A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3653A0u;
        // 0x3653a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3653a0) {
            ctx->pc = 0x36541Cu;
            goto label_36541c;
        }
    }
    ctx->pc = 0x3653A8u;
label_3653a8:
    // 0x3653a8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3653a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3653ac: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3653ACu;
    {
        const bool branch_taken_0x3653ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3653ac) {
            ctx->pc = 0x3653B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3653ACu;
            // 0x3653b0: 0x8e42006c  lw          $v0, 0x6C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3653C0u;
            goto label_3653c0;
        }
    }
    ctx->pc = 0x3653B4u;
    // 0x3653b4: 0xc0cda26  jal         func_336898
    ctx->pc = 0x3653B4u;
    SET_GPR_U32(ctx, 31, 0x3653BCu);
    ctx->pc = 0x3653B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3653B4u;
    // 0x3653b8: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x3653B4u, 0x3653BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3653BCu;
label_3653bc:
    // 0x3653bc: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x3653bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_3653c0:
    // 0x3653c0: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x3653c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x3653c4: 0x1a200003  blez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3653C4u;
    {
        const bool branch_taken_0x3653c4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3653C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3653C4u;
        // 0x3653c8: 0x441823  subu        $v1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3653c4) {
            ctx->pc = 0x3653D4u;
            goto label_3653d4;
        }
    }
    ctx->pc = 0x3653CCu;
    // 0x3653cc: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x3653ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3653d0: 0x222180a  movz        $v1, $s1, $v0
    ctx->pc = 0x3653d0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
label_3653d4:
    // 0x3653d4: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x3653d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3653d8: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x3653d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3653dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3653DCu;
    {
        const bool branch_taken_0x3653dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3653E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3653DCu;
        // 0x3653e0: 0x831021  addu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3653dc) {
            ctx->pc = 0x3653F4u;
            goto label_3653f4;
        }
    }
    ctx->pc = 0x3653E4u;
    // 0x3653e4: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x3653e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3653e8: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x3653e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x3653ec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3653ECu;
    {
        const bool branch_taken_0x3653ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3653F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3653ECu;
        // 0x3653f0: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3653ec) {
            ctx->pc = 0x365418u;
            goto label_365418;
        }
    }
    ctx->pc = 0x3653F4u;
label_3653f4:
    // 0x3653f4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3653f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3653f8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3653F8u;
    {
        const bool branch_taken_0x3653f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3653FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3653F8u;
        // 0x3653fc: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3653f8) {
            ctx->pc = 0x365418u;
            goto label_365418;
        }
    }
    ctx->pc = 0x365400u;
    // 0x365400: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x365400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x365404: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x365404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x365408: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x365408u;
    {
        const bool branch_taken_0x365408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365408u;
        // 0x36540c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365408) {
            ctx->pc = 0x36541Cu;
            goto label_36541c;
        }
    }
    ctx->pc = 0x365410u;
    // 0x365410: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x365410u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x365414: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x365414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_365418:
    // 0x365418: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x365418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36541c:
    // 0x36541c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36541cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365420: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x365420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x365424: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x365424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365428: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x365428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36542c: 0x3e00008  jr          $ra
    ctx->pc = 0x36542Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36542Cu;
        // 0x365430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36542Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365434u;
    // 0x365434: 0x0  nop
    ctx->pc = 0x365434u;
    // NOP
    ctx->pc = 0x365438u;
}
