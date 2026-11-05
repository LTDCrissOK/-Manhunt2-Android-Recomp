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

// Function: sub_0011B718
// Address: 0x11b718 - 0x11b798
void sub_0011B718_0x11b718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B718_0x11b718");
#endif

    switch (ctx->pc) {
        case 0x11b768u: goto label_11b768;
        default: break;
    }

    ctx->pc = 0x11b718u;

    // 0x11b718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11b718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11b71c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11b71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11b720: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11b724: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11b724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11b728: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x11b728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11b72c: 0x8cc200bc  lw          $v0, 0xBC($a2)
    ctx->pc = 0x11b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
    // 0x11b730: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x11b730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x11b734: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x11b734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x11b738: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11B738u;
    {
        const bool branch_taken_0x11b738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B738u;
        // 0x11b73c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b738) {
            ctx->pc = 0x11B780u;
            goto label_11b780;
        }
    }
    ctx->pc = 0x11B740u;
    // 0x11b740: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x11b740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11b744: 0x24120009  addiu       $s2, $zero, 0x9
    ctx->pc = 0x11b744u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x11b748: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x11b748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11b74c: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x11b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x11b750: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x11b750u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x11b754: 0x5212000b  beql        $s0, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x11B754u;
    {
        const bool branch_taken_0x11b754 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x11b754) {
            ctx->pc = 0x11B758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B754u;
            // 0x11b758: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B784u;
            goto label_11b784;
        }
    }
    ctx->pc = 0x11B75Cu;
    // 0x11b75c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x11b75cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x11b760: 0xc04990a  jal         func_126428
    ctx->pc = 0x11B760u;
    SET_GPR_U32(ctx, 31, 0x11B768u);
    ctx->pc = 0x11B764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B760u;
    // 0x11b764: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126428u, 0x11B760u, 0x11B768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B768u;
label_11b768:
    // 0x11b768: 0x8e221240  lw          $v0, 0x1240($s1)
    ctx->pc = 0x11b768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4672)));
    // 0x11b76c: 0x10520003  beq         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B76Cu;
    {
        const bool branch_taken_0x11b76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x11B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B76Cu;
        // 0x11b770: 0x50102a  slt         $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b76c) {
            ctx->pc = 0x11B77Cu;
            goto label_11b77c;
        }
    }
    ctx->pc = 0x11B774u;
    // 0x11b774: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B774u;
    {
        const bool branch_taken_0x11b774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b774) {
            ctx->pc = 0x11B778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B774u;
            // 0x11b778: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B784u;
            goto label_11b784;
        }
    }
    ctx->pc = 0x11B77Cu;
label_11b77c:
    // 0x11b77c: 0xae301240  sw          $s0, 0x1240($s1)
    ctx->pc = 0x11b77cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4672), GPR_U32(ctx, 16));
label_11b780:
    // 0x11b780: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b784:
    // 0x11b784: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11b784u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b788: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11b788u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b78c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x11b78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11b790: 0x3e00008  jr          $ra
    ctx->pc = 0x11B790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B790u;
        // 0x11b794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B798u;
}
