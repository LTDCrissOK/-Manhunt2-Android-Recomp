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

// Function: sub_003E0450
// Address: 0x3e0450 - 0x3e04d0
void sub_003E0450_0x3e0450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0450_0x3e0450");
#endif

    switch (ctx->pc) {
        case 0x3e048cu: goto label_3e048c;
        case 0x3e04a0u: goto label_3e04a0;
        default: break;
    }

    ctx->pc = 0x3e0450u;

    // 0x3e0450: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e0450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e0454: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3e0454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3e0458: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3e0458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3e045c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e045cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0460: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3e0460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3e0464: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3e0464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3e0468: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3e0468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3e046c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3e046cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x3e0470: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3e0470u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x3e0474: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x3e0474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x3e0478: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x3e0478u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e047c: 0x8cb00004  lw          $s0, 0x4($a1)
    ctx->pc = 0x3e047cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3e0480: 0x2129823  subu        $s3, $s0, $s2
    ctx->pc = 0x3e0480u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x3e0484: 0xc0f80d8  jal         func_3E0360
    ctx->pc = 0x3E0484u;
    SET_GPR_U32(ctx, 31, 0x3E048Cu);
    ctx->pc = 0x3E0488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0484u;
    // 0x3e0488: 0x26650001  addiu       $a1, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0360u, 0x3E0484u, 0x3E048Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E048Cu;
label_3e048c:
    // 0x3e048c: 0x12120005  beq         $s0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E048Cu;
    {
        const bool branch_taken_0x3e048c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x3E0490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E048Cu;
        // 0x3e0490: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e048c) {
            ctx->pc = 0x3E04A4u;
            goto label_3e04a4;
        }
    }
    ctx->pc = 0x3E0494u;
    // 0x3e0494: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e0494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0498: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x3E0498u;
    SET_GPR_U32(ctx, 31, 0x3E04A0u);
    ctx->pc = 0x3E049Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0498u;
    // 0x3e049c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x3E0498u, 0x3E04A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E04A0u;
label_3e04a0:
    // 0x3e04a0: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x3e04a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_3e04a4:
    // 0x3e04a4: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x3e04a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x3e04a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3e04a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e04ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3e04acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e04b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3e04b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e04b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3e04b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e04b8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3e04b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e04bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3e04bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e04c0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3e04c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e04c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E04C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E04C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E04C4u;
        // 0x3e04c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E04C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E04CCu;
    // 0x3e04cc: 0x0  nop
    ctx->pc = 0x3e04ccu;
    // NOP
    ctx->pc = 0x3e04d0u;
}
