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

// Function: sub_003DC490
// Address: 0x3dc490 - 0x3dc500
void sub_003DC490_0x3dc490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC490_0x3dc490");
#endif

    switch (ctx->pc) {
        case 0x3dc4ccu: goto label_3dc4cc;
        default: break;
    }

    ctx->pc = 0x3dc490u;

    // 0x3dc490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dc490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3dc494: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3dc494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3dc498: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3dc498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3dc49c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dc49cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc4a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dc4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dc4a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3dc4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3dc4a8: 0x96220010  lhu         $v0, 0x10($s1)
    ctx->pc = 0x3dc4a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3dc4ac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3DC4ACu;
    {
        const bool branch_taken_0x3dc4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC4ACu;
        // 0x3dc4b0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc4ac) {
            ctx->pc = 0x3DC4E4u;
            goto label_3dc4e4;
        }
    }
    ctx->pc = 0x3DC4B4u;
    // 0x3dc4b4: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x3dc4b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x3dc4b8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3dc4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3dc4bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3dc4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3dc4c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3dc4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dc4c4: 0xc0f711a  jal         func_3DC468
    ctx->pc = 0x3DC4C4u;
    SET_GPR_U32(ctx, 31, 0x3DC4CCu);
    ctx->pc = 0x3DC4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC4C4u;
    // 0x3dc4c8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC468u, 0x3DC4C4u, 0x3DC4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC4CCu;
label_3dc4cc:
    // 0x3dc4cc: 0x96230010  lhu         $v1, 0x10($s1)
    ctx->pc = 0x3dc4ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3dc4d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3dc4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dc4d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3dc4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3dc4d8: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x3dc4d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x3dc4dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3DC4DCu;
    {
        const bool branch_taken_0x3dc4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC4DCu;
        // 0x3dc4e0: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc4dc) {
            ctx->pc = 0x3DC4E8u;
            goto label_3dc4e8;
        }
    }
    ctx->pc = 0x3DC4E4u;
label_3dc4e4:
    // 0x3dc4e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dc4e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dc4e8:
    // 0x3dc4e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dc4e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dc4ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3dc4ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dc4f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3dc4f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dc4f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3dc4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3dc4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC4F8u;
        // 0x3dc4fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC500u;
}
