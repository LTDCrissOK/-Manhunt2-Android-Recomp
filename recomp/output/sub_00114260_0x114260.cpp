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

// Function: sub_00114260
// Address: 0x114260 - 0x1142c0
void sub_00114260_0x114260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114260_0x114260");
#endif

    switch (ctx->pc) {
        case 0x11427cu: goto label_11427c;
        default: break;
    }

    ctx->pc = 0x114260u;

    // 0x114260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x114260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x114264: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x114264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x114268: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x114268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11426c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11426cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114270: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x114270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x114274: 0xc0450e6  jal         func_114398
    ctx->pc = 0x114274u;
    SET_GPR_U32(ctx, 31, 0x11427Cu);
    ctx->pc = 0x114278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114274u;
    // 0x114278: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114398u, 0x114274u, 0x11427Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11427Cu;
label_11427c:
    // 0x11427c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x11427Cu;
    {
        const bool branch_taken_0x11427c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11427c) {
            ctx->pc = 0x114280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11427Cu;
            // 0x114280: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1142B0u;
            goto label_1142b0;
        }
    }
    ctx->pc = 0x114284u;
    // 0x114284: 0x920301b4  lbu         $v1, 0x1B4($s0)
    ctx->pc = 0x114284u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x114288: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x114288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11428c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11428Cu;
    {
        const bool branch_taken_0x11428c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x114290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11428Cu;
        // 0x114290: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11428c) {
            ctx->pc = 0x1142ACu;
            goto label_1142ac;
        }
    }
    ctx->pc = 0x114294u;
    // 0x114294: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x114294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x114298: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x114298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11429c: 0xac510154  sw          $s1, 0x154($v0)
    ctx->pc = 0x11429cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 17));
    // 0x1142a0: 0x920301b4  lbu         $v1, 0x1B4($s0)
    ctx->pc = 0x1142a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1142a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1142a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1142a8: 0xa20301b4  sb          $v1, 0x1B4($s0)
    ctx->pc = 0x1142a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 436), (uint8_t)GPR_U32(ctx, 3));
label_1142ac:
    // 0x1142ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1142acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1142b0:
    // 0x1142b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1142b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1142b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1142b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1142b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1142B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1142BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142B8u;
        // 0x1142bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1142B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1142C0u;
}
