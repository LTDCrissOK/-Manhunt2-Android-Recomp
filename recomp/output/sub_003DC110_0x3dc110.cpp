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

// Function: sub_003DC110
// Address: 0x3dc110 - 0x3dc180
void sub_003DC110_0x3dc110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC110_0x3dc110");
#endif

    switch (ctx->pc) {
        case 0x3dc14cu: goto label_3dc14c;
        default: break;
    }

    ctx->pc = 0x3dc110u;

    // 0x3dc110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dc110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3dc114: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3dc114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3dc118: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3dc118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3dc11c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dc11cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc120: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dc120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dc124: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3dc124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3dc128: 0x96220010  lhu         $v0, 0x10($s1)
    ctx->pc = 0x3dc128u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3dc12c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3DC12Cu;
    {
        const bool branch_taken_0x3dc12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC12Cu;
        // 0x3dc130: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc12c) {
            ctx->pc = 0x3DC164u;
            goto label_3dc164;
        }
    }
    ctx->pc = 0x3DC134u;
    // 0x3dc134: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x3dc134u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x3dc138: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3dc138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3dc13c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3dc13cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3dc140: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3dc140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dc144: 0xc0f703a  jal         func_3DC0E8
    ctx->pc = 0x3DC144u;
    SET_GPR_U32(ctx, 31, 0x3DC14Cu);
    ctx->pc = 0x3DC148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC144u;
    // 0x3dc148: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC0E8u, 0x3DC144u, 0x3DC14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC14Cu;
label_3dc14c:
    // 0x3dc14c: 0x96230010  lhu         $v1, 0x10($s1)
    ctx->pc = 0x3dc14cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3dc150: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3dc150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dc154: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3dc154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3dc158: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x3dc158u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x3dc15c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3DC15Cu;
    {
        const bool branch_taken_0x3dc15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC15Cu;
        // 0x3dc160: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc15c) {
            ctx->pc = 0x3DC168u;
            goto label_3dc168;
        }
    }
    ctx->pc = 0x3DC164u;
label_3dc164:
    // 0x3dc164: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dc164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dc168:
    // 0x3dc168: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dc168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dc16c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3dc16cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dc170: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3dc170u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dc174: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3dc174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3dc178: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC178u;
        // 0x3dc17c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC180u;
}
